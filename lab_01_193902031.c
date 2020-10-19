#include<stdio.h>
int stack[365],size,top=-1;

void push(int value)//
{
    if ( top == size -1 )
    {
        printf("oh no! Stack is full < Overflow Occur> %d\n",value);
    }
    else //
    {
        top +=1;
        printf("Your push index is %d and element is : %d\n",top,value);
        stack[top]=value;
    }
    //return push;
}

int main()
{

    int i;

    printf("Enter the Stack size: ");
    scanf("%d", &size);


    printf("\n<<<< Here is your Stack >>>>\n\n");
    printf("Your Stack is  Here : %d\n",size);

    push(17);
    push(5);
    push(123);
    push(25);
    push(12);
    push(87);



    for (i=top; i>=0; i-=1)
    {
        printf("%d\n",stack[i]);
    }
}
