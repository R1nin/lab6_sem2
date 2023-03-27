// lab6_sem2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;

struct List {
    int data;
    List* next;
};


List *head ,*NewList;

void AddListItem();
void ReversList();
void PrintList();


int main()
{
    AddListItem();

    PrintList();
    cout << endl;
    ReversList();

    return 0x0;
}

void AddListItem() {

    List* p;
    List* last;
    int a;
    
    cout << " Creating a ring list \n Enter numbers via 'Enter'\n";

    cout << "Enter amount of values:";
    cin >> a;
    if (a <= 0)
        exit(5000);
    p = new List;
    head = p;
    cin >> p->data;
    for (int i = 1; i < a; i++)
    {
        last = new List;
        cin >> last->data;
        p->next = last;
        p = last;
    }
    last->next = head;

    cout << "End of input\n";
}

/*
void ReversList() {
    List* last, * l, *newlist;

 
    last = l = head;
    do {
        do {
            l = l->next;
        } while (l->next != last);
        last = l;
        newlist->data = last->data;
        newlist->next = new List;
        newlist = newlist->next;
        cout << last->data << " ";
    } while (last != head);
}*/

void PrintList() {
    List* sh = head;
    cout << "List: " << endl;
    if (sh == nullptr)
        return;
    do {
        cout << sh->data << '\t';
        sh = sh->next;
    } while (sh != head);
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
