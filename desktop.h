launch-desktop()
{
	#xserver
	export DISPLAY=$(cat /etc/resolv.conf | grep nameserver | awk '{print $2; exit;}'):0.0
	export LIBGL_ALWAYS_INDIRECT=1
	sudo /etc/init.d/dbus start &> /dev/null
	cmd.exe /C C:/Users/Dell/config1.xlaunch
	mate-session
}
