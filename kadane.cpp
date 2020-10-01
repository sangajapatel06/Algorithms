// C++ program to print largest contiguous array sum with time complexity of O(n). Also known as Kadane’s Algorithm

#include<bits/stdc++.h> 

using namespace std; 

int maxSubArraySum(int a[], int size) 
{ 
	int max_so_far = INT_MIN, max_ending_here = 0; 

	for (int i = 0; i < size; i++) 
	{ 
		max_ending_here = max_ending_here + a[i]; 
		if (max_so_far < max_ending_here) 
			max_so_far = max_ending_here; 

		if (max_ending_here < 0) 
			max_ending_here = 0; 
	} 
	return max_so_far; 
} 

int main() 
{ 
	int n;
	cin>>n;
	int a[n];
	for(int i = 0 ; i < n ; i ++)
	cin>>a[i];
	cout << "Maximum contiguous sum is : " << maxSubArraySum(a, n); 
	return 0; 
} 
