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
public interface User {

    public boolean create(UserDTO userDTO);

    public UserDTO read(int userId);

    public boolean update(UserDTO userDTO);

    public boolean delete(UserDTO userDTO);

    public ArrayList<UserDTO> readAll();
}
