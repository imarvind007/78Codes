#include <stdio.h>
int main(){
int i,n;
int product=1;
printf("Enter the value n :");
scanf("%d",&n);
for(i=1;i<=n;i++){
product=product*i;
}
printf("Product of natural numbers:%d",product);
return 0;
}
