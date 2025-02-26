#  Module 5 Assessment

## Advance topics in a function
### Create a Bash script 'file_analyzer.sh', to demonstrate the following concepts:  
    1. Recursive functions  
      - Write a recursive function to search for files in a directory and its subdirectories containing a specific keyword.
    2. Redirection and error handling  
      - Log errors (e.g., invalid arguments, missing files) to 'errors.log' and display them in the terminal.
    3. Here document and here string  
      - Use a here document to display a help menu when the '--help' option is passed.
      - Search for a keyword in a specified file using a here string
    4. Special parameters  
      - Use parameters like '$0', '$#', '$?' and '$@' to provide meaningful feedback.
    5. Regular expressions  
      - Validate inputs with regular expressions (Check if the file exists and the keyword is not empty and valid)
    6. Command-line arguments using getopts
       - Use 'getopts' to handle:
               '-d <directory>': Directory to search.
               '-k <keyword>': Keyword to search.
               '-f <file>': File to search directly.
               '--help': Display the help menu.

               
### Folder Structure

        ├── errors.log
        ├── file_analyzer.sh
        ├── logs
        │   ├── backup_folder
        │   │   ├── backup
        │   │   │   ├── backup_report.log
        │   │   │   ├── file1.txt
        │   │   │   ├── file2.txt
        │   │   │   ├── file3.txt
        │   │   │   └── file4.txt
        │   │   └── backup_report.log
        │   ├── backup_manager.sh
        │   └── child_script.sh
        └── script.sh
        
        4 directories, 11 files

### Screenshots

![MODULE 5](https://github.com/user-attachments/assets/3a81be86-89ef-4da7-87e9-a93408ff6c98)
![MODULE 5b](https://github.com/user-attachments/assets/97fae594-6b91-48e3-94f2-6726b889dc55)
![MODULE 5c](https://github.com/user-attachments/assets/70d2c81b-c8f3-48d0-91a7-588361eece61)
![MODULE 5d](https://github.com/user-attachments/assets/a8480c8e-427b-4ecf-9bad-51826f17929d)


