#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int n;
printf("Enter The Number Of Elements (n) : ");
scanf("%d", &n);
int *arr = (int *)malloc(n * sizeof(int));
srand(time(NULL));

printf("Random Array Elements are as follows: ");
for (int i = 0; i < n; i++){
arr[i] = rand() % 100;
printf("%d", arr[i]);
}
printf("\n");

int smallest = arr[0];
int largest = arr[0];

for (int i = 1; i < n; i++){
if (arr[i] < smallest){
smallest = arr[i];
}
if (arr[i] > largest){
largest = arr[i];
}
}

printf("Smallest Number: %d\n", smallest);
printf("Largest Number: %d\n", largest);

free(arr);

return 0;
}