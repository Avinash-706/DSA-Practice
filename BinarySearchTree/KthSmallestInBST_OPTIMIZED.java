import java.util.*;

// AUGMENTED BST - Modified Structure for BST
// OPTIMIZED APPROACH
class Node {

    int key;
    int lcount;
    Node left;
    Node right;

    Node(int key) {
        this.key = key;
        this.lcount = 0;
        this.left = null;
        this.right = null;
    }
}

public class KthSmallestInBST_OPTIMIZED {

    static Node insertElement(Node root, int x) {

        if (root == null)
            return new Node(x);

        if (x < root.key) {
            root.left = insertElement(root.left, x);
            root.lcount++;
        }
        else if (x > root.key) {
            root.right = insertElement(root.right, x);
        }

        return root;
    }

    static Node kthSmallest(Node root, int k) {

        if (root == null)
            return null;

        int count = root.lcount + 1;

        if (count == k)
            return root;

        if (count > k)
            return kthSmallest(root.left, k);

        return kthSmallest(root.right, k - count);
    }

    public static void main(String[] args) {

        Node root = null;

        int[] keys = {20, 8, 22, 4, 12, 10, 14};

        for (int x : keys)
            root = insertElement(root, x);

        int k = 4;

        Node result = kthSmallest(root, k);

        if (result == null)
            System.out.println("There are less than k nodes in the BST");
        else
            System.out.println("K-th Smallest Element is " + result.key);
    }
}

//TIME  COMPLEXITY : O(h), where 'h' is height of the tree.
//SPACE COMPLEXITY : O(h), where 'h' is height of the tree.