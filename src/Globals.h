/*
888    888                   888       .d88888b.   .d8888b.       Y88b   d88P 888
888    888                   888      d88P" "Y88b d88P  Y88b       Y88b d88P  888
888    888                   888      888     888 Y88b.             Y88o88P   888
8888888888  8888b.   .d8888b 888  888 888     888  "Y888b.           Y888P    888
888    888     "88b d88P"    888 .88P 888     888     "Y88b.         d888b    888
888    888 .d888888 888      888888K  888     888       "888 888888 d88888b   888
888    888 888  888 Y88b.    888 "88b Y88b. .d88P Y88b  d88P       d88P Y88b  888
888    888 "Y888888  "Y8888P 888  888  "Y88888P"   "Y8888P"       d88P   Y88b 88888888

ascii Colossal
http://patorjk.com/software/taag/#p=display&f=Colossal&t=HackOS-XL
*/

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
//#include <sstream>

#define tic 100

using namespace std;

/*Version OS*/
const string veros = "0.3a";
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

#endif