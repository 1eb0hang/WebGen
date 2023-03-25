#include <iostream>
#include <string>

namespace eg{

   //string case 
    enum stCase{
        //lowercase: 97 - 122
        //uppercase: 65 - 90

        NONE=0,
        UPPER=1,
        LOWER=2
    };


  int find(char thing, std::string string, int stPos = 0, int endPos = 0);

  std::string CaseTo(std::string word, stCase strcase = stCase::NONE);
}
