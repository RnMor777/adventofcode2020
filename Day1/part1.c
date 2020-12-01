#include <stdio.h>

int main (int argc, char * argv[]) {
    //variables
    FILE *fp = fopen(argv[1], "r");
    int arr[200];
    int i, j;
    
    //take in input
    for (i=0; i<200; i++) {
        fscanf(fp, "%d", &arr[i]);
    }

    //calculate answer
    for (i=0; i<200; i++) {
        for (j=i+1; j<200; j++) {
            if (arr[i]+arr[j]==2020) {
                printf ("%d\n", arr[i]*arr[j]);
                break;
            }
        }
    }
    return 0;
}
