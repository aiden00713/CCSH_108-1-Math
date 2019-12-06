/*題目說明 
a,b,c為介於1到10的正整數，已知滿足條件 a+2b+3c=a*b*c的解序對(a,b,c)共有8組，
其中 3 組為(2,2,6)、(2,4,2)、(3,6,1)，請你(妳)找出其餘 5組解。 
*/ 

#include <stdio.h>
int main(void){
	int a=0,b=0,c=0;
	
	for(a=1;a<=10;a++){
		for(b=1;b<=10;b++){
			for(c=1;c<=10;c++){
				if(a+2*b+3*c == a*b*c){
					printf("(%d,%d,%d)\n",a,b,c);
				}
			}
		}
	}
	return 0;
}
