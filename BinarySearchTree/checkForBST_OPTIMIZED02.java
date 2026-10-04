import java.util.*;

// OPTIMIZED APPROACH - 02
class Node {
    int key;
    Node left, right;

    Node(int k) {
        key = k;
        left = right = null;
    }
}

public class checkForBST_OPTIMIZED02 {

    static int previous = Integer.MIN_VALUE;

    static boolean isBST(Node root) {

        if (root == null)
            return true;

        if (isBST(root.left) == false)
            return false;

        if (root.key <= previous)
            return false;

        previous = root.key;

        return isBST(root.right);
    }

    public static void main(String[] args) {

        Node root = new Node(80);

        root.left = new Node(70);
        root.right = new Node(90);

        root.left.left = new Node(60);
        root.left.right = new Node(75);

        root.right.left = new Node(85);
        root.right.right = new Node(100);

        if (isBST(root) == true)
            System.out.println("RESULT : Is a BST");
        else
            System.out.println("RESULT : NOT a BST");
    }
}

// TIME COMPLEXITY  : O(n), where 'n' is the number of nodes in the BST
// SPACE COMPLEXITY : O(h), where 'h' is the height of BST