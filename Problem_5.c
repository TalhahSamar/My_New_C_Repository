# include<stdio.h>

int my_strlen(int *str);
int my_strlen(int *str){
    int i = 0;
    int *c = str;
    while(*c!='\0'){
        i++;
        c++;
    }
    return i;
}

int Binary_Search(int arr[], int l, int h, int k);
int Binary_Search(int arr[], int l, int h, int k){
    if(h>=l){
        int mid = l+(h-l)/2;
        if(arr[mid]==k) return mid+1;
        else if(arr[mid]>k) return Binary_Search(arr, l, mid - 1, k);
        else return Binary_Search(arr, mid + 1, h, k);
    }
    else return -1;
}

int main(){
    
    // int arr[] = {17, 925, 33, 242, 865, 116, 647, 4294967290, 4294967295, 10400};
    // int arr[] = {17, 925, 33, 242, 865, 116, 647, 90, 95, 14};
    // int arr[] = {2,4,6,8,10,12,14,16,18,20};
    int arr[] = {17, 25, 33, 42, 65, 116, 647, 10400, 4294967290, 4294967295};

    int a;
    printf("enter the integer to be find out: ");
    scanf("%d", &a);

    int b = Binary_Search(arr, 0, my_strlen(arr)-1, a);
    if(b==-1) printf("entered number is not present in the list");
    else printf("your number is present at index: %d (according to the 1 based indexing)", Binary_Search(arr, 0, my_strlen(arr)-1, a));

    return 0;
}