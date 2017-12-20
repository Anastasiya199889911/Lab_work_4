string[] nameParts = customer.Name.Split(' '); 
string firstName = nameParts[0]; 
string lastName = nameParts[1].TrimStart(' '); 
