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
public interface Merchandise {

    public boolean create(MerchandiseDTO merchandiseDTO);

    public MerchandiseDTO read(int merchandiseId);

    public boolean update(MerchandiseDTO merchandiseDTO);

    public boolean delete(MerchandiseDTO merchandiseDTO);

    public ArrayList<MerchandiseDTO> readAll();

}
