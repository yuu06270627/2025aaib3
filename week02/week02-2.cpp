///week02.2.cpp c++
///c++�r��
#include <iostream>///io��y�~��
#include <string>///�r��~��
using namespace std;
int main()
{
    cout<<"�п�J�Ʀr";
    string a, ans;///c++���r��
    cin>> a;
    for(int i=a.length()-1; i>=0; i--){
        ans +=a[i];
    }
    cout << a << ans;
}
