/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package palindrome.checker;

/**
 *
 * @author mac
 */
public class PalindromeChecker {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        String variable = "121";
        
        PalCheckLogic PChecker = new PalCheckLogic();
        
        PChecker.setVar();
        PChecker.getVar();
        
        
        PChecker.checkIf();
    }
    
}
