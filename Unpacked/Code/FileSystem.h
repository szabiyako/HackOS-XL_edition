#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include "Globals.h"

class Folder;

class File
{
private:
	string Name;
	string Type;
	string Code;
	string Content;
	Folder *FolderUP;
public:
	File(string, Folder*);
	File(string, string, Folder*);
	File(string, string, string, Folder*);
	File(string, string, string, string, Folder*);
	Folder* getFolder();
	string getName();
	string getType();
	string getCode();
	string getContent();
	void setName(string);
	void setType(string);
	void setCode(string);
	void setContent(string);
};

class Folder
{
private:
	string Name;
	Folder *FolderUP;
	vector <Folder> Folders;
	vector <File> Files;
public:
	Folder();
	Folder(string);
	Folder(string, Folder*);
	Folder* getFolderUP();
	Folder* getFolder(int);
	void addFolder(Folder);
	void addFile(File);
	void delFolder(string);
	void delFile(string);
	string getName();
	void setName(string);
	int checkFolder(string);
	int checkFile(string);
};

class FileSystem
{
private:
	Folder Main;
	Folder *now;
public:
	FileSystem(string);
	string getName();
	Folder* returnMain();
	Folder* returnNow();
	void setName(string);
	void import(string);
	void setNow(Folder*);
	void outPoz();
};

void importFileSystems(vector <FileSystem>&, string&);

#endif