Conversation opened. 5 messages. 1 message unread.

Skip to content
Using Gmail with screen readers
Conversations
0% of 15 GB used
Terms · Privacy · Program Policies
Last account activity: 0 minutes ago
Open in 2 other locations · Details
#include<stdio.h>
void inversetableau(){
     int n,x,i;
     printf("entrez la taille du tableau");
     scanf("%d",&n);
     int tab[n];
     printf("entrez les %d éléments du tableau:\n",n);
     for(i=0;i<n;i++){
        scanf("%d",&tab[i]);
     }
     for(i=0;i<n/2;i++){
        x=tab[i];
        tab[i]=tab[n-1-i];
        tab[n-1-i]=x;
     }
     printf("le tableau inversé:");
     for(i=0;i<n;i++){
        printf("%d",tab[i]);
        printf("\n");
     }
}
int main(){
    inversetableau();
}
inverser un tableau .c
Displaying inverser un tableau .c.