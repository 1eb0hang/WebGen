#include <iostream>
#include <string>


//char codes are automatically converted by the char data type
//char space = 32;

namespace eg{

    /**/
    int find(char thing, std::string string, int stPos = 0, int endPos = 0){
        if(endPos == 0){
            endPos = (string.length()) - 1;
        }

        int pos = 0;
        bool posTrue = false;

        while(pos <= endPos && posTrue == false){
            if(string[pos] == thing){
                posTrue = true;
            }else{
                pos +=1;
            }
        }

        if(pos > endPos){
            pos = -1;
        }

        return pos;
    }
}

