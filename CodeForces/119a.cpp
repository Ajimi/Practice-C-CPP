#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int p1=0,p2=0,a,b,n,k;
	cin >> a >> b >> n;
	while(n>0){
		k = __gcd(a,n);
		n-=k;
		if(n==0){
			cout << "0";
			return 0;
		}
		k = __gcd(b,n);
		n-=k;
		if(n==0){
			cout << "1";
			return 0;
		}
	}
}