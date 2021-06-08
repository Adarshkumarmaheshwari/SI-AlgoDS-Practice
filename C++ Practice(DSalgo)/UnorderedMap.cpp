#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> umap;
    pair<string, int> p("abc",1);
    umap.insert(p);//one way of insertion
    umap["def"]=2;//second way of insertion
    cout<<"size: "<<umap.size()<<endl;

    //finding element or access
    //if key is present both are same
    cout<<umap["abc"]<<endl;//if key does not exist it will return 0
    cout<<umap.at("abc")<<endl;//if key not present it will throw error
    
    //check presence of key
    if(umap.count("abc")>0){
        cout<<"present"<<endl;
    }else{
        cout<<"Not present"<<endl;
    }
    //update the value of key
    umap["abc"]=20;
    //size of map
    cout<<"size: "<<umap.size()<<endl;
    //delete
    umap.erase("def");
        cout<<"size: "<<umap.size()<<endl;

    return 0;
}