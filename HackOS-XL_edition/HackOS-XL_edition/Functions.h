#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "Globals.h"
#include "FileSystem.h"

/*Checking for files
return 0 - Error
return 1 - Done
return 2 - loadimage Error (Done)*/
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
void cursor(vector <FileSystem>&, int, int);

/*Console functon*/
void console(vector <FileSystem>&, int, int);

/*Return input to console
(Remove free spaces from left and right)*/
string inputConsole(istream&);

/*Remove free spaces from left and right*/
string inputCutSpaces(string);

/*Commands function
input - inputConsole()
-doing commands
return -1 - exit
return 0 - endl
return 1 - no_endl*/
int command(string);

/*Same, but has more features*/
/*Commands function
input - inputConsole()
-doing commands
return -1 - exit
return 0 - endl
return 1 - no_endl*/
int command(string, vector <FileSystem>&, int, int);

#endif
