
typedef struct {
    int top;
    int* data;
    int* min;
} MinStack;

MinStack* minStackCreate() {
    int MaxSize = 10000;
    MinStack* stack=(MinStack*)malloc(sizeof(MinStack));
    if(stack==NULL) return NULL;
    
    stack->top = -1;
    stack->data = (int*)malloc(MaxSize*sizeof(int));
    stack->min = (int*)malloc(MaxSize*sizeof(int));
    return stack;
}

void minStackPush(MinStack* obj, int val) {
    obj->top++;
    obj->data[obj->top] = val;
    if(obj->top == 0)
    {
        obj->min[obj->top] = val;
    }
    else
    {
        if((obj->min[obj->top-1])<val)
        {
            obj->min[obj->top] = obj->min[obj->top-1];
        }
        else
        {
            obj->min[obj->top] = val;
        }
    }
}

void minStackPop(MinStack* obj) {
    obj->top--;
}

int minStackTop(MinStack* obj) {
    return obj->data[obj->top];
}

int minStackGetMin(MinStack* obj) {
    return obj->min[obj->top];
}

void minStackFree(MinStack* obj) {
    free(obj->data);
    free(obj->min);
    free(obj);
}