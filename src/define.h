// prefs
#define preferences	[NSUserDefaults standardUserDefaults]
#define GSC_APPNAME	[[[NSBundle bundleForClass:[self class]] infoDictionary] objectForKey:@"CFBundleName"]
#define GSC_VERSION	[[[NSBundle bundleForClass:[self class]] infoDictionary] objectForKey:@"CFBundleVersion"]
#define VERSIONDICTKEY	@"gsccod"
#define EMPTYWNDWTITLE  @"GSC Call of Duty"
#define EXPIRYYEAR      2006
#define EXPIRYMONTH     12
#define EXPIRYDAY       31
#define EXPIRYDATETXT   @"january 1st 2007"
#define MAXBANLISTSIZE  999
#define MAXAUTOGENPLYR  16

// files and directories
#define APPICONIMAGE    @"gsccod_app.icns"
#define CONFIGFILENAME 	@"/main/gsccod.cfg"
#define GAMEAPPNAME	@"/Call of Duty MP"
#define APPEXTENSION    @".app"
#define APPEXEPATH      @"/Contents/MacOSClassic"
#define PARAMFILENAME 	@"/MacCoDParms.txt"
#define GAMEPARAMETERS 	@"exec gsccod.cfg\nmap_rotate\n"
#define CONFIGFILENAME 	@"/main/gsccod.cfg"
#define OPENCOMMAND	@"/usr/bin/open"
#define DEF_GAMEAPPPATH	@"/Applications/Call of Duty"
#define BASEDIRNAME	@"/Main"
#define UNZIP_PATH	@"/usr/bin/unzip"
#define SAVE_EXTENSION  @".gsccod"
#define OPEN_EXTENSION  @"gsccod"
#define DEFAULT_FNAME   @"Untitled Server.gsccod"
#define AUTOSTARTNAME   @"autostart.gsccod"

// server runtime settings
#define LAUNCHWAITTIME	5
#define POLLWAITTIME	5
#define HEARTBEATTIME   28800
#define MAXSTARTPOLLS	10
#define RUNPOLLWAITTIME 30
#define STATUSLINELEN   79

// help URL's
#define HELP_SAVE_FILES_URL     @"http://www.p-edge.nl/gsc/index.php?option=content&task=category&sectionid=2&id=76&Itemid=25"
#define HELP_QUIT_FIRST_URL     @"http://www.p-edge.nl/gsc/index.php?option=content&task=category&sectionid=2&id=76&Itemid=25"
#define PAYPAL_DONATE_URL       @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=12&Itemid=32"
#define ONLINE_MANUAL_URL       @"http://www.p-edge.nl/gsc/index.php?option=content&task=category&sectionid=2&id=75&Itemid=25"
#define HELP_ADDIP_URL          @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=164&Itemid=25"
#define HELP_CANTOPENFILE_URL   @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=109&Itemid=25"
#define HELP_OLDFILEVER_URL     @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=110&Itemid=25"
#define HELP_FILEDAMAGED_URL    @"http://www.p-edge.nl/gsc/index.php?option=content&task=category&sectionid=2&id=76&Itemid=25"
#define HELP_RCONPASS_URL       @"http://www.p-edge.nl/gsc/index.php?option=content&task=view&id=165&Itemid=25"

// internal URL's
#define VERSION_CHECK_URL   @"http://www.p-edge.nl/apps/versioncheck.xml"
#define DOWNLOAD_NEW_URL    @"http://www.p-edge.nl/gsc/index.php?option=com_remository&Itemid=38&func=selectcat&cat=1"
#define GSC_SERV_SIGNON         @"http://www.p-edge.nl/gsc/gscservers/submit.php?mode=signon&id=%@&hostname=%@&adminname=%@&gametype=%@&location=%@&netport=%d"
#define GSC_SERV_SIGNOFF        @"http://www.p-edge.nl/gsc/gscservers/submit.php?mode=signoff&id=%@&hostname=%@&adminname=%@&gametype=%@&location=%@&netport=%d"