#include "blur_factor_improved.hpp"

using namespace std;

vector < vector <float> > blur_factor_improved() {
    
    // 2D vector reprenting the blur filter
    vector < vector <float> > window;
    vector <float> row;
    static float blurring, center, corner, adjacent;
    
    // calculate blur factors
    blurring = .12;
    center = 1.0 - blurring;
    corner = blurring / 12.0;
    adjacent = blurring / 6.0;
    
    int i, j;
    float val;
    
    // create the blur window
  	window = {{corner, adjacent, corner}, {adjacent, center, adjacent}, {corner, adjacent, corner}};
  
    return window;
}

