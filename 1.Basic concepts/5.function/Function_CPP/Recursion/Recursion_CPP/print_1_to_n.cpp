#include<bits/stdc++.h>
using namespace std;

void print_One_to_N(int n){
    if(n<= 0) return;
    print_One_to_N(n-1);
    cout<<" " << n;
}

int main(){
    print_One_to_N(10);
    cout<<endl;
    return 0;
}