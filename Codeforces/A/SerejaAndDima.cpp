#include <iostream>
using namespace std;

int n;

int main(){
    cin>>n;
    int cards[n];
    for(int i = 0; i < n; i++){
        cin>>cards[i];
    }

    int start = 0;
    int end = n - 1;
    bool sejsTurn = true;
    int sejPoints = 0;
    int dimaPoints = 0;
    while(start <= end){
        int max = -1;

        if(cards[start] > cards[end]){
            max = cards[start];
            start++;
        }else{
            max = cards[end];
            end--;
        }

        if(sejsTurn){
            sejPoints += max;
            sejsTurn = false;
        }else{
            dimaPoints += max;
            sejsTurn = true;
        }
    }

    cout<<sejPoints<<" "<<dimaPoints<<endl;
    return 0;
}