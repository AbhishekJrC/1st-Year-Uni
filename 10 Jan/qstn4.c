#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
    int id;
    char *name;
    int age;
    int height;
    double weight; // Weight is stored as a double for conversion to kg
};

// Function to swap two struct person elements
void swap(struct person *a, struct person *b) {
    struct person temp = *a;
    *a = *b;
    *b = temp;
}

// Function to create a min-heap based on age
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

// Function to create a max-heap based on weight
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

// Function to build a heap based on age
void buildMinHeap(struct person arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        minHeapify(arr, n, i);
}

// Function to build a heap based on weight
void buildMaxHeap(struct person arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        maxHeapify(arr, n, i);
}

int main() {
    int option, n = 0;
    struct person *students = NULL;

    while (1) {
        printf("\nMAIN MENU (HEAP)\n");
        printf("1. Read Data\n");
        printf("2. Create a Min-heap based on age\n");
        printf("3. Create a Max-heap based on weight\n");
        printf("4. Display weight of the youngest person in kg\n");
        printf("5. Insert a new person into the Min-heap\n");
        printf("6. Delete the oldest person\n");
        printf("7. Exit\n");
        printf("Enter option: ");
        scanf("%d", &option);

        switch (option) {
            case 1: // Read Data
                if (students != NULL) {
                    free(students);
                    students = NULL;
                }

                FILE *file = fopen("data.txt", "r");
                if (file == NULL) {
                    printf("Failed to open the file.\n");
                    break;
                }

                fscanf(file, "%d", &n);
                students = (struct person *)malloc(n * sizeof(struct person));

                for (int i = 0; i < n; i++) {
                    students[i].name = (char *)malloc(100 * sizeof(char));
                    fscanf(file, "%d %s %d %d %lf", // Read weight as double
                           &students[i].id, students[i].name,
                           &students[i].age, &students[i].height, &students[i].weight);
                }

                fclose(file);
                printf("Data has been read from 'data.txt'.\n");
                break;

            case 2: // Create a Min-heap based on age
                if (students == NULL) {
                    printf("Please read data first.\n");
                    break;
                }
                buildMinHeap(students, n);
                printf("Min-heap based on age has been created.\n");
                break;

            case 3: // Create a Max-heap based on weight
                if (students == NULL) {
                    printf("Please read data first.\n");
                    break;
                }
                buildMaxHeap(students, n);
                printf("Max-heap based on weight has been created.\n");
                break;

            case 4: // Display weight of the youngest person in kg
                if (students == NULL) {
                    printf("Please read data first.\n");
                    break;
                }
                double youngest_weight_kg = students[0].weight / 2.20462; // Convert weight to kg
                printf("Weight of the youngest student: %.2f kg\n", youngest_weight_kg);
                break;

            case 5: // Insert a new person into the Min-heap
                if (students == NULL) {
                    printf("Please read data first.\n");
                    break;
                }
                if (n >= 100) {
                    printf("Array is full, cannot insert more students.\n");
                    break;
                }
                n++;
                students = (struct person *)realloc(students, n * sizeof(struct person));

                printf("Enter the details of the new student: ");
                students[n - 1].name = (char *)malloc(100 * sizeof(char));
                scanf("%d %s %d %d %lf", // Read weight as double
                       &students[n - 1].id, students[n - 1].name,
                       &students[n - 1].age, &students[n - 1].height, &students[n - 1].weight);

                buildMinHeap(students, n);
                printf("New student has been inserted into the Min-heap.\n");
                break;

            case 6: // Delete the oldest person
                if (students == NULL) {
                    printf("Please read data first.\n");
                    break;
                }
                if (n <= 0) {
                    printf("No students to delete.\n");
                    break;
                }
                swap(&students[0], &students[n - 1]);
                free(students[n - 1].name);
                n--;
                buildMinHeap(students, n);
                printf("The oldest person has been deleted from the Min-heap.\n");
                break;

            case 7: // Exit
                if (students != NULL) {
                    for (int i = 0; i < n; i++) {
                        free(students[i].name);
                    }
                    free(students);
                }
                exit(0);

            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    }

    return 0;
}
