#include <iostream>
#include <stdexcept>

using namespace std;

void calcSum(int a, int b)
{
    long long summa = static_cast<long long>(a) + b;
    cout << "Summa = " << summa << endl;
}

void calcDiv(int a, int b)
{
    if (b == 0) {
        cout << "Virhe: jakaja ei saa olla nolla!" << endl;
    } else {
        float osamaara = static_cast<float>(a) / b;
        cout << "Osamäärä = " << osamaara << endl;
    }
}

long long retSum(int a, int b)
{
    return static_cast<long long>(a) + b;
}

float retDiv(int a, int b)
{
    if (b == 0) {
        throw runtime_error("Jakaja ei saa olla nolla!");
    }

    return static_cast<float>(a) / b;
}

int main()
{
    int a;
    int b;

    cout << "Anna kokonaisluku a" << endl;
    cin >> a;

    cout << "Anna kokonaisluku b" << endl;
    cin >> b;

    if (!cin) {
        cout << "Virhe: syötä kaksi kokonaislukua." << endl;
        return 1;
    }

    calcSum(a, b);
    calcDiv(a, b);

    cout << "Palautettu summa = " << retSum(a, b) << endl;

    try {
        float result = retDiv(a, b);
        cout << a << " / " << b << " = " << result << endl;
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
