
#include <ft_printf.h>
#include <unistd.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

#include <float.h>

//gcc ft_printf_testmain.c -I./includes -L. -lftprintf


int	main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	setlocale (LC_ALL,"");

	// ft_printf("testing %% is the greatest!\n\n", 5, 5);


	ft_printf("%sI'm green foo%s", GREEN, EOC);
	// printf("\n=========================\n");

	// signed short int nbr1 = 32767;
	// int	nbr2 = -2147483648;
	// signed long nbr3 = -2147483648;
	// signed long long nbr4 = -9223372036854775807;

	// // (void)nbr1;
	// // (void)nbr2;
	// // (void)nbr3;
	// // (void)nbr4;

	// ft_printf("testing %'+hd is the greatest!\n\n", nbr1);
	// ft_printf("testing %'+i is the greatest!\n\n", nbr2);
	// ft_printf("testing %'+d is the greatest!\n\n", nbr2);
	// ft_printf("testing %'+ld is the greatest!\n\n", nbr3);
	// ft_printf("testing %'+D is the greatest!\n\n", nbr3);
	// ft_printf("testing %'+lld is the greatest!\n\n", nbr4);
	// ft_printf("testing %'+d is the greatest!\n\n", 0);

	// // ft_printf("{%3*d}", 0, 0);
	// // printf("{%3*d}", 0, 0);

	// // printf("testing %hd is the greatest!\n\n", nbr1);
	// // printf("testing %i is the greatest!\n\n", nbr2);
 // 	// printf("testing %d is the greatest!\n\n", nbr2);
	// // printf("testing %ld is the greatest!\n\n", nbr3);
	// // printf("testing %lld is the greatest!\n\n", nbr4);
	// //printf("testing %D is the greatest!\n\n", nbr);

	// printf("\n=========================\n");
	// // printf("%5%\n\n");
	// // printf("%-5%\n\n");
	// // printf("{%*d}", -5, 42);
	// //ft_printf("{%*d}", -5, 42);
	// //printf("|{%.*s}|", -5, "42");
	// //printf("\n");
	// //ft_printf("{%.*s}", -5, "42");
	// //printf("{%3*d}", 0, 0);
	// // printf("|%#o|", 0);
	// // ft_printf("|%#o|", 0);
	// // printf("std: |%#.o %#.0o|", 0, 0);
	// // printf("\n");
	// // ft_printf("mine: |%#.o %#.0o|", 0, 0);
	// // printf("\n");
	// // printf("std: |%#.O|", 0);
	// // printf("\n");
	// // ft_printf("mine: |%#.O|", 0);
	// //printf("std: {%03c}", 0);
	// //ft_printf("mine: {%03c}", 0);
	// // printf("pf: {%3*d}", 0, 0);
	// // printf("\n");
	// // ft_printf("my: {%3*d}", 0, 0);

	// ft_printf("{%0.5c}", 0);
	// printf("\n");
	// printf("{%05.c}", 0);
	// printf("\n=========================\n");

	// ft_printf("testing %+*o is the greatest!\n\n", 5, 5);
	// ft_printf("testing %+*O is the greatest!\n\n", 5, 5);
	// ft_printf("testing %+*u is the greatest!\n\n", -5, 5);
	// ft_printf("testing %+*U is the greatest!\n\n", -5, 5);
	// ft_printf("testing %+*x is the greatest!\n\n", 5, 5);
	// ft_printf("testing %+*X is the greatest!\n\n", 5, 5);

	printf("\n=========================\n");

	ft_printf("my:{%-+8F}", 5.0/0.0);
	printf("\n");
	printf("sd:{%-+8F}", 5.0/0.0);
	printf("\n");

	ft_printf("my:{%-+8F}", -5.0/0.0);
	printf("\n");
	printf("sd:{%-+8F}", -5.0/0.0);
	printf("\n");

	ft_printf("my:{%-+8F}", 0.0/0.0);
	printf("\n");
	printf("sd:{%-+8F}", 0.0/0.0);
	printf("\n");

	ft_printf("my:{%-+8F}", (5.0/0.0)/0.0);
	printf("\n");
	printf("sd:{%-+8F}", (5.0/0.0)/0.0);
	printf("\n");

	ft_printf("my:{%-+8f}", 5.0/0.0);
	printf("\n");
	printf("sd:{%-+8f}", 5.0/0.0);
	printf("\n");

	ft_printf("my:{%-+8f}", -5.0/0.0);
	printf("\n");
	printf("sd:{%-+8f}", -5.0/0.0);
	printf("\n");

	ft_printf("my:{%-+8f}", 0.0/0.0);
	printf("\n");
	printf("sd:{%-+8f}", 0.0/0.0);
	printf("\n");

	ft_printf("my:{%-+8f}", (5.0/0.0)/0.0);
	printf("\n");
	printf("sd:{%-+8f}", (5.0/0.0)/0.0);
	printf("\n");

	printf("\n=========================\n");

	ft_printf("my:{%+8F}", 5.0/0.0);
	printf("\n");
	printf("sd:{%+8F}", 5.0/0.0);
	printf("\n");

	ft_printf("my:{%+8F}", -5.0/0.0);
	printf("\n");
	printf("sd:{%+8F}", -5.0/0.0);
	printf("\n");

	ft_printf("my:{%+8F}", 0.0/0.0);
	printf("\n");
	printf("sd:{%+8F}", 0.0/0.0);
	printf("\n");

	ft_printf("my:{%+8F}", (5.0/0.0)/0.0);
	printf("\n");
	printf("sd:{%+8F}", (5.0/0.0)/0.0);
	printf("\n");

	ft_printf("my:{%+8f}", 5.0/0.0);
	printf("\n");
	printf("sd:{%+8f}", 5.0/0.0);
	printf("\n");

	ft_printf("my:{%+8f}", -5.0/0.0);
	printf("\n");
	printf("sd:{%+8f}", -5.0/0.0);
	printf("\n");

	ft_printf("my:{%+8f}", 0.0/0.0);
	printf("\n");
	printf("sd:{%+8f}", 0.0/0.0);
	printf("\n");

	ft_printf("my:{%+8f}", (5.0/0.0)/0.0);
	printf("\n");
	printf("sd:{%+8f}", (5.0/0.0)/0.0);
	printf("\n");

	printf("\n=========================\n");

	ft_printf("my:{%8F}", 5.0/0.0);
	printf("\n");
	printf("sd:{%8F}", 5.0/0.0);
	printf("\n");

	ft_printf("my:{%8F}", -5.0/0.0);
	printf("\n");
	printf("sd:{%8F}", -5.0/0.0);
	printf("\n");

	ft_printf("my:{%8F}", 0.0/0.0);
	printf("\n");
	printf("sd:{%8F}", 0.0/0.0);
	printf("\n");

	ft_printf("my:{%8F}", (5.0/0.0)/0.0);
	printf("\n");
	printf("sd:{%8F}", (5.0/0.0)/0.0);
	printf("\n");

	ft_printf("my:{%8f}", 5.0/0.0);
	printf("\n");
	printf("sd:{%8f}", 5.0/0.0);
	printf("\n");

	ft_printf("my:{%8f}", -5.0/0.0);
	printf("\n");
	printf("sd:{%8f}", -5.0/0.0);
	printf("\n");

	ft_printf("my:{%8f}", 0.0/0.0);
	printf("\n");
	printf("sd:{%8f}", 0.0/0.0);
	printf("\n");

	ft_printf("my:{%8f}", (5.0/0.0)/0.0);
	printf("\n");
	printf("sd:{%8f}", (5.0/0.0)/0.0);
	printf("\n");

	printf("\n=========================\n");

	ft_printf("my:{%08F}", 5.0/0.0);
	printf("\n");
	printf("sd:{%08F}", 5.0/0.0);
	printf("\n");

	ft_printf("my:{%08F}", -5.0/0.0);
	printf("\n");
	printf("sd:{%08F}", -5.0/0.0);
	printf("\n");

	ft_printf("my:{%08F}", 0.0/0.0);
	printf("\n");
	printf("sd:{%08F}", 0.0/0.0);
	printf("\n");

	ft_printf("my:{%08F}", (5.0/0.0)/0.0);
	printf("\n");
	printf("sd:{%08F}", (5.0/0.0)/0.0);
	printf("\n");

	ft_printf("my:{%08f}", 5.0/0.0);
	printf("\n");
	printf("sd:{%08f}", 5.0/0.0);
	printf("\n");

	ft_printf("my:{%08f}", -5.0/0.0);
	printf("\n");
	printf("sd:{%08f}", -5.0/0.0);
	printf("\n");

	ft_printf("my:{%08f}", 0.0/0.0);
	printf("\n");
	printf("sd:{%08f}", 0.0/0.0);
	printf("\n");

	ft_printf("my:{%08f}", (5.0/0.0)/0.0);
	printf("\n");
	printf("sd:{%08f}", (5.0/0.0)/0.0);
	printf("\n");

	printf("\n=========================\n");

	ft_printf("my:{%-8F}", 5.0/0.0);
	printf("\n");
	printf("sd:{%-8F}", 5.0/0.0);
	printf("\n");

	ft_printf("my:{%-8F}", -5.0/0.0);
	printf("\n");
	printf("sd:{%-8F}", -5.0/0.0);
	printf("\n");

	ft_printf("my:{%-8F}", 0.0/0.0);
	printf("\n");
	printf("sd:{%-8F}", 0.0/0.0);
	printf("\n");

	ft_printf("my:{%-8F}", (5.0/0.0)/0.0);
	printf("\n");
	printf("sd:{%-8F}", (5.0/0.0)/0.0);
	printf("\n");

	ft_printf("my:{%-8f}", 5.0/0.0);
	printf("\n");
	printf("sd:{%-8f}", 5.0/0.0);
	printf("\n");

	ft_printf("my:{%-8f}", -5.0/0.0);
	printf("\n");
	printf("sd:{%-8f}", -5.0/0.0);
	printf("\n");

	ft_printf("my:{%-8f}", 0.0/0.0);
	printf("\n");
	printf("sd:{%-8f}", 0.0/0.0);
	printf("\n");

	ft_printf("my:{%-8f}", (5.0/0.0)/0.0);
	printf("\n");
	printf("sd:{%-8f}", (5.0/0.0)/0.0);
	printf("\n");

	// ft_printf("testing |%-+0'20.4f| is the greatest!\n\n", 51224.0);
	// printf("\n");
	// printf("testing |%-+'20.4f| is the greatest!\n\n", 51224.0);

	// ft_printf("testing |%f|\n\n", FLT_MAX);
	// printf("testing |%f|\n\n", FLT_MAX);

	//ft_printf("testing |%Lf|\n\n", LDBL_MAX);
	//printf("testing |%Lf|\n\n", LDBL_MAX);

	//ft_printf("testing |%f|\n\n", DBL_MAX);
	//printf("testing |%f|\n\n", DBL_MAX);

	//printf( "|%5.2G|", 31.147 );

	// ft_printf("testing %F is the greatest!\n\n", 5);
	// ft_printf("testing %e is the greatest!\n\n", 5);
	// ft_printf("testing %E is the greatest!\n\n", 5);
	// ft_printf("testing %g is the greatest!\n\n", 5);
	// ft_printf("testing %G is the greatest!\n\n", 5);
	// ft_printf("testing %a is the greatest!\n\n", 5);
	// ft_printf("testing %A is the greatest!\n\n", 5);

	printf("\n=========================\n");

	//int i = 5;
	// ft_printf("testing %*c is the greatest!\n\n", 10, 'A');
	// ft_printf("testing %*C is the greatest!\n\n", 5, L'Ω');
	// ft_printf("testing %*lc is the greatest!\n\n", 5, L'Ω');
	// ft_printf("testing %*s is the greatest!\n\n", 5, "");

	// printf("testing %*p is the greatest!\n\n", 5, &i);
	// ft_printf("testing %*p is the greatest!\n\n", 5, &i);
	// printf("std: {%3*p}", 10, NULL);
	// printf("\n");
	// ft_printf("mine: {%3*p}", 10, NULL);
	// printf("\n");
	// printf("std: {%}");
	// printf("\n");
	// ft_printf("min: {%}");

	//printf("\n=========================\n");

	// int x;
	// int y;

	// printf("\n");
	// printf("testing %n is the greatest!\n\n", &x);
	// printf("\n");
	// ft_printf("testing %n is the greatest!\n\n", &y);

	// printf("sd: %d", x);
	// printf("\n");
	// printf("my: %d", y);

	// printf("\n=========================\n");

	// ft_printf ("Characters: %c %c \n", 'a', 65);
	// ft_printf ("Decimals: %d %ld\n", 1977, 650000L);
	// ft_printf ("Preceding with blanks: %10d \n", 1977);
	// ft_printf ("Preceding with zeros: %010d \n", 1977);
	// ft_printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	// ft_printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
	// ft_printf ("Width trick: %*d \n", 5, 10);
	// ft_printf ("%s \n", "A string");

	//invalids!
	// ft_printf("testing %+*p is the greatest!\n\n", 5, 5);
	// ft_printf("testing %+*q is the greatest!\n\n", 5, 5);
	// ft_printf("testing %+*t is the greatest!\n\n", 5, 5);
	// ft_printf("testing %+*r is the greatest!\n\n", 5, 5);
	// ft_printf("testing %+*m is the greatest!\n\n", 5, 5);
	// ft_printf("testing %+*~ is the greatest!\n\n", 5, 5);
	// ft_printf("testing %+*~ is the greatest!\n\n", 5, 5);

	// //evil tests
	// ft_printf("testing %+*Ω is the greatest!\n\n", 5, 5);
	return (0);
}
