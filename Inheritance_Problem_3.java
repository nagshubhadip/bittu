/* output
Enter edge of cube 
5
the volume of the cube is 125.0
the surface area of the cube is 150.0
Enter radious of sphere 
6
the volume of the sphere is 904.77792
the surface area of the sphere is 452.38895999999994
Enter height of parallelepiped 
6
Enter width of parallelepiped 
8
Enter length of parallelepiped 
8
Enter base area of parallelepiped 
5
the volume of the Parallelepiped is 40.0
the surface area of the Parallelepiped is 320.0
*/
import java.util.*;
interface Shape3D
{
	public static final double PI=3.14159;
	public void calcVolume();
	public void calcSurfaceArea();
}
class Parallelepiped implements Shape3D
{
	
	double h,l,w,base_area;
	Scanner sc=new Scanner(System.in);
	Parallelepiped()
	{
		System.out.println("Enter height of parallelepiped ");
		h=sc.nextDouble();
		System.out.println("Enter width of parallelepiped ");
		w=sc.nextDouble();
		System.out.println("Enter length of parallelepiped ");
		l=sc.nextDouble();
		System.out.println("Enter base area of parallelepiped ");
		base_area=sc.nextDouble();
	}
	
	public void calcVolume()
	{
		
		double v=base_area*l;
		System.out.println("the volume of the Parallelepiped is "+v);
	}
	public void calcSurfaceArea()
	{
		double a=2*l*w+2*w*h+2*l*h;
		System.out.println("the surface area of the Parallelepiped is "+a);
	}
}
class Cube implements Shape3D
{
	
	Scanner sc=new Scanner(System.in);
	double edge;
	Cube()
	{
		System.out.println("Enter edge of cube ");
		edge=sc.nextDouble();
	}
	
	 public void calcVolume()
	{
		double v=edge*edge*edge;
		System.out.println("the volume of the cube is "+v);
	}
	public void calcSurfaceArea()
	{
		double a=6*edge*edge;
		System.out.println("the surface area of the cube is "+a);
	}
}
class Sphere implements Shape3D
{
	Scanner sc=new Scanner(System.in);
	double sphere_radious;
	Sphere()
	{
		System.out.println("Enter radious of sphere ");
		sphere_radious=sc.nextDouble();
	}
	public void calcVolume()
	{
		
		double x=(sphere_radious*sphere_radious*sphere_radious);
		double v=(4*Shape3D.PI*x)/3;
		System.out.println("the volume of the sphere is "+v);
	}
	public void calcSurfaceArea()
	{
		double a=(4*Shape3D.PI*sphere_radious*sphere_radious);
		System.out.println("the surface area of the sphere is "+a);
	}
}
public class Inheritance_Problem_3
{
	public static void main(String[] args)
	{
		
		Cube c=new Cube();
		c.calcVolume();
		c.calcSurfaceArea();
		
		Sphere sp=new Sphere();
		sp.calcVolume();
		sp.calcSurfaceArea();
		
		
		Parallelepiped p=new Parallelepiped();
		p.calcVolume();
		p.calcSurfaceArea();
		
	}
}











