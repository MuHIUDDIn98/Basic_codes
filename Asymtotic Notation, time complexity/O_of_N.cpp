#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 0 ;i<n; i++){ // O(N)

        cout<<i<<" ";
        if(i%2==0){
            cout<<endl;
        }
    }

    return 0;
}