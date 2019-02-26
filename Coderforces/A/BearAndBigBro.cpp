#include <iostream>
using namespace std;

typedef long long ll;

ll a;
ll b;
int c = 0;

int main(){
    cin>>a;
    cin>>b;

    while(a <= b){
        a *= 3;
        b *= 2;
        c++;
    }
    cout<<c<<endl;
    return 0;
}