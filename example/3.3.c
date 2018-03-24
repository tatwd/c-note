/*
 * 折半查找：在 v[0] <= v[1] <= v[2] <= ... <= v[n-1] 中查找
 */
int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n -1;
    while (low < high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;  /* 找到匹配项 */
    }
    return -1;  /* 未找到匹配项 */
}