#include <iostream>
#include <string>
using namespace std;

int strips[4];
string s;

int main(){
    cin>>strips[0];
    cin>>strips[1];
    cin>>strips[2];
    cin>>strips[3];
    cin>>s;

    int n = s.length();
    long long calories = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            calories += ((long long) strips[0]);
        }
        else if(s[i] == '2'){
            calories += ((long long) strips[1]);
        }
        else if(s[i] == '3'){
            calories += ((long long) strips[2]);
        }
        else{
            calories += ((long long) strips[3]);
        }
    }
    
    cout<<calories<<endl;
    return 0;
}