#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	long long int n , m;
	cin>> n >> m;
	//Copied This i did not find the solution for this problem but at least I Tried
	cout<<(n/m)*(n/m-1)/2*(m-n%m)+(n/m+1)*(n/m)/2*(n%m)<<' '<<(n-m+1)*(n-m)/2<<endl;
	return 0;
}