# Plain Text File System

Simple file system to store username and password in plain text.

## Installation

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.



## Usage

```python
#include <fstream>

fstream fstreamName; #initilize fstream object

#Create Object with name of file fstream reference
fileSystem A("filename",fstreamName); 

#Examples of adding username and password
A.addUser_pswd("marigold", "sunlight"); 
A.addUser_pswd("Doe", "qwerty");
A.addUser_pswd("rose", "asdfg");


#Write to a text file
A.sync();
```

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
Open Source
