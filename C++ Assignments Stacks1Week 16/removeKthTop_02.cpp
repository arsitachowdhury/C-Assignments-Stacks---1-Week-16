#include <iostream>
#include <stack>
using namespace std;
void printStack(stack<int> &st)
{
    stack<int> temp;
    while (st.size())
    {
        temp.push(st.top());
        st.pop();
    }
    while (temp.size())
    {
        cout << temp.top() << " "; // print bottum to top of original stack
        st.push(temp.top());
        temp.pop();
    }
    cout << endl;
}
void popAtTop(stack<int> &st, int idx)
{
    stack<int> temp;
    int id = 1;
    while (st.size())
    {
        temp.push(st.top());
        if (id == idx)
        {
            temp.pop();
        }
        id++;
        st.pop();
    }
    while (temp.size())
    {
        st.push(temp.top());
        temp.pop();
    }
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    cout<<"Before popping at top the number : ";
    printStack(st);
    popAtTop(st, 3);
    cout<<"After popping at top at index 3 : ";
    printStack(st);
    return 0;
}