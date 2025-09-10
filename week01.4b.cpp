///week01-4.cpp
#include <stido.h>

int main()
{
    int a,b;
    sacnf("%d %d", &a, &b);///c語言 讀資料
    int ans =0;
    for(int i=a; i<=b;i++){
        if(i%3==0)ans += i;
    }
    printf("%d",ans);///c語言 印資料
}
