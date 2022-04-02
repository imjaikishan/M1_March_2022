/**
 * @file getdata.h
 * @author Jai Kishan
 *  * @brief
 * @version 0.1
 * @date 2022-04-02
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "windows.h"
#ifndef GETDATA_H
#define GETDATA_H

/* Macros */
#define RETURNTIME 15

/*Forward declaration*/
char catagories[][15]={"New Member","Coach","Staff"};
int getdata();
COORD coord = {0, 0};
void gotoxy (int x, int y)

{

coord.X = x; coord.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
int s;
struct meroDate

{

int mm,dd,yy;

};
struct staff

{

int id;

char stname[20];

char name[20];

char Address[20];

char membersince[10];

int contact;

int count;

char *cat;

struct meroDate issued;

struct meroDate duedate;

};

struct staff a;
#endif
