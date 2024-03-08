vector<int> sol(vector<int>&a, int x)
{
  if (x == 1) {
    a.insert(a.begin(), x);
    return a;
  }

  a = sol(a, x - 1);
  a.insert(a.begin() + x - 1, x);

  return a;
}

vector<int> printNos(int x) {

    vector<int> a;
    return sol(a,x);



}
