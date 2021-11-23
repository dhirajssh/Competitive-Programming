#include<stdio.h>
void selection_sort(int a[],int n){
int i,j,iMin,temp;
for(i=0;i<n;i++){
iMin=i;
for(j=i+1;j<=n-1;j++) if(a[j]<a[iMin]) iMin=j;
temp=a[i];
a[i]=a[iMin];
a[iMin]=temp;
}
}
void main()
{
int a[100],i=0,j;
int choice=0;
while(choice!=3){
printf("1.ENTER A NUMBER\n");
printf("2.DISPLAY THE SORTED ARRAY\n");
printf("3.EXIT\n");
printf("Enter your choice: ");
scanf("%d",&choice);
switch(choice){
case 1:
printf("Enter value : ");
scanf("%d",&a[i++]);
break;
case 2:
printf("Sorted Array is : ");
selection_sort(a,i);
for(j=0;j<i;j++) printf("%d\t",a[j]);
break;
case 3:
default:
break;
}
printf("\n");
}
}
