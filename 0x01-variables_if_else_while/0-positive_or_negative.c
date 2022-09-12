
/**
* main - print if the number is positive, zero, or neative
*
* Description: using the main function
*/
int main(void)
{
int n;

srand(time(0);
n = rand() - RAND_MAX / 2;

if (n > 0)
{
       printf("%i is positive\n", n);
}
else if (n == 0)
{
       printf("%i is zero\n", n);
}
else if (n < 0)
{
       printf("%i is negative\n", n);
}
return (0);
