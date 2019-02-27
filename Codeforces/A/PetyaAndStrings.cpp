#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

string s1, s2;
int c = 0;

int main(){
    getline(cin, s1);
    getline(cin, s2);

    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    int n = s1.length();
    int i;
    for(i = 0; i < n; i++){
        if(s1[i] > s2[i]){
            cout<<1<<endl;
            break;
        }
        else if(s2[i] > s1[i]){
            cout<<-1<<endl;
            break;
        }
    }
    if(i == n){
        cout<<0<<endl;
    }
    return 0;
}