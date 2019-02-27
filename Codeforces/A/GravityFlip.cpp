#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

/*
    http://codeforces.com/contest/405/problem/A
*/

int n;

int main(){
    cin>>n;

    int cols[n];

    for(int i = 0; i < n; i++)
        cin>>cols[i];

    sort(cols, cols + n);

    for(int i = 0; i < n; i++){
        cout<<cols[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}