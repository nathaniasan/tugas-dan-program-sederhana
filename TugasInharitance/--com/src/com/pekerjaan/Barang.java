package com.pekerjaan;

public class Barang extends Pekerjaan {
    String nBarang;
    int penjualan;
    double keuntungan;
    private double penghasilan;
    
    public Barang(String name, String domisili, int notelp, String nBarang,int penjualan, double keuntungan ) {
        super(name, domisili, notelp);
        this.nBarang = nBarang;
        this.penjualan = penjualan;
        this.keuntungan = keuntungan;
        this.penghasilan = keuntungan * penjualan + 1000000;
    }
    
    @Override
    public double gaji(){
        
        return this.penghasilan;
    }
    

    @Override
    public void printdata(){
        System.out.println("Nama anda adalah " + this.name + "\n" + "Alamat anda : "+ getDomisili()+"\n" + "Jumlah pendapatan anda adalah : " + gaji()+ "\n"+ "Kontak Anda : " + getNotelp());
        
    }
    
    
    
}
