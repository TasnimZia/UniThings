/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package palindrome.checker;

import java.util.Scanner;

/**
 *
 * @author mac
 */
public class PalCheckLogic {
    
    private String var;
    
    public PalCheckLogic(String var)
    {
        this.var = var;
    }
    
    public PalCheckLogic()
    {
        
    };
    
    
    void setVar()
    {
        System.out.println("Please Enter Your String: ");
        Scanner user_input = new Scanner(System.in);
        var = user_input.next();
        System.out.println("Your String Has Been Stored.\n\n ");
    }
    
    
    String getVar()
    {
        System.out.println("Your String Is " + var + ".\n\n");
        return var;
    }
    
    
    
    
    
    
    String Mirror(String var)
    {   
        StringBuilder str = new StringBuilder(var);
        
        return str.reverse().toString();
    }
    
    
    
    boolean checkIf()
    {
        String variable = Mirror(var);
        
        if (variable.equals(var))
        {
            System.out.println("They Are Palindromes.\n\n");
            return true;
        }
        
        else
        {
            System.out.println("They Aint.\n\n");
            return false;
        }
    }
}
