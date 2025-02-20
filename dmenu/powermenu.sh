#!/bin/zsh

case "$(echo -e 'Shutdown\nRestart\nSuspend\nLock' | dmenu \
	-p 'select ')" in
		Shutdown) exec systemctl poweroff;;
		Restart) exec systemctl reboot;;
		Suspend) exec systemctl suspend;;
		Lock) exec slock;;
esac
