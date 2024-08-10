#include <stdio.h>
#include <stdlib.h>

void shellsort(int v[], int n);
void print_int_array(int a[], int len);
void itoa(int i);

int main(int argc, char *argv[])
{
    int len = argc - 1;
    int v[len];
    for (int i = 1; i < argc; i++) {
        v[i - 1] = atoi(argv[i]);
    }

    printf("I know how to use the three shells!\n");
    printf("\n---\n");
    shellsort(v, len);
    return 0;
}

void shellsort(int v[], int n)
{
    int gap, i, j, temp;

    for (gap = n / 2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
                printf("> ");
                print_int_array(v, n);
            }
        }
    }
}

void print_int_array(int a[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%3d|", a[i]);
    printf("\n");
}
