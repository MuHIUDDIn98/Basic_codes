#include<iostream>
using namespace std;

int main()
{
    int A[]={3,5,-2,9,-4,10,-24,19,81,-7,12,13};
    int pcount=0;
    int ncount=0;
    
    // write a loop to count positive and negative numbers
    
    for(auto x:A){
        if(x>0) pcount++;
        if(x<0) ncount++;
        
    }
    
    cout<<"Number of positive number in array :"<<pcount<<endl;
     cout<<"Number of negative number in array :"<<ncount;

    return 0;
}