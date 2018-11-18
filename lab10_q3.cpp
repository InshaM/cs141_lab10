
//Include in the library.
#include <iostream>

using namespace std;

class Rectangle {
   public:
      double length;         // Length of the Rectangle 
      double breadth;        // Breadth of the Rectangle 
               

      // Member functions declaration
      double getArea(void);
      double getPerimeter(void);
      void setDimentions( double len, double bre);
};
// Member functions definitions
double Rectangle::getArea(void) {
   return length*breadth;
}
// Member functions definitions
double Rectangle::getPerimeter(void) {
   return 2*(length+breadth);
}

void Rectangle::setDimentions( double len, double bre){
   length = len;
   breadth = bre;
}

// Main function for the program
int main() {
   double length,breadth; 
   Rectangle rect1;                // Declare rect1 which is the rectangle
   Rectangle rect2;               // Declare rect2 which is the rectangle
   double area1 = 0.0;              // Store the area of the Rectangle here
   double area2 = 0.0;
   double perimeter1 = 0.0;         // Store the perimeter of the Rectangle here
   double perimeter2 = 0.0;      
 
   // dimentions of rect1 
   cout<<"What is the length of Rectangle1 : ";
   cin>>rect1.length;
    cout<<"What is the breadth of Rectangle1 : ";
   cin>>rect1.breadth;
   rect1.setDimentions(rect1.length,rect1.breadth);
   // area of Rectangle 1
   area1 = rect1.getArea();
   cout << "Area of the Rectangle1 : " << area1 <<endl;
      // perimeter of Rectangle 1
   perimeter1 = rect1.getPerimeter();
   cout << "Perimeter of the Rectangle1 : " << perimeter1 <<endl;
   
   // dimentions of rect2
   cout<<"What is the length of Rectangle2 : ";
   cin>>rect2.length;
    cout<<"What is the breadth of Rectangle2 : ";
   cin>>rect2.breadth;
   rect2.setDimentions(rect2.length,rect2.breadth); 
   // area of Rectangle 2
   area2 = rect2.getArea();
   cout << "Area of the Rectangle2 : " << area2 <<endl;
   // perimeter of Rectangle 2
   perimeter2 = rect2.getPerimeter();
   cout << "Perimeter of the Rectangle2 : " << perimeter2 <<endl;
   
   //comparing the two areas of the rectangles
   if(area1>area2){
       cout<<"Area of rectangle1 is greater than area of rectangle2"<<endl;
   }
   if(area1<area2){
       cout<<"Area of rectangle1 is less than area of rectangle2"<<endl;
   }
   else{
       cout<<"Area of rectangle1 is equal to area of rectangle2"<<endl;
   }
   
   //comparing the two Perimeters of the rectangles
   if(perimeter1>perimeter2){
       cout<<"Perimeter of rectangle1 is greater than Perimeter of rectangle2"<<endl;
   }
   if(perimeter1<perimeter2){
       cout<<"Perimeter of rectangle1 is less than Perimeter of rectangle2"<<endl;
   }
   else{
       cout<<"Perimeter of rectangle1 equal to Perimeter of rectangle2"<<endl;
   }
   return 0;
}