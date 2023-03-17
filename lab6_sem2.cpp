// lab6_sem2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;

struct List {
    int data;
    List* next;
};
void FillStruct(List* Struct, int size);
void PrintStruct(List* Struct, int size);


int main()
{
    int length;
    
    cout << "Enter amount of elements: ";
    cin >> length;
    List *One = new List[length];

    FillStruct(One, length);

    PrintStruct(One, length);

    return 0x0;
}

void FillStruct(List *Struct, int size) {
    cout << "Enter number of list items: " << endl;
    for (int i = 1; i <= size; i++)
    {
        cin >> (Struct[i-1]).data;
        if (i != size) {
            (Struct[i - 1]).next = &(Struct[i]);
        }
        else {
            (Struct[i - 1]).next = &(Struct[0]);
        }

        cout << (Struct[i-1]).next << endl;
    }
}

void PrintStruct(List* Struct, int size) {
    for (int i = 1; i <= size; i++)
    {
        cout << (Struct[i-1]).data << "\t";
        (Struct[i-1]).next = (Struct[i]).next;
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
