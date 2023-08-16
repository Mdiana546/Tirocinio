#include<iostream>
#include<fstream>
#include <string>
using std::fstream;
using std::ios;
using std::string;

class HandleFiles
{
private:
fstream monaFile;
fstream SMTLIBFile;
public:
HandleFiles();
void writeOnMonaFile(string&);
void writeOnSMTLIBFile(string&);
virtual ~ HandleFiles();
};
