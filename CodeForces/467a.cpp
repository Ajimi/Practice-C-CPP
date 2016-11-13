#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n,count = 0;
	cin >> n;
	for(int i = 0 ; i < n ;i++){
		int p,q;
		cin >> p >> q;
		if(q-p>1)
			count++;
	}
	cout << count;
	return 0;
}