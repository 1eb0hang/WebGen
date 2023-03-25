#include <iostream>
#include <string>


//char codes are automatically converted by the char data type
//char space = 32;

namespace eg{

 //string case 
    enum stCase{
        //lowercase: 97 - 122
        //uppercase: 65 - 90

        NONE=0,
        UPPER=1,
        LOWER=2
    };

    /**
    @param thing character to look for within string
    @param string string within which "thing" will be tested
    @param stPos the starting position from which "thing" will be tested
    @param endPos the end positon blah blah blah 

    @returns index of the first occurance of the character "thing" from the starting postion
    @throws returns -1 if @a thing is not found

    */
    int find(char thing, std::string string, int stPos = 0, int endPos = 0){
        if(endPos == 0){
            endPos = (string.length()) - 1;
        }

        int pos = stPos;
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



    std::string CaseTo(std::string word, stCase strcase = stCase::NONE){
        std::string res = word;

        switch(strcase){
            case LOWER:
                std::cout<<"this is lowercase"<<std::endl;
                for(int i=0;i<res.length();i+=1){
                    if(res[i] > (char)90 && res[i] < (char)65){
                        res[i] = (char)(((int)res[i]) + 32);
                    }
                }
                break;

            case UPPER:
                std::cout<<"this is uppercase"<<std::endl;
                for(int i=0;i<res.length();i+=1){
                        if(res[i] > (char)97 && res[i] < (char)122){
                            res[i] = (char)(((int)res[i]) + 32);
                        }
                    }
                break;
        }

        return res;

    }
}

