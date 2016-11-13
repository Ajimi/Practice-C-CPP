#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;


int main(int argc, char const *argv[])
{
	int n , m , k ;
	vector<int> v;
	cin >> n >> m >> k;
	for(int i = 0 ; i < n ; i++){
		int f;
		cin >> f;
		f--;
		v.push_back(f);
	}
	sort(v.rbegin(), v.rend());
	int i = 0;
	while(m>k){
		m-=v[i];
		i++;
		if(i>n){
			cout <<"-1";
			return 0;
		}
	}
	cout << i;
	return 0;
}