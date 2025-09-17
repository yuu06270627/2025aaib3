///week02.2.cpp c++
///c++字串
#include <iostream>///io串流外掛
#include <string>///字串外掛
using namespace std;
int main()
{
    cout<<"請輸入數字";
    string a, ans;///c++的字串
    cin>> a;
    for(int i=a.length()-1; i>=0; i--){
        ans +=a[i];
    }
    cout << a << ans;
}
