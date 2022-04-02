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
#include<stdio.h>
#include<windows.h>
#include<conio.h>
int getdata()

{

int t;

gotoxy(20,3);

printf("Enter the Information Below");

gotoxy(20,4);

printf("Category:");

gotoxy(31,5);

printf("%s",catagories[s-1]);

gotoxy(21,6);

printf("ID:\t");

gotoxy(30,6);

scanf("%d",&t);

if(checkid(t) == 0)

{

gotoxy(21,13);

printf("\aThe id already exists\a");

getch();

mainmenu();

return 0;

}

a.id=t;

gotoxy(21,7);

printf("Name:");

gotoxy(33,7);

scanf("%s",a.name);

gotoxy(21,8);

printf("Address:");

gotoxy(30,8);

scanf("%s",a.Address);

gotoxy(21,9);

printf("Contact:");

gotoxy(31,9);

scanf("%i",&a.contact);

gotoxy(21,10);

printf("Member Since:");

scanf("%s",a.membersince);

gotoxy(31,17);

return 1;

}
