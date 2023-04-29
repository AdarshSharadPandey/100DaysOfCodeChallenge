vector<int> v;    
for(int i=0; i<row1.size(); i++)
    v.push_back(row1[i]);    
for(int i=0; i<row2.size(); i++)
    v.push_back(row2[i]);    
sort(v.begin(), v.end());    
return v[k-1];