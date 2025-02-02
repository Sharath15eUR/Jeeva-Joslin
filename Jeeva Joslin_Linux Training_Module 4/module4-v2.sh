#!/bin/bash
awk '/"(frame.time|wlan.fc.type|wlan.fc.subtype)"/' $1 | sed 's/^[ \t]*//' > output-v2.txt
