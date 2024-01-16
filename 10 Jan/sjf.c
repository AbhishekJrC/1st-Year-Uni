#include <stdio.h>
#include <stdlib.h>

struct process {
    int pid;      
    int burst;    
    int arrival;  
};

int cmpfunc(const void *a, const void *b) {
    return ((struct process *)a)->burst - ((struct process *)b)->burst;
}

void calculateTimes(struct process *p, int n, int *wt, int *tat, int *rt) {
    int time = 0, total_wt = 0, total_tat = 0, i;
    for (i = 0; i < n; i++) {
        
        rt[i] = time - p[i].arrival;

        wt[i] = time - p[i].arrival;

        total_wt += wt[i];

        tat[i] = p[i].burst + wt[i];

        total_tat += tat[i];

        time += p[i].burst;
    }

    
    printf("Average Waiting Time: %f\n", (float)total_wt / (float)n);
    printf("Average Turnaround Time: %f\n", (float)total_tat / (float)n);
}

void sjf(struct process *p, int n) {
    int i, j, *wt, *tat, *rt;
    wt = (int *)malloc(n * sizeof(int));
    tat = (int *)malloc(n * sizeof(int));
    rt = (int *)malloc(n * sizeof(int));
    
    qsort(p, n, sizeof(struct process), cmpfunc);

    calculateTimes(p, n, wt, tat, rt);

    printf("\nProcess\t Burst Time\t Arrival Time\t Waiting Time\t Turnaround Time\t Response Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t %d\t\t %d\t\t %d\t\t %d\t\t\t %d\n", p[i].pid, p[i].burst, p[i].arrival, wt[i], tat[i], rt[i]);
    }
    free(wt);
    free(tat);
    free(rt);
}

int main() {
    system("cls");
    int n, i;
    struct process *p;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    p = (struct process *)malloc(n * sizeof(struct process));

    
    for (i = 0; i < n; i++) {
        printf("Enter the burst time and arrival time of process %d: ", i + 1);
        scanf("%d %d", &p[i].burst, &p[i].arrival);
        p[i].pid = i + 1;
    }
    
    sjf(p, n);

    free(p);
    return 0;
}