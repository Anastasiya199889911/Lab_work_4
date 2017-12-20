foreach (DirectoryInfo dir in dirs.GetDirectories()) 
{ 
//create folder{16} 
stream.Write(new byte[] { (byte) NetworkMessage.MakeDir }, 0, 1); 
stream.Read(new byte[1],0, 1); 
stream.Write(BitConverter.GetBytes(Encoding.UTF8.GetBytes((a + b.Length), 0, 4); 
stream.Write(Encoding.UTF8.GetBytes (a + b,0, Encoding.UTF8.GetBytes 
(a + b.Length); 
//send folder name 
stream.Read(new byte[1], 0, 1);//Ok 
vat a = SubFolder.Replace('\\', '/'); 
var b = dir.Name.Replace('\\', '/')); 
}

