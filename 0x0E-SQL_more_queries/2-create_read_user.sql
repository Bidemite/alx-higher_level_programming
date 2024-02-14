-- creates the database hbtn_0d_2 and the user user_0d_2
-- creates database
CREATE DATABASE IF NOT EXISTS hbtn_0d_2;
-- creates user
CREATE USER IF NOT EXISTS user_0d_2@localhost IDENTIFIED BY 'user_0d_2_pwd';
-- grants select priviledge to user
GRANT SELECT ON hbtn_0d_2.* to user_0d_2@localhost;
