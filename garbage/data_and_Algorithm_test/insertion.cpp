void InsertionSort(int *a, int len)
{
	for (int j=1; j<len; j++)
	{
		int key = a[j];//key 是一个temp；
		int i = j-1; //int i是j左边的。
		while (i>=0 && a[i]>key)
		{
			a[i+1] = a[i];
			i--;
		}
		a[i+1] = key;  // i--之后马上i+1 i在原地 也就是j左边的 然后用templ - key的值扔给i  
		// a[i+1] 其实就是a[i] 
	}
}
 [1 3 4 5 7 8 6.1 9]
  0 1 2 3 4 5 6   7
   key = a[j]// j = 6 // key = 6.1
   i = j -1 //i = 5
   a[5]>key// 8 > 6.1
   a[5+1] = a[i]
 [1 3 4 5 7 8  8 9]
  0 1 2 3 4 5  6  7
i -- // 4
 a[4+1] = key; 
 [ 1 3 4 5 7 6.1 8 9]
   0 1 2 3 4 5   6 7
   

























 [1 3 4 5 7 8 9 6.1]
  0 1 2 3 4 5 6 7
key = a[7]; key = 6.1 // j = 7
i = j-1 // i = 7 - 1 = 6
a[6] > key // 9 > 6.1
a[7] = a[i];//a[7] = a[6]
 [1 3 4 5 7 8 9 9]
  0 1 2 3 4 5 6 7
  
  i--;//i = 6-1 = 5
  a[5+1] = key;
  a[6] = 6.1
  [1 3 4 5 7 8 6.1 9]
   0 1 2 3 4 5 6 7
  
  
  
  
  












































[1 3 5 4 7 8 9 6]
 0 1 2 3 4 5 6 7 
 
 key = a[1]; //3 
 i = j-1; // i = 0;
 i !> 0 
 so ..
 a[i+1] = key;//a[1] = key;//
 [1 3 5 4 7 8 9 6]
  0 1 2 3 4 5 6 7//a[1] = 3  a[1] = 3;
key = a[j]// a[2]// key = 5
int i = j -1 // i = 1;
while(a[1]>key)// 3 > 5? no...
a[i+1] = key // a[2] = 5

key = a[3];
int i = j -1; // i = 2;
a[2] > key // 5 > 4;
a[i+1] = a[i]// a[3] = a[2]// a[3] = 5 然后a[3]的4 没了
 [1 3 5 5 7 8 9 6]
  0 1 2 3 4 5 6 7
  a[i--] //a[1]
  a[1+1] = key //a[2]..5  key = 4 // a[2] = 4
 [1 3 4 5 7 8 9 6]
  0 1 2 3 4 5 6 7




 
