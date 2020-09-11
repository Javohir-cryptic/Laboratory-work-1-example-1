/* Программa, которая проверяет на четность
введенное пользователем число.*/
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;

    cout << "Введите число: ";
    cin >> n;

    if (n % 2 == 0)
        cout << n << " - четноею.";
    else
        cout << n << " - нечетное.";
    cout << endl;
    return 0;
}

