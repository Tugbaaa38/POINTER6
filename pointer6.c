#include <stdio.h>
#include <stdlib.h>

void swap(int *sayi1,int *sayi2)
{
	int temp=*sayi1;
	*sayi1=*sayi2;
	*sayi2=temp;
}
int main() {
     int num1,num2;
     printf("iki sayi girin:\n");
     scanf("%d %d",&num1,&num2);
     
     system("cls");
     
     printf("TAKAS ONCESI\n");
     printf("1.sayi:%d\t2.sayi:%d\n",num1,num2);
     swap(&num1,&num2);
     printf("TAKAS SONRASI\n");
     printf("1.sayi:%d\t2.sayi:%d",num1,num2);
      

	return 0;
}