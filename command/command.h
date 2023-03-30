#pragma once
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


  
  /**
    @param thing character to look for within string
    @param string string within which "thing" will be tested
    @param stPos the starting position from which "thing" will be tested
    @param endPos the end positon blah blah blah; by default is till end of string

    @returns index of the first occurance of the character "thing" from the starting postion
    @throws returns -1 if @a thing is not found

    */
  int find(unsigned char thing, std::string string, int stPos = 0, int endPos = 0);



 /** @param word String whose case maybe switched
     @param stCase determines which case format to be select

     @returns A string that has been formated
   */
  std::string CaseTo(std::string word, stCase strcase = stCase::NONE);
}
