#include "iostream"
#include "vector"
using namespace std;


int main(int argc, char const *argv[])
{
	int n;
	vector<int> v;	
	cin >> n;
	for(int i = 0 ; i <n ; i++){
		int k;
		cin >> k;
		v.push_back(k);
	}
	for(int i = 0 ; i < n ;i++){
		for(int j = 0 ; j < n ;j++){
			for(int k = 0 ; k < n ; k++){
				if(k!=j && j!=i && k!=i )
					if(v[i] == v[k]+v[j]){
						cout << i+1 << " " << k+1 << " " << j+1;
						return 0;
					}
			}
		}
	}
	cout << -1;

	return 0;
}