/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab.test;

import java.util.Scanner;

/**
 *
 * @author mac
 */
public class LabTester {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
          NumberProcessing np = new NumberProcessing();
          
//          np.printPrime(25);
//          np.printPrime(2);
//          np.printPrime(25,100);
//          np.printPrime(25);

            Account[] accounts = new Account[5];
            
            int iter = 0; 
            
            System.out.println("Menu:");
            System.out.println("1) Create New Account");
            System.out.println("2) Debit To Account");
            System.out.println("3) Credit To Account");
            System.out.println("4) Transfer To Account");
            
            Scanner input = new Scanner(System.in);
            
            String choice = input.next();
            
//            System.out.println(choice);
            
            if (choice.equals("1"))
            {
                System.out.print("Please Enter Your Name: ");
                
                String name = input.next();
                
                System.out.print("Please Enter Your ID: ");
                
                String id = input.next();
                
                System.out.print("Please Enter Your Initial Balance: ");
                
                int bal = input.nextInt();
                
                
//                System.out.println(bal);
                if (bal == (0))
                    accounts[iter] = new Account(id, name);
                
                else
                    accounts[iter] = new Account(id, name, bal);
                
                
                
            }
            
    }
    
}
