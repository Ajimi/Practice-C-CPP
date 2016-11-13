#include "iostream"
using namespace std;

int main(int argc, char const *argv[])
{
	int n , m ;
	cin >> n >> m;
	if(n > m){
		n = m;
	}
	if(n%2==0)
		cout << "Malvika";
	else
		cout << "Akshat";
	return 0;
}