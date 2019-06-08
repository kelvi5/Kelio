#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct person {
        
    long long int cpf;
    char name[100];
    char gender;
    int priority;
    
} person;

typedef struct list {
        
    person * info;
    struct list * next;
    
} list;

typedef struct command {
        
    char command;
    int parameter;
    
} command;


int read_command(command * c) {
    
    char buffer[10];
    int ret;
    
    ret = scanf("%c", &(c->command));
    
    if (ret == EOF) {
        return 1;
        }
    
    c->parameter = -1;
    
    if (c->command == 'C' || c->command == 'I') {
        scanf("%d", &(c->parameter));
    }
    
    gets(buffer);
    
    return 0;
}

person * read_person() {
    
    char buffer[512];
    person * p = malloc(sizeof(person));
    gets(buffer);
    sscanf(buffer, "%lld,%[^,],%c,%d,", &(p->cpf), p->name, &(p->gender), &(p->priority));

    
    return p;
}

void insert_element(list ** queue, int how_many) {
    int i;
    list *aux;
     
    for(i = 0; i < how_many; i++) {
        person * p;
        p = read_person();
        list * newp =(list*) malloc(sizeof(list ));
        newp->info = p;
        newp->next = NULL;
        
        aux = queue[p->priority];
        
        if(queue[p->priority]==NULL){
                      
                      aux = newp;
                      
                      }else{
                            
                            while(aux->next!=NULL)
                            aux=aux->next;
                            
                            aux->next = newp;
                            
                            }
    }
}

void remove_element(list *queue, int position){
     
     list *p = queue;
     
     printf("%lld, %s, %c,\n", p->info->cpf, p->info->name, p->info->gender);
     
     queue = p->next;
     
     free(p);

}

void remove_next(list ** queue, int max_priority) {

     list *p = queue[max_priority];
     int j = max_priority;
     
     while(p==NULL && j>0){
                   
                   j--;
                   p = queue[j];
                   
                   }
                   if(p!=NULL)
                               remove_element(p, j);
                                    
}

void print_queue(list **queue, int size){
     int i;
     list *aux;
     
     
     for(i=size; i>=0; i--){
                 aux = queue[i];
                 printf("[%d]\n", i);
                 
                 while(aux!=NULL){
                 
                                    printf("%lld, %s, %c,\n", aux->info->cpf, aux->info->name, aux->info->gender);
                                    aux = aux->next;
                                                                
                                    }
                                    
                 }
                 printf("\n");
                 
          
}

void cleanup(list **queue, int size){
     int i;
     list *aux;
     
     for(i=size; i>=0; i--){
                 
                 aux=queue[i];
                 
                 while(aux!=NULL){           
                                                                
                 list *t = aux->next; 
                 free(aux);
                 aux = t;
                                                                
                 }
                                    
                 }

     
}

void execute_command(command c, list ** queue, int max_priority) {
     
     switch (c.command) {
        case 'C' :
            cleanup(queue, max_priority);
        case 'I' :
            insert_element(queue, c.parameter);
            break;
        case 'P' :
            print_queue(queue, max_priority);
            break;
        case 'R' :
            remove_next(queue, max_priority);
    } 
}



int main() {
    list ** queue;
    int file_end = 0;
    int queue_size, i;
    char buffer[10];
    
    scanf("%d", &queue_size);
    gets(buffer);
    
    queue = (list**)malloc((queue_size+1)*sizeof(list*));

   for(i=0; i<=queue_size; i++){
            queue[i]=(list*)malloc(sizeof(list));
            queue[i]=NULL;
            }
    
    
    while (! file_end) {
        command c;
        file_end = read_command(&c);
        if(! file_end) {
            execute_command(c, queue, queue_size);
        }
    }
    
    cleanup(queue, queue_size);
    free(queue);
}
