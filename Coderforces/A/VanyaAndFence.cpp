#include <iostream>
using namespace std;

long long n, h, x;
long long ans = 0;

int main(){
	cin>>n>>h;

	while(cin>>x){
		if(x <= h)
			ans++;
		else
			ans+=2;
	}
	cout<<ans<<endl;
	return 0;
}