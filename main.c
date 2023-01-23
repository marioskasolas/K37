#include <stdio.h>
int myatoi(char array[]);

int main(void){
    char array[50];
    printf("Insert word:");
    gets(array);
    int x = myatoi(array);
    printf("x is %d",x);

}
int myatoi(char array[50]){
    int x;
    for(int i = 0; array[i] != '\0'; i++){
        x = x * 10 + array[i]-'0';
    }
    return x;
}