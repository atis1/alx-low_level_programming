vim main.h

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *s);
char *cap_string(char *s);
char *leet(char *s);
char *rot13(char *s);
void print_number(int n);
int _putchar(char c);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
void print_line(char *c, int s, int l);

vim 0-strcat.c

#include "main.h"

/**
 * _strcat - appends src to dest string
 * @dest: string that src will be appended on
 * @src: string to append on dest
 * Return: address of dest
 */

char *_strcat(char *dest, char *src)
{
		int a, b;

			a = b = 0;
		while (*(dest + a))
			a++;
		while ((*(dest + a) = *(src + b)))
		{
			a++
			b++;
													}
		return (dest);
}
