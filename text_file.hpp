#ifndef text_file_hpp
#define text_file_hpp

#include <stdio.h>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class fileSystem {
    
public:
    
    fileSystem();
    fileSystem(string textfile, fstream& ff);
    
    void addUser_pswd(string user, string password);
    bool checkentry(string user);
    void showvectors();
    void sync();
    
    ~fileSystem();
    
private:
    vector <string> users;
    vector <string> passwords;
    string textfile;
    fstream* output_fstream;
    
};

#endif
