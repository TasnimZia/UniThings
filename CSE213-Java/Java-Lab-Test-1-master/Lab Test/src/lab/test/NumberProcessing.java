package lab.test;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author mac
 */
public class NumberProcessing {
    
    public boolean printPrime(int num) throws ArithmeticException
    {
//        int counter = 0;
        
//        int term = min;
        
        int term = num;
        
        boolean prime_flag = true;
        
        for (int iter = 2; iter<=(Math.sqrt(term)); iter++)
        {
            if (term % iter == 0)
            {
                prime_flag = false;
                
                
                System.out.println(num + " is not a prime number.");
                
                
                return prime_flag;
                
                
            }
        
        }
        
//        if (prime_flag )

        System.out.println(num + " is a prime number.");
      
        return prime_flag;
    }
    
    
    
    public int printPrime(int min, int max) 
    {
        int counter = 0;
        
        for (int iter = min; iter <= max; iter++)
        {
            if (printPrime(iter))
            {
                counter++;
            }
        }
        
        System.out.println("There are "+ counter + " prime numbers between " + min + " and " + max + ".");
        return counter;
    }
    
    
//    public void display(boolean value, int num)
    {
//        if (value == true)
//             System.out.println(num + " is a prime number.");
        
//        else
//             System.out.println(num + " is not a prime number.");

    }
    
    
//    public void display(int count, int)
}
