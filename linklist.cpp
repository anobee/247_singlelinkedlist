#include <iostream>
using namespace std;

struct Node {
    int noMhs;
    string name;
    Node* next;

};

Node* START = NULL;

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
    nodebaru -> next = current;
    previous -> next = nodebaru;

}

bool searchNode (int nim, Node*current, Node*previous) {
    previous = START;
    current = START;
    while (current != NULL && nim > current -> noMhs)
    {
        previous = current ;
        current = current ->next;
    }
    if (current == NULL)
    {return false;}
    else if (current ->noMhs == nim)
    {return true;}
    else
    {return false;}
}

bool deleteNode (int nim) {
    Node*current = START;
    Node*previous = START;
    if (searchNode(nim,previous,current)==false)
     return false;
     previous ->next = current -> next;
    if  (current == START)
     START = current ->next ;
     return true;
}

bool listempty() {
    if (START == NULL)
        return true;
    else
        return false;
}

void transverse() {
    if  (listempty()) {
        cout << "list kosong " << endl;
        system ("pause");
        system ("cls");
        return ;
    }
    else {
        Node* currentNode = START;
        while(currentNode != NULL){
            cout << "NIM" << currentNode->noMhs << ",nama: " << currentNode -> name <<endl ;
            currentNode = currentNode -> next 
        }
    }
}
