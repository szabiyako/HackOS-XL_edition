#include "Globals.h"

/*Check pressing button
return 1 - if pressed
return 0 - if not*/
bool keydown(int key)
{
	return (GetAsyncKeyState(key) & 0x8000) != 0;
}

/*Show cursor
input true - show
input false - hide*/
BOOL ShowConsoleCursor(BOOL bShow)
{
	CONSOLE_CURSOR_INFO cci;
	HANDLE hStdOut;
	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hStdOut == INVALID_HANDLE_VALUE)
		return FALSE;
	if (!GetConsoleCursorInfo(hStdOut, &cci))
		return FALSE;
	cci.bVisible = bShow;
	if (!SetConsoleCursorInfo(hStdOut, &cci))
		return FALSE;
	return TRUE;
}

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
int Color(string c)
{
	enum ConsoleColor
	{
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
		green
	};
	if (c == "black")
	{
		HANDLE hStdOut0 = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut0, (WORD)black);
		return black;
	}
	else if (c == "dark_blue")
	{
		HANDLE hStdOut1 = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut1, (WORD)dark_blue);
		return dark_blue;
	}
	else if (c == "dark_green")
	{
		HANDLE hStdOut2 = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut2, (WORD)dark_green);
		return dark_green;
	}
	else if (c == "cyan")
	{
		HANDLE hStdOut3 = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut3, (WORD)cyan);
		return cyan;
	}
	else if (c == "dark_red")
	{
		HANDLE hStdOut4 = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut4, (WORD)dark_red);
		return dark_red;
	}
	else if (c == "purple")
	{
		HANDLE hStdOut5 = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut5, (WORD)purple);
		return purple;
	}
	else if (c == "dark_yellow")
	{
		HANDLE hStdOut6 = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut6, (WORD)dark_yellow);
		return dark_yellow;
	}
	else if (c == "white")
	{
		HANDLE hStdOut7 = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut7, (WORD)white);
		return white;
	}
	else if (c == "grey")
	{
		HANDLE hStdOut8 = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut8, (WORD)grey);
		return grey;
	}
	else if (c == "blue")
	{
		HANDLE hStdOut9 = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut9, (WORD)blue);
		return blue;
	}
	else if (c == "green")
	{
		HANDLE hStdOut10 = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut10, (WORD)green);
		return green;
	}
	else
		cerr << endl << "ERROR:WRONG COLOR INPUT!";
	return white;

	//test
	if (c == "test")
	{
		HANDLE hStdOut6 = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut6, 3);
	}
}

/*Set cursor position X, Y*/
void SetCursor(int x, int y)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position;
	position.X = x;
	position.Y = y;
	SetConsoleCursorPosition(hConsole, position);
}