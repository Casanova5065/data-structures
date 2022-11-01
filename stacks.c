# include <stdio.h>
# define MAX 5

static int top = -1;
// int stack[MAX];

void push(int s[], int value)
{
    if(top == MAX-1){
        printf("[-] Stack Capacity reached !!\n");
        return;
    }
    top = top + 1;
    s[top] = value;
}

int pop(int s[])
{
    int value = 0;
    if(top == -1){
        printf("[-] Stack underflow !!\n");
        return;
    }
    value = s[top];
    top = top - 1;
    return value;
}

int peek(int s[])
{
    if(top == -1){
        printf("[-] Stack underflow !!\n");
        return;
    }
    return (s[top]);
}

void display(int s[])
{
    int i = top;
    for(i=top; i>=0; i--){
        printf("%d position => %d\n",i, s[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    
    int stack[MAX];

    push(stack, 5);
    push(stack, 4);
    push(stack, 2);
    push(stack, 1);
    push(stack, 7);
    display(stack);

    int data = pop(stack);
    printf("Pop = %d\n\n", data);
    display(stack);

    // data = peek(stack);
    // printf("Peek = %d\n", data);
    // display(stack);
    return 0;
}
