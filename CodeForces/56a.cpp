#include "iostream"
#include "algorithm"
#include "set"
#include "sstream"
using namespace std;
bool digit(string str){
	for(int i = 0 , n = str.length(); i < n ; i++){
		if(!isdigit(str[i]))
			return false;
	}
	return true;
}
int main(int argc, char const *argv[])
{
	int n, count = 0;
	cin >> n ;
	set<string> se { "ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE" };
	for(int i = 0 ; i < n ; i++){
		string str;
		cin >> str;
		istringstream ss(str);
		if(digit(str)){
			int k;
			ss >> k;
			if(k < 18)
				count++;
		}else if(se.count(str)!=0)
			count++;
	}
	cout << count;
	return 0;
}