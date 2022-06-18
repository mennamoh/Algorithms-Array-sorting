#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee
{
  int id;
  int salary;
  char name[20];
};

struct employee emp[10];
void bubblesort(int size);
void merge(int low, int mid, int high);
void merge_sort(int low,int high);
int search_id(int low,int high , int id);
int search_name(int low , int high , char name[20]);
struct employee fillemployee(void);

int main()
{ int choice, size , l , h , location , id , place;
struct employee e[10];
char n[20];

    do
    {
      printf("1=sort by Name");
      printf("2=sort by id");
      printf("3=search by Name");
      printf("4=search by id");
      printf("5=exit");

      switch(choice)
      {
          case 1:

          printf("enter size of array");
          scanf("%d",&size);
          bubblesort(size);
          break;


          case 2:
          printf("enter the start index");
          scanf("%d",&l);
          printf("enter the last index");
          scanf("%d",&h);
          merge_sort(l,h);
          break;


          case 3:
             printf("enter the start index");
             scanf("%d",&l);
             printf("enter the last index");
             scanf("%d",&h);
             printf("enter a name to search");
             scanf("%s",n);
             location=search_name(l,h,n);
             printf("%d",location);
             break;


          case 4:
            printf("enter the id ");
            scanf("%d",&id) ;
            place= search_id(l,h,id);
            printf("%d",place);
      }



while(choice!=5)


    }
    return 0;
}


struct employee fillemployee(void)
{
  struct employee emp[10];
  int=i size=10;
  for(i=0 ;i<=size ; i++ )
  {
      printf("enter employee number i+1");
      printf("enter name");
      scanf("%s",emp.name);
      printf("enter salary");
      scanf("%d",&emp.salary);
      printf("enter id");
      scanf("%d",&emp.id);
  }
  return emp;
}





int search_name(int low , int high , char name[20])
{
  int mid , r;
  int loc=-1;
  while(low<=high && loc == -1)
  {
      mid=(low+high)/2;
      if(emp[mid].name=name)
      {
          loc=mid;
      }
      else if {

        r=strcmp(emp[mid].name,name);
        if(r<0)
        {
            low=mid+1;
        }
          else{
                high=mid-1;
              }

              }
         return loc;
  }

}



int search_id(int low,int high , int id)
{
  int mid;
  int loc=-1;
  while(low<=high && loc==-1)
  {
    mid=(low+high)/2;
    if(emp[mid].id=id)
    {
        loc=mid;
    }
    else if (emp[mid].id<id)
    {
        low=mid+1;
    }
    else{high=mid-1;}
    return loc;
  }
}





void merge_sort(int low,int high)
{
    int mid;
    if(low<high);
    {
      mid=(low+high)/2;
      merge_sort(low,mid);
      merge_sort(mid+1,high);
      merge(low,mid,high);
    }
}


void merge(int low, int mid, int high)
{
  struct employee[100];
  int i ,list1 , list2;
  list1=low;
  list2=mid+1;
  i=low;
  while(list1<=mid && list2<=high);
  {
     if(emp[list1].id<emp[list2].id)
     {
         temp[i]=emp[list1];
         list1++;
         i++;
     }
     else
     {
         temp[i]=emp[list2];
         list2++;
         i++;
     }
  }
  while(list1<mid)
  {
      temp[i]=emp[list1];
      list1++;
      i++;
  }
  while(list2<=high)
  {
      temp[i]=emp[list2];
      list2++;
      i++;
  }

  for(i=low; i<=high ;i++)
  {
      emp[i]=temp[i];
  }

}




void bubblesort(int size)
{
  int i ,j,result ;
  j=0;
  int swaped=1;
  while(swaped) //nonzero
  {
    swaped=0;
    for(i=0; i<size-1-j; i++)
      {
          result=strcmp(emp[i].name,emp[i+1].name);
          if (result>0)
          {
              int temp;
              temp=emp[i];
              emp[i]=emp[i+1];
              emp[i+1]=temp;
              swaped=1;
          }
      }
      j++;
  } //end of loop
}
