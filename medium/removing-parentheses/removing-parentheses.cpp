int solve(string s) {
    int a=0, b=0;
    for (char c : s) {
        if (c=='(')
            a++;
        else if (a == 0)
            b++;
        else
            a--;
    }
    a+=b;
    return a;
}
