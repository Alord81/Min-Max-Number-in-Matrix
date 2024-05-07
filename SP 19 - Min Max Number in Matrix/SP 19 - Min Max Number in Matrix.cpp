#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int RandomeNumber(short From, short To)
{
    return rand() % (To - From + 1) + From;
}

void FullArrayWithOrderdNumber(short arr[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            arr[i][j] = RandomeNumber(0, 100);
        }
    }
}

void PrintArrayInMatrix(short arr[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%0*d\t", 2, arr[i][j]);
        }
        cout << endl;
    }
}


short MinNumberInMatrix(short Matrix[3][3], short Row, short Col)
{
    short ToComberNumber = Matrix[0][0];
    for (short i = 0; i < Row; i++)
    {
        for (short j = 0; j < Col; j++)
        {
            if (ToComberNumber < Matrix[i][j])
            {
                ToComberNumber = Matrix[i][j];
            }
        }
    }

    return ToComberNumber;
}
short MaxNumberInMatrix(short Matrix[3][3], short Row, short Col)
{
    short ToComberNumber = Matrix[0][0];
    for (short i = 0; i < Row; i++)
    {
        for (short j = 0; j < Col; j++)
        {
            if (ToComberNumber > Matrix[i][j])
            {
                ToComberNumber = Matrix[i][j];
            }
        }
    }

    return ToComberNumber;
}

int main()
{

    srand((unsigned)time(NULL));
    short Matrix[3][3];
    short cols = 3, rows = 3;

    FullArrayWithOrderdNumber(Matrix, rows, cols);
    cout << "Matrix1:\n";
    PrintArrayInMatrix(Matrix, rows, cols);


    cout << "\nMinimum Number is: " << MinNumberInMatrix(Matrix, rows, cols);

    cout << "\nMax Number is: " << MaxNumberInMatrix(Matrix, rows, cols);
    return 0;
}