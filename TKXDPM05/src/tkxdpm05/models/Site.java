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
public interface Site {
    
    public boolean create(SiteDTO siteDTO);

    public SiteDTO read(int siteId);

    public boolean update(SiteDTO siteDTO);

    public boolean delete(SiteDTO siteDTO);

    public ArrayList<SiteDTO> readAll();
}
