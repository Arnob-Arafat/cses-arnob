#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    char dna[n];
    scanf("%s", dna);

    int countA = 0, countC = 0, countG = 0, countT = 0;

    for (int i = 0; i < n; i++)
    {
        if (dna[i] == 'A')
        {
            countA = 1;
            for (int j = i + 1; dna[j] == 'A'; j++)
            {
                countA++;
                i = j;
            }
        }
        if (dna[i] == 'C')
        {
            countC = 1;
            for (int j = i + 1; dna[j] == 'C'; j++)
            {
                countC++;
                i = j;
            }
            
        }
        if (dna[i] == 'G')
        {
            countG = 1;
            for (int j = i + 1; dna[j] == 'G'; j++)
            {
                countG++; 
                i = j;
            }
           
        }
        if (dna[i] == 'T')
        {
            countT = 1;
            for (int j = i + 1; dna[j] == 'T'; j++)
            {
                countT++;
                i = j;
            }
        }
    }
    
    int maxrep = 0;
    
    if (maxrep < countA)
    {
        maxrep = countA;
    }
    if (maxrep < countC)
    {
        maxrep = countC;
    }
    if (maxrep < countG)
    {
        maxrep = countG;
    }
    if (maxrep < countT)
    {
        maxrep = countT;
    }
    printf("%i\n", maxrep);
}