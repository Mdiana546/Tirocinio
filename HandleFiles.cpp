#include "HandleFiles.hpp"


HandleFiles::HandleFiles()
{
  SMTLIBFile.open("SMTLIBFile.txt",ios::out);
  monaFile.open("monaFile.txt",ios::out);
}

void HandleFiles::writeOnMonaFile(string& str)
{
  if(monaFile.is_open())
   monaFile<<str+"\n";
}

void HandleFiles::writeOnSMTLIBFile(string& str)
{
  if(SMTLIBFile.is_open()){
     SMTLIBFile<<str+"\n";
     }
    
     
}

HandleFiles::~HandleFiles()
{
   if(monaFile.is_open())
       monaFile.close();
  if(SMTLIBFile.is_open())
        SMTLIBFile.close();
}
