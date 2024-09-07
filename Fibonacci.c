#include<stdio.h>
int main(){
int f1=0, f2=1, fnet,n;
printf("Enter no. of terms to print fibonacci series upto: ");
scanf("%d", & n);
for(int i =1;i<=n;i++){
fnet = f1 +f2;
f1++;
f2++;
printf("%d", fnet);
}
return 0;
}