# include<stdio.h>
int main(){
	int a,b,c,d,e,sum;
	printf("nhap so thu nhat: ");
	scanf("%d",&a);
	printf("nhap so thu hai: ");
	scanf("%d",&b);
	printf("nhap so thu ba: ");
	scanf("%d",&c);
	printf("nhap so thu tu: ");
	scanf("%d",&d);
	printf("nhap so thu nam: ");
	scanf("%d",&e);
	 if(a%2!=0){
		sum+=a;
	
	  }if(b%2!=0){
	    sum+=b;
	   
	  }if(c%2!=0){
	   sum+=c;
	   
	  }if(d%2!=0){
	    sum+=d;
	    
	  }if(e%2!=0){
	   sum+=e;
	  } 
	 printf("tong cac so le la: %d",sum);
	 
	 
	return 0;
	}


