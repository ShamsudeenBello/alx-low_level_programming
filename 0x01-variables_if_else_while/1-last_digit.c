#include <stdlib>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Sucess/Correct)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
{
