#include <iostream>
using namespace std;

struct Node {
    int noMhs;
    string name;
    Node* next;

};

node*start = NULL;

void addNode() {
    int nim;
    string nama;
    Node* nodebaru = new Node() ;
    cout << "masukan NIM = ";
    cin >> nim
    cout << "masukan Nama = ";
    cin >> nama;
    nodebaru-> noMhs = nim;
    nodebaru-> name = nama;
}