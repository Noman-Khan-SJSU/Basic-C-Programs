/*
// Direction of a point from a line segment. Used in maps, etc.

struct Point
{
    double x,y;                                                         // Co-ordinates of the line segment and the point.
};

const int left=-1, right=+1, on_the_line=0;

double get_cross_product(struct Point p1, struct Point p2)
{
    return p1.x * p2.y - p2.x * p1.y;                                   // If cross product is positive, point is on the left. On negative it is on the right side of the line segment.
}

struct Point subtract(struct Point p1, struct Point p2)                 // This function is needed to shift the co-ordinates of the first point in the line segment to origin and update the other co-ordinates accordingly.
{
    struct Point result;
    result.x = p1.x - p2.x;
    result.y = p1.y - p2.y;
    return result;
}

int get_direction(struct Point a, struct Point b, struct Point p)       // This function returns the directions of the point from the line segment.
{
    b = subtract(b,a);
    p = subtract(p,a);
    double cross_product = get_cross_product(b,p);
    if (cross_product>0)
        return left;
    else if(cross_product<0)
        return right;
    else
        return on_the_line;
}*/
