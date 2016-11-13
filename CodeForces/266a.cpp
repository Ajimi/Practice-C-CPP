#include "iostream"
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	int n = str.length(), count = 0;
	cin >> n;
	cin >> str;
	for(int i = 0 ; i < n-1;i++){
		if(str[i]== str[i+1])
			count++;
	}
	cout << count;
	return 0;
}