#include "formax.h"
#include <map>

int forMax(std::map<char, int> &temp_map, std::map<char, int> &it) 
{	
		for (std::map<char,int>::iterator iter=temp_map.begin(); iter!=temp_map.end(); ++iter)
  		{
  			if(it->second < iter->second)
  			{
				mayor = iter->second;
			}
		}
		return mayor;	
}	

