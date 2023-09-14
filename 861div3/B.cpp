#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

/* 
   Computes the direction of the three given points
   Returns a positive value if they form a counter-clockwise orientation,
   a negative value if they form a clockwise orientation,
   and zero if they are collinear 
*/
int direction(Point p, Point q, Point r) {
    return (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
}

// Checks if two line segments are collinear and overlapping
bool areCollinearAndOverlapping(Point a1, Point b1, Point a2, Point b2) {
    // Check if the line segments are collinear
    if (direction(a1, b1, a2) == 0) {
        // Check if the line segments overlap
        if (a2.x <= max(a1.x, b1.x) && a2.x >= min(a1.x, b1.x) && a2.y <= max(a1.y, b1.y) && a2.y >= min(a1.y, b1.y)) {
            return true;
        }
    }
    return false;
}

// Checks if two line segments intersect or not
bool isintersect(Point a1, Point b1, Point a2, Point b2) {
    // Compute the directions of the four line segments
    int d1 = direction(a1, b1, a2);
    int d2 = direction(a1, b1, b2);
    int d3 = direction(a2, b2, a1);
    int d4 = direction(a2, b2, b1);

    // Check if the two line segments intersect
    if (((d1 > 0 && d2 < 0) || (d1 < 0 && d2 > 0)) && ((d3 > 0 && d4 < 0) || (d3 < 0 && d4 > 0))) {
        return true;
    }

    // Check if the line segments are collinear and overlapping
    if (areCollinearAndOverlapping(a1, b1, a2, b2) || areCollinearAndOverlapping(a2, b2, a1, b1)) {
        return true;
    }

    return false;
}

int main() {
    // Define the two line segments
    Point a1 = {1, 2}, b1 = {1, 7};
    Point a2 = {5, 5}, b2 = {-5, 5};

    // Check if the two line segments intersect or not
    cout << (isintersect(a1, b1, a2, b2) ? "Yes, Line segments intersect each other" : "No, Line segments do not intersect each other") << endl;

    return 0;
}