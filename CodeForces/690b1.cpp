#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n , M[50][50];
	cin >> n;
	for(int i = 0 ; i < n ;i++)
		for(int j = 0 ; j < n ;j++)
			cin >>M[i][j];

	for(int i = 0 ; i < n ;i++)
		for(int j = 0 ; j < n ;j++){
			if(i != 0 && j != 0 && j < n -1 && i < n-1){
				if(M[i][j] == 4){
					if(M[i][j+1] > 0 && M[i+1][j] > 0 && M[i][j-1] > 0 
						&& M[i-1][j] > 0 && M[i+1][j+1] > 0 && M[i-1][j-1] > 0 
						&& M[i-1][j+1] > 0 && M[i+1][j-1] > 0 ){
						cout << "Yes";
						return 0;
					}
				}
			}
		}
	cout << "No";
	return 0;
}