package com.pekerjaan;

public class Jasa extends Pekerjaan{
    public String njasa;
    private double salary;
    public int jamkerja;
    
    // public Jasa(){

    // }
    public Jasa(String name, String domisili, int notelp, int jamkerja,double salary ) {
        super(name, domisili, notelp);
        this.salary = salary;
        salary = this.salary*jamkerja;
        
    }
    
    public void setNjasa(String njasa) {
        this.njasa = njasa;
    }


    public void setJamkerja(int jamkerja) {
        this.jamkerja = jamkerja;
    }

    
    public String getNjasa() {
        return njasa;
    }

    public double getSalary() {
        return salary;
    }

    public int getJamkerja() {
        return jamkerja;
    }

   @Override
    public double gaji(){
        
        return this.salary;
    }
    
    @Override
    public void printdata(){
        System.out.println("Nama anda adalah " + this.name + "\n" + "Alamat anda : "+ getDomisili()+"\n" + "Jumlah pendapatan anda adalah : " + gaji()+ "\n"+ "Kontak Anda : " + getNotelp());
        
    }
    

}