#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n , m , s = 0;
	cin >> n >> m;
    s = n + n/(m - 1);
    if (n%(m - 1) == 0)
        s -= 1;
    cout << s;
	return 0;
}