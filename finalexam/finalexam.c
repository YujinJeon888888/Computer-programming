#define N1 10
#define N2 10
#define N11 11
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char fruits[][10] = {"lime","dates",
	"cherry","honeydew","eggfruit",
	"banana","fig","apple","grapes","kiwi"};

	int i;
	int j;
	int index;
	int temp;
	
	
	for (i = 0; i < N1; i++)
	{
		printf("%s\n", fruits[i]);
	}

	char SortedArray[50];
	int i, j,index,temp;
	for (i = 0; i < N1-1; i++)
	{
		index = i;
		for (j = i + 1; j < N1; j++)
		{
			if (fruits[index] > fruits[j])
				index = j;
		}
		temp = fruits[i];
		fruits[i] = fruits[index];
		fruits[index] = temp;
			
	

	}
	
	for (i = 0; i < N1; ++i)
	{
		printf("%c", fruits[i])
			if (isupper(fruits[i]))
			{
				fruits[i] = toupper(fruits[i]);
			}
			else if (isupper(fruits[i]))
			{
				str[i] = toupper(str[i]);
			}
	}
	printf("\n");
	
	for (i = 0; i < N1; i++)
	{
		printf("%s\n", fruits[i]);
	}

	int fruitslen[N1];
	int sum;
	int average;

	for (i = 0; i < N1; i++)
	{
		sprintf(fruitslen,"문자열의 길이: %d\n", strlen(fruits[i]));
		puts(fruitslen);
	}


	For(i = 1, sum = 0; i <=N1; i++)
		Sum += fruitslen;

	//열심히 했는데 너무 어렵습니다 죄송합니다

	return 0;
}



