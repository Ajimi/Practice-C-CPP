#include "iostream"
#include "string"

using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	cin >> str;
	int n = str.length();
	for(int i = 0 ; i < n ; )
		if(str[i]=='W' && str[i+1]=='U'&& str[i+2]=='B')
			i+=3;
		else
			if(str[i+1]=='W' && str[i+2]=='U'&& str[i+3]=='B'){
			cout << str[i];
			i++;
		}else{
			cout << str[i];
			i++;
		}	
	return 0;
}