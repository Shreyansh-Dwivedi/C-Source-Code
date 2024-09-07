#include<stdio.h>
//enter marks of 3 subjects in an ARRAY Date: 30/05/2023 Time: 11:55 a.m.
int main(){
int marks[3];
printf("Enter The Marks of the Three Subjects \n ");
printf("Physics :\n");
scanf("%d", &marks[0]);
printf("Chemistry : \n");
scanf("%d", &marks[1]);
printf("Mathematics : \n");
scanf("%d", &marks[2]);
printf("The Marks Are as follows : \n");
printf("Physics : %d \n Chemistry : %d \n Mathematics : %d \n", marks[0], marks[1], marks[2]);
return 0;
}