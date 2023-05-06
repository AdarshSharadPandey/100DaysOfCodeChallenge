int minimumOperations(TreeNode* root) 
{
  queue<TreeNode*>q;
	q.push(root);
	vector<vector<int>>levelOrder;
	while(!q.empty())
			{
		int n=q.size();
		vector<int>level;
		for(int i=0; i<n; i++)
					{
			root=q.front();
			level.push_back(root->val);
			q.pop();
			if(root->left) q.push(root->left);
			if(root->right) q.push(root->right);
		}
		levelOrder.push_back(level);
	}
	long long cnt=0;
	for(int i=0; i<levelOrder.size(); i++)
	{
		unordered_map<int, int> hash;
		vector<pair<int, int>>x;
		for(int j=0; j<levelOrder[i].size(); j++)
			x.push_back({levelOrder[i][j], j});
		sort(x.begin(), x.end());
		for(int k=0; k<x.size(); k++)
			hash[x[k].second]=k;
		for(int k=0; k<x.size(); k++)
		{
			if(x[k].second!=k)
			{
				cnt++;
				int a=hash[x[k].second], b=hash[hash[x[k].second]], c=x[b].second,
				d=x[k].second, e=hash[d], f=hash[c], ind=x[k].second;
				x[b].second=d;
				x[a].second=c;
				hash[d]=f;
				hash[c]=e;
			}
		}
	}
	return cnt;
}