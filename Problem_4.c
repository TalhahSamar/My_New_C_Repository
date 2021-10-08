# include<stdio.h>

int my_strlen(char *str);
int my_strlen(char *str){
    int i = 0;
    char *c = str;
    while(*c!='\0'){
        i++;
        c++;
    }
    return i;
}

void do_reverse(char *str, int n);
void do_reverse(char *str, int n){
    char temp;
    for(int i=0; i<n/2; i++){
        temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
    puts(str);
}

int main(){
    char arr[50];
    printf("enter your string: ");
    gets(arr);
    printf("reversed string: ");
    do_reverse(arr, my_strlen(arr));
    return 0;
}