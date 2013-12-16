#include<stdio.h>
#include<stdlib.h>
#include<syslog.h>

int
main(int argc, char* argv[])
{
	openlog("liuchang", LOG_CONS | LOG_PID | LOG_PERROR, LOG_USER) ;
       	syslog(LOG_DEBUG,"This is a debug information %m") ;
	syslog(LOG_INFO, "This is a info information %m") ;
	syslog(LOG_ERR, "This is a error information %m") ;
	syslog(LOG_CRIT, "THIS is a crit informastion %m");
	closelog();
	return 0;
}
