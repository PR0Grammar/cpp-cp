#include <iostream>
using namespace std;

/*
    http://codeforces.com/contest/344/problem/A
*/

int n;
char mag[2];
int mp = 0;
int c = 0;

int main(){
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>mag;

        if((mp == 0 || mp == 1) && (mag[0] == '0' && mag[1] == '1')){
            c++;
            mp = 2;
        }
        else if((mp == 0 || mp == 2) && (mag[0] == '1' && mag[1] == '0')){
            c++;
            mp = 1;
        }
    }
    cout<<c<<endl;
    return 0;
}
