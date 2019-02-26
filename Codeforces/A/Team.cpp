#include <iostream>
using namespace std;

int c = 0;
int n,x,y,z;

int main(){
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>x;
        cin>>y;
        cin>>z;
        if(x + y + z >= 2)
            c++;
    }
    cout<<c<<endl;
    return 0;
}