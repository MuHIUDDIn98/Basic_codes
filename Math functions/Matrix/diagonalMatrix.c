#include<stdio.h>
#include <stdbool.h>

int main(){
     //here diagonal elements must be greater than zero
     int n,m;
     
     printf("Enter your matrix row and column\n");
     scanf("%d %d",&n,&m);
     if(n!= m){
        printf("it can't be a diagonal,  you must enter an square matrix size !! \n");
     }

     else{
        int element=n*m;
        int matrix[n][m];
        printf("Enter your %d matrix elements here :\n",element);
        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){
                printf("matrix[%d][%d]  :",i,j);
                scanf("%d",&matrix[i][j]);    
            }
        }

        printf("Your %d matrix elements are: \n",element);
        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){
                printf("%d   ",matrix[i][j]);    
            }
            printf("\n");
        }

      
        // diagonal matrix check
        
        bool diagonal = true;

        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){

                if(i==j && matrix[i][j] == 0 ){
                  diagonal=false;
                }
            }
        }

          if(diagonal){
            for(int i=0; i<n; i++){

                for(int j=0; j<m; j++){

                    if(i!=j && matrix[i][j]!=0){
                    diagonal = false;
                    }
                }
            }
          }

          if(diagonal){
            printf("this is a diagonal matrix elements are : \n");

            for(int i=0; i<n; i++){
              for(int j=0; j<m; j++){
                if(i==j ){
                printf("%d  ",matrix[i][j]) ;
                }
              }
            }
          }
          else{
            printf("this is not a diagola matrix\n");
          }

       
     }

     




    


    return 0;
}