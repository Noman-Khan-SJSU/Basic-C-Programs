// Area of Polygon having n vertices.

#include <stdio.h>
#include <math.h>

struct Point
{
    double x;
    double y;
};

struct Point vertices[100];                                       // Vertices of the Polygon are stored here.

double cross_product(struct Point a, struct Point b)
{
    return a.x * b.y - a.y * b.x;                                // Cross-product of two vectors (points in 2D surface, plane) // This is vector algebra.
}                                                               // Cross-product is positive in anti-clockwise direction and negative in clockwise direction. Cross product/2 is the area of the triangle.

double area(struct Point vertices[], int n)                     // n is the number of vertices/edges of the polygon.
{
    double sum = 0.0;                                           // Sum of all the areas of the individual triangles formed by the vertices the polygon is the area of the polygon.
    int i;
    for (i=0;i<n;i++)
    {
        sum += cross_product(vertices[i], vertices[(i+1)%n]);   // %n is to make sure that last vertex is paired with the first vertex to calculate the cross_product (area) of the last triangle.
    }
    return fabs(sum)/2.0;
}
