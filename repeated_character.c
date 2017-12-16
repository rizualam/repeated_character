# include <stdio.h>
# include <stdlib.h>
# define ch 256

void Counts(char *str, int *count)
{
    int i;
    for (i = 0; *(str+i); i++)
    {
        count[*(str+i)]++;
    }
}

int main()
{
    char str[100];
    gets(str);
    int *count = (int *)calloc(ch, sizeof(int));
    Counts(str, count);
    int i;
    for (i = 0; i < ch; i++)
    {
        if(count[i] > 1)
        {
            printf("%c, count = %d \n", i, count[i]);
        }
    }
    free(count);
    return 0;
}
