/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package account;

/**
 *
 * @author mac
 */

import java.util.Scanner;


public class AccountTester {
    
    public static void main(String[] args) {
        Account account1 = new Account(50.02099);
        Account account2 = new Account(-35.3);
        
        System.out.printf("Account1 Balance: $%.2f\n", account1.getBalance());
        
        System.out.printf("Account2 Balance: $%.2f\n", account2.getBalance());

        
        Scanner input = new Scanner(System.in);
        
        double depositAmount; 
        
        System.out.print("Please Enter The Amount You Want To Deposit In Account1: ");
        
        depositAmount = input.nextDouble();
        
        System.out.printf("\nAdding %.2f To Account1 Balance\n\n", depositAmount);
        
        account1.credit(depositAmount);
        
         System.out.printf("Account1 Balance: $%.2f\n", account1.getBalance());
        
        System.out.printf("Account2 Balance: $%.2f\n", account2.getBalance());

        System.out.print("Please Enter The Amount You Want To Deposit In Account2: ");
        
        depositAmount = input.nextDouble();
        
        System.out.printf("\nAdding %.2f To Account2 Balance\n\n", depositAmount);
        
        account2.credit(depositAmount);
        
         System.out.printf("Account1 Balance: $%.2f\n", account1.getBalance());
        
        System.out.printf("Account2 Balance: $%.2f\n", account2.getBalance());
        
        

    }
}
