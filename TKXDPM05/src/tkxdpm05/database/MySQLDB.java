/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tkxdpm05.database;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import javax.swing.JOptionPane;
import tkxdpm05.utils.ENV;
import tkxdpm05.utils.Logs;
import tkxdpm05.utils.Strings;

/**
 *
 * @author thiennd
 */
public class MySQLDB {

    private Connection connection = null;
    private Statement statement = null;
    private static MySQLDB instance;

    public static MySQLDB getInstance() {
        if (instance == null) {
            instance = new MySQLDB();
        }
        return instance;
    }

    private MySQLDB() {
        connect();
    }

    private void connect() {
        try {
            openConnection();
            JOptionPane.showMessageDialog(null, "Database connection successfully!");
            closeConnection();
        } catch (Exception ex) {
            Logs.getInstance().showDialog(Strings.ERR_CONNECTION);
            Logs.getInstance().error(ex.toString());
            Logs.getInstance().error(ex.getMessage());
        }
    }

    /**
     * Thực thi một câu lệnh SQL có giá trị trả về được lưu vào ResultSet
     * thường là câu lệnh SELECT, INSERT
     * @param sql Câu lệnh SQL cần thực thi
     * @return resultSet Giá trị trả về ở dạng ResultSet
     */
    public ResultSet execResultQuerry(String sql) {

        ResultSet rs = null;
        try {
            openConnection();
            createStatement();
            rs = statement.executeQuery(sql);
            closeStatement();
            closeConnection();
        } catch (SQLException ex) {
            Logs.getInstance().showDialog(Strings.ERR_CONNECTION);
            Logs.getInstance().error(ex.toString());
            Logs.getInstance().error(ex.getMessage());
        }
        return rs;
    }

    /**
     * Thực thi một câu lệnh SQL không có giá trị trả về 
     * thường là câu lệnh UPDATE, DELETE 
     * @param sql Câu lệnh SQL cần thực thi
     * @return 
     * không trả về cái gì cả
     */
    public void execNonQuerry(String sql) {
        try {
            openConnection();
            createStatement();
            statement.executeUpdate(sql);
            closeStatement();
            closeConnection();
        } catch (SQLException ex) {
            Logs.getInstance().showDialog(Strings.ERR_CONNECTION);
            Logs.getInstance().error(ex.toString());
            Logs.getInstance().error(ex.getMessage());
        }
    }

    private void createStatement() {
        try {
            statement = connection.createStatement();
        } catch (SQLException ex) {
            Logs.getInstance().showDialog(Strings.ERR_CONNECTION);
            Logs.getInstance().error(ex.toString());
            Logs.getInstance().error(ex.getMessage());
        }
    }

    private void closeStatement() {
        try {
            statement.close();
        } catch (SQLException ex) {
            Logs.getInstance().showDialog(Strings.ERR_CONNECTION);
            Logs.getInstance().error(ex.toString());
            Logs.getInstance().error(ex.getMessage());
        }
    }

    private void openConnection() {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            connection = DriverManager.getConnection(
                    ENV.DATABASE_LINK,
                    ENV.DB_USERNAME,
                    ENV.DB_PASSWORD);
        } catch (SQLException ex) {
            Logs.getInstance().showDialog(Strings.ERR_CONNECTION);
            Logs.getInstance().error(ex.toString());
            Logs.getInstance().error(ex.getMessage());
        } catch (ClassNotFoundException ex) {
            Logs.getInstance().showDialog(Strings.ERR_CONNECTION);
            Logs.getInstance().error(ex.toString());
            Logs.getInstance().error(ex.getMessage());
        }
    }

    private void closeConnection() {
        try {
            connection.close();
        } catch (SQLException ex) {
            Logs.getInstance().showDialog(Strings.ERR_CONNECTION);
            Logs.getInstance().error(ex.toString());
            Logs.getInstance().error(ex.getMessage());
        }
    }

}
