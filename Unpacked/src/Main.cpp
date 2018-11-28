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
		fs[0].setNow(fs[0].returnMain()->getFolder(0));
		Folder f1("Folder_1", fs[0].returnNow());
		File a1("NewFile.txt", fs[0].returnNow());
		File a2("Test.txt", fs[0].returnNow());
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