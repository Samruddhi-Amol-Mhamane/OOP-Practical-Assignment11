#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> numbers;

    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_front(10);

    cout << "List elements: ";
    for (int value : numbers)
    {
        cout << value << " ";
    }

    numbers.pop_front();

    cout << "\nAfter removing the first element: ";
    for (int value : numbers)
    {
        cout << value << " ";
    }

    cout << endl;

    return 0;
}