#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>> n;
	vector<int> v(n);
	for(int i = 0 ; i < n ;i++){
		cin>> v[i];
	}
	int begin = 1 , end = 1 , pos;
	boolean flag = true;
	for(int i = 1 ; i < n ;i++){
		if(v[i]>v[i-1]){
			count++;
			pos = i;
		}
	}
	return 0;
}