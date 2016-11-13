#include "iostream"
using namespace std;

bool tprime(long long int a){
	int k = a / 2 , count = 0;
	for(int i = 1 ; i <= k ;i++){
		if(a % i == 0)
			count ++;
	}
	return count == 2 ; 
}
int main(int argc, char const *argv[])
{
	long long int n , x;
	cin >> n;
	for(int i = 0;i<n; i++){
		cin>> x;
		if(tprime(x))
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
	return 0;
}