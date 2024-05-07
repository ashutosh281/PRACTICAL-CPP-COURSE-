/*   1   
   2 3 2
  3 4 5 4 3
 4 5 6 7 6 5 4                   */ 
#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        k = i;
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {

                cout << " " << k;
                j < 4 ? k++ : k--;
            }

            else
            {
                cout << " ";
            }
        }

        cout << "\n";
    }
    return 0;
}