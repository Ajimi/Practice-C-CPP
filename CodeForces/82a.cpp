#include "iostream"
#include "vector"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	vector<string> v{"Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };
	cin >> n;
	while(n>5)
        n =(n/2)-2;
	cout << v[n-1];
	return 0;
}