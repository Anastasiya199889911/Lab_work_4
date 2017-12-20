if (Directory.Exists(path + "SCLAD") && Directory.Exists(path + "REAL") && Directory.Exists(path + "DOSTAVKA") && ... && (File.Exists(path + "DOSTAVKA\\zamena.dbf"))) 
return true; 
return false;
