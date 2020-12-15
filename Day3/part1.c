#include <stdio.h>

int main (int argc, char * argv[]) {
    //variables
    FILE *fp = fopen(argv[1], "r");
    char arr[500][32];
    int lines=0;
    int left=0;
    int k=0;
    int count=0;
    
    //take in input
    while (lines<323 && fscanf(fp, "%s", arr[lines])) {
        lines += 1;
    }

    //calculate answer
    for (k=0; k<lines; k++) {
        if (arr[k][left]=='#') 
            count += 1;
        left+=3;
        left%=31;
    }
    printf ("%d\n", count);
    return 0;
}
