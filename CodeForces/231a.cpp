#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n,count = 0;
	cin >> n ;
	for(int i = 0 ; i < n ;i++){
		int c =0;
		for(int j = 0 ; j < 3 ;j++){
			int k;
			cin >>k;
			if(k == 1)
				c++;
		}
		if(c> 1)
			count++;
	}
	cout << count;
	return 0;
}