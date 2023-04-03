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
void DeleteList();

int main()
{
    AddListItem();

    PrintList();

    ReverseList();

    PrintList();

    DeleteList();
    return 0x0;
}

void AddListItem() {

    List* p;
    List* last{};
    int amount;
    
    cout << "Creating a ring list \nEnter numbers via 'Enter'\n";

    cout << "Enter amount of values:" << endl;
    cin >> amount;
    if (amount <= 0) {
        cout << "Error!!!";
        exit(5000);
    }
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

    cout << "Reverse list: " << endl;

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
    cout << endl;
}

void DeleteList() {
    List* f = head, *next;
    do {
        next = f->next;
        delete f;
        f = next;
    } while (f != nullptr);
    head = nullptr;
}
