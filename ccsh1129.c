/* �D�ػ���
�t�ϸ`�Y�N��ӡA�������վǥͦ��`�y�Ω�����ֽ�A��{�����S�]
�p�F�H�U���ʡG�w�����վǥͤ֩� 9999 ��A�C��ǥͤ⤤������P�q
1 ���}�l�ǦC�s���C�ժ����w�ť��A�u�n����P�����Ҧ���ƪ��Ʀr
���n���� 84�A�Y�����i�J����S�O���A�аݦ��h�־ǥͥi�i�J���
�S�O�����|�H */ 

#include <stdio.h>
int main(void){
	int i,j=0,sum=1,ans;
	
	for(i=1;i<=9999;i++){  //�ǥͼ� 
		ans=i;
		while(ans>0){  //���Ѧ�ƨìۭ� 
			sum*=ans%10;
			ans/=10;
		}
		
		if(sum==84){
			j++;
			printf("=%d\n",i);
		}
		sum = 1;
	}
	
	printf("�@��%d��ǥͶi�J�S�O��",j);
	return 0;	
}
