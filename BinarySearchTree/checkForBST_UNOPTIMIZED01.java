import java.util.*;
import java.io.*;
import java.lang.*;


// UNOPTIMIZED APPROACH - 01
class Node {
    int key;
    Node left, right;
    Node(int x)
    {
        key = x;
        left = right = null;
    }
}

public class checkForBST_UNOPTIMIZED01
{
    public static int maxValue(Node root){
        if (root == null) 
            return Integer.MIN_VALUE; 
      
        int res = root.key; 
        int lres = maxValue(root.left); 
        int rres = maxValue(root.right); 
        if (lres > res) 
            res = lres; 
        if (rres > res) 
            res = rres; 
        return res; 
    }
    
    public static int minValue(Node root) 
    { 
        if (root == null) 
          return Integer.MAX_VALUE; 
      
        int res = root.key; 
        int lres = minValue(root.left); 
        int rres = minValue(root.right); 
        if (lres < res) 
          res = lres; 
        if (rres < res) 
          res = rres; 
        return res; 
    }
    
    public static int isBST(Node root)  
    {  
      if (root == null)  
        return 1;  
          
      if (root.left!=null && maxValue(root.left) > root.key)  
        return 0;  
          
      if (root.right!=null && minValue(root.right) < root.key)  
        return 0;  
        
      if (isBST(root.left)==0 || isBST(root.right)==0)  
        return 0;  
          
      return 1;  
    } 
    public static void main(String args[])
    {
        Node root = new Node(4);  
        root.left = new Node(2);  
        root.right = new Node(5);  
        root.left.left = new Node(1);  
        root.left.right = new Node(3);  
          
        if (isBST(root)==1) 
            System.out.println("IS BST"); 
        else
            System.out.println("Not a BST");
    }
}

// TIME  COMPLEXITY : Worst Case - O(n²) | Balanced Tree = O(n log n)
// SPACE COMPLEXITY : Worst Case - O(n)  | Balanced Tree = O(log n)