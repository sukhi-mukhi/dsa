//GFG logic 
vector<int> kLargest(int arr[], int n, int k) {
	    //priority queue
	    priority_queue<int, vector<int>, greater<int>> pq;
	    for(int i=0;i<n;i++){
	        if(pq.size()==k){
	            if(pq.top()<arr[i]){
	                pq.pop();
	                pq.push(arr[i]);
	            }
	        }else{
	            pq.push(arr[i]);
	        }
	    }
	    
	    vector<int> v;
	    
	    while(!pq.empty()){
	        v.push_back(pq.top());
	        pq.pop();
	    }
	    
	    reverse(v.begin(),v.end());
	    return v;
	}
