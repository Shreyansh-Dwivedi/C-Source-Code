//sum of first n Natural Number
#include<stdio.h>
int main(){
int n,i,sum=0;
printf("Enter the Limit of Natural Numbers:");
scanf("%d", &n);
for(i=n;i>=1;i--){
printf("%d \n",i);
sum +=i;
}
printf("The sum of first %d Natural Numbers is : %d \n",n,sum);
return 0;
}