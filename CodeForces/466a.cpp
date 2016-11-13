#include "iostream"
#include "cmath"
using namespace std;
int main(int argc, char const *argv[])
{
	int n ,m ,a ,b;
	cin >>n>>m>>a>>b;
	if(m*a <=b)
		cout << n * a ;
	else
		cout << (n/m) * b + min((n%m)*a,b);
	return 0;
}