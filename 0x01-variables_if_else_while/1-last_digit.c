srand(time(0));
n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", last, n, n % 10);
	if (n % 10 > 5)
{
   printf("greater than 5\n");
}
