#include "iostream"
#include "set"

using namespace std;
int main(int argc, char const *argv[])
{
	set<char> s;
	char k;
	cin >> k;

	while(k!='}'){
		cin >> k;
		if(k>='a' && k <= 'z'){
			s.insert(k);
		}
	}
	cout << s.size();	
	return 0;
}