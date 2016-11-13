#include "iostream"

using namespace std;
int main(int argc, char const *argv[])
{
	long long n,m;
	cin >> n >> m;
	long long h = (n+1)/2;
	(m <= h) ? cout << (m-1)*2+1 : cout << (m-h)*2;
	return 0;
}