#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "Globals.h"
#include "FileSystem.h"

/*Checking for files
return 0 - Error
return 1 - Done
return 2 - loadimage.data Error (Done)*/
int checkFiles();

/*LoadScreen
input 1 - from loadimage.data
input 2 - default*/
void bootSystem(int&);

/*Shutdown screen
input 1 - standart shutdown
input 0 - without chose
input -1 - emergency shutdown
return true - shutdown
return false - cancel*/
bool shutdownSystem(int);

/*Print Cursor*/
void cursor(vector <FileSystem>&, int);

/*Console functon*/
void console(vector <FileSystem>&, int, int);

/*Return input to console*/
string inputConsole();

/*Commands function
input - inputConsole()
-doing commands
return -1 - exit
return 0 - endl
return 1 - no endl*/
int command(string);

#endif
