//C program to delete records from a database table in SQLite.

#include <sqlite3.h>
#include <stdio.h>

int main(void)
{
    sqlite3* db_ptr;
    char* errMesg = 0;

    int ret = 0;

    ret = sqlite3_open("MyDb.db", &db_ptr);

    if (ret != SQLITE_OK) {
        printf("Database opening error\n");
    }

    char* sql_stmt = "DELETE FROM Employee";

    ret = sqlite3_exec(db_ptr, sql_stmt, 0, 0, &errMesg);

    if (ret != SQLITE_OK) {

        printf("Error in SQL statement: %s\n", errMesg);

        sqlite3_free(errMesg);
        sqlite3_close(db_ptr);

        return 1;
    }

    printf("Employee records deleted successfully\n");
    sqlite3_close(db_ptr);

    return 0;
}
