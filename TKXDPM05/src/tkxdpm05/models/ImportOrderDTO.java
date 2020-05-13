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
public class ImportOrderDTO {
    int importOrderId; // PK
    String createDay;
    String modifyDay;
    int saleOrderId; // FK
    String username; // FK
    String status;
    String deliveryMean;

    public ImportOrderDTO(int importOrderId, String createDay, String modifyDay, int saleOrderId, String username, String status, String deliveryMean) {
        this.importOrderId = importOrderId;
        this.createDay = createDay;
        this.modifyDay = modifyDay;
        this.saleOrderId = saleOrderId;
        this.username = username;
        this.status = status;
        this.deliveryMean = deliveryMean;
    }

    public ImportOrderDTO() {
    }
    

    public int getImportOrderId() {
        return importOrderId;
    }

    public void setImportOrderId(int importOrderId) {
        this.importOrderId = importOrderId;
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

    public int getSaleOrderId() {
        return saleOrderId;
    }

    public void setSaleOrderId(int saleOrderId) {
        this.saleOrderId = saleOrderId;
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

    public String getDeliveryMean() {
        return deliveryMean;
    }

    public void setDeliveryMean(String deliveryMean) {
        this.deliveryMean = deliveryMean;
    }

    @Override
    public String toString() {
        return "ImportOrderDTO{" + "importOrderId=" + importOrderId + ", createDay=" + createDay + ", modifyDay=" + modifyDay + ", saleOrderId=" + saleOrderId + ", username=" + username + ", status=" + status + ", deliveryMean=" + deliveryMean + '}';
    }
    
    
}
