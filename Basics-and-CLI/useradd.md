# USERADD

What useradd do?

1. It add entry of a newly created user in /etc/passwd, /etc/shadow, /etc/group and /etc/gshadow
2. Creates and populates a home directory for the new user.
3. Sets permissions and ownerships to the home directory.

-----------------------------------------------------------

        sudo useradd <username> 

whenever new user is created in it is in locked state -
add password to unlock it. 

-----------------------------------------------------------

<h2>add password to user</h2>

        passwd <username>     

Once the user is created - entry is populated in the __/etc/passwd__

-----------------------------------------------------------------------

        sudo useradd -d /data/projects cdac   #with custom directory name
        sudo passwd cdac

------------------------------------------------------------------------

<h2>create a userwith custom userid</h2>

        useradd -u 1002 cdac1
        passwd cdac1 

<h2>create a user with specifif GID</h2>

        useradd -u 1005 -g cdac2 cdac      #cdac is username

<h2>to verify users GID </h2>
        
        id <username>   

<h2>create new groups </h2>

        groupadd developer
        groupadd tester 

------------------------------------------------------------------------

<h2>Add Existing user to a group </h2>

        sudo usermod -a -G dialout $USER 

-------------------------------------------------------------------

<h2>create a user without home directory</h2>

        useradd -M testnew

-------------------------------------------------------------------
&copy; 2022, Rohit Akurdekar&trade;