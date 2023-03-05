// n! = n x (n-1)!
#include <iostream>

using namespace std;

int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    if (num >= 1)
    {
        cout << "current num: " << num << "\n"; // 3 => call function until  num < 1
        return num * factorial(num - 1);
    }

    return 0; // num must be a positive number or zero
};

int main()
{
    cout << factorial(2) << "result"
         << "\n";
    return 0;
};
