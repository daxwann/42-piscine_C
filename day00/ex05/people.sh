#!/bin/sh
ldapsearch -H ldap://ldap-master.42.us.org -Q "uid=z*" | grep cn: | sort -rf | cut -c5-
