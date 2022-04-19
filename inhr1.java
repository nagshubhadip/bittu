/*========output===============
shubhadip_nag@ShubhadipNag:~/javaprog$ javac inhr1.java
shubhadip_nag@ShubhadipNag:~/javaprog$ java inhr1
Enter the side of square : 6
Area of square = 36.0
Enter the radius of circle : 7
Area of circle = 153.86
Enter the Base and hight of triangle : 4 6
Area of triangle = 12.0
Enter the radius of sphere : 4
Area of sphere =200.96
Enter the side of cube : 3
Area of cube = 54.0
Enter the 3 side of Parallelepiped : 3 3 3
Area of Parallelepiped = 54.0
*/
import java.util.*;
abstract class Shape
{
    int dim1,dim2,dim3;
    Shape()
    {
        dim1=dim2=dim3=0;
    }
    Shape(int d1,int d2,int d3)
    {
        dim1=d1;
        dim2=d2;
        dim3=d3;
    }
    abstract double area();
}

class Rectangle extends Shape
{
   int dim1,dim2;
    Rectangle()
    {
        dim1=dim2=0;
    }
    Rectangle(int dim1,int dim2)
    {
        dim1=dim1;
        dim2=dim2;
    }
    @Override
    public double area()
    {
        return dim1*dim2;
    }
}

class Square extends Shape
{
   int dim1;
    Square(){}
    Square(int d)
    {
        dim1=d;
    }
    @Override
    public double area()
    {
        return dim1*dim1;
    }
}

final class Triangle extends Shape
{
   int dim1,dim2;
    Triangle(){}
    Triangle(int b,int h)
    {
        dim1=b;
        dim2=h;
    }
    public double area()
    {
        return 0.5*dim1*dim2;
    }
}
class Circle extends Shape
{
   int dim1;
    Circle(){}
    Circle(int rad)
    {
        dim1=rad;
    }
    @Override
    public double area()
    {
        return 3.14*dim1*dim1;
    }
}
class Parallelepiped extends Rectangle
{
   int dim1,dim2,dim3;
    Parallelepiped(){}
    Parallelepiped(int d1,int d2,int d3)
    {
        dim1=d1;
        dim2=d2;
        dim3=d3;
    }
    @Override
    public double area()
    {
        return 2*(dim1*dim2+dim1*dim3+dim2*dim3);
    }
}

class Cube extends Square
{
   int dim1;
    Cube(){}
    Cube(int d1)
    {
        super(d1);
    }
    @Override
    public double area()
    {
        return 6*super.area();
    }
}

class Sphere extends Circle
{
   int dim1;
    Sphere()
    {
    }
    Sphere(int d1)
    {
        super(d1);
    }
    @Override
    public double area()
    {
        return 4*super.area();
    }
}

public class inhr1
{
    public static void main(String[] args)
    {
      Scanner in = new Scanner(System.in);
      System.out.print("Enter the side of square : ");
      Square ob1=new Square(in.nextInt());
      System.out.println("Area of square = "+ob1.area());
      System.out.print("Enter the radius of circle : ");
      Circle ob2=new Circle(in.nextInt());
      System.out.println("Area of circle = "+ob2.area());
      System.out.print("Enter the Base and hight of triangle : ");
      Triangle ob3=new Triangle(in.nextInt(),in.nextInt());
      System.out.println("Area of triangle = "+ob3.area());
      System.out.print("Enter the radius of sphere : ");
      Sphere ob4 =new Sphere(in.nextInt());
      System.out.println("Area of sphere ="+ob4.area());
      System.out.print("Enter the side of cube : ");
      Cube ob5=new Cube(in.nextInt());
      System.out.println("Area of cube = "+ob5.area());
      System.out.print("Enter the 3 side of Parallelepiped : ");
      Parallelepiped ob6=new Parallelepiped(in.nextInt(),in.nextInt(),in.nextInt());
      System.out.println("Area of Parallelepiped = "+ob6.area());
      
    }
}
