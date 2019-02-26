#include <iostream>
#include <cmath>
using namespace std;

int a = -1;
int b = -1;
int x;

int main(){

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin>>x;
            if(x){
                a = i;
                b = j;           
            } 
        }
    }

    cout<< abs(a - 2) + abs(b - 2) << endl;
    return 0;
}