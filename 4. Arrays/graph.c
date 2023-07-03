#include <stdio.h>
void plotGraph(int a[], int size);
int main() {
int array[] = {
6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
4, 5, 6, 1, 6, 5, 7, 8, 7
};
plotGraph(array, sizeof(array)/sizeof(int));
return 0;
}
void plotGraph(int a[], int size) {
// your code here

for (int i = 1; i <=9; i++){
    printf("%d: ", i);
    for(int j = 0; j< size;j++){
        if(a[j]==i){
            printf("*");
        }
    }
    printf("\n");
}

}