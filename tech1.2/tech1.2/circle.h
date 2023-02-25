

const double PI = 3.14159265358979323846;

class Circle {
public:
    Circle(double r, double x, double y);
    double getRadius() const;
    double getArea() const;
    bool isCircumscribed(double a, double b, double c) const;
    bool isInscribed(double a, double b, double c) const;
    bool isIntersected(double r, double x_cntr, double y_cntr) const;
private:
    double radius;
    double x_center;
    double y_center;
};


