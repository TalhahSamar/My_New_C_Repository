# include<stdio.h>
# include<inttypes.h>

int main(){
    char a[8] = {'1','2','3','4','5','6','7','8'};
    char b[8] = {'1','2','3','4','5','6','7','8'};
    char c[8] = {'1','2','3','4','5','6','7','8'};
    int max = (1<<31);
    int bit = 0;
    for(int i=7; i>=0; i++){
        if(max-a[i]>b[i]) bit=0;
        else bit=1;
        c[i] = b[i]+a[i]+bit;
    }
    for(int i=0; i<8; i++){
        printf("%c ", c[i]);
    }
    return 0;
}