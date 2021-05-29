#include <stdio.h>
#include <stdlib.h>

void printPaskal(int level);

int main(int argc, const char * argv[]) {
    
    int inputLevel = 0;
    
    printf("how many of level? : ");
    scanf("%d", &inputLevel);
    
    printPaskal(inputLevel);
    
    return 0;
}

void printPaskal(int level){
    int **index;
    index = malloc(level*sizeof(int));
    
    for(int i=0;i<level;i++){
        index[i] = malloc((i+1)*sizeof(int));
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i) {
                index[i][j] = 1;
                printf(" %d",index[i][j]);
            }
            else {
                index[i][j] = index[i-1][j-1] + index[i-1][j];
                printf(" %d",index[i][j]);
            }
        }
        printf("\n");
    }
    
    printf("The last col is... ");
    for(int i=0;i<level;i++){
        printf("%d ",index[level-1][i]);
    }
    printf("\n");
}
