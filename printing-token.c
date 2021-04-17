#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    char *w;
     w = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
     //printf("%s",s);
    int i=0;
    int j=0;
    while(i<=strlen(s))
    {
        if(s[i]==' ' || s[i] == '\0')
        {
            w[j]='\0';
            j = 0;
            i++;
            printf("%s\n",w);
            free(w);
            w = malloc(1024*sizeof(char));
            continue;
        }
        w[j++] = s[i++];
    }

    return 0;
}
