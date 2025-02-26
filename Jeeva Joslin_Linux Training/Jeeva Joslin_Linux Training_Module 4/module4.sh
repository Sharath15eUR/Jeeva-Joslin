#!/bin/bash

input="$1"
output="output.txt"
> "$output"
while IFS= read -r line; do
  if [[ "$line" =~ \"(frame\.time|wlan\.fc\.type|wlan\.fc\.subtype)\": ]]; then
    echo "$line" | sed 's/^[[:space:]]*//' >> "$output"
  fi
done < "$input"
