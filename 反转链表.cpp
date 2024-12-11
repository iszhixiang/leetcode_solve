//反转链表


struct ListNode* reverseList(struct ListNode* head){
    //如果是空链表
    if(head==NULL)return NULL;
    //如果只有一个元素
    if(head->next ==NULL)return head;

    struct ListNode* back = head;//第一个节点
    struct ListNode* middle = back->next;//第二个
    struct ListNode* Front  = middle->next;//第三个

    back->next = NULL;//反转后，第一个节点指向空

    while(Front!=NULL){//只要第三个节点不为空
        middle->next = back;
        back = middle;
        middle = Front;
        Front = Front->next;
    }
    middle->next = back;//反转最后一个节点
    return middle;

}

/*
反转链表需要用到三个节点指针，分别是 Front,middle,back
back 指向第一个节点
middle 指向第二个节点
Front 指向第三个节点

反转过程为将 middle 指向的节点的 next 指向其前一个节点，也就是 Front 指向的节点，这样就实现了第二个节点的反转
接着将  Front,middle,back 这三个节点后移，先将 back 的 next 指向 NULL，因为在反转之后，第一个节点就是最后一个节点，需要指向 NULL
剩下节点后移： 
1，back = middle
2，middle = Front
3，Front = Front->next

也就是说，middle 指针会指向除了第一个元素以外后面的所有元素，所有middle指针指向的元素都会指向前面的元素
而终止的条件是什么呢，middle == NULL ?
不行，如果终止条件是 middle == NULL，那在最后一次反转中，反转结束之后还会执行一次 Front = Front->next,但当 middle 指向最后一个元素的时候， Front 是 NULL，会爆错

终止条件为 Front == NULL

这样，当遍历结束的时候，middle 指向最后一个元素，但此时 middle 还没有指向前面一个元素，所以在结束之后还需要将 middle 指向前面一个元素

*/