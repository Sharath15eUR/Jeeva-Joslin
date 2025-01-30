# Module 3 Assessment

## Linux distributions and Scripting Languages

##### Scenario: Automating file backup and Reporting to the system. Create a shell script called "backup_manager.sh" that performs the following tasks incorporating the concepts suggested.

Requirements:
1. Command-line Arguments and Quoting:
The script must accept three arguments: Source directory: A directory containing files to back up. Backup directory: The destination where files will be backed up. File extension: A specific file extension to filter (e.g., .txt).
Example:  ./backup_manager.sh "/home/user/source" "/backup" ".txt"

2. Globbing:
The script should use globbing to find all files in the source directory matching the provided file extension.
3. Export Statements:
Use export to set an environment variable BACKUP_COUNT, which tracks the total number of files backed up during the script execution.
4. Array Operations:
Store the list of files to be backed up in an array.
Print the names of these files along with their sizes before performing the backup.
5. Conditional Execution:
If the backup directory does not exist, create it. If creation fails, exit with an error.
If the source directory is empty or contains no files matching the extension, exit with a message.
If a file already exists in the backup directory with the same name, only overwrite it if it is older than the source file (compare timestamps).
6. Output Report:
After the backup, generate a summary report displaying:
Total files processed.
Total size of files backed up.
The path to the backup directory.
The report should be saved in the backup directory as backup_report.log.

## CODE
```
#/bin/bash

# Command-line Arguments and Quoting:
# The script must accept three arguments: Source Directory, Backup Directory, File Extension.
if [ "$#" -ne 3 ]; then
    echo "Need exactly 3 arguments: Source Directory, Backup Directory, File Extension"
    exit 1
fi

# Source directory: A directory containing files to back up
SOURCE_DIR="$1"

# Backup directory: The destination where files will be backed up
BACKUP_DIR="$2"

# File extension: A specific file extension to filter (e.g., .txt)
EXTENSION="$3"

# Export Statements
# Use export to set an environment variable BACKUP_COUNT, which tracks the total number of files backed up during the script execution.
export BACKUP_COUNT=0

# Conditional Execution
# If the backup directory does not exist, create it. If creation fails, exit with an error.
if [ ! -d "$BACKUP_DIR" ]; then
    if mkdir -p "$BACKUP_DIR"; then
        echo "Backup directory does not exist. Created backup directory at $(pwd)/$BACKUP_DIR"
    else
        echo "Error: Failed to create backup directory."
        exit 1
    fi
fi

# Checks if the source directory does not exist
if [ ! -d "$SOURCE_DIR" ]; then
    echo "Error: Source Directory does not exist."
    exit 1
fi

# Array Operations
# Store the list of files to be backed up in an array.
FILES=()
TOTAL_SIZE=0
echo "Files to be backed up:"

# Globbing
# Use globbing to find all files in the source directory matching the provided file extension.
for i in "$SOURCE_DIR/"*$EXTENSION; do
    [ -e "$i" ] || continue
    FILE_NAME=$(basename "$i")
    FILE_SIZE=$(du --apparent-size -b "$i" | awk '{print $1}')
    FILES+=("$FILE_NAME")
    #Print the names of these files along with their sizes before performing the backup.
    echo "$FILE_NAME -- $FILE_SIZE bytes"
    TOTAL_SIZE=$((TOTAL_SIZE + FILE_SIZE))
done

# If the source directory is empty or contains no files matching the extension, exit with a message.
if [ ${#FILES[@]} -eq 0 ]; then
    echo "Error: Source Directory is empty or contains no files matching the extension."
    exit 1
fi

# Backup files
for FILE in "${FILES[@]}"; do
    SOURCE_FILE="$SOURCE_DIR/$FILE"
    BACKUP_FILE="$BACKUP_DIR/$FILE"
    
    # If the file already exists in the backup directory, check the timestamp.
    if [ -f "$BACKUP_FILE" ]; then
        # Compare timestamps: if the source file is newer, overwrite the backup.
        if [ "$SOURCE_FILE" -nt "$BACKUP_FILE" ]; then
            echo "Overwriting $FILE in backup directory (source file is newer)"
            cp "$SOURCE_FILE" "$BACKUP_FILE"
            ((BACKUP_COUNT++))
        else
            echo "Skipping $FILE (backup file is up to date)"
        fi
    else
        echo "Backing up $FILE"
        cp "$SOURCE_FILE" "$BACKUP_FILE"
        ((BACKUP_COUNT++))
    fi
done

# Output Report
echo "Backup completed. Generating report..."

REPORT_FILE="$BACKUP_DIR/backup_report.log"
echo "Backup Report" > "$REPORT_FILE"
echo "-----------------" >> "$REPORT_FILE"
echo "Total files processed: $BACKUP_COUNT" >> "$REPORT_FILE"
echo "Total size of files backed up: $TOTAL_SIZE bytes" >> "$REPORT_FILE"
echo "Backup directory: $BACKUP_DIR" >> "$REPORT_FILE"
echo "Report generated at: $(date)" >> "$REPORT_FILE"

echo "Backup completed successfully. Report saved to $REPORT_FILE"
# Check the final value of BACKUP_COUNT
echo "Final BACKUP_COUNT: $BACKUP_COUNT"
# Child Process 
./child_script.sh
```
## Execution
## Tests
### Given Invalid number of arguments:
![MODULE 3](https://github.com/user-attachments/assets/bc2964b7-5c0c-4cf4-8b5c-c43fd33baf4c)

### Backup Directory does not exist.Backup of pdf files:
![MODULE-4A](https://github.com/user-attachments/assets/23e3868a-c1a2-4f0e-b034-344b725a99e2)
CLI
```
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3$ ./backup_manager.sh "/home/jeeva-joslin/source" backup_pdf ".pdf"
Backup directory does not exist. Created backup directory at /home/jeeva-joslin/embedUR/Module3/backup_pdf
Files to be backed up:
Federated_Learning.pdf -- 1044931 bytes
Financev1.pdf -- 306654 bytes
ID.pdf -- 711635 bytes
Linux.pdf -- 1348978 bytes
Optimization.pdf -- 1871706 bytes
Backing up Federated_Learning.pdf
Backing up Financev1.pdf
Backing up ID.pdf
Backing up Linux.pdf
Backing up Optimization.pdf
Backup completed. Generating report...
Backup completed successfully. Report saved to backup_pdf/backup_report.log
Final BACKUP_COUNT: 5
BACKUP_COUNT checking from child script: 5
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3$ cd backup_pdf/
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3/backup_pdf$ ls
backup_report.log  Federated_Learning.pdf  Financev1.pdf  ID.pdf  Linux.pdf  Optimization.pdf
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3/backup_pdf$ cat backup_report.log
Backup Report
-----------------
Total files processed: 5
Total size of files backed up: 5283904 bytes
Backup directory: backup_pdf
Report generated at: Thu Jan 30 03:21:42 PM IST 2025
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3/backup_pdf$
```
### Backup Directory exists and backup of text files:
![MODULE 4  TXT FILE BACKUP1](https://github.com/user-attachments/assets/b8bc2346-caff-4a08-9e0e-1375f736a09c)
### File Updation and Overwritting:
![MODULE-4  UPDATE A TXT FILE](https://github.com/user-attachments/assets/20d98895-004e-4707-a841-a5c06a2293d3)
![MODULE 4  BACKUP TXT FILE OVERWRITE](https://github.com/user-attachments/assets/9a68b10e-671c-4ead-8e35-b7c347e7b8dd)
CLI
```
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3$ ls
backup_manager.sh  backup_pdf  child_script.sh
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3$ mkdir backup_txt
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3$ ls
backup_manager.sh  backup_pdf  backup_txt  child_script.sh
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3$ ./backup_manager.sh "/home/jeeva-joslin/source" backup_txt ".txt"
Files to be backed up:
file1.txt -- 3738 bytes
file2.txt -- 7285 bytes
file3.txt -- 23 bytes
file4.txt -- 23 bytes
Backing up file1.txt
Backing up file2.txt
Backing up file3.txt
Backing up file4.txt
Backup completed. Generating report...
Backup completed successfully. Report saved to backup_txt/backup_report.log
Final BACKUP_COUNT: 4
BACKUP_COUNT checking from child script: 4
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3$ cd backup_txt
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3/backup_txt$ ls
backup_report.log  file1.txt  file2.txt  file3.txt  file4.txt
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3/backup_txt$ cat backup_report.log
Backup Report
-----------------
Total files processed: 4
Total size of files backed up: 11069 bytes
Backup directory: backup_txt
Report generated at: Thu Jan 30 03:26:25 PM IST 2025
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3/backup_txt$ cat file3.txt
First update in file 3
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3/backup_txt$ cd /home/jeeva-joslin/source
jeeva-joslin@jeeva-joslin-VirtualBox:~/source$ ls
ENSEMBLE-checkpoint.ipynb  Federated_Learning.pdf  file1.txt  file2.txt  file3.txt  file4.txt  file6  Financev1.pdf  ID.pdf  Linux.pdf  Optimization.pdf
jeeva-joslin@jeeva-joslin-VirtualBox:~/source$ cat file3.txt
First update in file 3
jeeva-joslin@jeeva-joslin-VirtualBox:~/source$ vi file3.txt
jeeva-joslin@jeeva-joslin-VirtualBox:~/source$ cat file3.txt
First update in file 3
Second Update in file 3
jeeva-joslin@jeeva-joslin-VirtualBox:~/source$ cd /home/jeeva-joslin/embedUR/Module3
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3$ ./backup_manager.sh "/home/jeeva-joslin/source" backup_txt ".txt"
Files to be backed up:
file1.txt -- 3738 bytes
file2.txt -- 7285 bytes
file3.txt -- 47 bytes
file4.txt -- 23 bytes
Skipping file1.txt (backup file is up to date)
Skipping file2.txt (backup file is up to date)
Overwriting file3.txt in backup directory (source file is newer)
Skipping file4.txt (backup file is up to date)
Backup completed. Generating report...
Backup completed successfully. Report saved to backup_txt/backup_report.log
Final BACKUP_COUNT: 1
BACKUP_COUNT checking from child script: 1
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3$ cd backup_txt
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3/backup_txt$ ls
backup_report.log  file1.txt  file2.txt  file3.txt  file4.txt
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3/backup_txt$ cat file3.txt
First update in file 3
Second Update in file 3
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3/backup_txt$ cat backup_report.log
Backup Report
-----------------
Total files processed: 1
Total size of files backed up: 11093 bytes
Backup directory: backup_txt
Report generated at: Thu Jan 30 03:29:41 PM IST 2025
jeeva-joslin@jeeva-joslin-VirtualBox:~/embedUR/Module3/backup_txt$ 
```
### Source Directory does not have matching files:
![MODULE 4c](https://github.com/user-attachments/assets/00085c3f-d4e3-4995-a030-641e5b568c21)



