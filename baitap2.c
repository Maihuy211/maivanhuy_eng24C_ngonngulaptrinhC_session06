# include<stdio.h>
int main(){
	int a,b,c,d,e,so_chan,so_le;
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
	if(a%2==0){
		so_chan++;
	}else{
		so_le++;
	}
	if(b%2==0){
		so_chan++;
	}else{
		so_le++;
	}
	if(c%2==0){
		so_chan++;
	}else{
		so_le++;
	}
	if(d%2==0){
		so_chan++;
	}else{
		so_le++;
	}if(e%2==0){
		so_chan++;
	}else{
		so_le++;
	}
	printf("so long so chan la: %d\n",so_chan);
	printf("so long so le la: %d\n",so_le);
	
	
	
	return 0;
}
