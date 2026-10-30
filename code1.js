let buah = ["mangga", "jeruk"];

console.log(buah[0]); // mengakses elemen berdasarkan indeks

buah.unshift("apel"); // tambahkan di awal
buah.splice(2, 0, "semangka"); //tambahkan d tengah 
buah.push("pisang"); // tambahkan di akhir 
console.log("setelah ditambah:", buah);

buah.shift(); // hapus elemen di awal
buah.shift(1, 1); // hapus elemen di tengah 
buah.pop(); // hapus elemen di akhir 
console.log("setelah dihapus:", buah); 