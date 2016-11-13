#include "iostream"
#include "algorithm"
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	cin >> str;
	int cnt = count(str.begin(),str.end(),'4') + count(str.begin(),str.end(),'7'); 
	(cnt == 4 ||cnt == 7)? cout << "YES" : cout << "NO";
	return 0;
}