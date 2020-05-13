/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tkxdpm05.models;

/**
 *
 * @author thiennd
 */
public class UserDTO {

    String username;
    String dispName;
    String hashpass;
    String role_id;
    String status;

    public UserDTO(String username, String dispName, String hashpass, String role_id, String status) {
        this.username = username;
        this.dispName = dispName;
        this.hashpass = hashpass;
        this.role_id = role_id;
        this.status = status;
    }

    public UserDTO() {
    }

    public String getUsername() {
        return username;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public String getDispName() {
        return dispName;
    }

    public void setDispName(String dispName) {
        this.dispName = dispName;
    }

    public String getHashpass() {
        return hashpass;
    }

    public void setHashpass(String hashpass) {
        this.hashpass = hashpass;
    }

    public String getRole_id() {
        return role_id;
    }

    public void setRole_id(String role_id) {
        this.role_id = role_id;
    }

    public String getStatus() {
        return status;
    }

    public void setStatus(String status) {
        this.status = status;
    }

    @Override
    public String toString() {
        return "UserDTO{" + "username=" + username + ", dispName=" + dispName + ", hashpass=" + hashpass + ", role_id=" + role_id + ", status=" + status + '}';
    }

}
