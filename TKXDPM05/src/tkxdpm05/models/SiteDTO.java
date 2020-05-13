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
public class SiteDTO {
    int siteId;
    String dispName;
    String describe;
    String address;
    String shipDay;
    String airDay;
    String other;

    public SiteDTO() {
    }

    public SiteDTO(int siteId, String dispName, String describe, String address, String shipDay, String airDay, String other) {
        this.siteId = siteId;
        this.dispName = dispName;
        this.describe = describe;
        this.address = address;
        this.shipDay = shipDay;
        this.airDay = airDay;
        this.other = other;
    }

    public int getSiteId() {
        return siteId;
    }

    public void setSiteId(int siteId) {
        this.siteId = siteId;
    }

    public String getDispName() {
        return dispName;
    }

    public void setDispName(String dispName) {
        this.dispName = dispName;
    }

    public String getDescribe() {
        return describe;
    }

    public void setDescribe(String describe) {
        this.describe = describe;
    }

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public String getShipDay() {
        return shipDay;
    }

    public void setShipDay(String shipDay) {
        this.shipDay = shipDay;
    }

    public String getAirDay() {
        return airDay;
    }

    public void setAirDay(String airDay) {
        this.airDay = airDay;
    }

    public String getOther() {
        return other;
    }

    public void setOther(String other) {
        this.other = other;
    }

    @Override
    public String toString() {
        return "SiteDTO{" + "siteId=" + siteId + ", dispName=" + dispName + ", describe=" + describe + ", address=" + address + ", shipDay=" + shipDay + ", airDay=" + airDay + ", other=" + other + '}';
    }
    
    
    
}
