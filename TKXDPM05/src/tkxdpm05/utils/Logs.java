/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tkxdpm05.utils;

import java.io.IOException;
import java.util.Date;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.util.logging.FileHandler;
import java.util.logging.Handler;
import java.util.logging.LogRecord;
import java.util.logging.SimpleFormatter;
import javax.swing.JOptionPane;

/**
 *
 * @author thiennd
 */
public class Logs {

    private static Logs instance;

    public static Logs getInstance() {
        if (instance == null) {
            instance = new Logs();
        }
        return instance;
    }

    private Logs() {
        try {
            FileHandler fileHandler = new FileHandler(Strings.LOG_FILE_PATH, true);
            fileHandler.setFormatter(new SimpleFormatter() {
                private static final String format = "[%1$tF %1$tT] [%2$-7s] %3$s %n";

                @Override
                public synchronized String format(LogRecord lr) {
                    return String.format(format,
                            new Date(lr.getMillis()),
                            lr.getLevel().getLocalizedName(),
                            lr.getMessage()
                    );
                }
            });
            Logger.getLogger(Logs.class.getName()).addHandler(fileHandler);
        } catch (IOException ex) {
            Logger.getLogger(Logs.class.getName()).log(Level.SEVERE, null, ex);
        } catch (SecurityException ex) {
            Logger.getLogger(Logs.class.getName()).log(Level.SEVERE, null, ex);
        }
    }

    public void info(String str) {
        Logger.getLogger(Logs.class.getName()).info(str);
    }

    public void warning(String str) {
        Logger.getLogger(Logs.class.getName()).warning(str);
    }

    public void error(String str) {
        Logger.getLogger(Logs.class.getName()).log(Level.SEVERE, null, str);
    }
    public void showDialog(String str){
        JOptionPane.showMessageDialog(null, str);
    }
}
