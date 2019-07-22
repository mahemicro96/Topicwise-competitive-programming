stack<int> s1;
int _stack::getMin()
{
    //Your code here
    if (!s1.empty() && !s.empty()) {
        return s1.top();
    }
    else
        return -1;
}
/*returns poped element from stack*/
int _stack::pop()
{
    //Your code here
    if (!s.empty()) {
        int a = s.top();
        int b = s1.top();
        if (a == b)
            s1.pop();
        s.pop();
        return a;
    }
    else {
        return -1;
    }
}
/*push element x into the stack*/
void _stack::push(int x)
{
    //Your code here
    if (s1.size() == 0)
        s1.push(x);
    else {
        if (x < s1.top())
            s1.push(x);
    }
    s.push(x);
}
