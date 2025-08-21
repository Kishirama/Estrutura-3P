#include<stdio.h>

struct Node{

    int value;
    Node *next;
    int c;

    Node (int _value) {

        value = _value;
        next = NULL;

    }

    Node (){
        next = NULL;

    }
};

struct List {

    Node *start;
    Node *end;

    List() {

        start = NULL;
        end = NULL;
        c = 0;

    }

    bool empty () {
        return start == NULL;
    }
    //adicionar ao final
    void pushBack (int value){

        Node *n = new Node(value);
        c++;
        if (empty ()){
            start = n;
            end = n;
            return;
        }
        end -> next = n;
        end = n;

    }
    //adicionar no começo
    void pushFront (int value)
    {
        Node *n = new Node(value);
        c++;

        if (empty ())
        {
            start = n;
            end = n;
            return;
        }
        n -> next = start;
        start = n;

    }
    //printf
    void print (){

        Node *aux = start;
        while (aux != NULL){
            printf("%d ->", aux -> value);
            aux = aux -> next;
        }
    }
    //tamanho
    /*int size () {

        int c = 0;
        Node *aux = start;
        while (aux != NULL){
            c++;
            aux = aux -> next;
        }
        return c;
    }*/
    int size (){
        return 0;
    }

};

int main (){

    List l;
    l.pushBack(30);
    l.pushBack(50);
    l.pushBack(60);
    l.pushFront(10);
    l.pushFront(5);

    l.print();

    return 0;

}
