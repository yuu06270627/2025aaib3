//weel 03-2b.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	int bad = 0;
	for(int i=0; i<4; i++){
		if(a[i] !=a[4-1-i]) bad = 1;
	}
	if(bad==1) cout << "NO\n";
	else cout <<"YES\n";
}
