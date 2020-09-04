#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int roll ();
void printHistogram (const int arr []);

int main()
{

    srand (time(NULL));
    int  trial;
    cout << "How many rolls do you want to run" << endl;
    cin >> trial;
    int arr[25] ={0};
    for (int i = 0; i < trial; i++)
    {
        // the loop for getting the sum of four dice in each run.

        int dice1 = roll();
        int dice2 = roll();
        int dice3 = roll();
        int dice4 = roll();
        int sum = dice1 + dice2 + dice3 + dice4;
        arr[sum]++;
    }

    printHistogram (arr);
    return 0;
}
int roll ()
{
    // get random number for each dice
        int value = rand()%6+1;
    return value;
}

void printHistogram (const int arr [])
{
    // using multiple dimensions array to create the histogram where the vertical line is the sum anf the horizontal line is the probability.
    for (int i = 4; i < 25; i++) {
        cout << i << ":";

        for (int j = 0; j < arr[i]; j++) {
            cout << "X";
        }
        cout << endl;
    }

}






