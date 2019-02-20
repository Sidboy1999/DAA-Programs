/* Did some changes more to the program in the form of comments for step counter. Incase you are not getting the output comment remove the comments including this :P*/
#include <iostream>
using namespace std;
int c=0;
void Merge(int *a, int low, int high, int mid)
{
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
	//c+=3;
	while (i <= mid && j <= high)
	{
		c+=1;
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
			c+=3;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
			c+=3;
		}
	//	c+=1;
	}
	c+=1;
	while (i <= mid)
	{
		//c+=1;
		temp[k] = a[i];
		k++;
		i++;
		c+=3;
	}
	c++;
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
		c+=3;
	}
	c++;
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
		c+=2;
	}
	c+=1;
}

void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
		Merge(a, low, high, mid);
	}
}

int main()
{
	int n,i;
	int a[15];
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
	cout<<"Enter Elements: ";
	for(i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	MergeSort(a, 0, n-1);

	cout<<"\nSorted array ";
	for (i = 0; i < n; i++)
	cout<<a[i]<<"\t";
	cout<<"\nc="<<c;
	return 0;
}
