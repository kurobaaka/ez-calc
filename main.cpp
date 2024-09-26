#include iostream

void main()
{
    setlocale(LC_ALL, "Russian"); // Установка русского языка

    int a,b,selection;
    cout << "Введите 2 числa: " << endl;
    cin >> a >> b;

    cout << "Список операций: " << endl;
    cout << "1. Сложение" << endl;
    cout << "2. Вычитание" << endl;
    cout << "3. Умножение" << endl
    cout << "4. Деление" << endl;

    cin >> selection;

    switch(selection)
    {
        case 1:
        cout << "Сумма: " << a + b << endl;
        break;

        case 2:
        cout << "Разность: " << a - b << endl;
        break;

        default:
        cout<<"Ошибка! Пункт меню отсутствует."<< endl;
        break;
    }
}