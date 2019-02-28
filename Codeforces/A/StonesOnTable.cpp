#include <iostream>
using namespace std;

int n;

int main(){
    cin>>n;

    char stones[n];
    cin>>stones;

    char lastSeen = 'M';
    int stonesRemoved = 0;

    for(int i = 0; i < n; i++){
        if(stones[i] == lastSeen){
            stonesRemoved++;
        }else{
            lastSeen = stones[i];
        }
    }
    cout<<stonesRemoved<<endl;
    return 0;
}