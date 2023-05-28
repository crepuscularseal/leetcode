//Implement a first in first out (FIFO) queue using only two stacks.
//題目都教你了，那就(兩杯水)兩個stack 互倒
    // push就是先把整個stack倒到另一邊，然後把值加再另一邊的上面
    // 這樣會錯，會加錯人
    // 所以應該是Push就一直加同一個stack
    // 然後pop的時候，才是倒過來取，取完再倒回來
typedef struct {
    int *pushstack;
    int *popstack;
    int top1;
    int top2;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue *Queue1;
    Queue1 = (MyQueue*)malloc(sizeof(MyQueue));
    Queue1->pushstack = (int*)malloc(1000*sizeof(int));
    Queue1->popstack = (int*)malloc(1000*sizeof(int));
    Queue1->top1 = -1;
    Queue1->top2 = -1;
    return Queue1;
}

void myQueuePush(MyQueue* obj, int x) {
    obj->top1++;
    obj->pushstack[obj->top1] = x;
    return ; 
}

int myQueuePop(MyQueue* obj) {
    // Take it upside down, take it up and then back it up

    if(obj->top2==-1)
    {        
        while(obj->top1 != -1)
        {
            obj->top2++;
            obj->popstack[obj->top2] = obj->pushstack[obj->top1];
            obj->top1--;
        }
    }
    int ans = obj->popstack[obj->top2];
    obj->top2--;
    return ans;
}

int myQueuePeek(MyQueue* obj) {
  if(obj->top2==-1)
    {        
        while(obj->top1 != -1)
        {
            obj->top2++;
            obj->popstack[obj->top2] = obj->pushstack[obj->top1];
            obj->top1--;
        }
    }
    int ans = obj->popstack[obj->top2];
    return ans;
}

bool myQueueEmpty(MyQueue* obj) {  
  return (obj->top1==-1&&obj->top2==-1);
}

void myQueueFree(MyQueue* obj) {
    free(obj->pushstack);
    free(obj->popstack);
    free(obj);
}