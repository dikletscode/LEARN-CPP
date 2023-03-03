#include <iostream>
#include <string>

using namespace std;

int main()
{
    // The memory address will remain the same
    int numA = 1;
    int &numB = numA; // if numB = numA => the memory address will be different
    cout << "\nThe memory address will remain the same \n";
    cout << &numA << " " << &numB << "\n\n";

    cout << "re-assign \n";
    numA = 999;
    cout << &numA << " = " << &numB << " = " << numA << "\n";
    numB == 901;
    cout << &numB << " = " << &numA << "\n\n";

    int *numC;
    cout << numC << " = " << *numC << "\n";
    string *strC;
    cout << strC << " = " << *strC << "\n";

    *numC = 12;
    cout << numC << " = " << *numC << "\n";

    int zero1 = 0, zero2 = 0;
    int *pointerZero1 = &zero1; // pointer pointing to zero1
    cout << pointerZero1 << " = " << &zero1 << " = "
         << " = " << *pointerZero1 << "\n";
    cout << &pointerZero1 << "\n"; // memory address of variable  which contains a memory address.
    *pointerZero1 = 1;             // def
    cout << pointerZero1 << " = " << &zero1 << " = "
         << " = " << *pointerZero1 << "\n";
    cout << &pointerZero1 << "\n\n";

    pointerZero1 = &zero2;
    cout << *pointerZero1 << " " << zero2 << "\n\n";
    return 0;
}
