#include "iostream"
#include "set"

using namespace std;
int main(int argc, char const *argv[])
{
	int n ;
	set<char> s;
	string str;
	cin >> str;
	n = str.length();
	for(int i = 0 ; i < n ; i++)
		s.insert(str[i]);
if(s.size()%2 == 0)
cout << "CHAT WITH HER!";
else
cout << "IGNORE HIM!";
return 0;
}