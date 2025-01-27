# Module 2 Assessment

## The Linux Environment

### 1) **Use the appropriate command to list all files larger than 1 MB in the current directory and save the output to a file.**

1. To list all the files along with size in human readable format `ls -lh` is used.Output of `ls -lh`:
   ```
   total 7.9M
   -rw-rw-r-- 1 jeeva jeeva 1.8M Jan 26 14:43 Bee_Colony_based_feature_Optimization.pdf
   -rw-rw-r-- 1 jeeva jeeva 1.1M Jan 26 14:43 Federated_Learning_Disease_Diagnosis_Mechanism.pdf
   -rw-rw-r-- 1 jeeva jeeva 1.5M Jan 26 14:43 File.pdf
   -rw-rw-r-- 1 jeeva jeeva 389K Jan 26 14:44 The_Linux_Kernel_documentation.pdf
   -rw-rw-r-- 1 jeeva jeeva 3.2M Jan 26 14:44 trainer_state.json
   ```
2. To list all files along with size `ls -l` command is used.Output of `ls -l`:

   ```
   total 8080
   -rw-rw-r-- 1 jeeva jeeva 1871706 Jan 26 14:43 Bee_Colony_based_feature_Optimization.pdf
   -rw-rw-r-- 1 jeeva jeeva 1123271 Jan 26 14:43 Federated_Learning_Disease_Diagnosis_Mechanism.pdf
   -rw-rw-r-- 1 jeeva jeeva 1560367 Jan 26 14:43 File.pdf
   -rw-rw-r-- 1 jeeva jeeva  398008 Jan 26 14:44 The_Linux_Kernel_documentation.pdf
   -rw-rw-r-- 1 jeeva jeeva 3312600 Jan 26 14:44 trainer_state.json

   ```

3. To find all files larger than 1 MB and to store the output in a file named `output.txt`:
   ```
   ls -l | awk '$5 > (1024*1024) {print $9}' > output.txt
   ```
4. `output.txt`:
   ```
   Bee_Colony_based_feature_Optimization.pdf
   Federated_Learning_Disease_Diagnosis_Mechanism.pdf
   File.pdf
   trainer_state.json
   ```
5. Another way to find files larger than 1 MB is by using `find` command:
   ```
   find . -type f -size +1M -exec ls -lh {} + | awk '{ print $9 ": " $5 }' > large.txt
   ```
6. `large.txt`:
   ```
   ./Bee_Colony_based_feature_Optimization.pdf: 1.8M
   ./Federated_Learning_Disease_Diagnosis_Mechanism.pdf: 1.1M
   ./File.pdf: 1.5M
   ./trainer_state.json: 3.2M
   ```
7. CLI:

   ```

   jeeva@JEEVA:~/embedUR/Module2/Q1$ ls -lh
   total 7.9M
   -rw-rw-r-- 1 jeeva jeeva 1.8M Jan 26 14:43 Bee_Colony_based_feature_Optimization.pdf
   -rw-rw-r-- 1 jeeva jeeva 1.1M Jan 26 14:43 Federated_Learning_Disease_Diagnosis_Mechanism.pdf
   -rw-rw-r-- 1 jeeva jeeva 1.5M Jan 26 14:43 File.pdf
   -rw-rw-r-- 1 jeeva jeeva 389K Jan 26 14:44 The_Linux_Kernel_documentation.pdf
   -rw-rw-r-- 1 jeeva jeeva 3.2M Jan 26 14:44 trainer_state.json
   jeeva@JEEVA:~/embedUR/Module2/Q1$ ls -l
   total 8080
   -rw-rw-r-- 1 jeeva jeeva 1871706 Jan 26 14:43 Bee_Colony_based_feature_Optimization.pdf
   -rw-rw-r-- 1 jeeva jeeva 1123271 Jan 26 14:43 Federated_Learning_Disease_Diagnosis_Mechanism.pdf
   -rw-rw-r-- 1 jeeva jeeva 1560367 Jan 26 14:43 File.pdf
   -rw-rw-r-- 1 jeeva jeeva  398008 Jan 26 14:44 The_Linux_Kernel_documentation.pdf
   -rw-rw-r-- 1 jeeva jeeva 3312600 Jan 26 14:44 trainer_state.json
   jeeva@JEEVA:~/embedUR/Module2/Q1$ ls -l | awk '$5 > (1024*1024) {print $9}' > output.txt
   jeeva@JEEVA:~/embedUR/Module2/Q1$ cat output.txt
   Bee_Colony_based_feature_Optimization.pdf
   Federated_Learning_Disease_Diagnosis_Mechanism.pdf
   File.pdf
   trainer_state.json

   jeeva@JEEVA:~/embedUR/Module2/Q1$ ls -lh
   total 7.9M
   -rw-rw-r-- 1 jeeva jeeva 1.8M Jan 26 14:43 Bee_Colony_based_feature_Optimization.pdf
   -rw-rw-r-- 1 jeeva jeeva 1.1M Jan 26 14:43 Federated_Learning_Disease_Diagnosis_Mechanism.pdf
   -rw-rw-r-- 1 jeeva jeeva 1.5M Jan 26 14:43 File.pdf
   -rw-rw-r-- 1 jeeva jeeva    0 Jan 26 16:04 large.txt
   -rw-rw-r-- 1 jeeva jeeva  121 Jan 26 15:17 output.txt
   -rw-rw-r-- 1 jeeva jeeva 389K Jan 26 14:44 The_Linux_Kernel_documentation.pdf
   -rw-rw-r-- 1 jeeva jeeva 3.2M Jan 26 14:44 trainer_state.json
   jeeva@JEEVA:~/embedUR/Module2/Q1$ find . -type f -size +1M -exec ls -lh {} + | awk '{ print $9 ": " $5 }' > large.txt
   jeeva@JEEVA:~/embedUR/Module2/Q1$ cat large.txt
   ./Bee_Colony_based_feature_Optimization.pdf: 1.8M
   ./Federated_Learning_Disease_Diagnosis_Mechanism.pdf: 1.1M
   ./File.pdf: 1.5M
   ./trainer_state.json: 3.2M
   ```

   ```

   ```

8. Screenshot:
   ![QUESTION -1](https://github.com/user-attachments/assets/4a534da8-8063-4f26-816a-d5c149bd8e00)
   ![QUESTION - 1b](https://github.com/user-attachments/assets/b459f6c0-b760-4791-b2ab-021947ee2d33)


### 2) **Replace all occurrences of "localhost" with "127.0.0.1" in a configuration file named config.txt, and save the updated file as updated_config.txt.**

1. To create a text file with the name `config.txt` and add the output of `ping localhost`:
   ```
   ping localhost > config.txt
   ```
2. `config.txt`:

   ```
   PING localhost (127.0.0.1) 56(84) bytes of data.
   64 bytes from localhost (127.0.0.1): icmp_seq=1 ttl=64 time=0.312 ms
   64 bytes from localhost (127.0.0.1): icmp_seq=2 ttl=64 time=0.033 ms

   --- localhost ping statistics ---
   2 packets transmitted, 2 received, 0% packet loss, time 1001ms
   rtt min/avg/max/mdev = 0.033/0.172/0.312/0.139 ms
   ```

3. To replace the all occurrences of `localhost` with `127.0.0.1` ans store the output in a file named `updated_config.txt`:
   ```
   sed 's/localhost/127.0.0.1/g' config.txt > updated_config.txt
   ```
4. `updated_config.txt`:

   ```
   PING 127.0.0.1 (127.0.0.1) 56(84) bytes of data.
   64 bytes from 127.0.0.1 (127.0.0.1): icmp_seq=1 ttl=64 time=0.312 ms
   64 bytes from 127.0.0.1 (127.0.0.1): icmp_seq=2 ttl=64 time=0.033 ms

   --- 127.0.0.1 ping statistics ---
   2 packets transmitted, 2 received, 0% packet loss, time 1001ms
   rtt min/avg/max/mdev = 0.033/0.172/0.312/0.139 ms
   ```

5. CLI:

   ```

   jeeva@JEEVA:~/embedUR/Module2/Q2$ ping localhost > config.txt
   ^Cjeeva@JEEVA:~/embedUR/Module2/Q2$ cat config.txt
   PING localhost (127.0.0.1) 56(84) bytes of data.
   64 bytes from localhost (127.0.0.1): icmp_seq=1 ttl=64 time=0.312 ms
   64 bytes from localhost (127.0.0.1): icmp_seq=2 ttl=64 time=0.033 ms

   --- localhost ping statistics ---
   2 packets transmitted, 2 received, 0% packet loss, time 1001ms
   rtt min/avg/max/mdev = 0.033/0.172/0.312/0.139 ms
   jeeva@JEEVA:~/embedUR/Module2/Q2$ sed 's/localhost/127.0.0.1/g' config.txt > updated_config.txt
   jeeva@JEEVA:~/embedUR/Module2/Q2$ cat updated_config.txt
   PING 127.0.0.1 (127.0.0.1) 56(84) bytes of data.
   64 bytes from 127.0.0.1 (127.0.0.1): icmp_seq=1 ttl=64 time=0.312 ms
   64 bytes from 127.0.0.1 (127.0.0.1): icmp_seq=2 ttl=64 time=0.033 ms

   --- 127.0.0.1 ping statistics ---
   2 packets transmitted, 2 received, 0% packet loss, time 1001ms
   rtt min/avg/max/mdev = 0.033/0.172/0.312/0.139 ms
   ```

6. Screenshot:
   ![QUESTION - 2](https://github.com/user-attachments/assets/5d91d345-0ff7-42af-b130-df9a0cd4c0a6)


### 3) **Use the appropriate command to search for lines containing the word "ERROR" in a log file but exclude lines containing "DEBUG". Save the results to a file named filtered_log.txt.**

1. `file.log`:
   ```
   DEBUG: Starting the application initialization.
   ERROR: Unable to connect to the database.
   INFO: User 'admin' logged in successfully.
   DEBUG: Fetching configuration settings from the server.
   ERROR: DEBUG - Configuration settings could not be applied.
   INFO: Scheduled job 'backup' completed successfully.
   DEBUG: Connection to server timed out. Retrying...
   ERROR: Failed to fetch data from API endpoint '/users'.
   INFO: Maintenance mode activated.
   ERROR: DEBUG - Query execution failed due to a syntax error.
   DEBUG: Reloading application modules.
   ERROR: Missing required parameter in the request.
   INFO: Shutting down the system gracefully.
   DEBUG: Closing unused network connections.
   ERROR: DEBUG - Unexpected server response received
   ```
2. To find lines with word "ERROR" but exclude lines with "DEBUG", the following command is used and the output is saved to `filtered_log.txt`:
   ```
   grep "ERROR" file.log | grep -v "DEBUG" >filtered_log.txt
   ```
3. `filtered.txt`:
   ```
   ERROR: Unable to connect to the database.
   ERROR: Failed to fetch data from API endpoint '/users'.
   ERROR: Missing required parameter in the request
   ```
4. CLI:
   ```
   jeeva@JEEVA:~/embedUR/Module2/Q3$ cat file.log
   DEBUG: Starting the application initialization.
   ERROR: Unable to connect to the database.
   INFO: User 'admin' logged in successfully.
   DEBUG: Fetching configuration settings from the server.
   ERROR: DEBUG - Configuration settings could not be applied.
   INFO: Scheduled job 'backup' completed successfully.
   DEBUG: Connection to server timed out. Retrying...
   ERROR: Failed to fetch data from API endpoint '/users'.
   INFO: Maintenance mode activated.
   ERROR: DEBUG - Query execution failed due to a syntax error.
   DEBUG: Reloading application modules.
   ERROR: Missing required parameter in the request.
   INFO: Shutting down the system gracefully.
   DEBUG: Closing unused network connections.
   ERROR: DEBUG - Unexpected server response received.
   jeeva@JEEVA:~/embedUR/Module2/Q3$ grep "ERROR" file.log | grep -v "DEBUG" >filtered_log.txt
   jeeva@JEEVA:~/embedUR/Module2/Q3$ cat filtered_log.txt
   ERROR: Unable to connect to the database.
   ERROR: Failed to fetch data from API endpoint '/users'.
   ERROR: Missing required parameter in the request.
   ```
5. Screenshot:
   ![QUESTION -3](https://github.com/user-attachments/assets/3835e5f8-d1ab-4de3-82f4-343596185176)


### 4) **Write a code to identify the process with the highest memory usage and then terminate it.**

1. Method 1: Using `ps` command and `awk` to sort and get the highest memory usage
   ```
   ps -eo pid,comm,%mem --sort=-%mem | head -2
   ```
2. Output of `ps -eo pid,comm,%mem --sort=-%mem | head -2`:
   ```
   PID COMMAND         %MEM
   5006 gnome-shell     10.0
   ```
3. `code.sh`

   ```
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

   ```

4. Running the `code.sh` script and output is saved to `output.txt`:
   ```
   jeeva@JEEVA:~/embedUR/Module2/Q4$ ./code.sh > output.txt
   ```
5. `output.txt`:
   ```
   Process with the highest memory usage (PID: 5006):
      PID COMMAND         %MEM
      5006 gnome-shell     10.0
   Terminating process 5006...
   Process 5006 terminated successfully.
   ```
6. Method 2:Using `top` command to identify the process with highest memory usage:
   ```
   top -o %MEM | head -n 8
   ```
7. Output of `top -o %MEM | head -n 8`:

   ```
   top - 23:00:55 up 19 min, 1 user, load average: 0.18, 0.27, 0.45
   Tasks: 192 total, 1 running, 191 sleeping, 0 stopped, 0 zombie
   %Cpu(s): 25.0 us, 25.0 sy, 0.0 ni, 0.0 id, 0.0 wa, 0.0 hi, 50.0 si, 0.0 st
   MiB Mem : 3916.5 total, 2186.4 free, 1014.3 used, 980.6 buff/cache
   MiB Swap: 3916.0 total, 3916.0 free, 0.0 used. 2902.1 avail Mem

   PID USER PR NI VIRT RES SHR S %CPU %MEM TIME+ COMMAND
   2838 jeeva 20 0 3502992 383824 143980 S 0.0 9.6 1:38.54 gnome-s+
   ```

8. `mem_code.sh`:

   ```
   process=$(top -b -o %MEM | head -n 8 | awk 'NR==8{print $1}')

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
   ```

9. Running the `mem_code.sh` script and output is saved to `output.txt` and given executable permission:
   ```
   chmod +x mem_code.sh
   ./mem_code.sh > output2.txt
   ```
10. Output of `output2.txt`:

    ```
    Process with the highest memory usage (PID: 2838):
        PID COMMAND         %MEM
       2838 gnome-shell      9.5
    Terminating process 2838...
    Process 2838 terminated successfully.

    ```

11. CLI
   ```
   jeeva@JEEVA:~/embedUR/Module2/Q4$ ps -eo pid,comm,%mem --sort=-%mem | head -2
   PID COMMAND %MEM
   5006 gnome-shell 10.0
   jeeva@JEEVA:~/embedUR/Module2/Q4$ cat code.sh
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
   jeeva@JEEVA:~/embedUR/Module2/Q4$ ./code.sh > output.txt

   jeeva@JEEVA:~/embedUR/Module2/Q4$ cat output.txt
   Process with the highest memory usage (PID: 5006):
   PID COMMAND %MEM
   5006 gnome-shell 10.0
   Terminating process 5006...
   Process 5006 terminated successfully.

   jeeva@JEEVA:~/embedUR/Module2/Q4$ top -o %MEM | head -n 8

   top - 23:00:55 up 19 min, 1 user, load average: 0.18, 0.27, 0.45
   Tasks: 192 total, 1 running, 191 sleeping, 0 stopped, 0 zombie
   %Cpu(s): 25.0 us, 25.0 sy, 0.0 ni, 0.0 id, 0.0 wa, 0.0 hi, 50.0 si, 0.0 st
   MiB Mem : 3916.5 total, 2186.4 free, 1014.3 used, 980.6 buff/cache
   MiB Swap: 3916.0 total, 3916.0 free, 0.0 used. 2902.1 avail Mem

   PID USER PR NI VIRT RES SHR S %CPU %MEM TIME+ COMMAND
   2838 jeeva 20 0 3502992 383824 143980 S 0.0 9.6 1:38.54 gnome-s+
   jeeva@JEEVA:~/embedUR/Module2/Q4$ cat mem_code.sh
   process=$(top -b -o %MEM | head -n 8 | awk 'NR==8{print $1}')

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
   jeeva@JEEVA:~/embedUR/Module2/Q4$ chmod +x mem_code.sh
   jeeva@JEEVA:~/embedUR/Module2/Q4$ ./mem_code.sh > output2.txt

   jeeva@JEEVA:~/embedUR/Module2/Q4$ ls
   code.sh mem_code.sh output2.txt output.txt
   jeeva@JEEVA:~/embedUR/Module2/Q4$ cat output2.txt
   Process with the highest memory usage (PID: 2838):
     PID COMMAND %MEM
     2838 gnome-shell 9.5
   Terminating process 2838...
   Process 2838 terminated successfully.

   ```

12. Screenshots:
    ![QUESTION - 4a](https://github.com/user-attachments/assets/c3f40750-958e-439c-9e1e-88e74c946490)
    ![QUESTION - 4b](https://github.com/user-attachments/assets/9de9aad9-345e-4629-bf57-5b0d465c1f76)
    ![QUESTION - 4c](https://github.com/user-attachments/assets/fb148ad3-3f25-4108-ab2b-841ca00d7ebf)
    ![QUESTION - 4d](https://github.com/user-attachments/assets/67bacae6-ad95-480b-bce3-2c0b6506780a)


### 5) **Use the networking tool command and print all the gateway available in a sorted manner**

1. `netstat` command to list all the gateway available:
   ```
   netstat -r
   ```
2. Output of `netstat -r`:

   ```
   Kernel IP routing table
   Destination     Gateway         Genmask         Flags   MSS Window  irtt Iface
   default         _gateway        0.0.0.0         UG        0 0          0 enp0s3
   10.0.2.0        0.0.0.0         255.255.255.0   U         0 0          0 enp0s3

   ```

3. To sort the gateway:
   ```
   netstat -r | awk 'NR>2 {print $2}' | sort
   ```
4. Output of netstat -r | awk 'NR>2 {print $2}' | sort:
   ```
   0.0.0.0
   _gateway
   ```
5. CLI:
   ```
   jeeva@JEEVA:~/embedUR/Module2/Q5$ netstat -r
   Kernel IP routing table
   Destination     Gateway         Genmask         Flags   MSS Window  irtt Iface
   default         _gateway        0.0.0.0         UG        0 0          0 enp0s3
   10.0.2.0        0.0.0.0         255.255.255.0   U         0 0          0 enp0s3
   jeeva@JEEVA:~/embedUR/Module2/Q5$ netstat -r | awk 'NR>2 {print $2}' | sort
   0.0.0.0
   _gateway
   ```
6. Screenshot:
   ![QUESTION - 5](https://github.com/user-attachments/assets/1b745f7b-05a6-474d-a51b-5e32f0be35a8)


