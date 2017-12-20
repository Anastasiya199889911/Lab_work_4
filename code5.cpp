Bool IsNumber(string str) 
{ 
for (int i = 0; i < 10; i++) 
str.Replace(i.ToString(), ""); 
return str.Length == 0; 
} 

