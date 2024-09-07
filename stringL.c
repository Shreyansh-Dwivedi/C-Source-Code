#include<stdio.h>
int countL(char arr[]);
int main(){
char name[10];
gets(name);
printf("The Length of the Name is : %d \n", countL(name));
return 0;
}
int countL(char arr []){
int count = 0;
for(int i= 0; arr[i] != '\0'; i ++){
    count ++;
}
return count;
}
