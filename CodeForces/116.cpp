#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int sum = 0, mx = 0,n;
	cin >> n;
	for(int i = 0 ; i < n ;i++){
		int a , b;
		cin >> a >> b;
		sum-=a;
		mx=max(mx,sum);
		sum+=b;
		mx=max(mx,sum);
	}
	cout << mx;
	return 0;
}