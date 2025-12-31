#include <iostream>
using namespace std;
#include <string>

void revWord(string arr, int sizeOfArr) {
    int operation = 0;
    string sec = "";
    int tempCount = 0;

    int freq[sizeOfArr];
    int freqHi = 0;

    char tempArr[sizeOfArr];
    int end = sizeOfArr - 1; // main counter for input arr

    // Step 1: find all space indices
    for (int i = 0; i < sizeOfArr; i++) {
        if (arr[i] == ' ') {
            freq[freqHi] = i;
            freqHi++;
        }
    }

    int processingInd = freqHi; // start from last word

    while (processingInd >= 0) {
        int start; // start index of current word
        int wordEnd; // end index of current word

        if (processingInd == 0) {
            start = 0;
        } else {
            start = freq[processingInd - 1] + 1;
        }

        if (processingInd == freqHi) {
            wordEnd = sizeOfArr - 1;
        } else {
            wordEnd = freq[processingInd] - 1;
        }

        // copy characters of current word to tempArr
        tempCount = 0;
        for (int i = start; i <= wordEnd; i++) {
            tempArr[tempCount++] = arr[i];
        }

        // append tempArr to sec
        for (int i = 0; i < tempCount; i++) {
            sec += tempArr[i];
        }

        // add a space if not the last word
        if (processingInd > 0) {
            sec += ' ';
        }

        processingInd--;
    }

    cout << sec << endl;
}

int main() {
    string input = "How are you";
    cout << input << endl;

    // cout << "dubbug cmd" << endl;
    revWord(input, input.size());
    // cout << "dubbug cmd" << endl;

    return 0;
}
