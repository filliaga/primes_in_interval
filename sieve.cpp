
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{

    int beginning, end;

    cout << "The beginning of your interval: " << endl;
    cin >> beginning;
    cout << "The end of your inteval: " << endl;
    cin >> end;

    cout << "All of the prime numbers in your interval are:" << endl;

    for (int i = beginning; i <= end; i++)
    {

        int divisor = 1;
        int divisor_counter = 0;

        while (divisor <= beginning)
        {
            if (beginning % divisor == 0)
            {
                divisor_counter++;
                divisor++;
            }
            else
            {
                divisor++;
            }
        }

        if (divisor_counter == 2)
        {
            cout << beginning << endl;
        }

        beginning++;
    }

    return 0;
}
