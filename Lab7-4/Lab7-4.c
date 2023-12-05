#include "Lab7-4.h"
void BulidArray(int Array[N])
{
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        Array[i] = rand() % 100 + 1;
    }
}
void QuickSort(int Array[N], int n)
{
    STACK s;
    makeNullStack(&s);
    push(0, &s);
    push(n - 1, &s);
    while (!Empty(s))
    {
        int r = top(s);
        pop(&s);
        int l = top(s);
        pop(&s);
        int key = PartSort(Array, l, r);
        if (l < key - 1)
        {
            push(l, &s);
            push(key - 1, &s);
        }
        if (r > key + 1)
        {
            push(key + 1, &s);
            push(r, &s);
        }
    }
}
int PartSort(int Array[N], int low, int high)
{
    int i = low;
    int j = high;
    int key = Array[i];
    while (i < j)
    {
        while (i < j && Array[j] >= key)
        {
            j--;
        }
        Array[i] = Array[j];
        while (i < j && Array[i] <= key)
        {
            i++;
        }
        Array[j] = Array[i];
    }
    Array[i] = key;
    return i;
}
void PrintArray(int Array[N])
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", Array[i]);
    }
}