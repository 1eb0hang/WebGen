#include "head/command.h"

int main(){
    std::string com;
    std::string command;

    std::cout<<">>";
    std::cin>>com;
 
    int i = 0;
    int space = 0;

    space = eg::find(32, com);

    std::cout<<com.substr(i, space+1)<<"\n"<< std::endl;
    
    i = space;

    std::cin.get();
    return 0;
}
