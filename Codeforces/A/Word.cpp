#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;


/*
    http://codeforces.com/contest/59/problem/A
*/

string s;

int main(){
    getline(cin, s);

    int u = 0;
    int l = 0;
    int n = s.length();

    for(int i = 0; i < n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            u++;
        else
            l++;
    }

    if(l >= u)
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    else
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
    return 0;
}