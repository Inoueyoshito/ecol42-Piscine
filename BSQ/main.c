// C/C++ code for Maximum size square sub-matrix with all 1s
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define bool int
#define R 6
#define C 5

int min(int a, int b, int c);

void printMaxSubSquare(bool M[R][C])
{
    int i;
    int j;
    int S[R][C];
    int max_of_s;
    int max_i;
    int max_j;

/* Set first column of S[][]*/
    i = 0;
    while (i < R)
    {
        S[i][0] = M[i][0];
        i++;
    }


/* Set first row of S[][]*/
    j = 0;
    while (j < C)
    {
        S[0][j] = M[0][j];
        j++;
    }

/* Construct other entries of S[][]*/

    i = 1;
    while (i < R)
    {
        j = 1;
        while (j < C)
        {
            if (M[i][j] == 1)
            {
                S[i][j] = min(S[i][j - 1], S[i - 1][j], S[i -1][j - 1]) + 1;
            }
            else
                S[i][j] = 0;
            j++;
        }
        i++;
    }

/* Find the maximum entry, and indexes of maximum entry
    in S[][] */
    max_of_s = S[0][0];
    max_i = 0;
    max_j = 0;
    i = 0;
    while (i < R)
    {
        j = 0;
        while (j < C)
        {
            if(max_of_s < S[i][j])
            {
                max_of_s = S[i][j];
                max_i = i;
                max_j = j;
            }
            j++;
        }
        i++;
    }

    printf("9 point largest square");
    i = max_i;
    while (i > max_i - max_of_s)
    {
        j = max_j;
        while (j > max_j - max_of_s)
        {
            M[i][j] = 9;
            j--;
        }
        i--;
    }
}

/* Function to get minimum of three values */
int min(int a, int b, int c)
{
    int tmp = a;
    if (tmp > b)
        tmp = b;
    if (tmp > c)
        tmp = c;
    return (tmp);
}



/* Driver function to test above functions */
int main()
{
    int i;
    int j;
    bool M[R][C] = {{0, 1, 1, 0, 1},
                    {1, 1, 0, 1, 0},
                    {0, 1, 1, 1, 0},
                    {1, 1, 1, 1, 0},
                    {1, 1, 1, 1, 1},
                    {0, 0, 0, 0, 0}};

    //------------- print original array ------------------
	printf("The given array in matrix form is :  \n");
	for(i = 0; i < R; i++)
	{
    	for (j=0;j<C;j++)
	{
    	printf("%d  ", M[i][j]);
    }
    	printf("\n");
	}
    printMaxSubSquare(M);

    //------------- print changed array ------------------
	printf("The given array in matrix form is :  \n");
	for(i = 0; i < R; i++)
	{
    	for (j=0;j<C;j++)
	{
    	printf("%d  ", M[i][j]);
    }
    	printf("\n");
	}

    getchar();
    return (0);
}
