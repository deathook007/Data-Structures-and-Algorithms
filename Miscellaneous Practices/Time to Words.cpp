#include <bits/stdc++.h>
using namespace std;
main()
{
    string word[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen",
                     "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"};

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int h, m;
        cin >> h;
        cin >> m;
        if (m == 0)
            cout << word[h] << " o' clock" << endl;
        else if (m == 1)
            cout << word[1] << " minute past " << word[h] << endl;
        else if (m == 59)
            cout << word[1] << " minute to " << word[h + 1] << endl;
        else if (m <= 30)
        {
            if (m == 15)
                cout << "quarter past " << word[h] << endl;
            else if (m == 30)
                cout << "half past " << word[h] << endl;
            else
                cout << word[m] << " minutes past " << word[h] << endl;
        }
        else
        {
            m = 60 - m;
            ;
            if (m == 15)
                cout << "quarter to " << word[h + 1] << endl;
            else if (m == 30)
                cout << "half to " << word[h + 1] << endl;
            else
                cout << word[m] << " minutes to " << word[h + 1] << endl;
        }
    }
    return 0;
}