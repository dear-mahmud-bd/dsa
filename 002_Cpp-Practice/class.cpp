#include <bits/stdc++.h>
using namespace std;

class Cuboid {
    private:
    double length, width, height;
    
    public:
    // Empty constructor
    Cuboid() {
        length = 0;
        width = 0;
        height = 0;
    }
    // Constructor with parameters
    Cuboid(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }
    // Function to calculate volume
    double getVolume() {
        return length * width * height;
    }
    // Function to calculate surface area
    double getSurfaceArea() {
        return 2 * length * width + 2 * length * height + 2 * height * width;
    }
    
};

int main() {
    // create an array of Cuboid objects
    Cuboid cuboids[] = {
        Cuboid(3, 4, 5),
        Cuboid(2, 6, 4),
        Cuboid(1, 2, 8),
        Cuboid(5, 5, 5),
        Cuboid(4, 3, 6)
    };
    int size = sizeof(cuboids) / sizeof(cuboids[0]);

    // sort by volume
    cout << "Sorted by volume:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Cuboid " << i+1 << " volume: " << cuboids[i].getVolume() << endl;
    }

    // sort by surface area
    cout << "Sorted by surface area:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Cuboid " << i+1 << " surface area: " << cuboids[i].getSurfaceArea() << endl;
    }
    return 0;
}