# include <stdio.h>

int main()
{
	char ch[] = "hElLo wOrLd";
	
	int i, size=0;
	
	while(ch[size] != '\0'){
		printf("%c ", ch[size]);
		size++;
	}
	
	printf("\n");
	
	for(i = 0; i<size; i++)
	{
		if(ch[i] >= 65 && ch[i] <= 90)
		{
			ch[i] = ch[i] + 32;
		}
		else if(ch[i] >= 97 && ch[i] <= 122)
		{
			ch[i] = ch[i] - 32;
		}
		else if(ch[i] == 32){
			continue;
		}
		else{
			printf("Invalid character detected at : %d\n", i);
			return -1;
		}
	}
	
	for(i = 0; i<size; i++)
		printf("%c ", ch[i]);
	
	return 0;
}
