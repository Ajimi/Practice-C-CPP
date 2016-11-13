#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int main(int argc, char const *argv[])
{
	int n , m;
	vector<int> v;
	cin >> n >> m;
	for(int i = 0 ; i < m ; i++){
		int k; cin >> k;
		v.push_back(k);
	}

	sort(v.begin(),v.end());
	int best = 800000000;
	for(int i = 0 ; i <= m-n ; i++){
		best = min(best,v[i+n-1]-v[i]); 
	}
	cout << best;
	return 0;
}