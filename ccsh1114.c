/*�D�ػ��� 
a,b,c������1��10������ơA�w���������� a+2b+3c=a*b*c���ѧǹ�(a,b,c)�@��8�աA
�䤤 3 �լ�(2,2,6)�B(2,4,2)�B(3,6,1)�A�ЧA(�p)��X��l 5�ոѡC 
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
