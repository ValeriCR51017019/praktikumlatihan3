#include <iostream.h>
#include <conio.h>
int main ()
	{	int n,m;
   	float l;
      cout<<"masukkan tanggal kelahiran anda (n) : "; cin>>n;
      cout<<"masukkan bulan kelahiran anda (m) : "; cin>>m;
      cout<<"masukkan tahun lahir anda (l), isi 2 digit akhir : ";
      cin>>l;

      n += m;
      cout<<"nilai n += m "<<n<<endl;
      n -= m;
      cout<<"nilai n -= m "<<n<<endl;
      n %= m;
      cout<<"nilai n %= m "<<n<<endl;
      n *= m;
      cout<<"nilai n *= m "<<n<<endl;
      n /= m;
      cout<<"nilai n /= m "<<n<<endl;
      getch () ;
      return (0) ;
   }



