#include<bits/stdc++.h>
using namespace std;
int * sort_it(int n){

    int* array = new int[n];
    for(int i=0; i<n; i++){

        cin>>array[i];

    }

    sort(array,array+n, greater<int>());

    return array;

}
int main(){
    int n;
    cin>>n;
    int *p = sort_it(n);
    for(int i=0; i<n; i++){
        cout<<p[i]<<" ";
    }
    return 0;
}
