#include<bits/stdc++.h>
        
int n;
list<pair<int,int>>dq;
map<int,list<pair<int,int>>::iterator> m;
LRUCache::LRUCache(int capacity) 
{
    dq.clear();
    m.clear();
    n=capacity;
}
void insert(int key,int value)
{
    if(m.find(key)!=m.end())
    {
        dq.erase(m[key]);
        dq.push_front({key,value});
        m[key] = dq.begin();    
    }
    else 
    {
        if(dq.size()==n)
        {
            pair<int,int> v=dq.back();
            dq.pop_back();
            m.erase(v.first);
             dq.push_front({key,value});
             m[key] = dq.begin();
        }
        else
        { 
            dq.push_front({key,value});
            m[key] = dq.begin();
        }
    }
}
int LRUCache::get(int key) 
{
    if(m.find(key)==m.end())
    return -1;
    else
    {
        int val=m[key]->second;
        insert(key,val);
        return val;   
    }
    
}
void LRUCache::set(int key, int value) 
{
    insert(key,value);
}
