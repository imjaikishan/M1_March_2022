#include "03_Implementation/inc/headers.h"
#include "03_Implementation/inc/getdata.h"
void returnfunc(void);
//! Funtion to Print the main menu of our program
void mainmenu(void);
//! After the password is confirmed it will proceed to let you addstaff
void addstaff(void);

void deletestaff(void);
void editstaff(void);
void searchstaff(void);
void viewstaff(void);
void closeapplication(void);
int  getdata();
int  checkid(int);
int t(void);
void Password();
void issuerecord();
void loaderanim();
FILE *fp,*ft,*fs;
int s;
char findstaff;
char password[10]={"pass"};
//! Main function starts
int main()

{
//! Calling the funtion to check the password
Password();

getch();

return 0;



}
/**
 * @brief menu interface for users
 *
 */
void mainmenu()

{

system("cls");

int i;

printf(" \t\tMAIN MENU \n ");

printf("\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");



printf("\n<1> Add Members ");
printf("\n<2> Remove Members\n");

printf("<3> Search Members\n");

printf("<4> View Member's list\n");

printf("<5> Edit Members Record\n");

printf("<6> Close Application\n");

t();


printf("Enter your choice:\n");


//! Switch cases for the menu
switch(getch())

{

case '1':
//! Adding staff after switch case 1 is pressed
addstaff();

break;

case '2':
//! Deleting staff after switch case 2 is pressed
deletestaff();

break;

case '3':
//! Search staff function after switch case 3 is pressed
searchstaff();

break;

case '4':
//! Viewing your data after switch case 4 is pressed
viewstaff();

break;

case '5':

editstaff();

break;

case '6':

{
//! Displaying the message after you exit the program
system("cls");

printf("\tGYM Management System");

printf("\n\tProject in C");

printf("\n\tis brought to you by");

printf("\n\tJaiKishan_LTTS_StepIN_Program");




exit(0);

}

default:

{


printf("\aWrong Entry!!Please re-entered correct option");

if(getch())

mainmenu();

}



}

}
//! Adding options in the addstaff function
void addstaff(void)

{

system("cls");

int i;

printf("SELECT CATEGORIES\n");

printf("<1> New Member\n");

printf("<2> Coach\n");

printf("<3> Staff\n");
printf("<4> Back to main menu\n");



printf("\nEnter your choice:");

scanf("%d",&s);

if(s==4)



mainmenu() ;

system("cls");

fp=fopen("stf.dat","ab+");

if(getdata()==1)

{

a.cat=catagories[s-1];

fseek(fp,0,SEEK_END);

fwrite(&a,sizeof(a),1,fp);

fclose(fp);

printf("The record is sucessfully saved\n");

printf("Save any more?(Y / N):\n");

if(getch()=='n')

mainmenu();

else

system("cls");

addstaff();

}

}
/**
 * @brief deleting the staff option
 *
 */
void deletestaff()

{

system("cls");

int d;

char another='y';

while(another=='y')

{

system("cls");

printf("Enter the ID to  remove:\n");

scanf("%d",&d);

fp=fopen("stf.dat","rb+");

rewind(fp);

while(fread(&a,sizeof(a),1,fp)==1)

{

if(a.id==d)

{

printf("The record is available\n");

printf("Name is %s",a.name);

findstaff='t';

}

}

if(findstaff!='t')

{

printf("No record is found modify the search\n");

if(getch())

mainmenu();

}

if(findstaff=='t' )

{

printf("Do you want to delete it?(Y/N):\n");

if(getch()=='y')

{
ft=fopen("test.dat","wb+");

rewind(fp);

while(fread(&a,sizeof(a),1,fp)==1)

{

if(a.id!=d)

{

fseek(ft,0,SEEK_CUR);

fwrite(&a,sizeof(a),1,ft);

}

}

fclose(ft);

fclose(fp);

remove("stf.dat");

rename("test.dat","stf.dat");

fp=fopen("stf.dat","rb+");

if(findstaff=='t')

{

printf("The record is sucessfully deleted\n");

printf("\n\tDelete another record?(Y/N)");

}

}

else

mainmenu();

fflush(stdin);

another=getch();

}

}

mainmenu();

}

void searchstaff()

{

system("cls");

int d;

printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdbSearch Member\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");

printf("\n1. Search By ID\n");

printf("2. Search By Name\n");

printf("Enter Your Choice\n");

fp=fopen("stf.dat","rb+");

rewind(fp);

switch(getch())

{

case '1':

{

system("cls");

printf("\n\xdb\xdb\xdb\xdb\xdb\xdbSearch By Id\xdb\xdb\xdb\xdb\xdb\xdb");
printf("\nEnter the id:\n");
scanf("%d",&d);

while(fread(&a,sizeof(a),1,fp)==1)

{

if(a.id==d)

{

Sleep(2);
printf("\nThe Record is available\n");

printf("\nID:%d",a.id);

printf("\nCategory:%s",a.cat);
printf("\nName:%s",a.name);

printf("\nAddress:%s ",a.Address);

printf("\nContact:%i ",a.contact);

printf("\nMember Since:%s",a.membersince);

findstaff='t';

}



}

if(findstaff!='t')

{

printf("\aNo Record Found");

}

printf("\nTry another search?(Y/N)");

if(getch()=='y')

searchstaff();

else

mainmenu();

break;

}

case '2':

{

char s[15];

system("cls");

printf("\n\xdb\xdb\xdb\xdb\xdb\xdbSearch Record By Name\xdb\xdb\xdb\xdb\xdb\xdb");

printf("\nEnter the Name:");

scanf("%s",s);

int d=0;

while(fread(&a,sizeof(a),1,fp)==1)

{

if(strcmp(a.name,(s))==0)

{

	printf("\nID:%d",a.id);



	printf("\nName:%s",a.name);



	printf("\nAddress:%s",a.Address);



	printf("\nContact:%i",a.contact);



	printf("\nMember Since:%s",a.membersince);



	getch();

}



}

if(d==0)



printf("\aNo Record Found");



printf("\nTry another search?(Y/N)");

if(getch()=='y')

	searchstaff();

else

	mainmenu();

break;

}

default :

getch();

searchstaff();

}

fclose(fp);

}

void viewstaff(void)

{

int i=0,j;

system("cls");

printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdbMember List\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");


printf("\n CATEGORY === ID ==== NAME ======== ADDRESS ===== CONTACT ===== MEMBER SINCE ");


j=4;

fp=fopen("stf.dat","rb");

while(fread(&a,sizeof(a),1,fp)==1)

{

printf("%s",a.cat);

printf("%d",a.id);


printf("%s",a.name);


printf("%s",a.Address);

printf("%i",a.contact);

printf("%s",a.membersince);

printf("\n\n");

j++;

}

fclose(fp);
returnfunc();

}

void editstaff(void)

{

system("cls");

int c=0;

int d,e;

printf("\nEdit Member's Record");

char another='y';

while(another=='y')

{

system("cls");

printf("\nEnter Id to be edited:");

scanf("%d",&d);

fp=fopen("stf.dat","rb+");

while(fread(&a,sizeof(a),1,fp)==1)

{

if(checkid(d)==0)

{

printf("\nThis Member is available");

printf("\nThe ID:%d",a.id);

printf("Enter new name:\n");

scanf("%s",a.name);

printf("Enter new Address:\n");

scanf("%s",a.Address);

printf("Enter new Contact:\n");

scanf("%i",&a.contact);

printf("Enter New Membership date:\n");

scanf("%s",a.membersince);

printf("\nThe record is modified");

fseek(fp,ftell(fp)-sizeof(a),0);

fwrite(&a,sizeof(a),1,fp);

fclose(fp);

c=1;

}

if(c==0)

{

printf("\nNo record found");

}

}

printf("\nModify another Record?(Y/N)");

fflush(stdin);

another=getch() ;

}

returnfunc();

}

void returnfunc(void)

{

{
printf("\nPress ENTER to return to main menu");

}

a:

if(getch()==13)

mainmenu();

else

goto a;

}
int checkid(int t)

{

rewind(fp);

while(fread(&a,sizeof(a),1,fp)==1)

if(a.id==t)

return 0;

return 1;

}

int t(void)

{

time_t t;

time(&t);

printf("\nDate and time:%s\n",ctime(&t));



return 0 ;

}



void Password(void)

{



system("cls");

char d[25]="Password Protected";

char ch,pass[10];

int i=0,j;





	printf("\t\t\t\tWELCOME\n\t\t\t\t  To \n\t\t   \xdb\xdb\xdb\xdb\xdb\xdb GYM Management System \xdb\xdb\xdb\xdb\xdb\xdb\n");

	printf("\t \n\n\n Enter Password:");



while(ch!=13)

{

ch=getch();



if(ch!=13 && ch!=8){

putch('*');

pass[i] = ch;

i++;

}

}

pass[i] = '\0';

if(strcmp(pass,password)==0)

{

printf("\n\n\n\t\tPassword matched!!");

printf("\n\n\tPress any key to countinue.....");

getch();

mainmenu();

}

else

{

printf("\n\n\n\t\t\aWarning!! \n\t   Incorrect Password");

getch();

Password();

}

}
