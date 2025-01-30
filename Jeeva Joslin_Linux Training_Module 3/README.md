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
###

