#include <iostream>
#include <cstdlib> 

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Please input numbers to find average." << endl;
        return 1;
    }
    
    double sum = 0.0;
    cout << "---------------------------------\n";

    for (int i = 1; i < argc; i++) { 
        double num = atof(argv[i]); 
        sum += num;
    }

    cout << "Average of " << argc - 1 << " numbers = " << sum / (argc - 1) << endl;
    cout << "---------------------------------\n";

    return 0;
}