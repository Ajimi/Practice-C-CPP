#include "iostream"
using namespace std;
int main(int argc, char const *argv[]){
	cin >> x >> y;
    if(y > x && x >= -y) m = -2+y*4;
    if(y < x && x <= -y+1) m = -y*4;
    if(y <= x && x > -y+1) m = -3+x*4;
    if(y >= x && x < -y) m = -1-4*x;
    cout << m << endl;
    return 0;
}