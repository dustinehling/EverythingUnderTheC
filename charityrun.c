#include<stdio.h>
#include<stdlib.h>

#define TEAMS 200
#define RUNNERS 10000
#define LENGTH 20
#define TEAMSIZE 50

struct person
{
    char name[LENGTH];
    int number;
    int age;
    int event;
    float money;
    float time;
}person;

struct team
{
    char name[LENGTH];
    int numbers;
    float money;
    struct person *members;
}team;

struct person persons[1000];
struct team teams[200];
int per_size=0;
int t_size=0,i=0;

//Function prototypes
void registerPerson(struct person *p, char name[LENGTH]);
void registerTeam(struct team *t, char name[LENGTH]);
void race5k_calc(struct person *p, char name[LENGTH]);
void race10k_calc(struct person *p, char name[LENGTH]);
void race_marathon_calc(struct person *p, char name[LENGTH]);
void donation_calc(struct person *p, struct person *members, char name[LENGTH]);

//Main Function
int main() {

    char type[LENGTH];
    char name [LENGTH];
    char filename[10];
    int i;
    struct person p,*members;
    struct team t;

    printf("Please enter the .txt file name.\n");
    scanf("%s", &filename);
    FILE *ifp;
    ifp = fopen(filename, "r");

    while(feof(ifp)!=1){
        if (strcmp(type,"INDV")==0) {
            fread(&person, sizeof(p), 1, ifp);
            registerPerson(&person, name);
        }

        else if (strcmp(type,"TEAM")==0) {
            fread(&team, sizeof(person), 1, ifp);
            registerTeam(&team, name);
            members= (struct person *)malloc(t.numbers*sizeof(&person));
            for(i=0;i<t.numbers;i++){
                fread(&p, sizeof(person), 1, ifp);
                members[i]=p;
                registerPerson(&p, name);
            }

            t.members=members;
        }
    }


    race5k_calc(&p, name);
    race10k_calc(&p, name);
    race_marathon_calc(&p, name);
    donation_calc(&p, members, name);

    fclose(ifp);


}

void registerPerson(struct person *p, char *name) {
    if(RUNNERS!=per_size) {
        p->number=per_size;
        (persons)[per_size]=*p;
        per_size=per_size+1;
        printf("%s registered for the marathon race",name[LENGTH]);
    }

}

void registerTeam(struct team *t, char name[LENGTH]){
    if(t_size>=5 && t_size<=TEAMSIZE){
        teams[t_size]=*t;
        t_size=t_size+1;

        printf("%s registered for the team event ,they have been assigned the number %d ",name,t_size);
    }

}

void race5k_calc(struct person *p, char name[LENGTH]) {
    int i=0;

    for(i=0;i<per_size;i++) {

        if(persons[i].event==5){
            for(i=0;i<per_size;i++){
                if(persons[i].time==persons[i+1].time){
                    p=&persons[i+1];
                    printf("5k race: %s had the fastest time with %s minutes", persons[i],persons[i].time);
                }
                else if(persons[i].time<persons[i+1].time){
                    p=&persons[i];
                    printf("5k race: %s had the fastest time with %s minutes!\n", persons[i],persons[i].time);
                }
                else if(persons[i].time>persons[i+1].time){
                    p=&persons[i+1];
                    printf("5k race: %s had the fastest time with %s minutes!\n", persons[i],persons[i].time);
                }
            }
        }
    }

}

void race10k_calc(struct person *p, char name[LENGTH]){
    int i=0;
    for(i=0;i<per_size;i++){
        if(persons[i].event==10){
            for(i=0;i<per_size;i++){
                if(persons[i].time==persons[i+1].time) {
                    p=&persons[i+1];
                    printf("10k race: %s had the fastest time with %s minutes!\n", persons[i],persons[i].time);
                }
                else if(persons[i].time<persons[i+1].time) {
                    p=&persons[i];
                    printf("10k race: %s had the fastest time with %s minutes!\n", persons[i],persons[i].time);
                }

                else if(persons[i].time>persons[i+1].time) {
                    p=&persons[i+1];
                    printf("10k race: %s had the fastest time with %s minutes!\n", persons[i],persons[i].time);
                }
            }
        }
    }

}

void race_marathon_calc(struct person *p, char name[LENGTH]){
    int i=0;
    for(i=0;i<per_size;i++){
        if(persons[i].event==42){
            for(i=0;i<per_size;i++){
                if(persons[i].time==persons[i+1].time) {
                    p=&persons[i+1];

                }
                else if(persons[i].time<persons[i+1].time) {
                    p=&persons[i];
                    printf("%s qualified in a marthon run with a time of %s minutes!\n"),persons[i].name,persons[i].time;
                }
                else if(persons[i].time>persons[i+1].time) {
                    p=&persons[i+1];

                    printf("%s qualified in a marathon run with a time of %s minutes!\n"),persons[i].name,persons[i].time;
                }
            }
        }
    }
    return;
}

void donation_calc(struct person *p, struct person *members, char name[LENGTH]) {
    float amt=0,t_amt=0,max_amt=0;
    struct team t;
    int i=0,j=0,l;
    for(i=0;i<t_size;i++) {
        t=teams[i];
        members=t.members;
        l=sizeof(members)/sizeof(*members);
        for(j=0;j<l;j++) {
            if(members[j].money>members[j].money) {
                max_amt=members[j].money;
                p=&members[j];
            }
            t_amt=t_amt+members[j].money;
            printf("%s raised the most money in %s with a donation of $%s",persons[i].name,t.name,t_amt);
        }
    }
    amt=0;
    for(i=0;i<per_size;i++){
        amt+=persons[i].money;
        printf("The runners raised $%.2f for charity",amt);
    }
}


