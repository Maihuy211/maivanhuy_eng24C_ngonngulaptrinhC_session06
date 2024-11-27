#include <stdio.h>
int main ()
{
	int number,i;
	printf ("nhap mot so:");
	scanf ("%d",&number);
	printf ("uoc cua %d la: ",number);
	for (i=1; i<=number; i++){
			if (number%i==0)
		{
			printf ("%d ",i); 
		} 
	} 
	return 0; 
} 
