#include <iostream>
using namespace std;

int n;
int a = 0;
int d = 0;

int main(){
    cin>>n;
    char str[n];
    cin>>str;

    for(int i = 0; i < n; i++){
        if(str[i] == 'A')
            a++;
        else if(str[i] == 'D')
            d++;
    }
    if(a > d)
        cout<<"Anton"<<endl;
    else if(d > a)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    return 0;
}