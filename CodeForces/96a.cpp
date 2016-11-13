#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	string str;
	int count = 1;
	cin >> str;
	char old=str[0];
	for(int i = 1 ; i < str.length() ;i++){
		if(str[i]==old){
			old = str[i];
			count++;
		}
		else {
			count = 1;
			old =str[i];
		}
		if(count == 7){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}