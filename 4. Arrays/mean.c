#include <stdio.h>
float mean(int a[], int size);
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
float m = mean(array, sizeof(array)/sizeof(int));
printf("the mean is: %.2f\n", m);
return 0;
}
float mean(int a[], int size) {

// your code here
int mean=0;
for(int i=0; i<size; i++){
    mean+=a[i];

}
printf(" %d\n", mean/size);
return mean/size;

}
