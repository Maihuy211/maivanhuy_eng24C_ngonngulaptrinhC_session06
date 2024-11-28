# include<stdio.h>
int main (){
	
	// khai bao bien,nhap gia tri cho n 
	int n,f1=0,f2=1,fn;
	do{
	printf("nhap n: ");
	scanf("%d",&n);
	}while(n>0);
	printf("nhap lai");

	printf("%d\n",f1);
	printf("%d\n",f2);
	//sung dung vong lap
	for(fn=0;fn<n;fn++){
	fn=f1+f2;
	f1=f2;
	f2=fn;
	printf("%d\n",fn);
	}
	return 0;
	}
