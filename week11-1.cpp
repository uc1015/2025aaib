#include <stdio.h>
int main()
{
    printf("請輸入 1422: ");
    int n;
    scanf("%d", &n);
    ///Q:怎麼找到最大的位數?
    int ans=0;
    while(n>0){
        printf("現在撥出來的皮:%d\n",n%10);
        if(n%10>ans)ans=n%10;
        n=n/10;
    }
    printf("找到最大的皮,是: %d\n",ans);
}
