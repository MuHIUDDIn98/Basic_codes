#include<iostream>
#include <string> //including string library to declear string variable
using namespace std;
/*ASCII CODE (0-127)
to represent 1 code need 7 bits 2^8
(A-65 Z-90) (a-97 z-122) (0-48 9-57)*/

/*Unicodes 
16-bit
2^16 */

int main() {
    char temp0=48;
    char tempA=65;
    char tempa=97;
    
    //chagned 
    

    char temp1='A';
    char Letter;


     for(int A=0;A<10;A++){
        Letter = temp0+A;
        cout<<Letter<<" ";
    }

    cout<<endl;

    for(int A=0;A<26;A++){
        Letter = tempA+A;
        cout<<Letter<<" ";
    }
    cout<<endl;
    for(int A=0;A<26;A++){
        Letter = tempa+A;
        cout<<Letter<<" ";
    }

    cout<<endl;

   


    string a = "I am learning C++";
    char ac[]={'I',' ','a','m',' ','l','e','a','r','n','i','n','g',' ', 'C','+','+',0};
    cout<<a<<endl;
    cout<<"Element of ac char array :"<<endl;
    for(int i=0;i<18;i++){
        cout<<ac[i];  
    }
    cout<<endl;
    cout<<"char temp = 65  :"<<tempA <<endl;
    cout<<"char temp ='A'  :"<<temp1<<endl;


    char alfa[]={'A','B','C','D'};
    cout<<"Element of alfa char array :"<<endl;
    for(int i=0;i<4;i++){
        cout<<alfa[i]<<" ";  

    }

    cout<<endl;

     char _alfa[]={65,66,67,68,69};
    cout<<"Element of _alfa char array :"<<endl;
    for(int i=0;i<5;i++){
        cout<<_alfa[i]<<" ";  

    }
    char name[]="Muhiuddin";
  cout<<"Element of char name array :"<<endl;
    for(int i=0;i<10;i++){
        cout<<name[i];  

    }
    cout<<endl;

    char _name[]={77,117,104,105,117,100,100,104,110,0};
    cout<<"Element of char _name array :"<<endl;
    for(int i=0;i<10;i++){
        cout<<_name[i];  

    }
    return 0;
}
