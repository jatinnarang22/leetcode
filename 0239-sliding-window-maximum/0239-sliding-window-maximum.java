class Pair{
    int key, value;
    Pair(int k, int v){
        key = k;
        value = v;
    }
    
    // @Override
    // public int compareTo(Pair p){
    //     return Integer.compare(key, p.key);
    // }
}

class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
         int[] an=new int[1]; 
        int n=nums.length;
        if(n==1 && k==1){
          
            an[0]=nums[0];
            return an;}
        PriorityQueue<Pair> q = new PriorityQueue<>(n-1, (a, b) -> Integer.compare(b.key, a.key));
        // q.offer(new Pair(nums[0],0));
        
        int cnt=0;
        int[] ans=new int[n-k+1];
        int l=0;
        
        for(int j=0, i=0;i<n;i++){
              if(cnt<k){
            q.offer(new Pair(nums[i],i));
                cnt++;}
            
            if(cnt == k){
                // System.out.print(q.peek().key + " ");
       
                 System.out.print(q.peek().key + " ");
                ans[l]=q.peek().key;
                   // System.out.print(ans[l] + " ");
                l++;
                cnt--;
                j++;
            }
             while(!q.isEmpty() && q.peek().value < j){
                q.poll();
                 // j++;
            }
          
            
            
        }
        // ans[l]=q.peek().key;
        
        return ans;
    }
}