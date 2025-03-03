// LONGEST INCREASING(STRICTLY) SUBSEQUENCE
// https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1
// In this problem, we have to find the length of the longest strictly subsequence of a given sequence such that all elements of the subsequence are sorted in increasing order.

// Example:- Sequence- {8,100,150,10,12,14,110}
//Length of longest subsequence- 5 // (8,10,12,14,110)

//Time Complexity- O(N^2)
//Space - O(N)

int LIS (int a[],int n)
{
   int li[n];
   li[0]=1;
   for(int i=1;i<n;i++)
   {
      li[i]=1;
      for(int j=0;j<i;j++)
      {
         if(a[i]>a[j])
         {
            li[i]=max(li[i],li[j]+1);
         }
      }
   }
   int res=1;
   
   for(int i=0;i<n;i++)
   {
      res=max(res,li[i]);
   }
   return res;
}
