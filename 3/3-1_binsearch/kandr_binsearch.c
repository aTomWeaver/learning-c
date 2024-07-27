#include <stdio.h>

int binsearch(int x, int v[], int n);

int main(void)
{
    int array[] = {1, 2, 4, 6, 8, 9, 10};
    int search_num = 10;

    int idx;
    if ((idx = binsearch(search_num, array, 7)) >= 0) {
        printf("%d found at index %d.\n", search_num, idx);
    } else {
        printf("%d not found.\n", search_num);
    }

    return 0;
}

int binsearch(int x, int v[], int n)
{
    int low, mid, high;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid]) {
            high = mid - 1;
        } else if (x > v[mid]) {
            low = mid + 1;
        } else {
            return mid;     // found match
        }
    }
    return -1;              // no match

}
