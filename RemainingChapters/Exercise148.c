// Atharva Nayak
// 0905CS241063
#include <stdio.h>

typedef struct {
    float x;
    float y;
} Point;

float distance(Point p1, Point p2) {
    float dx = p1.x - p2.x;
    float dy = p1.y - p2.y;
    float d = dx * dx + dy * dy;
    float r = d;
    for (int i = 0; i < 100; i++) r = (r + d / r) / 2.0f;
    return r;
}

int main() {
    Point p1 = {0.0, 0.0}, p2 = {3.0, 4.0};
    printf("Point 1: (%.1f, %.1f)\n", p1.x, p1.y);
    printf("Point 2: (%.1f, %.1f)\n", p2.x, p2.y);
    printf("Distance: %.2f\n", distance(p1, p2));
    return 0;
}
