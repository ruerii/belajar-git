```mermaid
    flowchart TD;
    A(start) -->B[/float
    fJumlahbeli. fHarga, fDiskon/];
    B --> C[/string sBonus/];
    C --> D[print Harga Barang];
    D --> E[/input jumlah barang/];
    E --> F[print Jumlah Belinya];
    F --> G[/input Jumlah Belinya/];
    G --> H{jumlah beli > 15};
    H --ya--> I[/bonus payung/];
    I --> J[/Diskon 0.15 x harga/];
    H --tidak--> K[/tidak ada bonus];
    J --> O[selesai false statement];
    K --> O;
    O --> M[print strip];
    M --> N[print diskon];
    N --> P[print bonus];
    P --> Q(finish)
    
