///week03-1.cpp
///c++ 陣列
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout<<"請輸入4個數字:";
    vector<int> a;
    int now;
    for(int i=0; i<4;i++){
        cin >> now;
        a.push_back(now);
    }
    for(int i=0; i<a.size();i++) {
        cout << a[i] << ' ';
    }
    cout<<"現在程式碼裡 又推入了99 88 兩個數字 結果呢\n";

    a.push_back(99);
    a.push_back(88);
    for(int i=0; i<a.size(); i++){
        cout << a[i] << ' ';
    }
}
