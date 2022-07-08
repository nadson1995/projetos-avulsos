#include <stdio.h>
void letMatriz(float *, int, int);
void printMatriz(float *, int, int);
void subtrairLinhas(float *, int, int, int);
void multiLinha(float *, int, int, float);
void subtrairLinhasComFator(float *matriz, int row1, int row2, int n_col, float fator);
int main()
{
    printf("Bom dia!\n");
    int n_row, n_col;
    scanf("%i", &n_row);
    scanf("%i", &n_col);
    float matriz[n_row][n_col];
    float matrizi[n_row][n_col];
    matrizi[0][0] = 1;
    matrizi[0][1] = 0;
    matrizi[1][0] = 0;
    matrizi[1][1] = 1;
    letMatriz(matriz, n_row, n_col);
    printf("Matriz\n");
    printMatriz(matriz, n_row, n_col);
    printf("Matriz indentidade\n");
    printMatriz(matrizi, n_row, n_col);
    // subtrairLinhas(matriz, 0, 1, n_row);
    // printMatriz(matriz, n_row, n_col);
    // multiLinha(matriz, 0, n_row, 10.5f);
    // printMatriz(matriz, n_row, n_col);
    float fat1 = 1 / matriz[0][0];
    multiLinha(matriz, 0, n_row, fat1);
    multiLinha(matrizi, 0, n_row, fat1);
    float fat2 = 1 / matriz[1][0];
    multiLinha(matriz, 1, n_row, fat2);
    multiLinha(matrizi, 1, n_row, fat2);

    printf("Matriz\n");
    printMatriz(matriz, n_row, n_col);

    printf("Matriz indentidade\n");
    printMatriz(matrizi, n_row, n_col);

    subtrairLinhas(matriz, 1, 0, n_row);
    subtrairLinhas(matrizi, 1, 0, n_row);

    printf("Matriz\n");
    printMatriz(matriz, n_row, n_col);

    printf("Matriz indentidade\n");
    printMatriz(matrizi, n_row, n_col);
    // Diagonal superior
    float fat3 = 1 / matriz[1][1];
    multiLinha(matriz, 1, n_row, fat3);
    multiLinha(matrizi, 1, n_row, fat3);

    printf("Matriz\n");
    printMatriz(matriz, n_row, n_col);

    printf("Matriz indentidade\n");
    printMatriz(matrizi, n_row, n_col);

    float fat4 = matriz[0][1];

    printf("==%f\n", matriz[0][1]);

    subtrairLinhasComFator(matriz, 0, 1, n_row, fat4);
    subtrairLinhasComFator(matrizi, 0, 1, n_row, fat4);

    printf("Matriz\n");
    printMatriz(matriz, n_row, n_col);

    printf("Matriz indentidade\n");
    printMatriz(matrizi, n_row, n_col);

    return 0;
}
void multiLinha(float *matriz, int row, int n_col, float cons)
{
    // printf("%f\n", cons);
    for (int col = 0; col < n_col; col++)
    {
        matriz[row * n_col + col] = matriz[row * n_col + col] * cons;
    }
}
void subtrairLinhas(float *matriz, int row1, int row2, int n_col)
{
    for (int col = 0; col < n_col; col++)
    {
        matriz[row1 * n_col + col] = matriz[row1 * n_col + col] - matriz[row2 * n_col + col];
    }
}
void subtrairLinhasComFator(float *matriz, int row1, int row2, int n_col, float fator)
{
    // printf("%f\n", fator);
    for (int col = 0; col < n_col; col++)
    {
        matriz[row1 * n_col + col] = matriz[row1 * n_col + col] - matriz[row2 * n_col + col] * fator;
    }
}
void letMatriz(float *matriz, int n_row, int n_col)
{
    for (int row = 0; row < n_row; row++)
    {
        for (int col = 0; col < n_row; col++)
        {
            scanf("%f", &matriz[row * n_col + col]);
        }
    }
}
void printMatriz(float *matriz, int n_row, int n_col)
{
    for (int row = 0; row < n_row; row++)
    {
        for (int col = 0; col < n_row; col++)
        {
            printf("%f\t", matriz[row * n_col + col]);
        }
        printf("\n");
    }
    printf("\n");
}