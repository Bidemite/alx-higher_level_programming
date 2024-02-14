-- creates and grants all priviledges the MySQL server user user_0d_1
-- creates user_0d_1 in mysql server
CREATE USER IF NOT EXISTS user_0d_1@localhost IDENTIFIED BY 'user_0d_1_pwd';
-- grants priviledges to user_0d_1
GRANT ALL ON *.* TO user_0d_1@localhost;
