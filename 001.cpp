//#void������ 

//1.�Ժ������ص��޶�������������ǱȽϳ�����

//2.�Ժ����������޶����������Ҳ�ǱȽϳ����ġ�

//һ�����ǳ����ľ��������������

//����������Ҫ����ֵֵʱ������ʹ��void�޶��������������˵�ĵ�һ����������磺void func��int a,char *b����

//��������������ܲ���ʱ������ʹ��void�޶��������������˵�ĵڶ�����������磺int func(void)��

#include<stdio.h>
int add(int x,int y)
{
	return x+y;
}

void hello(void)  // �����Σ����践��; 
{
	printf("hello world!\n");
}

int main()
{
	int x=1;int y=2;
	hello();
	printf("add=%d",add(x,y));
	return 0;
}
