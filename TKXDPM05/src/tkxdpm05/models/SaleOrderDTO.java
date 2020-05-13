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
public class SaleOrderDTO {
    int saleOrderId; // PK
    String createDay;
    String modifyDay;
    String username; // FK
    String status;

    public SaleOrderDTO(int saleOrderId, String createDay, String modifyDay, String username, String status) {
        this.saleOrderId = saleOrderId;
        this.createDay = createDay;
        this.modifyDay = modifyDay;
        this.username = username;
        this.status = status;
    }

    public SaleOrderDTO() {
    }

    public int getSaleOrderId() {
        return saleOrderId;
    }

    public void setSaleOrderId(int saleOrderId) {
        this.saleOrderId = saleOrderId;
    }

    public String getCreateDay() {
        return createDay;
    }

    public void setCreateDay(String createDay) {
        this.createDay = createDay;
    }

    public String getModifyDay() {
        return modifyDay;
    }

    public void setModifyDay(String modifyDay) {
        this.modifyDay = modifyDay;
    }

    public String getUsername() {
        return username;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public String getStatus() {
        return status;
    }

    public void setStatus(String status) {
        this.status = status;
    }

    @Override
    public String toString() {
        return "SaleOrderDTO{" + "saleOrderId=" + saleOrderId + ", createDay=" + createDay + ", modifyDay=" + modifyDay + ", username=" + username + ", status=" + status + '}';
    }
    
    
}
