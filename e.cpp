#include <iostream>
using namespace std;

int main()
{

int* x = NULL;
int* y = NULL;
int numbers, row, col;
cout << "Please input the size of your rows: " << endl;
std::cin >> row;
cout << "Please input the size of your columns: " << endl;
std::cin >> col;
x = new int[row];
y = new int[col];
cout << "Please input your array values: " << endl;
for (int i = 0; i<row; i++)
{
    for (int j = 0; j<col; i++)
    {
        std::cin >> numbers;
        x[i][j] = numbers;
    }
}

cout << "The following is your matrix: " << endl;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j<col; j++)
    {
        std::cout << "[" << i << "][" <<j << "] = " << x[i][j] << std::endl;
    }
}

delete[] x;
delete[] y;
system("pause");
return 0;
}
