#!/bin/sh
### BEGIN INIT INFO
# Provides:          my_daemon
# Required-Start:    $local_fs $network $named $time $syslog
# Required-Stop:     $local_fs $network $named $time $syslog
# Default-Start:     2 3 4 5
# Default-Stop:      0 1 6
# Description:       <DESCRIPTION>
### END INIT INFO

#######
## EDIT
SCRIPT_NAME="my_daemon"
RUNAS="<username>"

###

SCRIPT=$PWD/$SCRIPT_NAME

# WRITE CODE HERE
