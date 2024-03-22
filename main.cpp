#include <iostream>
using namespace std;

int main() {
    int first, second, N;

    // Input the first two initial values
    cout << "Enter the first initial value: ";
    cin >> first;
    cout << "Enter the second initial value: ";
    cin >> second;

    // Input the number of sequences
    cout << "Enter the number of sequences (N > 2): ";
    cin >> N;

    // Print the first two initial values
    cout << "Sequence of summation values:" << endl;
    cout << first << " " << second << " ";

    // Generate the sequence of numbers
    for (int i = 2; i < N; ++i) {
        int next = first + second;
        cout << next << " ";

        // Update first and second for the next iteration
        first = second;
        second = next;
    }

    cout << endl;

    return 0;
}
