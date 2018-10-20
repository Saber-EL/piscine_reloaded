#! /bin/sh
ifconfig | grep -E "[a-zA-Z0-9]{2}:[a-zA-Z0-9]{2}:[a-zA-Z0-9]{2}.*" | sed "s/.*ether//g" | sed "s/ //g"
