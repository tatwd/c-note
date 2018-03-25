#include <stdio.h>

int binsearch(int x, int v[], int n);

int main()
{
    int index;
    int v[6] = {1, 2, 3, 4, 5, 6};

    index = binsearch(3, v, 6);
    printf("%d\n", index);

    return 0;
}

/*
 * 折半查找：在 v[0] <= v[1] <= v[2] <= ... <= v[n-1] 中查找
 */
int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    mid = (n - 1) / 2;
    low = x > v[mid] ? mid + 1 : 0;
    high = x < v[mid] ? mid -1 : n - 1;

    /* 循环内部只执行了一次测试 */
    while (low < high) {
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;  /* 找到匹配项 */
    }
    return -1;  /* 未找到匹配项 */
}
