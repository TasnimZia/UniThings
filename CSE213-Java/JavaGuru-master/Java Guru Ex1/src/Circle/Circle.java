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
public class Circle {     // save as “Circle.java”

// private instance variable, not accessible from outside this class
private double radius;
private String color;

// 1st constructor, which sets both radius and color to default
public Circle() {
radius = 1.0;
color = "red";
}

// 2nd constructor with given radius, but color default
public Circle(double r) {
radius = r;
color = "red";
}



public Circle(double r, String c)
{
    this.radius = r;
    this.color = c;
}


// A public method for retrieving the radius
public double getRadius() {
return this.radius;
}

// A public method for computing the area of circle
public double getArea() {
return radius*radius*Math.PI;
}


public String getColor()
{
    return this.color;
}


// Setter for instance variable radius
public void setRadius(double r) {
this.radius = r;
}

// Setter for instance variable color
public void setColor(String c) 
{
 this.color = c;

}



public String toString() {
return "Circle: radius=" + radius + " color=" + color;
}



}
