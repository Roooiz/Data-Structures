#include <iostream>

int main()
{
    const int N = 20;
    char marks[N] = {2, 2, 3};
    int count_marks = 3;
    int indx_insert = 1;

    for (int i = count_marks; i > indx_insert; --i)
    {
        marks[i] = marks[i - 1];
    }
    

    for (int i = 0; i < N; ++i)
    {
        printf("%.2d ", marks[i]);
    }

    return 0;
}