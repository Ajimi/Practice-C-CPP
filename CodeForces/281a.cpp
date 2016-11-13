#include "iostream"
#include "cctype"
int main(int argc, char const *argv[])
{
	std::string str;
	std::cin >> str;
	str[0] = toupper(str[0]);
	std::cout <<str; 
	return 0;
}