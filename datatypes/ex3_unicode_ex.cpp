#include<iostream>
using namespace std;

int main()
{
	wchar_t ch[]={0x0936,0x093E,0x092E};
	setlocale(LC_ALL,"");
	wcout << ch[0] << ch[1] << ch[2] << endl;
	return 0;
}
