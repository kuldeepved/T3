#include <iostream>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int main()
{
    int t,i,n,cnt, tmp, resx , resy;
    cin >> t ;
    while(t--)
    {
        cnt = 0;

        cin >>n ;
        int x[(4*n)-1], y[(4*n)-1] ;
        for(i=0; i< (4*n)-1; i++)
        {
            cin >> x[i] >> y[i] ;
        }
        sort(x,x+(4*n-1));
        sort(y,y+(4*n-1));
        tmp = x[0] ;
        //For finding x
        for(i=0; i< (4*n)-1; i++)
        {
            cout << x[i] ;
            if(x[i] == tmp)
            {
                cnt++ ;
            }
            else
            {
                if(cnt%2 != 0)
                    resx = x[i-1];
                tmp = x[i] ;
                cnt = 1 ;
            }
        }
        // For finding y
        tmp = y[0] ;
        for(i=0; i< (4*n)-1; i++)
        {
            cout << y[i] ;
            if(y[i] == tmp)
            {
                cnt++ ;
            }
            else
            {
                if(cnt%2 != 0)
                    resy = y[i-1];
                tmp = y[i] ;
                cnt = 1 ;
            }
        }

        cout << resx << resy << endl ;
    }
    return 0;
}
