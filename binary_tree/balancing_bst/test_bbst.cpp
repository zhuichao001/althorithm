#include "bbst.h"


void test(){
    Tree t;
    for(int i=1; i<10; i++){
        t.addNode(i*3);
    }
    t.addNode(2);
    t.addNode(99);
    t.addNode(24);
    t.addNode(28);

    //t.addNode(5);
    //t.addNode(8);
    //t.addNode(6);
    t.print();
}

int main(){
    test();
    return 0;
}
