#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define N 100
zadanie2()
{
    double znach;
    float A[N];
    double x = 1;
    double shag = 2. / N;
    double sumpl = 0, sum=0;
    int cnt1 = 0, cnt2 = 0;
    printf("Massive A:\n");
    while (x <= 3)
    {
        for (int i = 0; i < N; i++)
        {
            znach = pow(x, 3) - 4 * pow(x, 2) + 2;
            sum += znach;
            if (znach > 0) {
                sumpl += znach;
                cnt1 += 1;
            }
            else
            {
                cnt2 += 1;
            }
            A[i] = znach;
            /*printf("a[%d] = %lf\n", i + 1, znach);*/
            x += shag;
        }
        printf("Количество положительных элементов: %d\nКоличество отрицательных элементов: %d\n", cnt1, cnt2);
    }
    if (cnt1 > 0) {
        double sr = sumpl / (double)cnt1;
        printf("%lf", sr);
    }
    else
    {
        printf("Среднее значение положительных элементов = 0\n");
    }
    printf("Среднее значение: %lf", sum / 100);
}
zadanie3()
{
    int a[100], n, i;
    int sum, cnt;
    printf("Введите количество элементов в массиве, n = ");
    scanf("%d", &n);
    printf("Массив A \n");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    sum = 0;
    cnt = 0;
    int state = 0;
    for (i = 0; i < n; i++) {
        if (a[i] < 0)
            state++;
        if (state == 2)
            break;
        if (a[i] >= 0 && state == 1)
        {
            sum += a[i];
            cnt += 1;
        }
    }
    printf("Среднее значение: %.1f", (float)sum / (float)cnt);
}
void main()
{
    setlocale(LC_ALL, "RU");
    zadanie2();
   /* zadanie3();*/
}