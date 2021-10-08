# include<stdio.h>

void swap_variable(int *a, int *b);
void swap_variable(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_array(int *a, int *b, int n);
void swap_array(int *a, int *b, int n){
    int temp[n];
    for(int i=0; i<n; i++){
        temp[i] = a[i];
        a[i] = b[i];
        b[i] = temp[i];
    }
}

int main(){
    int x;
    printf("what do you want to swap, a variable or an array? \n");
    printf("enter 0 for variable and 1 for array: ");
    scanf("%d", &x);
    if(x==0){
        int a, b;
        printf("enter first number, a: ");
        scanf("%d",&a);
        printf("enter second number, b: ");
        scanf("%d",&b);

        printf("a=%d, b=%d\n",a,b);
        swap_variable(&a, &b);
        printf("after swapping\n");
        printf("a=%d, b=%d\n",a,b);
    }
    else if(x==1){
        int n;
        printf("how many elements do you want in both of your array: ");
        scanf("%d", &n);

        int arr1[n], arr2[n];

        printf("enter all %d elements of first array one by one\n", n);
        for(int i=0; i<n; i++){
            scanf("%d", &arr1[i]);
        }
        printf("\n");
        printf("enter all %d elements of second array one by one\n", n);
        for(int i=0; i<n; i++){
            scanf("%d", &arr2[i]);
        }
        printf("\n");

        printf("first array is: ");
        for(int i=0; i<n; i++){
            printf("%d ", arr1[i]);
        }
        printf("\n");
        printf("second array is: ");
        for(int i=0; i<n; i++){
            printf("%d ", arr2[i]);
        }
        printf("\n");

        swap_array(arr1, arr2, n);
        printf("after swapping\n");

        printf("first array is: ");
        for(int i=0; i<n; i++){
            printf("%d ", arr1[i]);
        }
        printf("\n");
        printf("second array is: ");
        for(int i=0; i<n; i++){
            printf("%d ", arr2[i]);
        }
        printf("\n");
    }
    return 0;
}