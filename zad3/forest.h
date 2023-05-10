#include <vector>
#include "shape.h"
#include "border.h"
#include "triangle.h"
#include "trapez.h"
using namespace std;

class Forest {
private:
    int H, W;
    vector<Shape*> shapes;
    int** tab;

public:
    Forest(int H, int W);
    ~Forest();

    void AddShape(Shape* sh, int y, int x);
    void PrintForest();
    Forest& operator+=(Shape* sh);

};
