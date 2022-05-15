#include "Header.h"

int main()
{
    setlocale(LC_ALL, "ukr");

    char name1[] = "name 1";
    char name2[] = "name 2";
    char name3[] = "name 3";
    ATD a(name1), b(name2), c(name3);

    a.add(&a);
    a.add(&b);
    a.add(&c);
    cout << "____________________________\n";

    ATD::Show();

    cout << "____________________________\n";

    a - a;

    cout << "____________________________\n";

    ATD::Show();

    cout << "____________________________\n";

    a + c;

    cout << "____________________________\n";

    ATD::Show();

    cout << "____________________________\n\n";

    if (a == c)
    {
        cout << "a == c Рівнісьть істинна\n";
    }
    else
    {
        cout << "a == c Рівнісьть неістинна\n";
    }
}
