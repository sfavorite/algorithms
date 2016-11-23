#include <stdio.h>
#include <math.h>


int Power(int base, int exp){
	int i;


//Special Cases:
    if (exp == 0) {return 1;}
    if (exp < 0)   {return 0;}  //No negative power is an integer

    int result=1;
         for(i=0;i<exp;i++){
               result *= base;
         }
    return result;
}

int lenghtofint(int x)
{
    if(x>=100000) {
        if(x>=10000000) {
            if(x>=1000000000) return 10;
            if(x>=100000000) return 9;
            return 8;
        }
        if(x>=1000000) return 7;
        return 6;
    } else {
        if(x>=1000) {
            if(x>=10000) return 5;
            return 4;
        } else {
            if(x>=100) return 3;
            if(x>=10) return 2;
            return 1;
        }
    }
}

int splitnums(int num1, int middle, int *highend, int *lowend)
{
	int div = 10;

	div = Power(div, middle);

	*highend = num1 / div;
	*lowend = num1 % div;

	return 0;
}


int karatsuba(num1, num2)
{
	int size_num1;
	int size_num2;
	int middle;
	int high1, high2, low1, low2;
	int z0, z1, z2;

	high1 = 0;
	high2 = 0;
	low1 = 0;
	low2 = 0;

	size_num1 = lenghtofint(num1);
	size_num2 = lenghtofint(num2);


	if ((size_num1 <2) || (size_num2 < 2))
		return num1 * num2;

	if (size_num1 > size_num2) {
		middle = size_num1 / 2; }
	else {
		middle = size_num2 / 2;
	}

	size_num1 = splitnums(num1, middle, &high1, &low1);
	size_num2 =  splitnums(num2, middle, &high2, &low2);

	z0 = karatsuba(low1, low2);
	z1 = karatsuba(low1+high1, low2+high2);
	z2 = karatsuba(high1, high2);

	printf("z0 %d, z1 %d, z2 %d\n", z0, z1, z2);

	return(z2 * pow(10, 2 * middle) + (z1 - z2 - z0) * pow(10, middle) + z0);
	//return (z1 - z2 - z0);
}

int main()
{
	int num1;
	int num2;
	int answer;

	//setvbuf(stdout, NULL);
	num1 =5678;
	num2=1234;
	fflush(stdout);
	printf("Enter the first number:\n");
	printf("Any number will do but if it is not an integer we will have a problem.\n");
	scanf("%d", &num1);
	printf("Enter the second number:\n");
	scanf("%d", &num2);

	printf("\nNum 1 = %d  Num 2 = %d\n", num1, num2);

	answer=	karatsuba(num1, num2);

	printf("Answer: %d", answer);
	printf("\n");

	return 0;

}
