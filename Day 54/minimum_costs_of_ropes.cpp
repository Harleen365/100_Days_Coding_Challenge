
priority_queue<long long,vector<long long>,greater<long long>>pq;
        long long a=0;
        long long b=0;
        long long sum=0;
        long long total=0;
        for(long long i=0;i<n;i++){
            pq.push(arr[i]);
        }
        while(pq.size()>1){
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            sum=a+b;
            total+=sum;
            pq.push(sum);
            
        }
        return total;
