#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int k , l , m , n , d , count = 0;
	cin >>k>>l>>m>>n>>d;
	for(int i =0 ; i <= d ; i++){
		if(i%k != 0 &&i%l != 0 &&i%m != 0 &&i%n != 0)
			count++;
	}
	cout << d-count;
	return 0;
}