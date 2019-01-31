#!/bin/sh
ldapsearch -H ldap://ldap-master.42.us.org -Q "(sn=*bon*)" | grep sn: | wc -l | sed 's/ //g'
