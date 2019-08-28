/* Second largest element in a sorted array */
#include <stdio.h>
#include <limits.h>

int main()
{
	/* Sorted array */
    int arr[] = {9, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = 10;
    int first, second, i = 0;
	first = second = INT_MAX;

	if(size < 2) {
        printf("Array size is less than two, second largest doesnot exist\n");
		return 0;
    }
	
	/* while() is to find the same large numbers in the sorted array */
	while(i < (size - 1)) {
		/* Compare first two indices of array and update the first and second */
		if(arr[i] != arr[i + 1]) {
			if (arr[i] > arr[i + 1]) {
				first = arr[i];
				second = arr[i + 1];
			}
			else {
				first = arr[i + 1];
				second = arr[i];
			}
		}

		i++;
	}

	for(i = 0; i < size; i++) {
		if(arr[i] > first) {
			second = first;
			first = arr[i];
		}
		else if((arr[i] != first) && (arr[i] > second)) {
			second = arr[i];
		}
	}

	if (second == INT_MAX) { 
		printf("There is no second largest element\n");
	}
	else {
		printf("The second largest element is %d\n", second);
	}
}
