#include"FileSystem.h"

//class File
File::File(string FullName, Folder *folder)
{
	string name = "";
	unsigned int i;
	for (i = 0; i < FullName.length() && FullName[i] != '.'; i++)
		name += FullName[i];
	this->Name = name;
	name = "";
	for (i++; i < FullName.length(); i++)
		name += FullName[i];
	Code = "text";
	Content = "This file is empty";
	this->Type = name;
	FolderUP = folder;
	folder->addFile(*this);
}
File::File(string Name, string Type, Folder *folder)
{
	this->Name = Name;
	this->Type = Type;
	Code = "text";
	Content = "This file is empty";
	FolderUP = folder;
	folder->addFile(*this);
}
File::File(string Name, string Type, string Text, Folder *folder)
{
	this->Name = Name;
	this->Type = Type;
	Code = "text";
	Content = "Text";
	FolderUP = folder;
	folder->addFile(*this);
}
File::File(string name, string type, string TypeFile, string content, Folder *folder)
{
	Name = name;
	Type = type;
	Code = TypeFile;
	Content = content;
	FolderUP = folder;
	folder->addFile(*this);
}
Folder* File::getFolder()
{
	return FolderUP;
}
string File::getName()
{
	return Name;
}
string File::getType()
{
	return Type;
}
string File::getCode()
{
	return Code;
}
string File::getContent()
{
	return Content;
}
void File::setName(string name)
{
	Name = name;
}
void File::setType(string type)
{
	Type = type;
}
void File::setCode(string code)
{
	Code = code;
}
void File::setContent(string content)
{
	Content = content;
}


//class Folder
Folder::Folder()
{
	Name = "NewFolder";
	FolderUP = NULL;
}
Folder::Folder(string Name)
{
	this->Name = Name;
	FolderUP = NULL;
}
Folder::Folder(string Name, Folder *OutsideFolderName)
{
	this->Name = Name;
	FolderUP = OutsideFolderName;
}
Folder* Folder::getFolderUP()
{
	return FolderUP;
}
Folder* Folder::getFolder(int i)
{
	Folder *pf = &Folders[i];
	return pf;
}
void Folder::addFolder(Folder NewInsideFolder)
{
	Folders.push_back(NewInsideFolder);
}
void Folder::addFile(File NewInsideFile)
{
	Files.push_back(NewInsideFile);
}
void Folder::delFolder(string name)
{
	Folders.erase(Folders.begin() + checkFolder(name));
}
void Folder::delFile(string name)
{
	Files.erase(Files.begin() + checkFile(name));
}
string Folder::getName()
{
	return Name;
}
void Folder::setName(string Name)
{
	this->Name = Name;
}
int Folder::checkFolder(string FolderName)
{
	bool Continue = true;
	for (unsigned int i = 0; i < Folders.size() && Continue; i++)
	{
		if (Folders[i].getName() == FolderName)
		{
			Continue = false;
			return i;
		}
	}
	return -1;
}
int Folder::checkFile(string FileName)
{
	bool Continue = true;
	for (unsigned int i = 0; i < Files.size() && Continue; i++)
	{
		if (Files[i].getName() == FileName)
		{
			Continue = false;
			return i;
		}
	}
	return -1;
}

//class FileSystem
FileSystem::FileSystem(string Name)
{
	Main.setName(Name);
	this->now = &Main;
}

string FileSystem::getName()
{
	return Main.getName();
}
Folder* FileSystem::returnMain()
{
	Folder *pMain = &Main;
	return pMain;
}
Folder* FileSystem::returnNow()
{
	return now;
}
void FileSystem::setName(string Name)
{
	Main.setName(Name);
}
void FileSystem::import(string file)
{
	cout << "This is an input from " << file;
}
void FileSystem::setNow(Folder* newNow)
{
	this->now = newNow;
}
void FileSystem::outPoz()
{
	string s1 = "", s2 = "", buff = "";
	Folder *p = now;
	if (p->getFolderUP() == NULL)
	{
		cout << p->getName();
		return;
	}
	while (p->getFolderUP() != NULL)
	{
		s1 = "";
		buff = p->getName();
		p = p->getFolderUP();
		s1 = p->getName();
		s1 += '/';
		s1 += buff;
		s2 = s1;
	}
	cout << s2;
}

/*
void importFSstep(vector <FileSystem> &systems, ifstream &input, int type)
{
	string strTab = "";
	string str = "";
	char ch;
	bool tabBegin = false;
	bool tabEnd = false;

	bool brOpen = false;
	bool brClose = false;

	bool file = false;

	while (!input.eof())
	{
		input.get(ch);
		if (ch != '\n' && ch != '\t')
		{
			if (type == 1)
			{
				//cout << ch;
				if (ch == '}')
					return;
				if (!(brOpen || brClose))
				{
					if (!tabEnd)
					{
						if (ch == '<' && !tabBegin)
							tabBegin = true;
						else if (ch == '>' && tabBegin)
						{
							tabBegin = false;
							tabEnd = true;
						}
						else if (tabBegin)
							strTab += ch;
					}
					else
					{
						if (ch != '>')
							str += ch;
						else
						{
							tabEnd = false;
							//Test
							//cout << strTab << ' ' << str << endl;
							if (strTab == "FS")
							{
								FileSystem a(str);
								systems.push_back(a);
							}
							else if (strTab == "F")
							{
								if (systems[systems.size() - 1].folders.size() == 0)
								{
									Folder a(str);
									systems[systems.size() - 1].folders.push_back(a);
								}
								else
								{
									Folder a(str, systems[systems.size() - 1].folders
										[systems[systems.size() - 1].folders.size() - 1]);
									systems[systems.size() - 1].folders.push_back(a);
									//test
									systems[systems.size() - 1].folders[
										systems[systems.size() - 1].folders.size() - 1].addInsideFolder
										(&systems[systems.size() - 1].folders[systems[systems.size() - 1].files.size() - 1]);
								}
								
							}
							else if (strTab == "-")
							{
								File a(str, systems[systems.size() - 1].folders
									[systems[systems.size() - 1].folders.size() - 1]);
								systems[systems.size() - 1].files.push_back(a);
								//test
								systems[systems.size() - 1].folders[
									systems[systems.size() - 1].folders.size() - 1].addInsideFile
									(&systems[systems.size() - 1].files[systems[systems.size() - 1].files.size() - 1]);

								file = true;
							}
							clog << str << endl;
							strTab = "";
							str = "";
							brOpen = true;
						}
					}
				}
				if (brOpen && !brClose)
				{
					if (file)
					{
						importFSstep(systems, input, 2);
						file = false;
						return;
					}
					else
					{
						importFSstep(systems, input, 1);
						return;
					}
				}
			}
			else if (type == 2)
			{
				if (ch == '{')
					while (!input.eof())
					{
						input.get(ch);
						if (ch == '\"')
						{
							input.get(ch);
							while (ch != '\"')
							{
								str += ch;
								input.get(ch);
							}
							systems[systems.size() - 1].files[systems[systems.size() - 1].
								files.size() - 1].changeContent(0, str);
							str = "";
							while (!input.eof())
							{
								input.get(ch);
								if (ch == '\"')
								{
									input.get(ch);
									while (ch != '\"')
									{
										str += ch;
										input.get(ch);
									}
									systems[systems.size() - 1].files[systems[systems.size() - 1].
										files.size() - 1].changeContent(1, str);
								}
								if (ch == '}')
									return;
							}
						}
					}
			}
		}
	}
}
*/

//Next symbol whithout \n \t
/*
char NextSymbol(ifstream &input)
{
	char ch;
	input.get(ch);
	if (ch == '\n' || ch == '\t')
		return '\0';
	return ch;
}

void importFSstep(vector <FileSystem> &systems, ifstream &input, int type)
{
	char ch;
	string s1 = "";
	string s2 = "";
	while (true)
	{
		s1 = "";
		s2 = "";
		if (type == 1 || type == 0) //What type and creating
		{
			while (!input.eof())
			{
				ch = NextSymbol(input);
				if (ch == '<' || type == 0)
				{
					ch = NextSymbol(input);
					while (ch != '>')
					{
						s1 += ch;
						ch = NextSymbol(input);
					}
					ch = NextSymbol(input);
					while (ch != '>')
					{
						s2 += ch;
						ch = NextSymbol(input);
					}
					cout << s1 << ' ' << s2 << endl;
					///
					if (s1 == "FS")
					{
						FileSystem a(s2);
						systems.emplace_back(a);
					}
					else if (s1 == "F")
					{
						if (systems[systems.size() - 1].folders.size() == 0)
						{
							Folder a(s2);
							systems[systems.size() - 1].folders.emplace_back(a);
						}
						else
						{
							Folder a(s2, systems[systems.size() - 1].folders
								[systems[systems.size() - 1].folders.size() - 1]);
							systems[systems.size() - 1].folders.emplace_back(a);
						}
						type = 3;
					}
					else if (s1 == "-")
					{
						File a(s2, systems[systems.size() - 1].folders
							[systems[systems.size() - 1].folders.size() - 1]);
						systems[systems.size() - 1].files.emplace_back(a);
						type = 2;
						break;
					}
					///
					s1 = "";
					s2 = "";
				}
			}
		}
		else if (type == 2) //Content file
		{
			while (ch != '{')
				ch = NextSymbol(input);
			while (!input.eof())
			{
				input.get(ch);
				if (ch == '\"')
				{
					ch = NextSymbol(input);
					while (ch != '\"')
					{
						s1 += ch;
						ch = NextSymbol(input);
					}
					systems[systems.size() - 1].files[systems[systems.size() - 1].
						files.size() - 1].changeContent(0, s1);
					s1 = "";
					while (!input.eof())
					{
						ch = NextSymbol(input);
						if (ch == '\"')
						{
							ch = NextSymbol(input);
							while (ch != '\"')
							{
								s1 += ch;
								ch = NextSymbol(input);
							}
							systems[systems.size() - 1].files[systems[systems.size() - 1].
								files.size() - 1].changeContent(1, s1);
						}
						if (ch == '}')
							return;
					}
				}
			}
		}
		else if (type == 3)
		{

		}
	}
}

//imortFS
void importFileSystems(vector <FileSystem> &systems, string &file)
{
	ifstream input(file);

	if (!input.is_open())
	{
		cerr << "Cant find importFileSystems file!";
		return;
	}

	char ch;
	while (!input.eof())
	{
		input.get(ch);
		if (ch == '.')
		{
			importFSstep(systems, input, 1);
		}
	}

	input.close();
}

*/