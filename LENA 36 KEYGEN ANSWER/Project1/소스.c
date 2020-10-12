#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[100] = { 0 };
	int result = 0;
	int i = -1;
	printf("INPUT NAME:");
	while (name[i] != 0x0a)
	{
		i++;
		scanf("%c", &name[i]);
	}
	strupr(name);
	//printf("%s", name);
	while (i)
	{
		i--;
		if (name[i] != 0x20);//¶Ù¾î¾²±â
		{
			result = result + ((name[i] * 0x998) - 1);
		}
		//printf("%c", result);
	}
	printf("Name %sSerial : RKS-%d", name, result);
}