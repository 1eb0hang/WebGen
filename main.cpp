#include <iostream>
#include <string>
#include <fstream>

#define ReadHost(x,y) std::cout<< x << ":";std::cin>> y ; std::cout<<std::endl

#if 0
template<typename t>
void Create(){

}
#endif

enum Cmd{
    CREATE=0
};

int main(int argc, char* argv[]){
    std::string msg = "Enter Command"; 
    std::string command;
    Cmd cmd;
    std::fstream file;

    std::string fileText = "<html>\n<head>\n  <title>Example</title>\n</head>\n\n<body>\n<h1>Example</h1>\n<p>Hello World</p>\n</body>\n</html>";

    std::string path = "./example.html";

    ReadHost(msg, command);

    if(command == "create"){
        file.open(path,std::ios::out);
        
        if(file.is_open() == false){
            std::cout<<"Error while opening "<<path<<std::endl;
        }

        file<<fileText;
        file.close();
    }

    std::cin.get();
    return 0;
}