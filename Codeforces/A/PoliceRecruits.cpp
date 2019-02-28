#include <iostream>
using namespace std;

int n;

int main(){
    cin>>n;

    int events[n];

    for(int i = 0; i < n; i++)
        cin>>events[i];

    int crimes = 0;
    int recruits = 0;

    for(int i = 0; i < n;i++){
        if(events[i] == -1){
            if(recruits <= 0)
                crimes++;
            else
                recruits--;
        }
        else{
            recruits += events[i];
        }
    }

    cout<<crimes<<endl;
    return 0;
}