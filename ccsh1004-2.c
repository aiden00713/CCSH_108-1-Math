/*
�bCCSH Party ����101�ӤH�ѥ[�b�|�A�䤤�@��a ��k�ʡA�oa��k�ʤ��A
�N�{�Ѯb�|���k�ʪ��H�Ʊq�֨�h�ƦC�A�|�Φ��@�Ӥ��t��3�A�����O8�����t�ƦC�A
�ӥB���@��k�ʻ{�ѩҦ��k�ʡA�������A���@��k�ʻ{��8��k�ʡA
�æ��@��k�ʻ{��11��k�ʡA����̫�@��k�ʻ{�ѩҦ��k�ʡA�h�ѥ[�b�|���k�ʤH�Ƭ��h�֤H�H
*/
#include <stdio.h>
int main(void)
{
	int i,j,k,sum=0;
	for(i=1;i<=101;i++) //�k�� 
	{
		for(j=1;j<=8+sum && j<=101;j++)  //�k�� 
		{
			//�Ĥ@�ӹF��Y�O���G 
			if(i+j==101)
			{
				printf("�k%d,�k%d\n",j,i);
				return 0;
			}
		}
		sum+=3;
	}
	return 0;
}
