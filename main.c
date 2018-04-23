#include <stdio.h>

#define N_ELEMENTS(arr) (sizeof(arr) / sizeof(*(arr)))

int min_element(int *arr, int size)
{
    int min = *arr;
    return min;
}


  int main()
  void print_array(int *arr, int size)
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2};

    const int min = min_element(arr,7);
    
    printf("Array: ");
    int i;
    for (i = 0; i < 7; ++i{
	for (i = 0; i < N_ELEMENTS(arr) ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
      }
	   
	   int main()
      {
	int arr[]={3,1,4,1,5,9.2};
	const int min= min_element(arr, N_ELEMENTS(arr) );
	print_array(arr,N_ELEMENTS(arr));   
    printf("Min element: %d\n", min);

    return 0;
      }
	   }
