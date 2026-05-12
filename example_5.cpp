#include <iostream>
using namespace std;

float average(int a, int b, int c, int d, int e)
{
    float avg;
    avg = (a + b + c + d + e) / 5.0;
    return avg;
}

int main()
{
    int n1, n2, n3, n4, n5;
    float result;

    cout << "Enter 5 numbers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    result = average(n1, n2, n3, n4, n5);

    cout << "Average = " << result << endl;

    return 0;
}