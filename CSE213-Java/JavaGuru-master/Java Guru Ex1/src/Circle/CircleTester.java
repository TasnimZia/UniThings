/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Circle;

/**
 *
 * @author mac
 */
public class CircleTester {
     // save as "TestCircle.java"           
   public static void main(String[] args) {
 // Declare and allocate an instance of class Circle called c1 with default radius and color 
 
 Circle c1 = new Circle();
 
// Use  1st constructor, // which sets both radius and color to default 

      // Use the dot operator to invoke methods of instance c1 and print the method results.
      
      //String c1_color = 
       
      double radius = c1.getRadius();
      
      System.out.println("The Radius of c1 Is " + radius + ".\n\n");
      
      
      double area = c1.getArea();
      
       System.out.println("The Area Of c1 Is "+ area + ".\n\n");
       
// Declare and allocate an instance of class circle called c2 with the given radius and default color
// Use 2nd constructor with given radius, but color default.

       Circle c2 = new Circle(25);
       
       double radius_2 = c2.getRadius();
       
       System.out.println("The Radius Of c2 Is "+ radius_2 + ". \n\n");
       double area_2 = c2.getArea();
       
       System.out.println("The Area of c2 Is "+ area_2 + ". \n\n");
      // Use the dot operator to invoke methods of instance c2.
      
       System.out.println("The Color of c2 Is "+ c2.getColor() + ".\n\n");
      
       Circle c3 = new Circle(2, "pink");
       
       double radius_3 = c3.getRadius();
       
       System.out.println("The Radius Of c3 Is "+ radius_3 + ". \n\n");
       double area_3 = c3.getArea();
       
       System.out.println("The Area of c3 Is "+ area_3 + ". \n\n");
       
        System.out.println("The Color of c3 Is "+ c3.getColor() + ".\n\n");
        
        
        
        
        
        Circle c4 = new Circle();
        
        c4.setColor("orange");
        
        c4.setRadius(0);
        
        System.out.println("The Area of c4 Is "+ c4.getArea() + ". \n\n");
       
        System.out.println("The Color of c4 Is "+ c4.getColor() + ".\n\n");
        
        
        
        
        Circle c5 = new Circle(5.0);
System.out.println(c5.toString());   // explicit call
   }
    
}
