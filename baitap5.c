# include<stdio.h>
int main(){
	int month,year;
	printf("nhap thang: ");
	scanf("%d",&month);
	printf("nhap nam: ");
	scanf("%d",&year);
		switch(month){
	    case 1:
	    case 3:
	    case 5:
	    case 7:
	    case 8:	
	    case 10:
	    case 12:
	    	printf("thang %d co 31 ngay",month);
	    	break;
		case 4:
	    case 6:	
	    case 9:
	    case 11:
		    printf("thang %d co 30 ngay",month);
		    break;
		case 2:
			if(year%4==0&&year%100!=0 || year%400==0){
	           	printf("thang 2 co 29 ngay",month);
	           	}else{
			 	printf("thang 2 co 28 ngay");
	           	}
	           	break;
		default:
	            printf("thang nhap vao ko hop le");
	   }
	return 0;
	}
	
	
