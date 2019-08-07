#include <iostream>
#include <string>
#include "text_file.hpp"

int main(int argc, const char * argv[]) {
 
    fstream ff;
    string filename = "passwordFile";
    
    fileSystem A(filename,ff);
    
    A.addUser_pswd("marigold", "sunlight");
    A.addUser_pswd("Doe", "qwerty");
    A.addUser_pswd("rose", "asdfg");
    
    //A.showvectors();
    A.sync();
    
    return 0;
}
