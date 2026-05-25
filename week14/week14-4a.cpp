#include <stdio.h>

int main()
{
    printf("叫块2俱计(ex. 57 76): ");
    int a, b;
    scanf("%d%d", &a, &b);

    int ans = 1; ///程そ计箇砞1
    for (int k=1; k<=a; k++) { /// 硋代刚俱计
        printf("瞷代刚:%d\n",k);
        if (a%k==0 && b%k==0) ans = k; ///俱埃そ计
    }

    printf("程そ计琌:%d\n", ans);
    printf("%d / %d だ跑 %d / %d \n", a, b, a/ans, b/ans);

    return 0;
}
