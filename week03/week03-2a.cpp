//week03-2a
#include <stdio.h>

int main()
{
	char a[5];
	scanf("%s",a);
	int bad = 0;
	for(int i=0; i<4; i++){
		if(a[i] != a[4-1-i]) bad = 1;
	}
	if(bad==1) printf("NO\n");
	else printf("YES\n");
}
