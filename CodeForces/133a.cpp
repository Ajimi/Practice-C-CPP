#include "iostream"
using namespace std;

bool hq(char c){
return c== 'H' || c=='9' || c=='Q';
}
int main(int argc, char const *argv[])
{
	string str;
	cin >>str;
	int n = str.length();
	for(int i = 0 ; i < n ;i++){
		if(hq(str[i])){
			cout<< "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}