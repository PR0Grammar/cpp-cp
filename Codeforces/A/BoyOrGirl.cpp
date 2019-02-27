#include <iostream>
#include <string>
using namespace std;

string s;

int main(){
    getline(cin, s);
    int charCount[26] = {0};

    int n = s.length();

    for(int i = 0; i < n; i++){
        charCount[(s[i] - 97)] = 1;
    }
    
    int c = 0;

    for(int j = 0; j < 26; j++){
        if(charCount[j]){
            c += 1;
        }
    }
    if(c % 2 == 0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}