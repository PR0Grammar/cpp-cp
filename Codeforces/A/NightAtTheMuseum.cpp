#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

string s;

int main(){
    getline(cin, s);

    int n = s.length();
    char pos = 'a';
    long long moves = 0;

    for(int i = 0; i < n; i++){
        moves += ((long long) min(min(abs(s[i] - pos), abs(s[i] - pos - 26)), abs(s[i] - pos + 26)));
        pos = s[i];
    }
    cout<<moves<<endl;
    return 0;
}