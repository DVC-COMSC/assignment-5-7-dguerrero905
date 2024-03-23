#include <iostream>
using namespace std;

int main() {
    int first, second, N;

    // Ask for the first two initial values
    cout << "Enter the first initial value: ";
    cin >> first;
    cout << "Enter the second initial value: ";
    cin >> second;

    // Ask for the number of sequences
    cout << "Enter the number of sequences (N > 2): ";
    cin >> N;

    // Print the first two initial values
    cout << first << " " << second << " ";

    // Generate the sequence of numbers
    int prev = first, curr = second;
    for (int i = 2; i < N; ++i) {
        int next = prev + curr;
        cout << next << " ";

        // Update previous and current for the next iteration
        prev = curr;
        curr = next;
    }

    cout << endl;

    return 0;
}
