#include "Functions.h"

/*Checking for files
return 0 - Error
return 1 - Done
return 2 - loadimage Error (Done)*/
int checkFiles()
{
	clog << "Checking system files:" << endl;
	clog << "----------------------" << endl;
	Sleep(tic * 1);
	ifstream check("system.data");
	//system.data
	if (!check.is_open())
	{
		clog << "   system.data - ERROR" << endl;
		Sleep(tic*10);
		cerr << "Cant find system.data file!" << endl;
		cerr << "Try to reinstall HackOS-XL_edition" << endl;
		cerr << "Press any key to close window";

		check.close();
		_getch();
		return 0;
	}
	clog << "   system.data - Done" << endl;
	Sleep(tic * 1);
	check.close();

	//fileSystem.data
	check.open("fileSystem.data");
	if (!check.is_open())
	{
		clog << "   fileSystem - ERROR" << endl;
		Sleep(tic*10);
		cerr << "Cant find fileSystem.data file!" << endl;
		cerr << "Try to reinstall HackOS-XL_edition" << endl;
		cerr << "Press any key to close window";

		check.close();
		_getch();
		return 0;
	}
	clog << "   fileSystem.data - Done" << endl;
	Sleep(tic * 1);
	check.close();
	//loadimage.data
	check.open("loadimage.data");
	if (!check.is_open())
	{
		clog << "   loadimage.data - ERROR" << endl;
		Sleep(tic * 10);
		cerr << "  Cant find loadimage.data file!" << endl;
		cerr << "  HackOS-XL_edition will be loaded with standart logo" << endl;

		Sleep(tic * 10);
		check.close();
		//done
		clog << "Done" << endl;
		Sleep(tic * 10);
		return 2;
	}
	clog << "   loadimage.data - Done" << endl;
	Sleep(tic * 1);
	check.close();
	//Done
	clog << "Done" << endl;
	Sleep(tic * 10);

	return 1;
}

/*LoadScreen
input 1 - from loadimage.data
input 2 - default*/
void bootSystem(int &type)
{
	system("color a");
	system("cls");
	cout << "Launching HackOS " << veros << " /\n";
	cout << "[                     ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " -\n";
	cout << "[                     ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " \\\n";
	cout << "[                     ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " |\n";
	cout << "[                     ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " /\n";
	cout << "[                     ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " -\n";
	cout << "[                     ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " \\\n";
	cout << "[                     ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " |\n";
	cout << "[                     ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " /\n";
	cout << "[|                    ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " -\n";
	cout << "[|                    ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " \\\n";
	cout << "[|                    ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " |\n";
	cout << "[|                    ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " /\n";
	cout << "[||                   ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " -\n";
	cout << "[||                   ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " \\\n";
	cout << "[||                   ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " |\n";
	cout << "[||                   ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " /\n";
	cout << "[|||                  ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " -\n";
	cout << "[|||                  ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " \\\n";
	cout << "[||||                 ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " |\n";
	cout << "[|||||                ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " /\n";
	cout << "[|||||||              ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " -\n";
	cout << "[|||||||||            ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " \\\n";
	cout << "[|||||||||||          ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " |\n";
	cout << "[||||||||||||         ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " /\n";
	cout << "[|||||||||||||||      ]"; Sleep(tic/3);
	system("cls");
	cout << "Launching HackOS " << veros << " -\n";
	cout << "[|||||||||||||||||||  ]"; Sleep(tic/3);
	for (int i = 1; i <= 5; i++)
	{
		system("cls");
		cout << "Launching HackOS " << veros << " \\\n[|||||||||||||||||||||]";
		Sleep(tic/3);
		system("cls");
		cout << "Launching HackOS " << veros << " |\n[|||||||||||||||||||||]";
		Sleep(tic/3);
		system("cls");
		cout << "Launching HackOS " << veros << " /\n[|||||||||||||||||||||]";
		Sleep(tic/3);
		system("cls");
		cout << "Launching HackOS " << veros << " -\n[|||||||||||||||||||||]";
		Sleep(tic/3);
	}




	system("color a");
	system("cls");

	if (type == 2)
	{
		cout << "   $$  $$           $    $$   $$$    $   $ $   " << endl; Sleep(tic / 3);
		cout << "   $$  $$           $   $  $ $        $ $  $   " << endl; Sleep(tic / 3);
		cout << "   $$$$$$  $$$   $$ $ $ $  $  $$  $$$  $   $   " << endl; Sleep(tic / 3);
		cout << "   $$  $$ $  $  $   $$  $  $    $     $ $  $   " << endl; Sleep(tic / 3);
		cout << "   $$  $$  $$ $  $$ $ $  $$  $$$     $   $ $$$$" << endl; Sleep(tic / 3);
		cout << "\n                   Welcome.";
	}
	else if (type == 1)
	{
		ifstream input("loadimage.data");
		if (!input.is_open())
		{
			cerr << "Cant find loadimage.data file!" << endl;
			cerr << "HackOS-XL_edition will be restarted with standart logo" << endl;
			Sleep(tic * 20);
			input.close();
			type = 2;
			bootSystem(type);
			return;
		}
		string line;
		while (!input.eof())
		{
			getline(input, line);
			cout << line << endl;
			Sleep(tic / 3);
		}
		input.close();
	}


	Sleep(tic*20);
	system("cls");
	cout << "HackOS-XL_Edition " << veros << "\n\n\n If you a new user, please use command: 'help' or '?'";
	cout << endl;
}

/*Shutdown screen
input 1 - standart shutdown
input 0 - without chose
input -1 - emergency shutdown
return true - shutdown
return false - cancel*/
bool shutdownSystem(int type)
{
	bool yes = false;
	ShowConsoleCursor(false);
	if (type == 1)
	{
		system("cls");
		cout << endl;
		cout << "  Are you sure you want to quit?";
		SetCursor(8, 3);
		cout << " YES";
		SetCursor(14, 3);
		cout << ">NO";
		int key;
		do
		{
			key = _getch();
			switch (key)
			{
			case 75:
				if (!yes)
				{
					SetCursor(14, 3);
					cout << ' ';
					SetCursor(8, 3);
					cout << '>';
					yes = true;
				}
				break;
			case 77:
				if (yes)
				{
					SetCursor(8, 3);
					cout << ' ';
					SetCursor(14, 3);
					cout << '>';
					yes = false;
				}
				break;
			}
		} while (key != VK_RETURN);
		if (!yes)
		{
			command("cls");
			ShowConsoleCursor(true);
			return false;
		}
	}
	else
		yes = true;

	//if emergency
	if (type == -1)
	{
		Sleep(tic * 20);
		Color("dark_red");
		system("cls");
		cout << "\n\n\n\n\n\n                CRITICAL ERROR"; Sleep(tic * 20);
		system("cls");
		cout << "\n\n\n\n\n\n          The system will be disabled"; Sleep(tic * 20);
		system("cls");
		for (int i = 1; i <= 15; i++)
		{
			system("cls");
			cout << "\n\n\n\n\n\n                Emergency Shutdown \\";
			Sleep(tic / 3);
			system("cls");
			cout << "\n\n\n\n\n\n                Emergency Shutdown |";
			Sleep(tic / 3);
			system("cls");
			cout << "\n\n\n\n\n\n                Emergency Shutdown /";
			Sleep(tic / 3);
			system("cls");
			cout << "\n\n\n\n\n\n                Emergency Shutdown -";
			Sleep(tic / 3);
		}
		system("cls");
		cout << "\n\n\n\n\n\n                Emergency Shutdown..."; Sleep(tic * 10);
	}
	else
	{
		for (int i = 1; i <= 15; i++)
		{
			system("cls");
			cout << "\n\n\n\n\n\n                Shutdown \\";
			Sleep(tic / 3);
			system("cls");
			cout << "\n\n\n\n\n\n                Shutdown |";
			Sleep(tic / 3);
			system("cls");
			cout << "\n\n\n\n\n\n                Shutdown /";
			Sleep(tic / 3);
			system("cls");
			cout << "\n\n\n\n\n\n                Shutdown -";
			Sleep(tic / 3);
		}
		system("cls");
		cout << "\n\n\n\n\n\n                Shutdown..."; Sleep(tic * 10);
	}
	return true;
}

/*Print Cursor*/
void cursor(vector <FileSystem> &fs, int pfs)
{
	//cout << endl;
	Color("purple");
	fs[pfs].outPoz(); 
	Color("dark_green");
	cout << '>';
	Color("green");
}

/*Console functon*/
void console(vector <FileSystem>& fs, int pfs, int stage)
{
	while (true)
	{
		cursor(fs, pfs);
		int chose = command(inputConsole());
		if (chose == -1)
			return;
		else if (chose == 0)
			cout << endl;
	}


	//test
	/*
	int a;
	a = _getch();
	cout << (char)a << " - " << a;
	
	if (one)
	{
		fs[0].setNow(fs[0].returnNow()->getFolderUP());
		cout << endl << "Info:" << endl;
		cout << fs[0].returnNow()->checkFolder("System") << endl;
		fs[0].returnNow()->delFolder("System");
		cout << fs[0].returnNow()->checkFolder("System") << endl;
		one = false;
	}*/
	//test
}

/*Return input to console*/
string inputConsole()
{
	string input;
	getline(cin, input);
	if (input.size() != 0)
	{
		while (input[0] == ' ')
		{
			string buff;
			for (unsigned int j = 1; j < input.size(); j++)
				buff += input[j];
			input = buff;
		}
		while (input[input.size() - 1] == ' ')
		{
			string buff;
			for (unsigned int j = 0; j < input.size() - 1; j++)
				buff += input[j];
			input = buff;
		}
	}
	return input;
}

/*Commands function
input - inputConsole()
-doing commands
return -1 - exit
return 0 - endl
return 1 - no endl*/
int command(string input)
{
	enum 
	{
		exit = -1,
		endline,
		no_endl
	};
	if (input.size() == 0)
		return no_endl;

	if (input == "exit" || input == "shutdown")
	{
		if (shutdownSystem(1))
			return exit;
		return no_endl;
	}
	else if (input.find("echo ") == 0)
	{
		cout << "The string is :";
		for (unsigned int i = 5; i < input.size(); i++)
			cout << input[i];
		cout << '.';
		return endline;
	}
	else if (input == "reboot")
	{
		int typeboot = 1;
		bootSystem(typeboot);
	}
	else if (input == "cls" || input == "clear")
	{
		system("cls");
		cout << "HackOS-XL_Edition " << veros << "\n\n";
	}
	else if (input == "?" || 
		input == "help" || input == "Help")
	{
		cout << "help is empty now, sorry =)";
		return endline;
	}
	else
	{
		cout << "Unknown command \"" << input << '\"';
		return endline;
	}
	return no_endl;
}
