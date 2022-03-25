#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];

    int uppersum = 0;
    int lowersum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j]; // for taking input from user the elements of an array
        }
    }

    // print the element of the array
    cout << "ELEMENT OF AN ARRAY " << endl;
    for (auto i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // to print the upper half of the matrix
    cout << "ELEMENTS OF THE UPPER HALF " << endl;
     for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j <3 ; j++)
        {

            if (i > j)
            {
                cout << " " << " ";
            }

            else{
            uppersum = uppersum + arr[i][j];
            cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    

    // for print the lower half of the martix
    cout << "ELEMENTS OF THE LOWER HALF" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            
            if (i < j)
            {
                cout << " " << " ";
            }

            else{

            lowersum = lowersum + arr[i][j];
            cout << arr[i][j] << " ";

            }

        }
        cout << endl;
    }
    cout << endl;
   

    cout << "THE SUM OF UPPER HALF IS " << uppersum <<"\n";

    cout << "THE SUM OF LOWER HALF IS " << lowersum << "\n";

    return 0;
}
