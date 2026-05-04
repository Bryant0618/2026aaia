#include <stdio.h>

int main()
{
    int a[10] = {3, 0, 1, 8, 7, 2, 5, 4, 6, 9}; /// 影片裡的順序


    for (int i=0; i<10; i++) printf("%d ", a[i]); /// 印出來看
    printf("\n");

    for (int k=0; k<10-1; k++) {
        for (int i=0; i < 10-1; i++) {
            if (a[i] > a[i+1]) { /// 大小不對，就交換
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    // 印出排序後的結果
    for (int i=0; i<10;i++) printf("%d ", a[i]); /// 印出來看
    printf("\n");


}
