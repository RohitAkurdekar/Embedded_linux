# CHMOD - Change permission of a file or a directory



Provide read and write access to user and no access to group and other

        chmod 600 file1.txt
        chmod u+rw,u-x,g-rwx,o-rwx file1.txt

-------------------------------------------------------------------
Create a file file1.txt and provide user to read and write (rw) 
permission and read permission to group and rw to others.
        
        chmod u+rw-x,g=r,o=rw

-------------------------------------------------------------------        
Create a file file1.txt and provide user to write (w) 
permission group to read and others to execute permissions.


        iot$ chmod u+rw-x,g=r,o=rw file2.txt 
        iot$ ls -l file2.txt 
        -rw-r--rw- 1 rohit rohit 0 Apr 11 09:20 file2.txt


        iot$ chmod a=rwx file2.txt 
        iot$ ls -l file2.txt 
        -rwxrwxrwx 1 rohit rohit 0 Apr 11 09:20 file2.txt

-------------------------------------------------------------------

&copy; 2022, Rohit Akurdekar&trade;