#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main()
{

    queue<int>numsb;
    queue<int>numse;
    queue<int>kr1;

    int d[110], n, s, t, res, poc=0, kra=0, kra2=0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {

        scanf("%d", &d[i]);

    }

    scanf("%d %d", &s, &t);

    if (t == s)
    {
        printf("0");
    }

    else if (s == 1 && t != 1)
    {

        //Od pocetka s = 1

        for (int i = 0; i <= t-2; i++)
        {

            numsb.push(d[i]);

        }

        while(!numsb.empty())
        {

            poc += numsb.front();
            numsb.pop();

        }

        //Od kraja s = 1

        for (int i = t-1; i < n; i++)
        {

            numse.push(d[i]);

        }

        while(!numse.empty())
        {

            kra += numse.front();
            numse.pop();

        }

        if(kra > poc)
        {
            printf("%d", poc);
        }
        else
        {
            printf("%d", kra);
        }

    }

    if (t == 1 && s != 1)
    {

        //Od pocetka k = 1

        for (int i = 0; i <= s-2; i++)
        {

            numsb.push(d[i]);

        }

        while(!numsb.empty())
        {

            poc += numsb.front();
            numsb.pop();

        }

        //Od kraja k = 1

        for (int i = s-1; i < n; i++)
        {

            numse.push(d[i]);

        }

        while(!numse.empty())
        {

            kra += numse.front();
            numse.pop();

        }

        if(kra > poc)
        {
            printf("%d", poc);
        }
        else
        {
            printf("%d", kra);
        }

    }



    else if (t != 1 && s != 1 && t > s)
    {

        //od s-1 do t-2

        for (int i = s-1; i <= t-2; i++)
        {

            numsb.push(d[i]);

        }

        while(!numsb.empty())
        {

            poc += numsb.front();
            numsb.pop();

        }

        //Od kraja k = 1

        for (int i = t-1; i < n; i++)
        {

            numse.push(d[i]);

        }

        while(!numse.empty())
        {

            kra += numse.front();
            numse.pop();

        }

        //Od pocetka do s-1

        for (int i = 0; i < s-1; i++)
        {

            kr1.push(d[i]);

        }

        while(!kr1.empty())
        {

            kra2 += kr1.front();
            kr1.pop();

        }

        kra = kra2 + kra;

        if(kra > poc)
        {
            printf("%d", poc);
        }
        else
        {
            printf("%d", kra);
        }

    }

    else if (t != 1 && s != 1 && t < s)
    {

        //od s-1 do t-2

        for (int i = t-1; i <= s-2; i++)
        {

            numsb.push(d[i]);

        }

        while(!numsb.empty())
        {

            poc += numsb.front();
            numsb.pop();

        }

        //Od kraja k = 1

        for (int i = s-1; i < n; i++)
        {

            numse.push(d[i]);

        }

        while(!numse.empty())
        {

            kra += numse.front();
            numse.pop();

        }

        //Od pocetka do s-1

        for (int i = 0; i < t-1; i++)
        {

            kr1.push(d[i]);

        }

        while(!kr1.empty())
        {

            kra2 += kr1.front();
            kr1.pop();

        }

        kra = kra2 + kra;

        if(kra > poc)
        {
            printf("%d", poc);
        }
        else
        {
            printf("%d", kra);
        }

    }

    return 0;
}
