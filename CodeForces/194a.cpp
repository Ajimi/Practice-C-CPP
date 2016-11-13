#include "iostream"
#include "cmath"
using namespace std;
int main(int argc, char const *argv[])
{
	int n , k ; 
	cin >> n >> k;
	cout << n-min(n,k-2*n);
	return 0;
}