/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package lab.test;

/**
 *
 * @author mac
 */
public class Account {
    
     private String id;
    private String name;
    private int balance = 0;
   
    public Account(String id, String name) {
        this.id = id;
        this.name = name;
    }
   
   
   
    public Account(String id, String name, int bal) {
        this.id = id;
        this.name = name;
        this.balance = bal;
    }
   
   
    public String getID()
    {
        return id;
    }
   
    public String getName()
    {
        return name;
    }
   
    public int getBalance()
    {
        return balance;
    }
   
    public int credit(int amount)
    {  
        balance = balance + amount;
        return balance;
    }
   
     public int debit(int amount)
    {  
        if (amount <= balance)
        {
            balance = balance - amount;
        }
       
        else
            System.out.println("Amount exceeded balance.");
 
       
        return balance;
    }
     
     public int transferTo(Account a, int amnt )
     {
         if (amnt <= balance)
         {
             a.credit(amnt);
             balance = balance - amnt;
         }
         
         else
         {
             System.out.println("Amount exceeded balance!");
         }
         
         return balance;
     }
     
     
     public String toString()
     {
         return ("Account[" + id + "," + "name="+ name + ",balance="+balance+"]");
     }
     
}
