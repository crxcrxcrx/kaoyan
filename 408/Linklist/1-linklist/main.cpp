#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct LNode {
    ElemType data;
    struct LNode *next;
} LNode, *Linklist;

void list_head_insert(Linklist &L) { //LNode*是结构体指针和Linklist等价
    ElemType x;
    scanf("%d", &x);
    LNode *s;
    L = (Linklist) malloc(sizeof(LNode));//申请头结点空间
    L->next = NULL;
//    s= (Linklist)malloc(sizeof(LNode));//申请头结点空间
//    s->data=x;
//    L->next=s;//头节点next，指向第一个节点
    while (x != 9999) {

        s = (Linklist) malloc(sizeof(LNode));//申请头结点空间
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }
}

void print_list(Linklist L) {
    L = L->next;
    while (L != NULL) {
        printf("%d", L->data);
        L = L->next;
        if (L != NULL) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    Linklist L;
    list_head_insert(L);
    print_list(L);
    return 0;
}
