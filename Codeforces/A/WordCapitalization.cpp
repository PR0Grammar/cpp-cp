#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

/*
    http://codeforces.com/contest/281/problem/A
*/

string s;

int main(){
    getline(cin, s);

    transform(s.begin(), s.begin() + 1, s.begin(), ::toupper);

    cout<<s<<endl;
    return 0;
}