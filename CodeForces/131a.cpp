#include "iostream"
#include "cctype"
using namespace std;
int main(int argc, char const *argv[])
{
	int count = 0;
	string str;
	cin >> str;
	int n = str.length();
	for(int i = 0 ; i < n ;i++){
		if(isupper(str[i]))
			count++;
	}
	if((islower(str[0]) && count == n-1)){
		cout << (char)toupper(str[0]);
		for(int i = 1 ; i < n ;i++)
			cout << (char) tolower(str[i]);
	}else if(count == n)
		for(int i = 0 ; i < n ;i++)
			cout << (char) tolower(str[i]);
		
	else cout << str;
	

	return 0;
}