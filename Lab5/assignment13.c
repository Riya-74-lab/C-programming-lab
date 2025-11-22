#include<stdio.h>
int main ()
{
	char c;
	
	for(c='A';c<='Z';c++)
	{
	 if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	 printf("%c:  vowel\n",c);
	 
	 else{
	 	printf("%c: consonant\n",c);
	 }
    }
 return 0;
}