class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	int sum(int arr[], int n) {
	    // code here
	    //base case
	    if(n==0){
	        return 0;
	    }
	    
	    else{
	        return arr[0]+sum(arr+1,n-1);
	    }
	    
	}
};
