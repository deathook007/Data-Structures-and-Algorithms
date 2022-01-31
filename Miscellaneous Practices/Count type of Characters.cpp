using namespace std;

int main()
{

    int T, i, lc, uc, sc, nv, N;
    cin >> T;
    cin.ignore();
    while (T != 0)
    {
        lc = 0;
        uc = 0;
        nv = 0;
        sc = 0;
        string s;
        getline(cin, s);
        N = s.length();
        for (i = 0; i < N; i++)
        {
            if (s[i] > 64 && s[i] < 91)
            {
                uc = uc + 1;
            }
            else if (s[i] > 96 && s[i] < 123)
            {
                lc = lc + 1;
            }
            else if (s[i] > 47 && s[i] < 58)
            {
                nv = nv + 1;
            }
            else
            {
                sc = sc + 1;
            }
        }
        cout << uc << endl
             << lc << endl
             << nv << endl
             << sc << endl;

        T--;
    }
    return 0;
}