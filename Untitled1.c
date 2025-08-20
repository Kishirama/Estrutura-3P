#include<stdio.h>

struct Node{

    int value;
    Node *next;

    Node (int _value) {
    value = _value
    next = Null;
    }

    Node () {

        next = Null;
    }

};
struct List {

    Node *start;
    Node *end;

    List() {
        start = Null;
        end = Null;
    }

    boll empty () {
        return start == Null
    }

    void pushBack (int value){
        Node *n = new Node(value);
        if (empty ()){
            start = n;
            end = n;
            return;
        }
        end -> next = n;
        end = n;

    }




};

int main (){

  return 0;

}
