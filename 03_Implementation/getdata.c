/**
 * @file getdata.c
 * @author Jai Kishan
 * @brief
 * @version 0.1
 * @date 2022-04-02
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "getdata.h"
#include "headers.h"


/**
 * @brief getting data from the user 
 *
 * @return int
 */
int getdata()

{

int t;

printf("Enter the Information Below");

printf("Category:");


printf("%s",catagories[s-1]);



printf("ID:\t");

scanf("%d",&t);

if(checkid(t) == 0)

{



printf("\aThe id already exists\a");

getch();

mainmenu();

return 0;

}

a.id=t;



printf("Name:");


scanf("%s",a.name);

printf("Address:");


scanf("%s",a.Address);

printf("Contact:");

scanf("%i",&a.contact);

printf("Member Since:");

scanf("%s",a.membersince);
return 1;

}
