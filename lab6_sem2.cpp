// lab6_sem2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;

struct List {
    int data;
    List* next;
};

List* head, * new_head;

void AddListItem();
void PrintList();
void ReverseList();

int main(int argc, char* argv[])
{
    AddListItem();

    PrintList();

    cout << endl;

    ReverseList();

    PrintList();
    return 0x0;
}

void AddListItem() {

    List* p;
    List* last{};
    int amount;
    
    cout << "Creating a ring list \nEnter numbers via 'Enter'\n";

    cout << "Enter amount of values:" << endl;
    cin >> amount;
    if (amount <= 0)
        exit(5000);
    p = new List;
    head = p;
    cin >> p->data;
    for (int i = 1; i < amount; i++)
    {
        last = new List;
        cin >> last->data;
        p->next = last;
        p = last;
    }
    last->next = head;


    cout << "End of input\n";
}


void ReverseList() {
    List* pred = nullptr;
    List* current = head;

    do {
        List* next = current->next;
        current->next = pred;
        pred = current;
        current = next;
    } while (current != head);

    head = pred;
}

void PrintList() {
    List* sh = head;
    cout << "List: " << endl;

    do {
        if (sh == nullptr)
            return;
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
