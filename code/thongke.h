#include "thongtin.h"

class thongke
{
    class thoigian
    {
    public:
        long ngay, thang, nam;

    };
    thoigian nhap, xuat, luu;
    thongtin i;
    long long sl_daban, sl_tonkho;        // số lượng đã bán, tồn kho
    long tg;                              //
    string temp;                          // dung de kiem tra kieu du lieu cua cac bien
public:
    void daban();                         // nhập số lượng đã bán
    long long tonkho(thongtin t);         // số lượng hàng hóa còn lại trong kho
    void nhapvao();                       // thời gian nhập hàng vào
    void xuatdi();                        // thời gian xuất hàng đi
    void luukho();                        // thời gian lưu kho
    void ht_date_n();
    void ht_date_x();
    void hienthi(thongtin i);
    void nhaphd();                        //
    void ghi(fstream &g);                 // ghi file
    void doc(fstream &d);                 // doc file
    void set_db(long long daban);         // setter so luong da ban
    long long get_db();                   // getter so luong da ban
    void kiemtra( bool &);                // kiem tra 

};