#include "command/command.h"

enum WhiteSpace{
  SPACE = 0x20, //' '
  FORM_FEED = 0x0c, //'\f'
  LINE_FEED = 0x0a, //'\n'
  CARRIAIGE_RETURN = 0x0d, //'\r'
  HORIZ_TAB = 0x09, //'\t'
  VERT_TEAB = 0x0b  //'\v'
};

void Execute(std::string command){

    int i = 0;
    int space = 0;

    while(i < (command.length() -1)){
      space = eg::find(32,command, i);

        if(space == -1){
            space = command.length();
        }

        std::cout<<command.substr(i, (space-i))<< std::endl;
        i = space+1;
    }
    
    std::cout<<"End of command sequence"<<std::endl;
}

int main(){
  std::string com;
  std::streamsize num =10;

  std::cout<<">>";//<<(char)32<<"solmething";
  std::getline(std::cin,com);
  Execute(eg::CaseTo(com));

  //std::cout<<eg::find(32, com);
  return 0;
}
