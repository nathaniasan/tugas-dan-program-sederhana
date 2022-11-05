package com.pekerjaan;


public class Main {
    public static void main(String[] args) {
        // jasa
        Pekerjaan p = new Jasa("Ucup", "Bandung", 6235464, 9, 2003232);
        p.printdata();
        System.out.println(p.gaji());

        System.out.println();
        //barang
        Pekerjaan p1 = new Barang("satria", "Bangka", 347274, "Sembako", 8, 24535.8);

        p1.printdata();
    }
        

        
        
}
