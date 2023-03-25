#include "head/command.h"

void Execute(std::string command){

    int i = 0;
    int space = 0;

    while(i < (command.length() -1)){
        space = eg::find(58, command, i);

        if(space == -1){
            space = command.length();
        }

        std::cout<<command.substr(i, (space-i))<<"\n"<< std::endl;
        i = space+1;
    }
    
    std::cout<<"End of command sequence"<<std::endl;
}

int main(){
    std::string com;
    std::string command;

    std::cout<<">>";
    std::cin>>com;

    //Execute(std::tolower(com));

    std::cout<<(char)97<<std::endl;
    //std::cout<<eg::CaseTo(com,eg::stCase::UPPER);

    std::cin.get();
    return 0;
}
