#include "text_file.hpp"
#include <string>
#include <iostream>
#include <fstream>


fileSystem::fileSystem(string textfile, fstream& ff){
    

    output_fstream = &ff;
    
    
    this->textfile = textfile;
    (*output_fstream).open(this->textfile + ".txt", ios::out);
    
    if (!*output_fstream) {
        std::cerr << "file open failed: " << std::strerror(errno) << "\n";
    }
    
    std::cout << "Opening file: "<< this->textfile << std::endl;
    

}


fileSystem::~fileSystem(){
    
    (*output_fstream).close();
    std::cout << "Closing file: "<< textfile << std::endl;
}


void fileSystem::addUser_pswd(string user, string password){
    
    if (users.size() == 0) {
        users.push_back(user);
        passwords.push_back(password);
    }
    else {
        if (checkentry(user) == true){
            users.push_back(user);
            passwords.push_back(password);
        }
        else{
            cout << "Username already exists: " << user <<endl;
        }
    }
}


void fileSystem::sync(){
    
    for (int i = 0; i < users.size(); i++){
        (*output_fstream) << users[i] << " " << passwords[i] << endl;
    }
}


bool fileSystem::checkentry(string user){
    
    for (int i = 0; i < users.size(); i++){
        if (users[i] == user){
            return false;
        }
    }
    
    return true;
}


void fileSystem::showvectors(){

    for(int i = 0; i <users.size(); i++){
    
        cout << "users: " << users[i] << endl;
        cout << "passwords: " << passwords[i] << endl;
    
    }

    cout << "users.size() = "<< users.size() << endl;
    cout << "passwords.size() = " << passwords.size() << endl;


}


