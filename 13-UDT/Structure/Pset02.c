#include <stdio.h>
#include <string.h>

typedef struct Point {
    int x;
    int y;
} Point;

typedef struct Rectangle {
    int left;
    int top;
    int width;
    int height;
} Rectangle;

typedef struct book {
    char author[30];
    char title[30];
    float price;
} book;

typedef struct car {
    double engine_size;
    int num_doors;
} car;

typedef struct Child {
    double height;
    double weight;
    int years;
    int months;
    char gender;
} Child;

int main()
{
    // Example 1: Point
    Point p1 = { 10, 20 };
    Point p2;
    p2.x = 30;
    p2.y = 40;
    
    printf("Point 1: (%d, %d)\n", p1.x, p1.y);
    printf("Point 2: (%d, %d)\n", p2.x, p2.y);
    printf("\n");
    
    // Example 2: Rectangle
    Rectangle rect = { 100, 150, 50, 80 };
    int right = rect.left + rect.width;
    int bottom = rect.top + rect.height;
    
    printf("Rectangle: left=%d, top=%d", rect.left, rect.top);
    printf(", width=%d, height=%d\n", rect.width, rect.height);
    printf("Right=%d, Bottom=%d\n", right, bottom);
    printf("\n");
    
    // Example 3: book
    book b1;
    strcpy(b1.author, "Bjarne Stroustrup");
    strcpy(b1.title, "The C++ Programming Language");
    b1.price = 79.99;
    
    book b2 = { "Stephen Prata", "C++ Primer Plus", 89.50 };
    
    printf("Book 1: %s by %s - $%g\n", b1.title, b1.author, b1.price);
    printf("Book 2: %s by %s - $%g\n", b2.title, b2.author, b2.price);
    printf("\n");
    
    // Example 4: car
    car myCar;
    myCar.engine_size = 2.5;
    myCar.num_doors = 4;
    
    car yourCar = { 1.8, 2 };
    
    printf("My car: %gL, %d doors\n", myCar.engine_size, myCar.num_doors);
    printf("Your car: %gL, %d doors\n", yourCar.engine_size, yourCar.num_doors);
    printf("\n");
    
    // Example 5: Child
    Child a = { 20.0, 12.4, 95, 2, 'f' };
    Child b = { 18.5, 11.2, 84, 9, 'm' };
    
    printf("Child A: height=%g, weight=%g", a.height, a.weight);
    printf(", age=%d years %d months", a.years, a.months);
    printf(", gender=%s\n", (a.gender == 'f' ? "Female" : "Male"));
    
    printf("Child B: height=%g, weight=%g", b.height, b.weight);
    printf(", age=%d years %d months", b.years, b.months);
    printf(", gender=%s\n", (b.gender == 'f' ? "Female" : "Male"));
    
    return 0;
}