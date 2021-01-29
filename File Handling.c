#include <stdio.h>
#include <string.h>
int main()
{
	FILE *fp;
    char ch, a[500];
    int i=0, j, k=0;
    fp = fopen("Doc.txt", "r");
    printf("Input to the reverse function: \n");
    while(ch != EOF)
    {
    	putchar(ch);
        a[i]=ch;
        i++;
    	ch= getc(fp);
        k++;
	}
	printf("\n\n Output:\n");
    for(j=(k-1); j>=0; j--)
    {
        ch = a[j];
        printf("%c", ch);
    } 
    return 0;
}

