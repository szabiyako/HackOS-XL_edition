#include "Functions.h"

/*Checking for files
return 0 - Error
return 1 - Done
return 2 - loadimage Error (Done)*/
int checkFiles()
{
	clog << " _   _            _     ___  ____      __  ___" << endl;
	clog << "| | | | __ _  ___| | __/ _ \\/ ___|     \\ \\/ / |" << endl;
	clog << "| |_| |/ _` |/ __| |/ / | | \\___ \\ _____\\  /| |" << endl;
	clog << "|  _  | (_| | (__|   <| |_| |___) |_____/  \\| |___" << endl;
	clog << "|_| |_|\\__,_|\\___|_|\\_\\\\___/|____/     /_/\\_\\_____|" << endl;
	clog << endl;
	clog << "----------------------" << endl;
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
	string line;
	getline(check, line); //skip comment
	line = inputConsole(check);
	if (line.find("License code ") == 0)
	{
		line.erase(0, 13);
		if (atoi(line.c_str()) == License_code)
		{
			clog << "   License code - Done" << endl;
			Sleep(tic * 1);
		}
		else
		{
			clog << "   License code - ERROR" << endl;
			Sleep(tic * 10);
			clog << "   system.data - ERROR" << endl;
			Sleep(tic * 10);
			cerr << "System doesn`t have a TRUE License code" << endl;
			cerr << "Try to reinstall HackOS-XL_edition" << endl;
			cerr << "Press any key to close window";

			check.close();
			_getch();
			return 0;
		}
	}
	else
	{
		clog << "   License code - ERROR" << endl;
		Sleep(tic * 10);
		clog << "   system.data - ERROR" << endl;
		Sleep(tic * 10);
		cerr << "System doesn`t have a License code" << endl;
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
		cout << "888    888                   888       .d88888b.   .d8888b.       Y88b   d88P 888" << endl;
		Sleep(tic / 3);
		cout << "888    888                   888      d88P\" \"Y88b d88P  Y88b       Y88b d88P  888" << endl;
		Sleep(tic / 3);
		cout << "888    888                   888      888     888 Y88b.             Y88o88P   888" << endl;
		Sleep(tic / 3);
		cout << "8888888888  8888b.   .d8888b 888  888 888     888  \"Y888b.           Y888P    888" << endl;
		Sleep(tic / 3);
		cout << "888    888     \"88b d88P\"    888 .88P 888     888     \"Y88b.         d888b    888" << endl;
		Sleep(tic / 3);
		cout << "888    888 .d888888 888      888888K  888     888       \"888 888888 d88888b   888" << endl;
		Sleep(tic / 3);
		cout << "888    888 888  888 Y88b.    888 \"88b Y88b. .d88P Y88b  d88P       d88P Y88b  888" << endl;
		Sleep(tic / 3);
		cout << "888    888 \"Y888888  \"Y8888P 888  888  \"Y88888P\"   \"Y8888P\"       d88P   Y88b 88888888" << endl;
		Sleep(tic);
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
	cout << "HackOS-XL_Edition " << veros;
	cout << "\n\nIf you a new user, please use command: \"help\" or \"?\"";
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
		SetCursor(7, 3);
		cout << "  YES";
		SetCursor(18, 3);
		cout << "->NO";
		int key;
		do
		{
			key = _getch();
			switch (key)
			{
			case 75:
				if (!yes)
				{
					SetCursor(18, 3);
					cout << "  ";
					SetCursor(7, 3);
					cout << "->";
					yes = true;
				}
				break;
			case 77:
				if (yes)
				{
					SetCursor(7, 3);
					cout << "  ";
					SetCursor(18, 3);
					cout << "->";
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
		cout << "\n\n\n\n                CRITICAL ERROR"; Sleep(tic * 20);
		system("cls");
		cout << "\n\n\n\n          The system will be disabled"; Sleep(tic * 20);
		system("cls");
		for (int i = 1; i <= 10; i++)
		{
			system("cls");
			cout << "\n\n\n\n                Emergency Shutdown \\";
			Sleep(tic / 3);
			system("cls");
			cout << "\n\n\n\n                Emergency Shutdown |";
			Sleep(tic / 3);
			system("cls");
			cout << "\n\n\n\n                Emergency Shutdown /";
			Sleep(tic / 3);
			system("cls");
			cout << "\n\n\n\n                Emergency Shutdown -";
			Sleep(tic / 3);
		}
		system("cls");
		cout << "\n\n\n\n                Emergency Shutdown..."; Sleep(tic * 10);
	}
	else
	{
		for (int i = 1; i <= 10; i++)
		{
			system("cls");
			cout << "\n\n\n\n                Shutdown \\";
			Sleep(tic / 3);
			system("cls");
			cout << "\n\n\n\n                Shutdown |";
			Sleep(tic / 3);
			system("cls");
			cout << "\n\n\n\n                Shutdown /";
			Sleep(tic / 3);
			system("cls");
			cout << "\n\n\n\n                Shutdown -";
			Sleep(tic / 3);
		}
		system("cls");
		cout << "\n\n\n\n                Shutdown..."; Sleep(tic * 10);
	}
	return true;
}

/*Print Cursor*/
void cursor(vector <FileSystem> &fs, int pfs, int stage)
{
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
		cursor(fs, pfs, stage);
		//ShowConsoleCursor(true);
		int chose = command(inputConsole(cin), fs, pfs, stage);
		if (chose == -1)
			return;
		else if (chose == 0)
			cout << endl;
	}
}

/*Return input to console
(Remove free spaces from left and right)*/
string inputConsole(istream &inputstream)
{
	string input;
	getline(inputstream, input);
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

/*Remove free spaces from left and right*/
string inputCutSpaces(string input)
{
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
return 1 - no_endl*/
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
	//else if (input.find("cd ") == 0)
	//{
	//	input.erase(0, 3);
	//	return 3;
	//}
	else if (input == "help" || input == "Help" || input == "?")
	{
		cout << "----------------------------------------------" << endl;
		cout << "|In HackOS systems you can use next commands:|" << endl;
		cout << "----------------------------------------------" << endl;
		cout << " color k            - Change system color (k= green, blue, red, yellow, white, gray)" << endl;
		cout << " echo Text          - Show Text on screen" << endl;
		cout << " exit / shutdown    - Shutdowning HackOS" << endl;
		cout << " hack IP            - Try to hack the private server" << endl;
		cout << " reboot             - Rebooting HackOS" << endl;
		cout << " ls                 - Show files in directory" << endl;
		cout << " cd Directory_Name  - Change directory" << endl;
		cout << " mkdir Folder_Name  - Create a folder with name Folder_Name" << endl;
		cout << " delete name_file   - Deleting file or folder name_file" << endl;
		cout << " connect IP         - Connect to the next IP" << endl;
		cout << " download name_file - Downloads the file with name name_file" << endl;
		cout << " cls / clear        - Clear screen";
		return endline;
	}
	else if (input.find("echo ") == 0)
	{
		cout << "The string is :";
		for (unsigned int i = 5; i < input.size(); i++)
			cout << input[i];
		cout << '.';
		return endline;
	}
	else if (input == "echo")
	{
		cout << "You need to put some text after \"echo\"";
		return endline;
	}
	else if (input == "reboot")
	{
		shutdownSystem(0);
		int typeboot = 1;
		bootSystem(typeboot);
		ShowConsoleCursor(true);
	}
	else if (input == "cls" || input == "clear")
	{
		system("cls");
		cout << "HackOS-XL_Edition " << veros << "\n\n";
	}
	else if (input.find("connect ") == 0)
	{
		string IP;
		for (unsigned int i = 8; i < input.size(); i++)
			IP += input[i];
		cout << IP;
		return endline;
	}
	else if (input == "connect")
	{
		cout << "You need to put some IP adress or URL after \"connect\"";
		return endline;
	}
	//else if (input == "ls")
	//{
	//	return 2;
	//}
	else
	{
		cout << "Unknown command \"" << input << '\"';
		return endline;
	}
	return no_endl;
}

/*Same, but has more features*/
/*Commands function
input - inputConsole()
-doing commands
return -1 - exit
return 0 - endl
return 1 - no_endl*/
int command(string input, vector <FileSystem>& fs, int pfs, int stage)
{
	enum
	{
		exit = -1,
		endline,
		no_endl
	};
	if (input.size() == 0)
		return no_endl;

	//Open file
	if (true)
	{
		string copy;
		bool atNow = false;
		if (input.find("./") == 0)
		{
			copy = input;
			copy.erase(0, 2);
			copy = inputCutSpaces(copy);
			atNow = true;
		}
		if (atNow)
		{
			int filePoz = fs[pfs].returnNow()->checkFile(copy);
			if (filePoz == -1)
			{
				cout << "Wrong file name";
				return endline;
			}
			cout << fs[pfs].returnNow()->getFile(filePoz)->getContent();
			return endline;
		}
		else
		{

		}
	}

	if (input == "exit" || input == "shutdown")
	{
		if (shutdownSystem(1))
			return exit;
		return no_endl;
	}
	else if (input.find("cd ") == 0)
	{
		input.erase(0, 3);
		input = inputCutSpaces(input);
		if (input == "..")
		{
			if (fs[pfs].returnNow()->getFolderUP() != 0)
				fs[pfs].setNow(fs[pfs].returnNow()->getFolderUP());
			else
			{
				cout << "There is no higher directory" << endl;
			}
		}
		else if (input == ".")
			return no_endl;
		else
		{
			bool atNow = false;
			if (input.find("./") == 0)
			{
				input.erase(0, 2);
				atNow = true;
			}
			string folder;
			string cpinput = input;
			Folder* pfolder = fs[pfs].returnNow();
			while (input.size() > 0)
			{
				folder = "";
				for (unsigned int i = 0; i < input.size() && input[i] != '/'; )
				{
					folder += input[i];
					input.erase(0, 1);
				}
				if (input.size() > 0)
					input.erase(0, 1);
				folder = inputCutSpaces(folder);
				int numberFolder = pfolder->checkFolder(folder);
				if (numberFolder == -1)
				{
					if (atNow)
					{
						cout << "Folder not found" << endl;
						return no_endl;
					}
					else
					{
						pfolder = fs[pfs].returnMain();
						while (cpinput.size() > 0)
						{
							folder = "";
							for (unsigned int i = 0; i < cpinput.size() && cpinput[i] != '/'; )
							{
								folder += cpinput[i];
								cpinput.erase(0, 1);
							}
							if (cpinput.size() > 0)
								cpinput.erase(0, 1);
							folder = inputCutSpaces(folder);
							int numberFolder = pfolder->checkFolder(folder);
							if (numberFolder == -1)
							{
								cout << "Folder not found" << endl;
								return no_endl;
							}
							else
							{
								pfolder = pfolder->getFolder(numberFolder);
							}
						}
						fs[pfs].setNow(pfolder);
						return no_endl;
					}
				}
				else
				{
					pfolder = pfolder->getFolder(numberFolder);
				}
			}
			fs[pfs].setNow(pfolder);
		}
		return no_endl;
	}
	else if (input == "help" || input == "Help" || input == "?")
	{
		cout << "----------------------------------------------" << endl;
		cout << "|In HackOS systems you can use next commands:|" << endl;
		cout << "----------------------------------------------" << endl;
		cout << " color k            - Change system color (k= green, blue, red, yellow, white, gray)" << endl;
		cout << " echo Text          - Show Text on screen" << endl;
		cout << " exit / shutdown    - Shutdowning HackOS" << endl;
		cout << " hack IP            - Try to hack the private server" << endl;
		cout << " reboot             - Rebooting HackOS" << endl;
		cout << " ls                 - Show files in directory" << endl;
		cout << " cd Directory_Name  - Change directory" << endl;
		cout << " mkdir Folder_Name  - Create a folder with name Folder_Name" << endl;
		cout << " delete name_file   - Deleting file or folder name_file" << endl;
		cout << " connect IP         - Connect to the next IP" << endl;
		cout << " download name_file - Downloads the file with name name_file" << endl;
		cout << " cls / clear        - Clear screen";
		cout << " reset              - Reset filesystem, debug only";
		return endline;
	}
	else if (input.find("echo ") == 0)
	{
		cout << "The string is :";
		for (unsigned int i = 5; i < input.size(); i++)
			cout << input[i];
		cout << '.';
		return endline;
	}
	else if (input == "echo")
	{
		cout << "You need to put some text after \"echo\"";
		return endline;
	}
	else if (input == "reboot")
	{
		shutdownSystem(0);
		int typeboot = 1;
		pfs = 0;
		fs[pfs].setNow(fs[pfs].returnMain());
		bootSystem(typeboot);
		ShowConsoleCursor(true);
	}
	else if (input == "cls" || input == "clear")
	{
		system("cls");
		cout << "HackOS-XL_Edition " << veros << "\n\n";
	}
	else if (input.find("connect ") == 0)
	{
		string IP;
		for (unsigned int i = 8; i < input.size(); i++)
			IP += input[i];
		cout << IP;
		return endline;
	}
	else if (input == "connect")
	{
		cout << "You need to put some IP adress or URL after \"connect\"";
		return endline;
	}
	else if (input == "ls")
	{
		Color("grey");
		int folder_size = fs[pfs].returnNow()->getSizeFolders();
		int file_size = fs[pfs].returnNow()->getSizeFiles();
		if (folder_size == 0 && file_size == 0)
		{
			Color("green");
			cout << "Folder is empty" << endl;
			return no_endl;
		}
		for (int i = 0; i < folder_size; i++)
			cout << fs[pfs].returnNow()->getFolder(i)->getName() << endl;
		Color("white");
		for (int i = 0; i < file_size; i++)
			cout << fs[pfs].returnNow()->getFile(i)->getName() << '.'
			<< fs[pfs].returnNow()->getFile(i)->getType() << endl;
		return no_endl;
	}

	///DEBUG ONLY
	else if (input == "reset")
	{
		ShowConsoleCursor(false);
		fs.clear();
		fs.emplace_back(FileSystem("PC"));
		fs[0].setNow(fs[0].returnMain());
		Folder s("System", fs[0].returnMain());
		Folder md("MyDoc", fs[0].returnMain());
		Folder d("Download", fs[0].returnMain());
		fs[0].setNow(fs[0].returnMain()->getFolder(0));
		Folder f1("Folder_1", fs[0].returnNow());
		File a1("NewFile.txt", fs[0].returnNow());
		fs[0].returnNow()->getFile(0)->setContent("NewFile.txt nice to meet you!");
		File a2("Test.txt", fs[0].returnNow());
		fs[0].returnNow()->getFile(1)->setContent("There is nothing here dude!");
		fs[0].setNow(fs[0].returnMain()->getFolder(1));
		Folder w("Work", fs[0].returnNow());
		fs[0].setNow(fs[0].returnMain());
		for (int i = 1; i <= 5; i++)
		{
			system("cls");
			cout << "\n\n\n\n                Reset \\";
			Sleep(tic / 3);
			system("cls");
			cout << "\n\n\n\n                Reset |";
			Sleep(tic / 3);
			system("cls");
			cout << "\n\n\n\n                Reset /";
			Sleep(tic / 3);
			system("cls");
			cout << "\n\n\n\n                Reset -";
			Sleep(tic / 3);
		}
		pfs = 0;
		fs[pfs].setNow(fs[pfs].returnMain());
		system("cls");
		cout << "\n\n\n\n                Done";
		Sleep(tic * 10);
		system("cls");
		cout << "HackOS-XL_Edition " << veros;
		cout << "\n\nIf you a new user, please use command: \"help\" or \"?\"";
		cout << endl;
		ShowConsoleCursor(true);
	}
	///DEBUG ONLY

	//Somthing wrong
	else if (input.find("mkdir ") == 0)
	{
		input.erase(0, 6);
		input = inputCutSpaces(input);
		if (fs[pfs].returnNow()->checkFolder(input) == -1)
		{
			Folder newfolder(input, fs[pfs].returnNow());
		}
		else
			cout << "This folder already exist" << endl;
		return no_endl;
	}
	else
	{
		cout << "Unknown command \"" << input << '\"';
		return endline;
	}
	return no_endl;
}
