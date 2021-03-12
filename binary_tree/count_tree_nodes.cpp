#include <stdio.h>
#include <math.h>

//完全二叉树的节点数量

struct Node{
    Node *left;
    Node *right;
    int val;
    Node(int v){
        val = v; 
        left = NULL;
        right=NULL;
    }
};


int countNodes(Node *root){
    if(root==NULL) {
        return 0;
    }

    int lh=1, rh=1;
    {
        for(Node *cur=root; cur->left!=NULL; cur = cur->left){
           ++lh;
        }

        for(Node *cur=root; cur->right!=NULL; cur = cur->right){
           ++rh;
        }
    }
    if(lh==rh){
        return int(pow(2, lh)-1);
    }

    return 1 + countNodes(root->left) + countNodes(root->right);
}


int main(){
    Node a(2), b(3), c(4), d(5), e(7), f(8);
    b.left = &a;
    b.right = &c;
    d.left = &b;
    d.right = &f;
    f.left = &e;
    printf("count of binary tree:%d\n", countNodes(&d));
    return 0;
}
