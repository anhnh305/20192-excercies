/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package client_server;

import helper.NumberSorter;
import java.util.Arrays;

/**
 *
 * @author thiennd
 */
public class Sorter implements NumberSorter {

    public Sorter() {
    }

    @Override
    public Integer[] sort(Integer[] input) {
        for (int i = 0; i < input.length - 1; i++) {
            for (int j = i + 1; j < input.length; j++) {
                if (input[i] < input[j]) {
                    Integer temp = input[i];
                    input[i] = input[j];
                    input[j] = temp;
                }
            }
        }
        return input;
    }

}
