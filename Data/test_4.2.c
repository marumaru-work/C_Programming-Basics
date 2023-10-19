//繰り返し制御文に「while文」を使用した場合
//問題文：Aの配列をプログラム内で初期化し、4の倍数なら4で割り、4の倍数でなければ2を足したものを配列Bに格納したプログラムを作成せよ。
#include <stdio.h>

int main (void)
{
    int A[10] = {1, 3, 4, 6, 2, 7, 11, 8, 9, 12}; //初期化
    int B[10];
    int i = 0;

    while (i < 10) //繰り返し制御文（これを書かないと大問4は0点になってしまう！）
    {
        if (A[i] % 4 == 0)
        {
            if (i == 0)
            {
                B[i] = A[i] / 4;
                printf("B = {%d,", B[i]);
                i++; //インクリメントを忘れずに！
            }
            else if (i == 9)
            {
                B[i] = A[i] / 4;
                printf(" %d}\n", B[i]);
                i++; //インクリメントを忘れずに！
            }
            else
            {
                B[i] = A[i] / 4;
                printf(" %d,", B[i]);
                i++; //インクリメントを忘れずに！
            }
        }
        else
        {
            if (i == 0)
            {
                B[i] = A[i] += 2;
                printf("B = {%d,", B[i]);
                i++; //インクリメントを忘れずに！
            }
            else if (i == 9)
            {
                B[i] = A[i] += 2;
                printf(" %d}\n", B[i]);
                i++; //インクリメントを忘れずに！
            }
            else
            {
                B[i] = A[i] += 2;
                printf(" %d,", B[i]);
                i++; //インクリメントを忘れずに！
            }
        }
    }
    return (0);
}

/* 実行結果
B = {3, 5, 1, 8, 4, 9, 13, 2, 11, 3}
*/