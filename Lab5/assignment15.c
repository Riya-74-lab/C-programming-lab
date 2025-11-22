#include<stdio.h>
int main ()
{
	char c;
	printf("Enter the character you wanna check:\n");
	scanf("%c",&c);
	
	switch(c){
		case'A':
		 printf("%c: vowel\n",c);
		 break;	
		case'E':
		 printf("%c: vowel\n",c);
		 break;
		case'I':
		 printf("%c: vowel\n",c);
		 break;
		case'O':
		 printf("%c: vowel\n",c);
		 break;
		case'U':
		 printf("%c: vowel\n",c);
		 break;  
		 
		 default:
		 printf("%c: consonant\n",c);
	}

return 0;
}
	