#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	void Dec_to_Bin(int a,int b);
	void Bin_Add(int a,int b);
	void Dec_to_Oct(int a,int b);
	void Oct_Add(int a,int b);
	void Dec_to_Hex(int a,int b);
	void Hex_Add(int a,int b);
	void Bin_left(int a,int b);
	void Bin_right(int a,int b);
	void Bin_Multi(int a,int b);
int main(int argc, char *argv[]) {
	int num1,num2;
	int select;
	while(1){
	printf("������Ҫ����������м��Կո������");
	scanf("%d %d",&num1,&num2);
	printf("��ѡ����Ҫ���еļ������ţ�\n");
	printf("\n");
	printf("1��ʮ����ת���������\n");
	printf("2�������Ƽӷ�����\n");	
	printf("3��ʮ����ת�˽������\n");
	printf("4���˽��Ƽӷ�����\n");	
	printf("5��ʮ����תʮ���������\n");	
	printf("6��ʮ�����Ƽӷ�����\n");
	printf("7������������λ����\n");
	printf("8������������λ����\n");
	printf("9�������Ƴ˷�����\n");
	printf("\n");
	scanf("%d",&select);//ѡ��Ҫ���еĲ���
	printf("select = %d\n",select);
	switch(select){
		case 1:Dec_to_Bin(num1,num2);break;
		case 2:Bin_Add(num1,num2);break;
		case 3:Dec_to_Oct(num1,num2);break;
		case 4:Oct_Add(num1,num2);break;
		case 5:Dec_to_Hex(num1,num2);break;
		case 6:Hex_Add(num1,num2);break;
		case 7:Bin_left(num1,num2);break;
		case 8:Bin_right(num1,num2);break;
		case 9:Bin_Multi(num1,num2);break;
	} 
	printf("\n\n����������������������������������������\n\n");
	}
//	printf("num1= %d\n",num1); 
//	printf("num2 =%d",num2);
	return 0;
}

//ʮ����ת������ 
	void Dec_to_Bin(int a,int b){
		int n1[16];
		int n2[16];
		int i;
		int tempa=a,tempb=b;	
		for(i=15;i>=0;i--){
			n1[i]=a%2;
			n2[i]=b%2;
			a/=2;
			b/=2;
		}
		printf("num1 = %d = ",tempa);	
		for(i=0;i<16;i++){
			printf("%d",n1[i]);
			if(i%4==3)printf(" ");
		}
		printf("\n");
		printf("num2 = %d = ",tempb);	
		for(i=0;i<16;i++){
			printf("%d",n2[i]);
			if(i%4==3)printf(" ");
		}
	}
	
//�����Ƽӷ� 
	void Bin_Add(int a,int b){
		printf("ʮ���ƣ�a + b = %d\n",a+b);
		int n1[16];
		int n2[16];
		int i;
		for(i=15;i>=0;i--){
			n1[i]=a%2;
			n2[i]=b%2;
			a/=2;
			b/=2;
		}
		printf("�����ƣ�a + b = ");
		for(i=15;i>=0;i--){
			n1[i]=n1[i]+n2[i];
			if(n1[i]>1){
				int temp=n1[i];
				n1[i]%=2;
				n1[i-1]+=(temp/2);
			}
		}
		for(i=0;i<16;i++){
			printf("%d",n1[i]);
			if(i%4==3)printf(" ");
		}
			
	}
	
//ʮ����ת�˽���
	void Dec_to_Oct(int a,int b){
		int n1[12];
		int n2[12];
		int i;
		int tempa=a,tempb=b;	
		for(i=11;i>=0;i--){
			n1[i]=a%8;
			n2[i]=b%8;
			a/=8;
			b/=8;
		}
		printf("num1 = %d = ",tempa);
		for(i=0;i<12;i++){
			printf("%d",n1[i]);
			if(i%4==3)printf(" ");
		}
		printf("\n");
		printf("num2 = %d = ",tempb);
		for(i=0;i<12;i++){
			printf("%d",n2[i]);
			if(i%4==3)printf(" ");
		}
		
	}
//�˽��Ƽӷ�����
	void Oct_Add(int a,int b){
		printf("ʮ���ƣ�a + b = %d\n",a+b);
		int n1[12];
		int n2[12];
		int i;
		for(i=11;i>=0;i--){
			n1[i]=a%8;
			n2[i]=b%8;
			a/=8;
			b/=8;
		}
		printf("�˽��ƣ�a + b = ");
		for(i=11;i>=0;i--){
			n1[i]=n1[i]+n2[i];
			if(n1[i]>7){
				int temp=n1[i];
				n1[i]%=8;
				n1[i-1]+=(temp/8);
			}
		}
		for(i=0;i<12;i++){
			printf("%d",n1[i]);
			if(i%4==3)printf(" ");
		}
	}
//ʮ����תʮ������
	void Dec_to_Hex(int a,int b){
		int n1[4];
		int n2[4];
		int i;
		int tempa=a,tempb=b;	
		for(i=3;i>=0;i--){
			n1[i]=a%16;
			n2[i]=b%16;
			a/=16;
			b/=16;
		}
		printf("num1 = %d = ",tempa);
		for(i=0;i<4;i++){
			if(n1[i]==10)printf("A");
			else if(n1[i]==11)printf("B");
			else if(n1[i]==12)printf("C");
			else if(n1[i]==13)printf("D");
			else if(n1[i]==14)printf("E");
			else if(n1[i]==15)printf("F");
			else printf("%d",n1[i]);
//			if(i%4==3)printf(" ");
		}
		printf("\n");
		printf("num2 = %d = ",tempb);
		for(i=0;i<4;i++){
			if(n2[i]==10)printf("A");
			else if(n2[i]==11)printf("B");
			else if(n2[i]==12)printf("C");
			else if(n2[i]==13)printf("D");
			else if(n2[i]==14)printf("E");
			else if(n2[i]==15)printf("F");
			else printf("%d",n2[i]);
//			if(i%4==3)printf(" ");
		}
	}

//ʮ�����Ƽӷ�����
	void Hex_Add(int a,int b){
		printf("ʮ���ƣ�a + b = %d\n",a+b);
		int n1[4];
		int n2[4];
		int i;
		for(i=3;i>=0;i--){
			n1[i]=a%16;
			n2[i]=b%16;
			a/=16;
			b/=16;
		}
		printf("ʮ�����ƣ�a + b = ");
		for(i=3;i>=0;i--){
			n1[i]=n1[i]+n2[i];
			if(n1[i]>15){
				int temp=n1[i];
				n1[i]%=16;
				n1[i-1]+=(temp/16);
			}
		}
		for(i=0;i<4;i++){
			if(n1[i]==10)printf("A");
			else if(n1[i]==11)printf("B");
			else if(n1[i]==12)printf("C");
			else if(n1[i]==13)printf("D");
			else if(n1[i]==14)printf("E");
			else if(n1[i]==15)printf("F");
			else printf("%d",n1[i]);
//			if(i%4==3)printf(" ");
		}
	}
//����������λ
	void Bin_left(int a,int b){
		int n1[16];
		int n2[16];
		int i;
//		int tempa=a,tempb=b;	
		for(i=15;i>=0;i--){
			n1[i]=a%2;
			n2[i]=b%2;
			a/=2;
			b/=2;
		}
		for(i=0;i<15;i++){
			n1[i]=n1[i+1];
			n2[i]=n2[i+1];
		}
		n1[15]=0;n2[15]=0;
		printf("num1 << 1 = ");
		for(i=0;i<16;i++){
			printf("%d",n1[i]);
			if(i%4==3)printf(" ");
		}
		printf("\n");
		printf("num2 << 1 = ");
		for(i=0;i<16;i++){
			printf("%d",n2[i]);
			if(i%4==3)printf(" ");
		}
	}
//����������λ
	void Bin_right(int a,int b){
		int n1[16];
		int n2[16];
		int i;
//		int tempa=a,tempb=b;	
		for(i=15;i>=0;i--){
			n1[i]=a%2;
			n2[i]=b%2;
			a/=2;
			b/=2;
		}
		for(i=15;i>0;i--){
			n1[i]=n1[i-1];
			n2[i]=n2[i-1];
		}
		n1[0]=0;n2[0]=0;
		printf("num1 >> 1 = ");
		for(i=0;i<16;i++){
			printf("%d",n1[i]);
			if(i%4==3)printf(" ");
		}
		printf("\n");
		printf("num2 >> 1 = ");
		for(i=0;i<16;i++){
			printf("%d",n2[i]);
			if(i%4==3)printf(" ");
		}
	}

//�����Ƴ˷� 
	void Bin_Multi(int a,int b){
		int n1[16];
		int n2[16];
		int n3[16];
		int i,j;
		int tempa=a,tempb=b;	
		for(i=15;i>=0;i--){
			n1[i]=a%2;
			n2[i]=b%2;
			a/=2;
			b/=2;
			n3[i]=0;
		}
		for(i=15;i>=0;i--){
			if(n1[i]==1){
				for(j=i;j>=0;j--)
				n3[j]+=n2[j+15-i];
			}
		}
		printf("\n"); 
		for(i=15;i>=0;i--){
			if(n3[i]>1){
			int temp=n3[i];//������ʱ���浱ǰλ����ֵ 
			n3[i]%=2;
			n3[i-1]+=temp/2;}
		}
		printf("�����Ƴ˷������");
		for(i=0;i<16;i++){
			printf("%d",n3[i]);
			if(i%4==3)printf(" ");
		}
	}
	
