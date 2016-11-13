#include "iostream"
using namespace std;

int main(int argc, char const *argv[])
{
	int n, k =0;
	cin >> n;
	for(int i = 0 ;  i < n ;i++){
		string str;
		cin >> str;
		if(str[1] == '+')
			k++;
		else k--;
	}
	cout << k;
	return 0;
}