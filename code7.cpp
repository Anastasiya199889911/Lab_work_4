string getDayOfTheWeek(int i) 
{ 
if(!(i>=0 && i<7)) 
throw Exception 
string s[7] = { "Monday", "Tuesday", "Wednesday", "Thursday" , "Friday", "Saturday", "Sunday" } 
return s[i]; 
} 

