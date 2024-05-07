/*
 *
 **
 ***
 ****
 *****
 ******
 *******
 ******
 *****
 ****
 ***
 **
 *
 */
#include <iostream>
using namespace std;
int main()
{
    int i, j, k = 0, rows;
    cout << "Enter the number of rows-------->";
    cin >> rows;

    /*int i,j,k=0;
    for(i=1;i<=7;i++){
        i<=4?k++:k--;
        for(j=1;j<=4;j++){
            if(j<=k)
            cout<<"*";

            else
            cout<<" ";
        }
        cout<<" ";
        }
        return 0;
    }*/

    for (i = 1; i <= rows; i++)
    {
        i <= (rows + 1) / 2 ? k++ : k--;
        for (j = 1; j <= (rows + 1) / 2; j++)
        {
            if (j <= k)
                cout << "*";

            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}