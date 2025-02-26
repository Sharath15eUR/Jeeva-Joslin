# Module 1 Assessment

## Introduction to Linux OS, Architecture and Kernel


### 1) **Create a file and add executable permission to all users (user, group, and others)**

  1. To create a file named ques1.txt:
     ```
     touch ques1.txt
     ```
  2. To add execute permission for all users (user, group, and others) for the file:
     ```
     chmod a+x ques1.txt
     ```
  3. To check the changes `ls -l` can be used.Output for `ls -l`:
     ```
     total 0
     -rwxrwxr-x 1 jeeva jeeva 0 Jan 23 00:25 ques1.txt
     ```
  4. CLI:
     ```
     jeeva@JEEVA:~/embedUR$ touch ques1.txt
     jeeva@JEEVA:~/embedUR$ ls -l
     total 0
     -rw-rw-r-- 1 jeeva jeeva 0 Jan 23 00:25 ques1.txt
     jeeva@JEEVA:~/embedUR$ chmod a+x ques1.txt
     jeeva@JEEVA:~/embedUR$ ls -l
     total 0
     -rwxrwxr-x 1 jeeva jeeva 0 Jan 23 00:25 ques1.txt
     ```
 5. Screenshot:
    ![QUESTION1](https://github.com/user-attachments/assets/3ffa469a-aaf4-46cd-b417-6625beaedde7)
### 2) **Create a file and remove write permission for group user alone.**

  1. To create a file named ques2.txt:
     ```
     touch ques2.txt
     ```
  2. To remove write permission for group user alone:
     ```
     chmod g-w ques2.txt
     ```
  4. To check the changes `ls -l` can be used.Output for `ls -l`:
     ```
     total 0
     -rwxrwxr-x 1 jeeva jeeva 0 Jan 23 00:25 ques1.txt
     -rw-r--r-- 1 jeeva jeeva 0 Jan 23 00:26 ques2.txt
     ```
 5.  CLI:
     ```
     jeeva@JEEVA:~/embedUR$ touch ques2.txt
     jeeva@JEEVA:~/embedUR$ ls -l
     total 0
     -rwxrwxr-x 1 jeeva jeeva 0 Jan 23 00:25 ques1.txt
     -rw-rw-r-- 1 jeeva jeeva 0 Jan 23 00:26 ques2.txt
     jeeva@JEEVA:~/embedUR$ chmod g-w ques2.txt
     jeeva@JEEVA:~/embedUR$ ls -l
     total 0
     -rwxrwxr-x 1 jeeva jeeva 0 Jan 23 00:25 ques1.txt
     -rw-r--r-- 1 jeeva jeeva 0 Jan 23 00:26 ques2.txt
     ```
 6. Screenshot:
    ![QUESTION2](https://github.com/user-attachments/assets/94a7be12-e5f7-4e14-948f-d48d5d20a9fb)

### 3) **Create a file and add a softlink to the file in different directory (Eg : Create a file in dir1/dir2/file and create a softlink for file inside dir1)**

  1. To create a directories:
     ```
     mkdir -p dir1/dir2
     ```
  2. To create a file in dir1/dir2/file:
     ```
     touch dir1/dir2/file
     ```
  3. To create a softlink for file inside dir1:
     ```
     ln -s dir1/dir2/file dir1/link
     ```
  4. To verify the changes `ls -l` command can be used.Output for `ls -l`:
     ```
     total 0
     -rwxrwxr-x 1 jeeva jeeva 0 Jan 23 00:25 ques1.txt
     -rw-r--r-- 1 jeeva jeeva 0 Jan 23 00:26 ques2.txt
     ```
 5.  CLI:
     ```
     jeeva@JEEVA:~/embedUR$ mkdir -p dir1/dir2
     jeeva@JEEVA:~/embedUR$ touch dir1/dir2/file
     jeeva@JEEVA:~/embedUR$ ln -s dir1/dir2/file dir1/link
     jeeva@JEEVA:~/embedUR$ cd dir1
     jeeva@JEEVA:~/embedUR/dir1$ ls -l
     total 4
     drwxrwxr-x 2 jeeva jeeva 4096 Jan 23 00:48 dir2
     lrwxrwxrwx 1 jeeva jeeva   14 Jan 23 00:50 link -> dir1/dir2/file
     ```
 6. Screenshot:
    ![QUESTION3](https://github.com/user-attachments/assets/e66285d9-2da1-42a7-90b4-293211c03744)

 ### 4) **Use ps command with options to display all active process running on the system**

  1. To display all active process:
     ```
     ps -e
     ```
  2. List currently running processes in full format:
     ```
     ps -ef
     ```
  3. CLI
     ```
     jeeva@JEEVA:~/embedUR$ ps -e
     PID TTY          TIME CMD
     1 ?        00:00:05 systemd
     2 ?        00:00:00 kthreadd
     3 ?        00:00:00 pool_workqueue_release
     4 ?        00:00:00 kworker/R-rcu_g
     5 ?        00:00:00 kworker/R-rcu_p
     6 ?        00:00:00 kworker/R-slub_
     7 ?        00:00:00 kworker/R-netns
     12 ?        00:00:00 kworker/R-mm_pe
     13 ?        00:00:00 rcu_tasks_kthread
     14 ?        00:00:00 rcu_tasks_rude_kthread
     .
     .
     .
     4530 ?        00:00:00 kworker/0:0-cgroup_destroy
     4549 ?        00:00:00 kworker/u2:1-events_power_efficient
     4593 ?        00:00:00 kworker/0:1H
     4601 pts/0    00:00:00 ps
     ```
     ```
     jeeva@JEEVA:~/embedUR$ ps -ef
     UID          PID    PPID  C STIME TTY          TIME CMD
     root           1       0  0 Jan22 ?        00:00:05 /sbin/init splash
     root           2       0  0 Jan22 ?        00:00:00 [kthreadd]
     root           3       2  0 Jan22 ?        00:00:00 [pool_workqueue_release]
     root           4       2  0 Jan22 ?        00:00:00 [kworker/R-rcu_g]
     root           5       2  0 Jan22 ?        00:00:00 [kworker/R-rcu_p]
     root           6       2  0 Jan22 ?        00:00:00 [kworker/R-slub_]
     root           7       2  0 Jan22 ?        00:00:00 [kworker/R-netns]
     root          12       2  0 Jan22 ?        00:00:00 [kworker/R-mm_pe]
     root        4530       2  0 01:10 ?        00:00:00 [kworker/0:0-events]
     root        4549       2  0 01:12 ?        00:00:00 [kworker/u2:1-events_power_efficient]
     root        4593       2  0 01:17 ?        00:00:00 [kworker/0:1H]
     root        4604       2  0 01:20 ?        00:00:00 [kworker/0:1]
     jeeva       4605    3344  0 01:20 pts/0    00:00:00 ps -ef
     ```
  4.Screenshots:
  ![QUESTION4a](https://github.com/user-attachments/assets/0af63c9f-8848-482a-8ae1-27f60a01de67)

  ![QUESTION4b](https://github.com/user-attachments/assets/691cb4f2-9ab1-4bed-9299-6dcd35fa0ecf)

  ![QUESTION4c](https://github.com/user-attachments/assets/efa4316e-3675-40cb-a577-2879b7fb32a1)


### 5) **Create 3 files in a dir1 and re-direct the output of list command with sorted by timestamp of the files to a file**

  1. To create a directory named dir1:
     ```
     mkdir dir
     ```
  2. To Create 3 files in dir1:
     ```
     touch dir1/file1 dir1/file2 dir1/file3
     ```
  3. To re-direct the output of list command with sorted by timestamp of the files to a file named sorted.txt:
     ```
     ls -lt dir1 > sorted.txt
     ```
  4. To view the contents of sorted.txt `cat ` command can be used:
     ```
     cat sorted.txt
     ```
  5. sorted.txt:
     ```
     total 0
     -rw-rw-r-- 1 jeeva jeeva 0 Jan 23 01:24 file1
     -rw-rw-r-- 1 jeeva jeeva 0 Jan 23 01:24 file2
     -rw-rw-r-- 1 jeeva jeeva 0 Jan 23 01:24 file3
     ```
  6. CLI:
     ```
     jeeva@JEEVA:~/embedUR$ mkdir dir1
     jeeva@JEEVA:~/embedUR$ touch dir1/file1 dir1/file2 dir1/file3
     jeeva@JEEVA:~/embedUR$ ls -lt dir1 > sorted.txt
     jeeva@JEEVA:~/embedUR$ cat sorted.txt
     total 0
     -rw-rw-r-- 1 jeeva jeeva 0 Jan 23 01:24 file1
     -rw-rw-r-- 1 jeeva jeeva 0 Jan 23 01:24 file2
     -rw-rw-r-- 1 jeeva jeeva 0 Jan 23 01:24 file3
     ```
 7. Screenshot:
   ![QUESTION5](https://github.com/user-attachments/assets/81b05f4a-8eb0-4d32-8b2c-65420624b525)

