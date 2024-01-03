#include <iostream> 
using namespace std;

int main(){
  struct data_anak{
  string nama;
  int hari,bulan,tahun;
  };

  int ukuran_awal;
  int haridalambulan;
        int j = 1;

  cout << "Masukkan Ukuran Array : ";
  cin >> ukuran_awal;

  const int ukuran = ukuran_awal;
  data_anak anak[ukuran];
  
  
// Sort Ascending dari .ppt (perlu descending)  
void SelectionSort (int Array[ ], const int Size)
{
	int i, j, smallest, temp;
	for (i=0; i<Size; i++)
	{
		smallest=i;
		for (j=i; j<Size; j++)
		{
			if (array[smallest]>array[j])
			{
				smallest=j;
			}
		}
		temp=array[i];
		array[i]=array[smallest];
		array[smallest]=temp;
	}
}
// Sort End

//Pemasukkan Data [Start]

  for (int i = 0; i < ukuran; i++){

    cout << "Masukkan Nama Anak ke-"<< j << " : ";
    cin >> anak[i].nama;
    cout << "Masukkan Tanggal Anak ke-" << j << "\nHari : ";
    j++;
    cin >> anak[i].hari;
    cout << "Bulan : ";
    cin >> anak[i].bulan;
    cout << "Tahun : ";
    cin >> anak[i].tahun;
    cout << "\n";
    
    if (anak[i].bulan > 12){
        cout << "Bulan invalid";
        break;
    }
    
if (anak[i].bulan == 4 or anak[i].bulan == 6 or anak[i].bulan == 9 or anak[i].bulan ==11){
    haridalambulan = 30;
  }
  else if (anak[i].bulan == 2){
    if (anak[i].tahun%4==0){
        haridalambulan = 29;
    }
    haridalambulan = 28;
  }
  else{
    haridalambulan = 31;
  }
  
  if (anak[i].hari > haridalambulan){
cout << "Hari invalid";
      break;
  }
  }
    //Pemasukkan Data [END]
    
    //Pertukaran Data [Start]
    int temp,temp2,temp3,temp4;
    for (int i = 0; i < ukuran; i++){
        biggest = i;
        for (j=i;j<ukuran;j++){
            if (anak[biggest].tahun<anak[j].tahun){
                biggest = j;
            }
            temp = anak[i].tahun;
            temp2 = anak[i].nama;
            temp3 = anak[i].hari;
            temp4 = anak[i].bulan;
            
            anak[i].tahun=anak[biggest].tahun;
		    anak[biggest].tahun=temp;
        }
    }
    
    //bagaimana cara tukar namanya juga
    
    //Pertukaran Data [END]
  }
