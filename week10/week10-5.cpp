#include <stdio.h>

int main()
{
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; /// 陣列宣告

    for (int i=0; i<10; i++) { /// 逐一印出 For 迴圈印陣列
        printf("%d ",  a[i] ); /// 空格隔開
    }
    printf("\n"); /// 跳行
for(int k=0; k<20; k++){

    for (int i=0; i < 10-1; i++) { /// 小心，有個 10-1 的減 1
        if (a[i] < a[i+1]) { /// 如果大小不 對
            int temp = a[i]; /// 就交換
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }

    for (int i=0; i<10; i++) { /// 逐一印出 For 迴圈印陣列
        printf("%d ", a[i]); /// 空格隔開
    }
    printf("\n"); /// 跳行
    }
}

