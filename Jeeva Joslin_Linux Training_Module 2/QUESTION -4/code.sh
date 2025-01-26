process=$(ps -eo pid,comm,%mem --sort=-%mem | awk 'NR==2{print $1}')  

if [ -n "$process" ]; then  
    echo "Process with the highest memory usage (PID: $process):"  
    ps -p $process -o pid,comm,%mem    
    echo "Terminating process $process..."  
    kill -9 $process  
    if [ $? -eq 0 ]; then  
        echo "Process $process terminated successfully."  
    else  
        echo "Failed to terminate process $process."  
    fi  
else  
    echo "No processes found."  
fi
