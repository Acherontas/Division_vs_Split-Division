#include "mountza.h"
#include <vector>
#include <math.h>
#include <iostream>
#include <iomanip>
#include <thread>
#include "multi.h"
#include <string>
#include <cstring>
using namespace std;

mountza::mountza(){}//ctor

mountza::~mountza(){}//dtor

mountza::mountza(const mountza& other){}//copy ctor

mountza& mountza::operator=(const mountza& rhs)
{
    if (this == &rhs) return *this; // handle self assignment //assignment operator
    return *this;
}

long double mountza::mntz(long double fnum,long double dexia) {
cout<<"using : " << fnum << " " << dexia <<"\n";
o_mouzomenos.clear();
long double ml=o_mouzomenos.size()-1,xl,xli,sumlx,ssix=0,sseven=0,seight=0,snine=0,diar,xpil,xxli,intPart,fractPart,ckcky,adck;
int kl;
char k,tk;
stringstream sli;
sli<<fnum;
o_mouzomenos+=sli.str();
ml=o_mouzomenos.size()-1;
cout<<"using the size of the number : " << ml <<"\n";
vector<long double> svlsix,svlsev,sveigh,svnine,ckcki,sumi,xl_report;
diar=(long double)fnum/(long double)dexia;
cout<<"@5 main : " << std::setprecision(6) << diar <<"\n";
cout<<"@6 main : " << std::setprecision(7) << diar <<"\n";
cout<<"@7 main : " << std::setprecision(8) << diar <<"\n";
cout<<"@8 main : " << std::setprecision(9) << diar <<"\n";
cout<<"\n";
string rnd_one,rnd_two,rnd_three,rnd_four,check,ck,sk,tsk;

for(int i=0;i<=o_mouzomenos.size()-1;i++){
      multi *mtx=new multi();
      xpil=0;xli=0;xxli=0;
      stringstream six,seven,eight,nine;
      rnd_one.clear();rnd_two.clear();rnd_three.clear();rnd_four.clear();
      k=o_mouzomenos.at(i);
      if(k!='.'){
      kl=0;
      kl=stoi(&k);
      cout<<"with number of digit : " << kl <<" and str of it ";
      sk.clear();sk+=to_string(kl); cout<< sk <<" and size " << sk.size() << "  " << sk.size()-1 <<"\n";
      if(sk.size()>1 ){cout<<"2 digits \n";
      tk=sk.at(0);
      cout<<"with a char of " << tk <<" ";
      kl=0;
      kl=int(tk- '0');
      cout<< " and integer of " << kl <<"\n";
      }
      xl=pow(10,ml)*kl;
      cout<<"with " << ml << " and " << kl <<" \n";
      xli=0;
      xli=xl/dexia;

      cout<<"Powing and moving--------------------------------------------------------\n";
      cout<<"using   ------> " << xl << "  with / " << dexia << "  and := " << xli <<"\n";

     // sumlx+=xli;
      xxli = xli;
	  fractPart = modf(xxli, &intPart);
	 // cout << "modf " << xxli << " = " << intPart << " + " << fractPart << endl;
	  check.clear();
	  ck.clear();
	  stringstream ckh;
	  ckh<<std::setprecision(9)<<fractPart;
	  cout<<"chk : " << ckh.str() <<"\n";
	  ck=ckh.str();
	  if(ck.size()-1<=8){ckcky=0;ckcky=stold(ck);goto B;}
	  for(int i=0;i<=8;i++){check+=ck.at(i);}
	  ckcky=stold(check);
	  B:
      cout<<"ckcky number : " << ckcky  <<"\n";
      adck=intPart+ckcky;
      ck.clear();check.clear();
      stringstream amk;
      amk<<std::setprecision(9)<<adck;
      ck=amk.str();
      if(ck.size()-1<=8){ckcky=0;ckcky=stold(ck);goto A;}
      for(int i=0;i<=8;i++){check+=ck.at(i);}
      ckcky=0;ckcky=stold(check);
      A:
      cout<<"Using Reworkeddd :  " << ckcky <<"\n";
      cout<<"Summing " << sumlx <<" with " << ckcky << " to ";
      //ckcki.push_back(ckcky);
      //sumlx=sumlx+ckcky;
      //cout<<"Current sum : " << sumlx <<"\n";
      //cout<<"Precisioned sum : "<<setiosflags(ios::fixed) << std::setprecision(9)<<sumlx <<"\n";
      stringstream absum;
      absum<<std::setprecision(9)<<sumlx;
      ck.clear();check.clear();
      ck=absum.str();
      //if(ck.size()-1<=8){sumlx=sumlx;goto C;}
      //for(int i=0;i<=8;i++){check+=ck.at(i);}
      //ckcky=0;ckcky=stold(check);
      //sumlx=ckcky;
      //cout<<"Precisioning sum : "<< sumlx <<"\n";

      //C:
      //sumi.push_back(sumlx);

      xpil=mtx->move_and_find(xl,dexia);
      cout<<"Found := " << xpil <<"\n";
      xli=xpil/dexia;
      xli=intPart+xli;

      cout<<"Reworked number : " << xli <<"\n";
      cout<<"\n";
      xl_report.push_back(xl);
      cout<<"        @ ------> " << xl << " / " << dexia << " := " << xli <<" \n";// << result.str() <<"\n";
      cout<<"                    @5 : " << std::setprecision(5) << xli <<"\n";
      six<<std::setprecision(5)<<std::showpoint<<std::fixed<<xli;rnd_one+=six.str();svlsix.push_back(stold(rnd_one));
      cout<<"                    @6 : " << std::setprecision(6) << xli <<"\n";
      seven<<std::setprecision(6)<<std::showpoint<<std::fixed<<xli;rnd_two+=seven.str(); svlsev.push_back(stold(rnd_two));
      cout<<"                    @7 : " << std::setprecision(7) << xli <<"\n";
      eight<<std::setprecision(7)<<std::showpoint<<std::fixed<<xli;rnd_three+=eight.str();sveigh.push_back(stold(rnd_three));
      cout<<"                    @8 : " << std::setprecision(8) << xli <<"\n";
      nine<<std::setprecision(8)<<std::showpoint<<std::fixed<<xli;rnd_four+=nine.str();
      if(rnd_four.size()-1<=8){cout<<"smaller" << nine.str()<<" " << rnd_four<<"\n";
      svnine.push_back(stold(rnd_four));
      //sumlx=sumlx+stold(rnd_four);
      ckcki.push_back(stold(rnd_four));
      }
      if(rnd_four.size()-1>8){cout<<"bigger " << nine.str() << " " << rnd_four<<"\n";
      string neww;neww.clear();
      for(int i=0;i<=8;i++){neww+=rnd_four.at(i); }
      //cout<<neww << " " << stold(neww)<<"\n";
      cout<<"                    @8 new : " << std::setprecision(8) << neww <<"\n";
      svnine.push_back(stold(neww));
      //sumlx=sumlx+stold(neww);
      ckcki.push_back(stold(neww));
      }
      //sumi.push_back(sumlx);
      cout<<"\n";
      ml=ml-1;
      }
      if(k=='.'){break;}
    }
cout<<"\n";

for(int i=0;i<=ckcki.size()-1;i++){sumlx=sumlx+ckcki.at(i);sumi.push_back(sumlx);
//cout<<"using : " << ckcki.at(i) << " and sum " << std::setprecision(10)<< sumlx <<"\n";
}


 double result,intpart;
 long double itprt=0,rst=0;



cout<<"------Reporting Numbers------\n";
    for(int i=0;i<=svlsix.size()-1;i++){
    cout<<"i " <<i << " with " << xl_report.at(i) << " :: " << svlsix.at(i) << " " << svlsev.at(i) << " " << sveigh.at(i) << " " << svnine.at(i) <<" || " << ckcki.at(i) << " sum " <<sumi.at(i)<<"\n";
    result=modf(ckcki.at(i),&intpart);
    itprt=itprt+intpart;
    rst=rst+result;
    cout<<" ------> for number " << ckcki.at(i) << " =  " << intpart << " + " << result <<"\n";
    cout<<" ------> with sums  " << itprt << " and " << rst <<"\n";
    }
    cout<<"\n";
    cout<<"**************************************************\n";
    cout<<"getting sum and checking :\n";
    result=modf(rst,&intpart);
    cout<<"as " << intpart << " + "<< rst <<"\n";
    cout<<"breaking comma seperated sum: "<< rst <<" as " << intpart << " and " << result <<"\n";
    cout<<"fixing comma seperated value : "<< result << " as ";
    result=modf(result,&intpart);
    cout<<intpart << " + " << result <<"\n";
    cout<<"taking only the digits we want ";
    string m_digits,f_digits;
    m_digits.clear(),f_digits.clear();
    m_digits+=to_string(result);int cnli=0;int tli=0;
    for(int i=0;i<=m_digits.size()-1;i++){
        //cout<<"t c " << tli << " " << cnli <<"\n";
        if(m_digits.at(i)!='.' && tli!=1){f_digits+=m_digits.at(i);goto K;}
        if(m_digits.at(i)=='.' || cnli<=4){
             // cout<<"if ";
              f_digits+=m_digits.at(i);
              //cout<<f_digits<<"\n";
              cnli+=1;
              }
        K:tli=1;
        }
    cout<<"returning with " << m_digits<<" with " << f_digits<<"\n";
    cout<<"creating digit form ";
    double xi=stold(f_digits);
    cout<<xi<<"\n";
    cout<<"found differentiation between methods of : " << intpart <<"\n";
    cout<<"and sum to forward of: " << itprt << " + " << intpart << " = " << itprt+intpart <<"\n";
    int lit=0;
    lit=itprt+intpart;
    cout<<"**************************************************\n";
    cout<<"\n";
cout<<"-----------------------------\n";

   int first_i=0, last_i=svlsix.size()-1,rnd_up=svlsix.size()-1;
   for(;;){
           ssix=ssix+svlsix.at(first_i);
           sseven=sseven+svlsev.at(first_i);
           seight=seight+sveigh.at(first_i);
           snine=snine+svnine.at(first_i);
           if(first_i==last_i){break;}
           first_i+=1;
   }
    cout<<"Sums of lower digits :\n";
    cout<<"                    @5  : " << ssix <<"\n";
    cout<<"                    @6  : " << sseven <<"\n";
    cout<<"                    @7  : " << seight <<"\n";
    cout<<"\n";

    cout<<"**************************************************************\n";
    result=modf(ssix,&intpart);
    cout<<"generating " << intpart << " + " << result <<"\n";
    cout<<"correcting result number: " << result <<"\n";

    string mm_digits,ff_digits;
    mm_digits.clear(),ff_digits.clear();
    mm_digits+=to_string(result);cnli=0; tli=0;
    for(int i=0;i<=mm_digits.size()-1;i++){
        //cout<<"t c " << tli << " " << cnli <<"\n";
        if(mm_digits.at(i)!='.' && tli!=1){ff_digits+=mm_digits.at(i);goto P;}
        if(mm_digits.at(i)=='.' || cnli<=4){
             // cout<<"if ";
              ff_digits+=mm_digits.at(i);
              //cout<<f_digits<<"\n";
              cnli+=1;
              }
        P:tli=1;
        }
    cout<<"returning with " << mm_digits<<" with " << ff_digits<<"\n";
    cout<<"creating digit form ";
    double xxi=stold(ff_digits);
    cout<<xxi<<"\n";
    cout<<"with       " << lit << " + " << xi <<"\n";
    cout<<"approximation till fix " << intpart-lit << " and " << result-xi <<"\n";
    cout<<"approximation with correction " << intpart-lit << " and " << xxi-xi<<"\n";
    cout<<"**************************************************************\n";



    vector<long double> fnr;
    fnr.push_back(snine);
    stringstream drk;
    drk<<std::setprecision(8)<<snine;
    long double drki=stold(drk.str());
    fnr.push_back(drki);

    stringstream dr;
    dr<<std::setprecision(8)<<diar;
    long double dri;
    dri=stold(dr.str());
    fnr.push_back(dri);

    fnr.push_back(sumlx);

    fnr.push_back(sumi.at(last_i));

    cout<<"For " << (long double)fnum << " / " << (long double) dexia << " result sets is \n";
    cout<<"---untouched values---------------------------------------------------------\n";
    cout<<"@8 sum                            : " <<snine<<"\n";
    cout<<"@8 sum with precision as addition : " << std::setprecision(8) << snine <<"\n";
    cout<<"@8 main                           : " << std::setprecision(8) << diar <<"\n";
    cout<<"@8 sumlx                          : " << std::setprecision(10)<<std::showpoint<<sumlx <<" with " << sumi.at(last_i) <<"\n";
    cout<<"@88                               : " << std::setprecision(9)<<sumi.at(last_i) << "\n";
    cout<<"-----touched values---------------------------------------------------------\n";
    for(int i=0;i<=4;i++){
    //stringstream sri;
    //sri<<std::setprecision(8)<<fnr.at(i);
    cout<<"@i " << i << " value " << fnr.at(i) <<"\n";
    }



//we have a repetitive pattern
//143.96395=15986/111

//147856 / 32.5  4549.4151 4549.4153

return 0;
}
