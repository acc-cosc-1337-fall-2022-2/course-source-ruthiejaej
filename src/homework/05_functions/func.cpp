//add include statements
#include"func.h"
#include <iostream>
#include <string>
using std::string;
using namespace std;
using std::cout;
//add function code here
int dna.size
double get_gc_content(const string& dna)
{
      int counter = 0;

        for(std::size_t i = 0; i < dna.size();++i)
        {
            if(char(dna[i]=='C') || char(dna[i]=='G'))
            {
                counter++;
                // cout<<counter<<endl;     
            }

        }
      cout<<counter<<endl;

      double gc_content = counter / dna.length();

      return gc_content;
    }

    int get_gc_content()
    {
      std::string dna = "ACCGCAAATT";

      double gc_count;

      gc_count = get_gc_content(dna);
      
      cout<<gc_count<<endl;

      return 0;
    } 

string get_dna_complement(std::string& dna)
{
switch(dna)
    {   
    case 'A':
        return 'T';
    case 'T':
        return 'A';
    case 'G':
        return 'C';
    case 'C':
        return 'G';
    }   
    assert(false);

}

string get_reverse_string(dna)
{
    std::string DNA = "TGAGACTTCAGGCTCCTGGGCAACGTGCTGGTCTGTGTGC";
    reverse(DNA.begin(), DNA.end());
    for (std::size_t i = 0; i < DNA.length(); ++i){
        switch (DNA[i]){
        case 'A':
            DNA[i] = 'T';
            break;    
        case 'C':
            DNA[i] = 'G';
            break;
        case 'G':
            DNA[i] = 'C';
            break;
        case 'T':
            DNA[i] = 'A';
            break;
        }
    }
    std::cout << "reverse complement : " << DNA << std::endl;
    return 0;
} 
