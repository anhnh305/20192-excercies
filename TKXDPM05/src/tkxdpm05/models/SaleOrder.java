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
public interface SaleOrder {

    public boolean create(SaleOrderDTO saleOrderDTO);

    public SaleOrderDTO read(int saleOrderId);

    public boolean update(SaleOrderDTO saleOrderDTO);

    public boolean delete(SaleOrderDTO saleOrderDTO);

    public ArrayList<SaleOrderDTO> readAll();
}
