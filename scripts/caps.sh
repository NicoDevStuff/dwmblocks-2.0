#!/bin/bash
caps_state=$(xset q | grep "Caps Lock:" | awk '{print $4}')

if [ "$caps_state" == "on" ]; then
	echo "🟥 CAPS 🟥"
fi
