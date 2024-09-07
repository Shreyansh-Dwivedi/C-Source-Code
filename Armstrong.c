//Check for Armstrong Number
#include<stdio.h>
#include<math.h>
int main(){
int n,t,s=0,r,a=0,b,i,x;
printf("Enter the Number :");
scanf("%d", &n);
for(x=n;x>0;x=t){
t=x/10;
s++;
}
for(i=n;i!=0;i= i/10){
r=i%10;
a= pow(r,s) + a;

}
if(a==i){
    printf("Armstrong Number");
} else{
    printf("Not Armstrong Number");
}
return 0;
}


