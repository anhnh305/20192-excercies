/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tkxdpm05.models;

import java.util.ArrayList;

/**
 *
 * @author thiennd
 */
public interface ImportOrder {

    public boolean create(ImportOrderDTO importOrderDTO);

    public ImportOrderDTO read(int importOrderId);

    public boolean update(ImportOrderDTO importOrderDTO);

    public boolean delete(ImportOrderDTO importOrderDTO);

    public ArrayList<ImportOrderDTO> readAll();
}
