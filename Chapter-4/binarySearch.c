#include <stdio.h>

int binarySearch(int arr[], int start, int end, int x)
{
    if (end >= start)
    {
        int mid = start + (end - start)/2;
        if (arr[mid] == x) return mid;

        if (arr[mid] > x) return binarySearch(arr, start, mid-1, x);

        return binarySearch(arr, mid+1, end, x);
    }

    return -1;
}

int main(int argc, char const *argv[])
{
	int arr[] = {3,7,9,34,76,231,876,1000,3456,34543}, query=100;
	int pos = binarySearch(arr, 0, 10, query);
	printf("%d\n", pos);
	return 0;
}