#include<stdio.h>

//int sizeof_demo()
int main()
{
	float r, c, s;
	printf("Ban kinh cua hinh tron la r= ");
	scanf("%f", &r);
	c=6.28*r; //2*pi*r
	s=3.14*r*r; //pi*r binh phuong 
	printf("\n");
	printf("Ket qua tinh chu vi va dien tich hinh tron: \n");
	printf("======================================================= \n");
	printf(" Bán kính hình tròn:		r=%8.1f met \n", r);
	printf(" Chu vi hinh tron :			c=%8.2f met \n", c);
	printf(" Dien tich hinh tron:		s=%8.2f met vuong \n", s);
	printf("================================================ \n\n");
//========== vi du 2 ===========	
	printf("Data Type  		\t | Size of bype \n");
	printf("int				\t | %d bype \n", sizeof(int));
	printf("float			\t | %d bype \n", sizeof(float));
	printf("unsigned int	\t | %d bype \n", sizeof(unsigned int));
	printf("short int		\t | %d bype \n", sizeof(short int));
	printf("long int		\t | %d bype \n", sizeof(long int));
	printf("double			\t | %d bype \n", sizeof(double));
}
