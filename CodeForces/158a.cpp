#include "iostream"
#include "vector"
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k,count = 0;
	vector<int> v;
	cin >> n >> k;
	for(int i = 0 ; i <n ; i++){
		int f; 
		cin >> f;
		v.push_back(f);
	}
	for(int i = 0 ; i < n ;i++){
		if(i != k ){
			if(i < k && v[i] > v[k])
				count++;
			else if(i > k && v[i] >= v[k])
				count++;
		}
	}
	cout << count;
	cin >> n;
	return 0;
}