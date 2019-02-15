#include <bits/stdc++.h>
using namespace std;
int A[1000001];
int n, m, H, dau, giua, cuoi, vt, i;
long long Tinh(int h)
{
    long long T, j;
    T=0;
    for (j=1; j<=n; j++)
        if (A[j]>h) T=T+A[j]-h;
    return T;
}
int main()
{
    ifstream fin ("PHILAO.INP");
    fin >> n >> m;
    H=1000000001;
    for (i=1; i<=n; i++)
    {
        fin >> A[i];
        if (A[i]<H) H=A[i];
        cuoi=max(cuoi,A[i]);
    }
    fin.close();
    ofstream fout ("PHILAO.OUT");
    fout << Tinh(H) << endl;
    vt=-1;
    dau=0;
    do
    {
        giua=(dau+cuoi)/2;
        if (Tinh(giua)>=m)
        {
            vt=giua;
            dau=giua+1;
        }
        else cuoi=giua-1;
    } while (dau<=cuoi);
    fout << vt;
    fout.close();
    return 0;
}
