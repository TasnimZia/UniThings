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
public class Account {

    
    private double balance;
    
    
    public Account(double initialBalance)
    {
        if (initialBalance > 0.0)
            balance = initialBalance;
    }
    
    
    public void credit(double amount)
    {
        balance = balance + amount;
    }
    
    
    public void debit(double amount)
    {
        if (amount > balance)
            System.out.println("Sorry. You Do Not Have Enough Balance To Withdraw This Much. Please Try Again.");
        
        else
            balance = balance - amount;
    }
    
    public double getBalance()
    {
        return balance;
    }
    /**
     * @param args the command line arguments
//     */
//    public static void main(String[] args) {
//        // TODO code application logic here
//    }
    
}
