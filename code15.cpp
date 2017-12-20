string res; 
int i = PersonName.IndexOf(" "); 
int toSpace = PersonName.Length - i - 1; 
char[] str1 = new char[i]; 
PersonName.CopyTo(0, str1, 0, i); 
char[] str2 = new char[toSpace]; 
PersonName.CopyTo(i + 1, str2, 0, toSpace); 
res = str1.ToString() + "." + str2.ToString(); 
if (res.Length > 20) 
{ 
str1 = new char[20]; 
res.CopyTo(0, str1, 0, 20); 
res = new string(str1); 
} 
res += "@domain.ua"; 
return res; 
