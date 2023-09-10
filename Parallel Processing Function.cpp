long minTime(vector<int> files, int numCores, int limit) {
    long min=0; int n=files.size();
    vector<int> temp;
    if(numCores==1){
        for(int i=0;i<n;i++)
        {min+=files.at(i);}
        return min;
    }
    for(int i=0;i<n;i++)
    {
        if(files.at(i)%numCores==0)  temp.push_back(files.at(i));
    }
    
    if(limit>=temp.size())
    {
        for(int i=0;i<temp.size();i++)
            for(int j=0;j<n;j++)
            {
                if(files.at(j)==temp.at(i)) files.at(j)/=numCores;
            }
    }
    else {
        vector<int> final; vector<int>::iterator result;
        for(int i=0;i<limit;i++)
        {
            result=max_element(begin(temp),end(temp));
            final.push_back(*result);
            temp.erase(result);
        }
        for(int i=0;i<final.size();i++)
            for(int j=0;j<n;j++)
            {
                if(files.at(j)==final.at(i)) files.at(j)/=numCores;
            }
    }
    
    for(int i=0;i<n;i++)
    {min+=files.at(i);}
    return min;
}
