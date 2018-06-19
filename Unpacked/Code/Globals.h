#ifndef GLOBALS_H
#define GLOBALS_H

#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>
#include <string>
#include <ctime>
#include <conio.h>

#define tic 100

using namespace std;

/*Version OS*/
const string veros = "0.2a";
/*Version OS*/

/*Check pressing button
return 1 - if pressed
return 0 - if not*/
bool keydown(int);

/*Show cursor
input true - show
input false - hide*/
BOOL ShowConsoleCursor(BOOL);

/*Set char color:
black,
dark_blue,
dark_green,
cyan,
dark_red,
purple,
dark_yellow,
white,
grey,
blue,
green*/
int Color(string);

/*Set cursor position X, Y*/
void SetCursor(int, int);

#endif