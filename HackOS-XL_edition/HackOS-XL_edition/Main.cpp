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
GitHub
https://github.com/szabiyako/HackOS-XL_edition
*/

#include "Globals.h"
#include "Functions.h"
#include "FileSystem.h"

int main()
{
	//WinEncoding
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ShowConsoleCursor(false);
	
	int CheckFiles = checkFiles();
	//Check system files
	if (!CheckFiles)
		return -1;

	//Load file system
	vector <FileSystem> fs;
	do
	{
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
	}
	while (0);
	//importFileSystems(fs, (string)"fileSystem.data");

	int posfs = 0;
	int stage = 0;

	
	//StartSystem
	bootSystem(CheckFiles);
	ShowConsoleCursor(true);

	//Main cycle
	console(fs, posfs, stage);

	return 0;
}