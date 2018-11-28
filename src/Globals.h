#ifndef GLOBALS_H
#define GLOBALS_H

#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>
#include <string>
#include <tchar.h>
#include <ctime>
#include <conio.h>
#include <cassert>
//#include <sstream>

#define tic 100

using namespace std;

/*Version OS*/
const string veros = "0.4.2a";
const unsigned int License_code = 203233;
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

/*Get cursor coords
Coord = 'X' or 'Y'*/
int GetCursor(char Coord);

/*Return random number from 1,
to input*/
unsigned short int random(unsigned short int);

/*Selectable menu, from vector <string>
on position on screen int, int,
unsigned short int - already selected
return -1 - Escape
return int - index vector <sting>*/
int ChooseVertical(vector <string>, int, int, unsigned short int, bool);

/*Selectable menu, from vector <string>
on position on screen int, int,
unsigned short int - already selected
return int - index vector <sting>*/
int ChooseVerticalNoEscape(vector <string>, int, int, unsigned short int, bool);

/*Render already selected ChooseVerical(...)
if last int = -1 No selected*/
void ChooseVerticalRender(vector <string>, int, int, int);

#endif