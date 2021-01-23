// есть 3 ввода: строка; знак-разделитель; слово, которым надо заменить знак.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Enter string: \n");
	char s[100];
	fgets(s, 100, stdin);
	printf("Enter znak: \n");
	char t[100];
	fgets(t, 100, stdin);
	printf("Enter stroka: \n");
	char r[100];
	fgets(r, 100, stdin);
	int b = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int len = 0;
	int l = 0;
	int h = 0;
	int abc = 0;
	while (s[i] != '\0')
	{
		if (s[i] == t[j])
		{
			abc++;
		}
		len++;
		i++;
	}
	printf("\ndebug len %d", len);
	printf("\ndebug abc %d", abc);
	while (r[k] != '\0')
	{
		l++;
		k++;
	}
	printf("\ndebug %d", l);
	char* p_m = (char*)malloc(100 * sizeof(char));
	for (i = 0; i < ((len - abc) + abc * l); i++)
	{
		if (s[i] == t[j])
		{
			for (k = 0; k < l; k++)
			{
				if (r[k] != '\n')
				{
					p_m[b] = r[k];
					b++;
				}

			}
		}
		else
		{
			p_m[b] = s[i];
			b++;
		}
	}
	printf("\nNew stroka - ");
	for (b = 0; b < i; b++)
	{
		printf("%c", p_m[b]);
	}
	free(p_m);
	return 0;
}