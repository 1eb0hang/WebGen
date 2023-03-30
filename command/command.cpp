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


    int find(unsigned char thing, std::string string, int stPos = 0, int endPos = 0){
        if(endPos == 0){
            endPos = (string.length()) - 1;
        }

        int pos = stPos;
        bool posTrue = false;

        while(pos <= endPos && posTrue == false){
            if(string[pos] == thing){
                posTrue = true;
            }
	    else{
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
	case LOWER: //this is supposed to format to lowercase
                std::cout<<"this is lowercase"<<std::endl;
                for(int i=0;i<res.length();i+=1){
		  int testChar = (int)res[i];
		  if(testChar <= 90 && testChar >= 65){
		    testChar += 32;
		    res[i] = (char)testChar;
                    }
                }
                break;

            case UPPER:
	         for(int i=0;i<res.length();i+=1){
		  int testChar = (int)res[i];
		  if(testChar <= 122 && testChar >= 97){
		    testChar -= 32;
		    res[i] = (char)testChar;
                    }
                }
                break;
                
        }

        return res;
    }

#if 0
    std::string get(std::string  message, std::string input){
        char inter;
        int count = 0;

        while(count < (input.length() -1)){
            inter = (char)std::cin.get();
        }

    }
#endif
}

