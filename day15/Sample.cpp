#include <iostream>
#include <driver.h>
#include <connection.h>

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

int main() {
    try {
        sql::mysql::MySQL_Driver *driver;
        sql::Connection *con;

        // Initialize the driver
        driver = sql::mysql::get_mysql_driver_instance();

        // Establish the connection
        con = driver->connect("tcp://127.0.0.1:3306/organizations", "root", "NC5ZQY@123");

        if (con->isValid()) {
            std::cout << "Connected to the database!" << std::endl;
        }

        // Clean up
        delete con;
    } catch (sql::SQLException &e) {
        std::cerr << "SQLException: " << e.what() << std::endl;
        std::cerr << "MySQL error code: " << e.getErrorCode() << std::endl;
        std::cerr << "SQLState: " << e.getSQLState() << std::endl;
    }

    return 0;
}
