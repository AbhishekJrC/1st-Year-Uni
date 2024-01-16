#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
    int id;
    char *name;
    int age;
    int height;
    int weight;
};

// Function to convert weight from pounds to kilograms
float convertToKilograms(int weightInPounds) {
    return weightInPounds * 0.453592;
}

// Function to read data from a file and store it in a dynamically allocated array of struct person
struct person* readDataFromFile(int* n) {
    FILE* file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return NULL;
    }

    fscanf(file, "%d", n);

    struct person* arr = (struct person*)malloc(*n * sizeof(struct person));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        fclose(file);
        return NULL;
    }

    int i;
    for (i = 0; i < *n; i++) {
        fscanf(file, "%d %ms %d %d %d", &arr[i].id, &arr[i].name, &arr[i].age, &arr[i].height, &arr[i].weight);
    }

    fclose(file);
    return arr;
}

// Function to display the weight of the youngest person
void displayWeightOfYoungest(struct person arr[], int n) {
    int i;
    int youngest = 0;

    for (i = 1; i < n; i++) {
        if (arr[i].age < arr[youngest].age)
            youngest = i;
    }

    float weightInKg = convertToKilograms(arr[youngest].weight);
    printf("Weight of youngest student: %.2f kg\n", weightInKg);
}

// Function to swap two person structures
void swap(struct person* a, struct person* b) {
    struct person temp = *a;
    *a = *b;
    *b = temp;
}

// Function to implement Min-Heapify operation
void minHeapify(struct person arr[], int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left].age < arr[smallest].age)
        smallest = left;

    if (right < n && arr[right].age < arr[smallest].age)
        smallest = right;

    if (smallest != i) {
        swap(&arr[i], &arr[smallest]);
        minHeapify(arr, n, smallest);
    }
}

// Function to implement Max-Heapify operation
void maxHeapify(struct person arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left].weight > arr[largest].weight)
        largest = left;

    if (right < n && arr[right].weight > arr[largest].weight)
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

// Function to build a min-heap based on age
void buildMinHeap(struct person arr[], int n) {
    int i;
    for (i = (n / 2) - 1; i >= 0; i--)
        minHeapify(arr, n, i);
}

// Function to build a max-heap based on weight
void buildMaxHeap(struct person arr[], int n) {
    int i;
    for (i = (n / 2) - 1; i >= 0; i--)
        maxHeapify(arr, n, i);
}

int main() {
    struct person* arr = NULL;
    int n = 0;
    int option;

    while (1) {
        printf("\nMAIN MENU (HEAP)\n");
        printf("1. Read Data\n");
        printf("2. Create a Min-heap based on the age\n");
        printf("3. Create a Max-heap based on the weight\n");
        printf("4. Display weight of the youngest person\n");
        printf("5. Insert a new person into the Min-heap\n");
        printf("6. Delete the oldest person\n");
        printf("7. Exit\n");
        printf("Enter option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                arr = readDataFromFile(&n);
                if (arr != NULL)
                    printf("Data read from file successfully.\n");
                break;

            case 2:
                buildMinHeap(arr, n);
                printf("Min-heap created based on age.\n");
                break;

            case 3:
                buildMaxHeap(arr, n);
                printf("Max-heap created based on weight.\n");
                break;

            case 4:
                displayWeightOfYoungest(arr, n);
                break;

            case 5:
                // Implement insertion into min-heap
                break;

            case 6:
                // Implement deletion from min-heap
                break;

            case 7:
                free(arr);
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid option. Please try again.\n");
        }
    }
}