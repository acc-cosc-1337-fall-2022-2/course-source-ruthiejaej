//write include statement for decisions header
#include "decisions.h"
#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::string;
//Write code for function(s) code here
string get_letter_grade_using_if(int a){
    string k;
    if ( a>=90 ){
        k="A";
    }
    else if (a >= 80){
        k="B";
    }
    else if (a >= 70){
        k="C";
    }
    else if (a >=60){
        k="D";
    }
    else if (a<60){
        k="F";
    }
    else{
        k="Invalid Grade";
    }


    return k;
}



string get_letter_grade_using_switch(int b){
    string str;
    switch(b/10) {
       case 10:
       case 9 :
           str= "A";
           break;
       case 8 :
           str= "B";
           break;
       case 7 :
            str= "C";
            break;
       case 6 :
           str="D";
           break;
       case 5 :
       case 4 :
       case 3 :
       case 2 :
       case 1 :
       case 0 :
           str="F";
           break;
       default :
           str= "Invalid entry";  
    }
    return str;
}
