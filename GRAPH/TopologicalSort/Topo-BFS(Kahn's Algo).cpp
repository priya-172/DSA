       // topological_sort:-given a directed acyclic graph (DAG), a topological sort is a linear ordering of all vertices 
      //such that for any edge (u, v), u comes before v  
      //tc-o(v+e)
            
            vector<int>adj[V];
       	    vector<int>inDegree(V,0);
         for(int i=0;i<V;++i){
	        for(auto it:adjR[i]){
	            adj[it].push_back(i);
	        }
	    }
//calculating indegree(number of outgoing edges)
	    for(int i=0;i<V;++i){
	        for(auto it:adj[i]){
	            inDegree[it]++;
	        }
	    }
	    queue<int>q;
	    for(int i=0;i<V;++i){
	        if(inDegree[i]==0) q.push(i);
	    }
	    vector<int>topo;
	    while(!q.empty()){
	        int node=q.front();
	        topo.push_back(node);
	        q.pop();
        //remove edges from adj nodes
	        for(auto it:adj[node]){
	            inDegree[it]--;
	             if(inDegree[it]==0) q.push(it);
	        }
	    }
        sort(topo.begin(),topo.end());
	    return topo; 
