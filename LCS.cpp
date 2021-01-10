#include <iostream>
#include <string>
using namespace std;

#define MAX 7

int array[MAX][MAX];

string LCS(string STR_X, string STR_Y, int X_LENGTH, int Y_LENGTH)
{

    if (X_LENGTH == 0 || Y_LENGTH == 0)
        return string("");

    if (STR_X[X_LENGTH - 1] == STR_Y[Y_LENGTH - 1])
    {
        return LCS(STR_X, STR_Y, X_LENGTH - 1, Y_LENGTH - 1) + STR_X[X_LENGTH - 1];
    }

    if (array[X_LENGTH - 1][Y_LENGTH] > array[X_LENGTH][Y_LENGTH - 1])
        return LCS(STR_X, STR_Y, X_LENGTH - 1, Y_LENGTH);

    else
        return LCS(STR_X, STR_Y, X_LENGTH, Y_LENGTH - 1);
}

void LCSLength(string STR_X, string STR_Y, int X_LENGTH, int Y_LENGTH)
{
    for (int i = 1; i <= X_LENGTH; i++)
    {
        for (int j = 1; j <= Y_LENGTH; j++)
        {

            if (STR_X[i - 1] == STR_Y[j - 1])
                array[i][j] = array[i - 1][j - 1] + 1;
            else
                array[i][j] = max(array[i - 1][j], array[i][j - 1]);
        }
    }
}

int main()
{
    string STR_X, STR_Y;
    cout << "Enter String 1" << endl;
    cin >> STR_X;
    cout << "Enter String 2" << endl;
    cin >> STR_Y;


    int X_LENGTH = STR_X.length(), Y_LENGTH = STR_Y.length();

    LCSLength(STR_X, STR_Y, X_LENGTH, Y_LENGTH);


    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cout << array[i][j] << '\t';
        }
        cout << endl;
    }

    cout << LCS(STR_X, STR_Y, X_LENGTH, Y_LENGTH) << endl;

    return 0;
}