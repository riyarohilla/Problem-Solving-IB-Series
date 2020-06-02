/*
Design and implement a data structure for Least Recently Used (LRU) cache. It should support the following operations: get and put.

get(key) - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1.
put(key, value) - Set or insert the value if the key is not already present. When the cache reached its capacity, it should invalidate the least recently used item before inserting a new item.

The cache is initialized with a positive capacity.

Follow up:
Could you do both operations in O(1) time complexity?

Example:

LRUCache cache = new LRUCache( 2 /* capacity */ );

cache.put(1, 1);
cache.put(2, 2);
cache.get(1);       // returns 1
cache.put(3, 3);    // evicts key 2
cache.get(2);       // returns -1 (not found)
cache.put(4, 4);    // evicts key 1
cache.get(1);       // returns -1 (not found)
cache.get(3);       // returns 3
cache.get(4);       // returns 4
*/

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
