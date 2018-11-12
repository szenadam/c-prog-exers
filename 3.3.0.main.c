#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int binsearch(int x, int v[], int n);

int main() {
    int a[5] = {1,2,3,4,5};
    int result_position = binsearch(3, a, 5);
    assert(result_position == 2);
    printf("%d\n", result_position);

    return 0;
}

int binsearch(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    while(low <= high){
        mid = (low+high)/2;
        if (x < v[mid])
            high = mid+1;
        else if (x > v[mid])
            low = mid + 1;
        else /*found match*/
            return mid;
    }
    return -1; /*no match*/
}
