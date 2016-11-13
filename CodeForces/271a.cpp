#include "iostream"
#include "set"
#include "sstream"
#include "string"
using namespace std;
string str;
int siz(string str){
	set<char> s;
	int n = str.length();
	for(int i = 0 ; i < n ;i++){
		s.insert(str[i]);
	}
	return s.size();
}
int main(int argc, char const *argv[])
{
	
	int k;
	set<char> Set;
	cin >> str;
	istringstream ss (str);
		ss>>k;
		k++;
		str = to_string(k);
	while(siz(str) != 4){
		istringstream ss (str);
		ss>>k;
		k++;
		str = to_string(k);
	}

	cout << str;


	return 0;
}