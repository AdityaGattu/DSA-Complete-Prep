https://www.codingninjas.com/codestudio/problems/1112602?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

Problem 10. Find the duplicate in an array of N+1 integers


int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    
    //using linked list cycle method ....
    
    //1.find the collision point... using fast and slow pointer
    
    int slow=arr[0];
    int fast=arr[0];
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow!=fast);
    
    //2. move fast ptr to start
    fast = arr[0];
    
    //3.move slow and fast ptrs by 1 step until they meet each other that is required duplicate value
    while(slow!=fast){
        slow = arr[slow];
        fast = arr[fast];
    }
    
     return slow;   // can return fast or slow since both are same..
}
