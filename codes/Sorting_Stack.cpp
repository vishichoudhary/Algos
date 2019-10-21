#include<iostream>
using namespace std;
#define Max 100

struct STACKS
{
    int a[Max];
    int top;
}; 
typedef struct STACKS STK;

void push(STK *s, int item)
{
    if(s->top == Max-1)
        cout << "Stack Overflow";
    else{
        s->top++;
        s->a[s->top] = item;
    }
}

bool IsEmpty(STK *S)
{
    return S->top == -1;
}

int pop(STK *S)
{
    if(IsEmpty(S)==true)
        return -1;
    else{
        return S->a[S->top--];
    }
}

void disp(STK *s)
{
    if(IsEmpty(s)==true)
        cout << "Stack Empty";
    else
        {
            int i;
            for(i=0; i<=s->top;i++)
                cout << s->a[i] << " ";
            cout << endl;    
        }    
}

int gettop(STK *s)
{
    if(IsEmpty(s)==true)
        return -1;
    else
    {
        return s->a[s->top];
    }
    
}

int main()
{
    STK s1,s2;
    s1.top = -1;
    s2.top = -1;
    int num,i;
    cout << "Enter number of Elements: ";
    cin >> num;
    int a[Max];
    cout << "Enter Data: ";
    for(i=0; i<num; i++)
        cin >> a[i];
    i=0;    
    while (i<num)
    {
        if(s1.top == -1)
            push(&s1,a[i]);
        else
            {
                while(gettop(&s1)>a[i] && s1.top >-1 )
                {
                    push(&s2,pop(&s1));
                }
                push(&s1,a[i]);
                while(s2.top>-1)
                    push(&s1,pop(&s2));
            }
            i++;
    }
    disp(&s1);
    return 0;

}