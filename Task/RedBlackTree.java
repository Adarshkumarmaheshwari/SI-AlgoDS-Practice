

// Implementing Red-Black Tree in Java


class Node<T extends Comparable<T>> {
    T data;
    Node<T> parent;
    Node<T> left;
    Node<T> right;
    int color;
  }
  
  public class RedBlackTree<T extends Comparable<T>> {
    

    private Node<T> root;
    private Node<T> TNULL;

  
    // Preorder
    private void preOrderHelper(Node<T> node) {
      if (node != TNULL) {
        System.out.print(node.data + " ");
        preOrderHelper(node.left);
        preOrderHelper(node.right);
      }
    }
  
    // Inorder
    private void inOrderHelper(Node<T> node) {
      if (node != TNULL) {
        inOrderHelper(node.left);
        System.out.print(node.data + " ");
        inOrderHelper(node.right);
      }
    }
  
    // Post order
    private void postOrderHelper(Node<T> node) {
      if (node != TNULL) {
        postOrderHelper(node.left);
        postOrderHelper(node.right);
        System.out.print(node.data + " ");
      }
    }
  
    // Search the tree
    private Node<T> searchTreeHelper(Node<T> node, T key) {
      if (node == TNULL || key == node.data) {
        return node;
      }
  
      if (key.compareTo(node.data)<0) {
        return searchTreeHelper(node.left, key);
      }
      return searchTreeHelper(node.right, key);
    }
  
    // Balance the tree after deletion of a node
    private void fixDelete(Node<T> x) {
      Node<T> s;
      while (x != root && x.color == 0) {
        if (x == x.parent.left) {
          s = x.parent.right;
          if (s.color == 1) {
            s.color = 0;
            x.parent.color = 1;
            leftRotate(x.parent);
            s = x.parent.right;
          }
  
          if (s.left.color == 0 && s.right.color == 0) {
            s.color = 1;
            x = x.parent;
          } else {
            if (s.right.color == 0) {
              s.left.color = 0;
              s.color = 1;
              rightRotate(s);
              s = x.parent.right;
            }
  
            s.color = x.parent.color;
            x.parent.color = 0;
            s.right.color = 0;
            leftRotate(x.parent);
            x = root;
          }
        } else {
          s = x.parent.left;
          if (s.color == 1) {
            s.color = 0;
            x.parent.color = 1;
            rightRotate(x.parent);
            s = x.parent.left;
          }
  
          if (s.right.color == 0 && s.right.color == 0) {
            s.color = 1;
            x = x.parent;
          } else {
            if (s.left.color == 0) {
              s.right.color = 0;
              s.color = 1;
              leftRotate(s);
              s = x.parent.left;
            }
  
            s.color = x.parent.color;
            x.parent.color = 0;
            s.left.color = 0;
            rightRotate(x.parent);
            x = root;
          }
        }
      }
      x.color = 0;
    }
  
    private void rbTransplant(Node<T> u, Node<T> v) {
      if (u.parent == null) {
        root = v;
      } else if (u == u.parent.left) {
        u.parent.left = v;
      } else {
        u.parent.right = v;
      }
      v.parent = u.parent;
    }
  
    private void deleteNodeHelper(Node<T> node, T key) {
      Node<T> z = TNULL;
      Node<T> x, y;
      while (node != TNULL) {
        if (node.data == key) {
          z = node;
        }
  
        if (node.data.compareTo(key)<=0) {
          node = node.right;
        } else {
          node = node.left;
        }
      }
  
      if (z == TNULL) {
        System.out.println("Couldn't find key in the tree");
        return;
      }
  
      y = z;
      int yOriginalColor = y.color;
      if (z.left == TNULL) {
        x = z.right;
        rbTransplant(z, z.right);
      } else if (z.right == TNULL) {
        x = z.left;
        rbTransplant(z, z.left);
      } else {
        y = minimum(z.right);
        yOriginalColor = y.color;
        x = y.right;
        if (y.parent == z) {
          x.parent = y;
        } else {
          rbTransplant(y, y.right);
          y.right = z.right;
          y.right.parent = y;
        }
  
        rbTransplant(z, y);
        y.left = z.left;
        y.left.parent = y;
        y.color = z.color;
      }
      if (yOriginalColor == 0) {
        fixDelete(x);
      }
    }
  
    // Balance the node after insertion
    private void fixInsert(Node<T> k) {
      Node<T> u;
      while (k.parent.color == 1) {
        if (k.parent == k.parent.parent.right) {
          u = k.parent.parent.left;
          if (u.color == 1) {
            u.color = 0;
            k.parent.color = 0;
            k.parent.parent.color = 1;
            k = k.parent.parent;
          } else {
            if (k == k.parent.left) {
              k = k.parent;
              rightRotate(k);
            }
            k.parent.color = 0;
            k.parent.parent.color = 1;
            leftRotate(k.parent.parent);
          }
        } else {
          u = k.parent.parent.right;
  
          if (u.color == 1) {
            u.color = 0;
            k.parent.color = 0;
            k.parent.parent.color = 1;
            k = k.parent.parent;
          } else {
            if (k == k.parent.right) {
              k = k.parent;
              leftRotate(k);
            }
            k.parent.color = 0;
            k.parent.parent.color = 1;
            rightRotate(k.parent.parent);
          }
        }
        if (k == root) {
          break;
        }
      }
      root.color = 0;
    }
  
    private void printHelper(Node<T> root, String indent, boolean last) {
      if (root != TNULL) {
        System.out.print(indent);
        if (last) {
          System.out.print("R----");
          indent += "   ";
        } else {
          System.out.print("L----");
          indent += "|  ";
        }
  
        String sColor = root.color == 1 ? "RED" : "BLACK";
        System.out.println(root.data + "(" + sColor + ")");
        printHelper(root.left, indent, false);
        printHelper(root.right, indent, true);
      }
    }
  
    public RedBlackTree() {
      TNULL = new Node<T>();
      TNULL.color = 0;
      TNULL.left = null;
      TNULL.right = null;
      root = TNULL;
    }
  
    public void preorder() {
      preOrderHelper(this.root);
    }
  
    public void inorder() {
      inOrderHelper(this.root);
    }
  
    public void postorder() {
      postOrderHelper(this.root);
    }
  
    public Node<T> searchTree(T k) {
      return searchTreeHelper(this.root, k);
    }
  
    public Node<T> minimum(Node<T> node) {
      while (node.left != TNULL) {
        node = node.left;
      }
      return node;
    }
  
    public Node<T> maximum(Node<T> node) {
      while (node.right != TNULL) {
        node = node.right;
      }
      return node;
    }
  
    public Node<T> successor(Node<T> x) {
      if (x.right != TNULL) {
        return minimum(x.right);
      }
  
      Node<T> y = x.parent;
      while (y != TNULL && x == y.right) {
        x = y;
        y = y.parent;
      }
      return y;
    }
  
    public Node<T> predecessor(Node<T> x) {
      if (x.left != TNULL) {
        return maximum(x.left);
      }
  
      Node<T> y = x.parent;
      while (y != TNULL && x == y.left) {
        x = y;
        y = y.parent;
      }
  
      return y;
    }
  
    public void leftRotate(Node<T> x) {
      Node<T> y = x.right;
      x.right = y.left;
      if (y.left != TNULL) {
        y.left.parent = x;
      }
      y.parent = x.parent;
      if (x.parent == null) {
        this.root = y;
      } else if (x == x.parent.left) {
        x.parent.left = y;
      } else {
        x.parent.right = y;
      }
      y.left = x;
      x.parent = y;
    }
  
    public void rightRotate(Node<T> x) {
      Node<T> y = x.left;
      x.left = y.right;
      if (y.right != TNULL) {
        y.right.parent = x;
      }
      y.parent = x.parent;
      if (x.parent == null) {
        this.root = y;
      } else if (x == x.parent.right) {
        x.parent.right = y;
      } else {
        x.parent.left = y;
      }
      y.right = x;
      x.parent = y;
    }
  
    public void insert(T key) {
      Node<T> node = new Node<T>();
      node.parent = null;
      node.data = key;
      node.left = TNULL;
      node.right = TNULL;
      node.color = 1;
  
      Node<T> y = null;
      Node<T> x = this.root;
  
      while (x != TNULL) {
        y = x;
       // if (node.data < x.data) {
         if(node.data.compareTo(x.data)<0){
          x = x.left;
        } else {
          x = x.right;
        }
      }
  
      node.parent = y;
      if (y == null) {
        root = node;
      } else if (node.data.compareTo(x.data)<0) {
        y.left = node;
      } else {
        y.right = node;
      }
  
      if (node.parent == null) {
        node.color = 0;
        return;
      }
  
      if (node.parent.parent == null) {
        return;
      }
  
      fixInsert(node);
    }
  
    public Node<T> getRoot() {
      return this.root;
    }
  
    public void deleteNode(T data) {
      deleteNodeHelper(this.root, data);
    }
  
    public void printTree() {
      printHelper(this.root, "", true);
    }
  
    public static<T extends Comparable<T>> void main(String[] args) {
      RedBlackTree<Integer> bst = new RedBlackTree<Integer>();
      bst.insert(55);
      bst.insert(40);
      bst.insert(65);
      bst.insert(60);
      bst.insert(75);
      bst.insert(57);
      bst.printTree();
  
      System.out.println("\nAfter deleting:");
      bst.deleteNode(40);
      bst.printTree();
      // Scanner scan = new Scanner(System.in);
      //   /* Creating object of RedBlack Tree */
      //   System.out.println("Red Black Tree Test\n");          
      //   char ch;
      //   /*  Perform tree operations  */
      //   do    
      //   {
      //       System.out.println("\nRed Black Tree Operations\n");
      //       System.out.println("1. Insert ");
      //       System.out.println("2. Delete");
      //       T input;
      //       int choice;
      //       try{
      //         choice = scan.nextInt();
      //         }catch(Exception e){
      //             System.out.println("Incorrect input");
      //         }           
      //       switch (choice)
      //       {
      //       case 1 : 
      //           System.out.println("Enter integer element to insert");
      //           bst.insert( scan.nextInt());                
      //           break;                          
      //       case 2 : 
      //           System.out.println("Enter integer element to search");
      //           System.out.println("Delete node : "+ bst.deleteNode( scan.nextInt() ));
                
      //           break;                                             
      //       default : 
      //           System.out.println("Wrong Entry \n ");
      //           break;    
      //       }
      //       bst.printTree();
      //       System.out.println("\nDo you want to continue (Type y or n) \n");
      //       ch = scan.next().charAt(0);
      //   }                           
      //   while (ch == 'Y'|| ch == 'y');
    }
  }
