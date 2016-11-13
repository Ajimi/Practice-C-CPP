#include "iostream"
#include "cmath"

using namespace std;
int r1 , c1 , r2, c2;
int rook(){
	if(r1 == r2 || c2 == c1)
		return 1;
	else return 2;
}
int king(){
	return max(abs(r1-r2),abs(c1-c2));
}
int bishop(){
	if((r1+c1)%2 != (r2+c2)%2)
		return 0;
	else if(r1+c1 == r2+c2 || r1-c1== r2-c2)
		return 1;
	else
		return 2;
}

int main(int argc, char const *argv[])
{
	cin >> r1 >> c1 >> r2>> c2;
	cout << rook() << " " << bishop() << " " << king();


	return 0;
}