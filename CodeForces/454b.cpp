#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;
vector<int> v;
int n;
bool isSorted(){
	return is_sorted(v.begin() , v.end());
}
int main(int argc, char const *argv[])
{
	int result ;
	cin >> n;
	for(int i = 0 ; i < n;i++){
		int k;
		cin >> k;
		v.push_back(k);
	}

	if(isSorted()){
		cout << 0;
		return 0 ;
	}
	else{
		int k = 0;
		while(!isSorted() && k < n ){
			rotate()
		}
		if(k < n)
			cout << k;
		else cout << -1;
	}

	return 0;
}