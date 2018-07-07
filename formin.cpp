#include "formin.h"
#include <map>

int forMin(std::map<char, int> &temp_map, std::map<char, int> &it) 
{	
		for (std::map<char,int>::iterator iter=temp_map.begin(); iter!=temp_map.end(); ++iter)
  		{
  			if(it->second > iter->second)
  			{
  				menor = iter->second;
			}
		} 
		return mayor;	
}	

