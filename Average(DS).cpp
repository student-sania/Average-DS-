// Q no:5
#include <iostream>
using namespace std;
class Average {
private:
    float numbers[3];

public:
    void inputNumbers() {
        for (int i = 0; i < 3; ++i) {
            cout << "Enter number " << (i + 1) << ": ";
            cin >> numbers[i];
        }
    }
    float calculateAverage() {
        float sum = 0;
        for (int i = 0; i < 3; ++i) {
            sum += numbers[i];
        }
        return sum / 3;
    }
    void displayAverage() {
        float average = calculateAverage();
        cout << "The average of the three numbers is: " << average << endl;
    }
};
int main() {
    Average avg;
    avg.inputNumbers();
    avg.displayAverage();
    return 0;
}