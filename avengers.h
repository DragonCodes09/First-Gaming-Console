#include<bits/stdc++.h>
#include<R:\RAJ\Programming_02\damn hoover\filavengers.h>
using namespace std;
string gspace="                                                    ";
class hero{
    public:
    string name;
    int hpmax;
    int atk;
    int def;
    int cost;
    string type;
    int sr;
    int m=0;
    hero(string n, int h, int ak, int df, int cst, string tpe, int s, int ma){
        name=n;
        hpmax=h;
        atk=ak;
        def=df;
        cost=cst;
        type=tpe;
        sr=s;
        int m=ma;
    }
    void desc(){
        cout<<gspace<<"____"<<name<<"____"<<endl<<gspace<<"HP      : "<<hpmax<<endl<<gspace<<"Attack  : "<<atk<<endl<<gspace<<"Defence : "<<def<<endl<<gspace<<"Cost    : "<<cost<<endl<<gspace<<"Type    : "<<type<<endl;
    }
    
};
hero cap("Captain America",300,200,300,3,"A",0,1);
hero stank("Iron Man",300,400,300,5,"B",1,1);
hero spidey("Spider-man",300,500,400,5,"S",2,1);
hero hulk("Hulk",300,300,400,4,"A",5,1);
hero adam("Adam Warlock",300,100,300,2,"B",4,0);
hero hawkshield("Quicksilver",300,400,200,4,"S",5,0);
hero widow("Black Widow",300,200,100,1,"S",6,0);
hero scarlet("Scarlet Witch",300,400,100,3,"B",7,0);  
hero panther("Black Panther",300,300,100,2,"A",8,0);
hero strange("Dr. Strange",300,400,200,4,"B",9,0);
hero antman("Antman",300,300,200,3,"S",10,0);
hero drax("Drax the Destroyer",300,100,200,1,"A",11,0);
hero bucky("Winter Soldier",300,200,200,2,"S",12,0);
hero thor("Thor Odinson",300,400,200,4,"A",13,0);
hero magneto("Magneto",300,100,100,1,"B",14,0);
vector<hero> heroes={cap,stank,hulk,spidey,adam,hawkshield,widow,scarlet,panther,strange,antman,drax,bucky,thor,magneto};
vector<hero> hroes=heroes;
vector<int> hgp(){
    vector<int> hp;
    for(int i=0;i<heroes.size();i++){
        hp.push_back(heroes[i].hpmax);
    }
    return hp;
}
vector<vector<int>> draw={{32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,196,196,196,220,219,219,219,219,219,219,219,219,219,219,219,220,196,196,196,196,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,196,219,219,219,219,176,176,176,176,176,176,176,176,176,219,219,219,219,196,196,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,219,219,219,176,176,176,220,220,219,219,219,219,219,220,220,176,176,176,219,219,219,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,176,176,176,219,219,219,219,219,219,196,219,219,219,219,219,219,176,176,219,219,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,176,176,176,219,219,219,219,219,219,196,196,196,219,219,219,219,219,219,176,176,176,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,176,176,219,219,219,220,220,196,196,196,196,196,196,196,220,220,219,219,219,176,176,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,176,176,219,219,219,219,219,219,196,196,196,196,196,219,219,219,219,219,219,176,176,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,176,176,219,219,219,219,219,196,196,220,219,220,196,196,219,219,219,219,219,176,176,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,176,176,176,219,219,219,196,196,220,219,219,219,220,196,196,219,219,219,176,176,176,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,176,176,176,219,219,219,219,219,219,219,219,219,219,219,219,219,176,176,176,219,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,219,219,219,176,176,176,223,223,219,219,219,219,219,223,223,176,176,176,219,219,219,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,196,219,219,219,220,176,176,176,176,176,176,176,176,176,220,219,219,219,196,196,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,196,196,223,219,219,219,219,219,219,219,219,219,219,219,219,219,223,196,196,196,196,10},
{32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,176,176,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,219,219,219,219,176,176,176,219,176,176,176,176,176,176,176,176,219,176,176,176,219,219,219,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,219,219,176,176,219,176,176,176,219,176,176,176,176,176,176,176,176,219,176,176,176,219,176,176,219,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,219,219,219,219,219,219,219,219,219,219,176,176,176,176,176,176,176,176,219,219,219,219,219,219,219,219,219,219,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,219,219,196,196,196,196,196,196,219,219,219,219,219,219,219,219,219,219,219,196,196,196,196,196,196,196,219,219,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,219,219,219,196,196,196,196,196,196,196,219,219,176,176,176,176,176,176,219,196,196,196,196,196,196,196,196,219,219,219,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,219,219,219,219,196,196,196,196,196,196,196,219,176,176,176,176,176,176,219,196,196,196,196,196,196,196,219,219,219,219,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,219,176,219,219,196,196,196,196,196,196,196,219,176,176,176,176,176,176,219,196,196,196,196,196,196,196,219,219,176,219,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,219,219,176,219,196,196,196,196,196,196,196,219,176,176,176,176,176,176,219,196,196,196,196,196,196,196,219,176,219,219,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,219,219,176,219,196,196,196,196,196,196,219,176,176,176,176,176,176,219,196,196,196,196,196,196,219,176,219,219,219,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,176,219,219,176,219,196,196,196,196,196,196,223,219,219,219,219,219,219,223,196,196,196,196,196,196,219,176,219,219,176,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,176,219,219,176,219,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,219,176,219,219,176,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,176,219,219,219,219,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,219,219,219,219,176,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,176,219,219,223,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,223,219,219,176,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,176,219,219,196,196,219,223,223,223,223,220,220,196,196,196,196,196,196,220,220,223,223,223,223,219,196,196,219,219,176,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,219,196,196,196,219,196,196,196,196,196,223,219,219,220,220,219,219,223,196,196,196,196,196,219,196,196,196,219,219,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,219,219,196,196,196,223,219,220,220,220,220,219,223,196,196,196,196,223,219,220,220,220,220,219,223,196,196,196,219,219,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,219,219,219,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,219,219,219,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,219,176,219,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,219,176,219,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,219,176,176,219,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,219,176,176,219,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,219,176,176,176,219,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,219,176,176,176,219,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,219,176,176,176,219,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,219,176,176,176,219,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,219,176,176,176,176,219,220,196,196,196,196,196,196,196,196,196,196,196,196,196,196,220,219,176,176,176,176,219,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,219,176,176,219,223,219,196,196,220,223,223,223,223,223,223,223,223,220,196,196,219,223,219,176,176,219,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,219,176,219,196,223,220,220,223,196,196,196,196,196,196,196,196,223,220,220,223,196,219,176,219,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,219,176,219,196,196,196,196,196,220,220,220,220,220,220,196,196,196,196,196,219,176,219,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,219,176,219,220,220,220,219,219,176,176,176,176,219,219,220,220,220,219,176,219,176,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,219,176,176,176,219,176,176,176,176,176,176,176,176,219,176,176,176,219,176,176,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,176,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,176,176,176,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,10},
{32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,196,196,222,196,196,223,196,196,196,196,196,222,196,196,223,196,196,196,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,196,222,223,196,219,196,196,196,196,196,196,196,219,196,222,223,196,196,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,220,219,196,196,223,223,220,223,220,222,220,223,223,196,196,219,220,196,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,222,219,196,220,219,223,220,219,219,219,219,219,220,223,219,220,196,219,223,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,223,223,196,220,220,220,219,219,219,219,219,220,220,220,196,223,223,196,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,196,220,219,223,196,220,223,219,219,219,223,220,196,223,219,220,196,196,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,220,219,196,196,220,223,196,196,219,219,219,196,196,223,220,196,196,219,220,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,222,219,196,196,196,219,196,196,196,222,219,223,196,196,196,219,196,196,196,219,223,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,219,196,196,196,196,219,196,196,196,223,196,196,196,219,196,196,196,196,219,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,223,219,196,196,196,219,196,196,196,196,196,196,196,219,196,196,196,219,223,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,219,196,196,196,196,219,196,196,196,196,196,219,196,196,196,196,219,196,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,196,219,196,196,196,219,196,196,196,196,196,219,196,196,196,219,196,196,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,196,196,223,196,196,196,223,196,196,196,222,196,196,196,222,196,196,196,196,10},
{32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,176,176,176,176,176,219,219,219,219,219,219,219,219,219,219,176,176,176,176,176,176,176,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,176,176,176,219,219,219,176,176,176,176,176,176,176,176,219,219,219,176,176,176,176,176,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,176,219,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,219,176,176,176,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,219,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,219,176,176,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,219,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,219,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,219,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,176,176,176,176,219,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,219,219,219,176,176,176,176,176,176,176,176,176,176,219,176,176,176,176,219,219,176,176,176,176,176,219,219,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,219,219,176,176,176,176,176,176,176,219,176,176,176,219,219,219,176,176,176,219,219,219,176,176,176,176,219,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,219,219,176,176,176,219,219,219,176,219,219,176,176,176,219,219,219,219,176,176,219,176,219,219,176,176,219,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,219,176,176,219,176,219,219,176,219,219,219,176,176,176,219,176,176,219,219,219,176,219,219,219,176,219,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,219,176,176,219,176,219,219,176,176,219,176,219,219,176,219,219,219,176,176,176,176,176,219,219,219,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,219,176,219,219,219,176,176,219,176,176,219,176,176,176,176,219,219,176,176,176,176,176,176,219,219,219,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,219,176,219,176,219,176,176,176,219,219,219,219,176,176,176,176,176,176,176,176,176,176,176,219,176,219,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,219,219,219,176,176,176,176,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,219,219,176,219,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,219,219,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,219,219,219,219,176,219,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,219,176,219,219,219,219,176,176,176,176,176,176,176,176,176,176,176,176,219,219,219,176,176,219,176,219,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,219,176,219,219,219,219,219,219,219,176,176,219,176,176,219,176,219,219,219,219,219,176,176,219,219,219,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,219,176,219,176,176,219,219,219,219,219,219,219,176,176,219,219,176,219,219,176,219,176,176,219,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,219,219,219,176,176,219,176,219,219,176,176,219,176,176,219,176,176,176,176,176,176,176,176,219,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,176,219,176,176,176,176,176,176,219,219,176,176,176,219,176,219,219,176,176,176,176,176,219,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,176,219,176,176,176,176,176,219,176,176,219,219,219,176,176,176,176,219,176,219,176,176,219,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,219,219,219,176,176,176,176,219,176,176,176,176,219,176,176,176,176,176,219,219,219,176,176,219,219,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,219,219,176,176,219,176,176,219,176,219,176,176,176,176,176,176,219,219,219,219,176,219,176,176,176,219,176,219,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,219,176,176,176,176,219,176,176,176,219,219,219,219,219,219,219,219,219,176,176,176,176,219,176,219,219,176,176,176,219,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,176,219,176,176,176,176,176,176,219,176,176,176,219,176,176,176,176,176,176,176,176,176,176,219,176,176,219,219,176,176,176,176,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,219,176,176,176,176,176,176,176,219,219,176,176,176,219,219,219,219,219,219,219,219,219,219,219,176,176,219,219,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,176,176,176,176,176,176,176,176,219,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,219,176,176,176,176,176,176,176,176,176,219,219,176,176,176,176,219,219,219,219,219,176,176,176,176,219,176,176,176,176,176,176,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,219,219,176,176,176,176,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,176,176,176,176,219,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,219,176,176,176,176,176,176,176,219,219,176,176,176,176,176,176,176,176,176,176,219,219,176,176,176,176,176,219,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,219,176,176,176,176,176,176,176,219,219,176,176,176,176,176,176,176,219,219,219,176,176,176,176,176,219,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,219,219,219,219,219,219,219,219,176,176,176,176,176,176,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,176,176,176,219,176,176,176,176,176,219,176,176,176,176,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,176,176,176,219,176,176,176,219,176,176,176,176,176,176,176,176,176,176,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,176,176,176,176,176,176,176,176,176,176,176,176,176,176,219,176,176,176,176,176,176,176,219,176,176,176,176,176,176,176,176,176,176,176,10},
{},
{},
{},
{},
{},
{},
{},
{},
{},
{},
{}
};
vector<int> mew={32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,196,196,196,196,196,196,196,196,196,196,196,196,222,219,219,219,219,219,196,196,196,196,196,196,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,196,196,196,196,220,220,219,219,219,219,219,219,219,219,219,219,219,219,220,196,196,196,196,196,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,196,196,220,219,219,223,223,196,196,196,196,222,219,219,219,222,219,219,219,219,220,196,196,196,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,220,219,219,223,196,196,196,196,196,196,196,219,219,219,221,222,219,219,196,223,219,219,220,196,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,222,219,219,196,196,196,196,196,196,196,196,222,219,219,219,196,222,219,219,196,196,196,219,219,221,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,219,219,221,196,196,196,196,196,196,196,196,219,219,219,221,196,222,219,219,196,196,196,222,219,219,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,222,219,219,196,196,196,196,196,196,196,196,222,219,219,219,196,196,222,219,219,196,196,196,196,219,219,221,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,221,196,196,196,196,196,196,196,196,219,219,219,221,196,196,222,219,219,196,196,196,196,222,219,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,221,196,196,196,196,196,196,196,222,219,219,219,196,196,196,222,219,219,196,196,196,196,222,219,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,221,196,196,196,196,196,196,196,219,219,219,221,196,196,220,196,223,219,196,196,196,196,222,219,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,221,196,196,196,196,196,196,222,219,219,219,219,219,219,219,219,220,196,196,196,196,196,222,219,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,219,219,221,196,196,196,196,196,196,219,219,219,219,219,219,219,219,219,223,196,196,196,196,196,222,219,219,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,222,219,219,196,196,196,196,196,222,219,219,221,196,196,196,196,223,196,220,219,196,196,196,196,219,219,221,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,219,219,221,196,196,196,196,219,219,219,196,196,196,196,196,220,219,219,219,196,196,196,222,219,219,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,222,219,219,220,196,196,222,219,219,221,196,196,196,196,196,196,196,196,196,196,196,220,219,219,221,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,223,219,219,219,196,219,219,219,196,196,196,196,196,196,196,196,196,220,220,219,219,219,223,196,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,196,196,196,196,222,219,219,221,196,223,219,219,219,219,219,219,219,219,219,223,223,196,196,196,196,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,196,196,196,196,196,196,219,219,219,196,196,196,196,196,196,196,196,196,196,196,196,196,196};
vector<int> hp=hgp();
int matchup(hero a, hero b){
    int s=50;
    int n=200;
    if(a.type=="A"){
        if(b.type=="B"){
            return s;
        }
        if(b.type=="S"){
            return n;
        }
    }
    if(a.type=="B"){
        if(b.type=="S"){
            return s;
        }
        if(b.type=="A"){
            return n;
        }
    }
    if(a.type=="S"){
        if(b.type=="A"){
            return s;
        }
        if(b.type=="B"){
            return n;
        }
    }
    return 100;
}
vector<int> bat(hero a, hero b, vector<int> hp){                                                                        //battle
    while(hp[a.sr]!=0 && hp[b.sr]!=0){
        hp[a.sr]=max(0,hp[a.sr]-matchup(b,a)*(b.atk/a.def));
        hp[b.sr]=max(0,hp[b.sr]-matchup(a,b)*(a.atk/b.def));
    }
    return hp;
}
vector<hero> cho(){
    int t=10;
    vector<hero> h=hroes;                                                                                           //choose
    int b;
    for(int i=0;i<h.size();i++){
        cout<<"                                                "<<i+1<<"."<<endl;
        h[i].desc();
        cout<<"                                         *-------------------------------------*";
        cout<<endl;
        cout<<endl;
    }
    vector<hero> e={};
    string a[]={"first ","second ","third "};
    for(int i=0;i<3;i++){
        cout<<"                          "<<"Available elixir : "<<t<<endl;
        cout<<"                          "<<"Choose your "<<a[i]<<"hero :";
        cin>>b;
        cin.ignore();
        cout<<endl;
        while(b>h.size()){
            cout<<"                          "<<"Invalid input, try again : ";
            cin>>b;
            cin.ignore();
            cout<<endl;
        }
        while(t<h[b-1].cost || ((i!=2) && t==h[b-1].cost)){
            cout<<"                          "<<"Too costly, try something else : ";
            cin>>b;
            cin.ignore();
            cout<<endl;
        }
        int er=0;
        for(int j=0;j<i;j++){
            if(h[b-1].sr==e[j].sr){
                er=1;
                break;
            }
        }
        while(er==1){
            cout<<"                          "<<"Already chosen, it ain't a handicap : ";
            cin>>b;
            cin.ignore();
            cout<<endl;
            er=0;
            for(int j=0;j<i;j++){
            if(h[b-1].sr==e[j].sr){
                er=1;
                break;
            }
        }
        }
        e.push_back(h[b-1]);
        t-=h[b-1].cost;
    }
    return e;
}
vector<int> rej(){
    for(int i=0;i<heroes.size();i++){                                                                                                  //rejuvenate
    hp[i]=heroes[i].hpmax;
    }
    return hp;
}
bool fnt(vector<hero> a, vector<int> hp){
    if(hp[a[0].sr]==0 && hp[a[1].sr]==0 && hp[a[2].sr]==0){
        return 1;
    }
    else{
        return 0;
    }
}
vector<int> pit(vector<hero> a,vector<hero> b, vector<int> hp){
    int q[3]={0,0,0};
    for(int i=0;i<3;i++){
        if(hp[a[i].sr]!=0 && hp[b[i].sr]!=0){
        hp=bat(a[i],b[i],hp);
        q[i]++;
        }
    }
    srand(time(NULL));
    int r=rand()%2;
    int t=pow(-1,r);
    int y=0;
    for(int i=0;i<3;i++){
        y=1-2*i*t+t*i*i;
        if(q[i]==0 && (hp[a[i].sr]!=0 && hp[b[y].sr]!=0)){
            hp=bat(a[i],b[y],hp);
            q[i]++;
        }
    }
    for(int i=0;i<3;i++){
        y=t*i*(-2*t+1)-t*i*i+2;
        if(q[i]==0 && (hp[a[i].sr]!=0 && hp[b[y].sr]!=0)){
            hp=bat(a[i],b[y],hp);
            q[i]++;
        }
    }
    return hp;
}
void ress(int k, string a, string b, vector<hero> x, vector<hero> y){
    string g;
    vector<hero> j;
    string r;
    string h;
    int w;
    if(k==0){
        cout<<"                       tie"<<endl;
        return;
    }
    if(k==1){
        g=a;
        j=x;
        updawin(g);
    }
    if(k==-1){
        g=b;
        j=y;
        updawin(g);
    }
    int z=0;
    for(int i=0;i<3;i++){
        if(z<hp[j[i].sr]){
            z=hp[j[i].sr];
            r=j[i].name;
            w=j[i].sr;
        }
    }
    cout<<"Press 1 to continue"<<endl;
    cin>>h;
    cout<<endl;
    cout<<"*********************************************"<<g<<" wins***********************************************"<<endl;
    cout<<"____________________________________"<<"MVP :"<<r<<"________________________________"<<endl;
    for(int i=0;i<draw[w].size();i++){
        cout<<char(draw[w][i]);
    }
    cout<<endl;
    return;
}
int battle(string a, string b, vector<hero> x, vector<hero> y, vector<int> hp){
    for(int i=0;i<3;i++){
        cout<<"Round "<<i+1<<" :"<<endl;
        hp=pit(x,y,hp);
        cout<<gspace<<a<<"'s team :";
    for(int i=0;i<34-a.size();i++){
        cout<<" ";
    }
    cout<<b<<"'s team :"<<endl;
    cout<<gspace<<x[0].name<<"("<<hp[x[0].sr]<<"/"<<x[0].hpmax<<")";
    for(int i=0;i<34-x[0].name.size();i++){
        cout<<" ";
        if(i==25-x[0].name.size()){cout<<"vs";}
    }
    cout<<y[0].name<<"("<<hp[y[0].sr]<<"/"<<y[0].hpmax<<")"<<endl;
    cout<<gspace<<x[1].name<<"("<<hp[x[1].sr]<<"/"<<x[1].hpmax<<")";
    for(int i=0;i<34-x[1].name.size();i++){
        cout<<" ";
        if(i==25-x[1].name.size()){cout<<"vs";}
    }
    cout<<y[1].name<<"("<<hp[y[1].sr]<<"/"<<y[1].hpmax<<")"<<endl;
    cout<<gspace<<x[2].name<<"("<<hp[x[2].sr]<<"/"<<x[2].hpmax<<")";
    for(int i=0;i<34-x[2].name.size();i++){
        cout<<" ";
        if(i==25-x[2].name.size()){cout<<"vs";}
    }
    cout<<y[2].name<<"("<<hp[y[2].sr]<<"/"<<y[2].hpmax<<")"<<endl;
        if(fnt(x,hp)&&fnt(y,hp)){
            return 0;
        }
        if(fnt(x,hp)){
            return -1;
        }
        if(fnt(y,hp)){
            return 1;
        }
        int jk;
        cout<<"Enter 1 for next round"<<endl;
        cin>>jk;
        cout<<endl;
    }
}
int avengers(){
    heroes={cap,stank,hulk,spidey,adam,hawkshield,widow,scarlet,panther,strange,antman,drax,bucky,thor,magneto};
    hroes=heroes;
    for(int i=0;i<mew.size();i++){
        cout<<char(mew[i]);
    }
    cout<<endl;
    cout<<"*******************************************************************************************"<<endl;
    cout<<"_______________________________________Avengers Secret Wars________________________________"<<endl<<endl;
    hp=rej();
    cout<<"                 High score:"<<endl;
    hisco();
    cout<<endl;
    string p11,p22;
    cout<<"...........................................Enter the name of player 1: ";
    p11=setup();
    cout<<endl;
    cout<<"...........................................Enter the name of player 2: ";
    p22=setup();
    cout<<endl;
    vector<hero> p1t,p2t;
    cout<<"___________________________________Player 1: "<<endl;
    p1t=cho();
    vector<int> uuu;
    for(int i=0;i<heroes.size();i++){
        if((heroes[i].sr==p1t[0].sr) || (heroes[i].sr==p1t[1].sr) || (heroes[i].sr==p1t[2].sr) ){
            uuu.push_back(i);
        }
    }
    hroes.erase(hroes.begin()+uuu[2]);
    hroes.erase(hroes.begin()+uuu[1]);
    hroes.erase(hroes.begin()+uuu[0]);
    system("cls");
    cout<<"___________________________________Player 2: "<<endl;
    p2t=cho();
    cout<<gspace<<p11<<"'s team :";
    for(int i=0;i<36-p11.size();i++){
        cout<<" ";
    }
    cout<<p22<<"'s team :"<<endl;
    cout<<gspace<<p1t[0].name<<"("<<hp[p1t[0].sr]<<"/"<<p1t[0].hpmax<<")";
    for(int i=0;i<34-p1t[0].name.size();i++){
        cout<<" ";
        if(i==25-p1t[0].name.size()){cout<<"vs";}
    }
    cout<<p2t[0].name<<"("<<hp[p2t[0].sr]<<"/"<<p2t[0].hpmax<<")"<<endl;
    cout<<gspace<<p1t[1].name<<"("<<hp[p1t[1].sr]<<"/"<<p1t[1].hpmax<<")";
    for(int i=0;i<34-p1t[1].name.size();i++){
        cout<<" ";
        if(i==25-p1t[1].name.size()){cout<<"vs";}
    }
    cout<<p2t[1].name<<"("<<hp[p2t[1].sr]<<"/"<<p2t[1].hpmax<<")"<<endl;
    cout<<gspace<<p1t[2].name<<"("<<hp[p1t[2].sr]<<"/"<<p1t[2].hpmax<<")";
    for(int i=0;i<34-p1t[2].name.size();i++){
        cout<<" ";
        if(i==25-p1t[2].name.size()){cout<<"vs";}
    }
    cout<<p2t[2].name<<"("<<hp[p2t[2].sr]<<"/"<<p2t[2].hpmax<<")"<<endl;
    string jjj;
    cout<<"Enter 1 to begin"<<endl;;
    cin>>jjj;
    cout<<endl;
    int errr=battle(p11,p22,p1t,p2t,hp);
    ress(errr,p11,p22,p1t,p2t);
    cout<<"_______________________________________________________=>Enter 0 to exit"<<endl;
        string lkl;
        cin>>lkl;
}