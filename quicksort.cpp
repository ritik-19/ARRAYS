#include<iostream>
#include<vector>
int getRandom(int mini,int maxi){
	srand(time(0));
	int range=maxi-mini+1;
	int num=rand()%range+mini;
	return num;
}
int partition(std::vector<int> &v,int l,int r,int pi){
   int pivot=v[pi];
   std::swap(v[r],v[pi]);
    int i=l,m=l;
    while(i<r){
    	if(v[i]<pivot){
    		std::swap(v[m++],v[i++]);
    	}
    	else{
    		i++;
    	}
    }
    std::swap(v[m],v[r]);
    return m;
}
void f(std::vector<int> &v,int l,int r){
	if(l<r){
		int pi=getRandom(l,r);
		int x=partition(v,l,r,pi);
		f(v,0,x-1);
		f(v,x+1,r);
	}
}
void quick_sort(std::vector<int> &v){
	f(v,0,v.size()-1);
}
int main(){
	int n;
	std::cin>>n;
	std::vector<int> v;
	for(int i=0;i<n;i++){
		int x;
		std::cin>>x;
		v.push_back(x);
	}
	quick_sort(v);
		for(int i=0;i<v.size();i++){
		std::cout<<v[i]<<" ";
	}
		return 0;
}