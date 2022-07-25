#include <stdlib.h>
#include <iostream>
#include <string>
#include <tictoc.h>
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
 
int main(int argc , char **argv)
{
    std::string s;
    
    if(argc<=1)
    {
        std::cout<<"please input: "<<std::endl;
        std::cout<<"    dtick < command <params> > to start tick clock!"<<std::endl;
        std::cout<<"try again!"<<std::endl;
        return 0;
    }

    for (int i = 0;i<argc-1;++i)
    {
       s.append(argv[i+1]);
       s.append(" ");
    }
    std::cout<<"start tick clock! "<<std::endl;
    std::cout<<"command is :  "<<s<<std::endl;
    std::cout<<"......................................................................."<<std::endl;
    TicToc t;
    system(s.c_str());
    double et = t.toc();

    int sec = 0,minute = 0,hour = 0;
    std::string out;
    out.append(GREEN);
    out.append("exec shell command:  ");
    out.append(s+"\n");
    out.append(RED);
    out.append("Elapsed time: ");
    
    if(et>60*60*1000)
    {
        hour = int(et/(60*60*1000));
        et = et -hour*(60*60*1000);
        out.append(std::to_string(hour));
        out.append("h ");
    }
    if(et>60*1000){
        minute = int(et/(60*1000));
        et = et -minute*(60*1000);
        if(minute != 0)
        {
            out.append(std::to_string(minute));
            out.append("m "); 
        }
        

    }else{
        if(hour!=0){
            out.append(std::to_string(0));
            out.append("m "); 
        }
    }
    if(et>1000){
        sec = int(et/(1000));
        et = et -sec*(1000);
        if(sec !=0){
            out.append(std::to_string(sec));
            out.append("s "); 
        }
        
    }
    else{
        if(hour!=0||minute!=0)
        {
            out.append(std::to_string(0));
            out.append("s "); 
        }
    }
    out.append(std::to_string(et).substr(0,4));
    out.append("ms "); 
    std::cout.precision(3);
    std::cout<<out<<std::endl;
    return 0;
}