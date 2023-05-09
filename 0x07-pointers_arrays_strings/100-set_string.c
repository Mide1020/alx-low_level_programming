#include <stdio.h>
/*
 * Double pointer
 * writting functions that set the value of a pointer
 * prototypes
 * Return - 0
 */
int main(void)
{
	void set_string(char **s, char *to);
	char *s0 = "Mide";
	char *s1 = "Esther";

	printf ("%s, %s\n", s0, s1);
	set_string (&s1, s0);
	printf ("%s, %s\n", s0 ,s1);
	return (0);
}
