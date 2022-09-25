#include <iostream>


using namespace std;
string get_letter_grade_using_if(int a);
string get_letter_grade_using_switch(int b);

int main()
{
    int marks;
    string p;
   
    cout<<"Enter marks as a whole number>>";
    cin>>marks;
 
       if(marks<0 || marks>100){
        cout<<"invalid marks\n";
 
    }
    else 
    {
          
        p=get_letter_grade_using_switch(marks);
            cout<<p <<" Grade generated using SWITCH";
        
    }
    
      
    

    return 0;
}

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
        k="Invalid marks";
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

//end
