string mailTo = ((a == null) ||(a <= 0)) ? b : a; 
var a = Config.GetSetting("AdminNotifications_EmailAddress"); 
var b = Globals.GetHostPortalSettings().HostSettings["SMTPPassword"].ToString();
