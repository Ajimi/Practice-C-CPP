#include "iostream"
#include "vector"
using namespace std;

int main(int argc, char const *argv[])
{
	long long int n , m ;
	vector<long long int> v;
	cin >> n >> m;
	v.push_back(1);
	for(long long int i = 0 ; i < m ; i++){
		long long int k;
		cin >> k;
		v.push_back(k);
	}
	long long int sum = 0;
	for(long long int i = 1 ; i <= m ;i++){
		if(v[i]>=v[i-1]){
			sum+=v[i]-v[i-1];
		}else 
		sum+=v[i]-v[i-1]+n;
	}

	cout << sum;
	return 0;
}