
import java.util.*;
import java.io.*;
import java.lang.*;

class Node {
    int key;
    Node left, right;
    Node(int x)
    {
        key = x;
        left = right = null;
    }
}

public class FixBstWith2NodesSwapped {

    public static void inorder(Node root){
        if(root!=null){
            inorder(root.left);
            System.out.print(root.key+" ");
            inorder(root.right);
        }
    }
    
    static Node prev=null,first=null,second=null;
    public static void fixBST(Node root)  
    {  
        if (root == null)  
            return;  
        fixBST(root.left);
        if(prev!=null && root.key<prev.key){
            if(first==null)
                first=prev;
            second=root;
        }
        prev=root;
        
        fixBST(root.right);
    }
    
    public static void main(String args[])
    {
        Node root = new Node(18);  
        root.left = new Node(60);  
        root.right = new Node(70);  
        root.left.left = new Node(4);  
        root.right.left = new Node(8);
        root.right.right = new Node(80);  
          
        inorder(root); 
        System.out.println();;
        fixBST(root);
        int temp=first.key;
        first.key=second.key;
        second.key=temp;
        inorder(root);
    }
}

// TIME COMPLEXITY  : O(n), where 'n' is the number of nodes in the BST
// SPACE COMPLEXITY : O(h), where 'h' is the height of BST