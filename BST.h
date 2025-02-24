// An integer binary search tree

struct TreeNode {                                           
   struct TreeNode *leftPtr; // pointer to left subtree
  int data; // node value                               
   struct TreeNode *rightPtr; // pointer to right subtree
}; // end structure treeNode 
       
typedef struct TreeNode * TreeNodePtr; // synonym for TreeNode*
                   
typedef struct {
  int size;
  TreeNodePtr root;
}BST;

// prototypes

void insertNode( BST *, int );

void insertNode_R(TreeNodePtr * t,int value){
 /*if(t==NULL){
  t=new TreeNode;
   if(t){
     t->leftPtr=NULL;
     t->rightPtr=NULL;
     t->data=value;
  }
 }
 else{
    if(t->data>=value) //left
       
    else //right
     
  }
  */
}

void insertNode( BST *b, int value ){
   TreeNodePtr t =b->root,new_node;
   int inserted=0;
  
  
   new_node =(TreeNodePtr) malloc(sizeof(struct TreeNode));
  if(new_node){
     new_node->leftPtr=NULL;
     new_node->rightPtr=NULL;
     new_node->data=value;
     /*First Node*/
     
     if(!b->root)	b->root=new_node;
     else {
while(!inserted){
  if(t->data >=value){
    /* move/insert to the left*/
     if(t->leftPtr==NULL){
        t->leftPtr = new_node;
        inserted = 1;
     }else t = t->leftPtr;
   
    }else{
        /* move/ insert to the right*/
        if(t->rightPtr==NULL){
           t->rightPtr = new_node;
           inserted = 1;
        }else t = t->rightPtr;
   }
  }
  }
  }  		
 b->size++;
}
 



void inOrder( TreeNodePtr treePtr )
{ 
  // if tree is not empty, then traverse
  if ( treePtr != NULL ) {        
       
     inOrder( treePtr->leftPtr ); //Recursion to the left

     printf("%3d",treePtr->data);  //print the value 
  
     inOrder( treePtr->rightPtr ); //Recursion to the right
  } // end if                          
} // end 

void preOrder( TreeNodePtr treePtr )
{ 
  // if tree is not empty, then traverse
  if ( treePtr != NULL ) { 
     printf("%3d",treePtr->data);
     preOrder( treePtr->leftPtr );
     preOrder( treePtr->rightPtr );    

  } // end if                          
} // end 

void postOrder( TreeNodePtr treePtr )
{ 
  // if tree is not empty, then traverse
  if ( treePtr != NULL ) {
     postOrder( treePtr->leftPtr );
     postOrder( treePtr->rightPtr );
     printf("%3d",treePtr->data);
     
  } // end if                          
} // end 

void printtree( TreeNodePtr treePtr,int space)
{
   int i;
   if ( treePtr != NULL ) {
   
   printtree(treePtr->rightPtr,space+3);
   for(int i=1;i<space;++i)
   {
      printf(" ");
   }
   printf("%3d\n",treePtr->data);
   printtree(treePtr->leftPtr,space+3);
   }
}