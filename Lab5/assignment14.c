#include<stdio.h>
int main ()
{
	char c;
	for(c='A';c<='Z';c++){
	
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
}
return 0;
}
	