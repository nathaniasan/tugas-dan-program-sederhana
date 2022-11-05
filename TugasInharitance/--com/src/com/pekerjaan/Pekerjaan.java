package com.pekerjaan;
public class Pekerjaan{
    public String name;
    public String domisili;
    protected int notelp;
    public int jamkerja;
    
    //default
    Pekerjaan(){

    }

    public Pekerjaan(String name, String domisili, int notelp) {
        this.name = name;
        this.domisili = domisili;
        this.notelp = notelp;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setDomisili(String domisili) {
        this.domisili = domisili;
    }

    public void setNotelp(int notelp) {
        this.notelp = notelp;
    }

    public void setJamkerja(int jamkerja) {
        this.jamkerja = jamkerja;
    }

    public String getName() {
        return name;
    }

    public String getDomisili() {
        return domisili;
    }

    public int getNotelp() {
        return notelp;
    }

    public int getJamkerja() {
        return jamkerja;
    }

    public double gaji()
    {
        return 1;
  
    }

    public void printdata(){
        System.out.println("Nama anda adalah " + this.name + "\n" + "Alamat anda : "+ getDomisili()+"\n" + "Jumlah pendapatan anda adalah : " + gaji()+ "\n"+ "Kontak Anda : " + getNotelp());
        
    }

    


    
}
