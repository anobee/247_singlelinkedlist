#include <iostream>
using namespace std;

struct Node {
    int noMhs;
    string name;
    Node* next;

};

Node * start = NULL;

void addNode() {
    int nim;
    string nama;
    Node* nodebaru = new Node() ;
    cout << "masukan NIM = ";
    cin >> nim;
    cout << "masukan Nama = ";
    cin >> nama;
    nodebaru-> noMhs = nim;
    nodebaru-> name = nama;
 
    if (START == NULL || nim <= START -> noMhs) {
        if (START != NULL && nim == START->noMhs)
        {
            cout << "NIM sudah ada" << endl;
            return ;
        }
        nodebaru ->next =start;
        START = nodebaru ;
        return;
    }
    Node * previous = START;
    Node * current = START;

    while ((current != NULL )&&(nim>=current->noMhs))
    {
        if (nim == current -> noMhs)
        {
        cout << "NIM sudah ada" << endl;
        return;
        }
        previous = current;
        current = current->next;
    }

}