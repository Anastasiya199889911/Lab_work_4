List<int> arr = new List<int>(); 
int j=0; 
for (int i = 0; i<arr.Count; i++) 
{ 
if (arr[i] <= 100) 
{ 
arr[j] = arr[i]; 
j++; 
} 
} 
RemoveRange(j, arr.Count);
