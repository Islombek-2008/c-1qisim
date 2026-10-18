#include<iostream>
using namespace std;
#include<cmath>

int main(){   
        
    // 1-masala:
    
    /*
    int a, S;
    cout << "kvadratning tomonini kiriting a=";
    cin >> a;
    S = a*a;
    cout << S << "ga teng";
    */
    
    
    // 2-masala
    
    /*
    int a, P;
    cout << "kvadrat tomonini kiriting a= " ;
    cin >> a;
    P = a*4;
    cout << "Kvadratning peremetri " << P << " ga teng";
    */
    
    //3-masala
    
    /*
    int a, b, S, P;
    cout << "to'g'ri tortburchakning 1-tomoni a=";
    cin >> a;
    cout << "to'g'ri to'rtburchakning 2-tomoni b=";
    cin >> b;
    P = 2*(a+b);
    S = a*b;
    cout << "to'g'ri to'rtburchakning peremetri" << P << endl 
    <<"to'g'ri to'rtburchakning yuzi" << S<< endl;
    */
    
    //4-masala
    
    /*
    float d, PI=3.14, L;
    cout << "Aylana diametrini kiriting D=";
    cin >> d;
    L = d*PI;
    cout<<"Aylananing uzunligi L=" <<L <<endl;
    */
    
    //5-msala
    
    /*
    int a, S, V;
    cout << "kub tomonini kiriting a=";
    cin >> a;
    S = a*a*6;
    V = a*a*a;
    cout << "kubning to'la sirt yuzi S="<<S <<"kubning hajmi V= " 
    << V << endl;
    */
    
    //6-masala
    
    /*
    int a, b, c, V, S;
    cout << "paralilopipedning bo'yini kiriting a=";
    cin >> a;
    cout << " paralilopipedning enini kiriting b=";
    cin >> b;
    cout << "paralilopipedning balandligini kiriting c=";
    cin >> c;
    S = 2*(a*b+b*c+a*c);
    V = a*b*c;
    cout << "paralilopipedning to'la sirt yuzi S=" << S <<endl <<
    " paralilopipedning hajmi V=" << V << endl;
    */
    
    //masala
    
    
    
    /*
    int son;
    cout << "Iltimos, son kiriting";
    if (!(cin >> son)){
    cerr << "Xatolik: son kiriting";
    return 1;
    }
    cout <<" Siz kirtgan son" << son <<endl; 
    */
    
    //12-masala
    
    /*
    float a, b, c, P;
    cout << "a=";  cin >>a;
    cout << "b=";   cin >>b;
    c = sqrt(a*a+b*b);    
    P= a+b+c;
    cout << "katet a= " << a 
        << "; katet b=" << b 
        <<"; gipatenuza c=" << c 
        << "; permetri" << P;
    */
    //16-masala
    
    /*
    double x1{}, x2{};
    cout  << "X1 nuqtani kiriting: ";
    if(!(cin>> x1)){
        cerr << "Xatolik: Noto'g'ri qiymat kiritildi!\n";
        return 1;
    }
    cout <<" X2 nuqtani kiriting";
    if(!(cin>> x2)){
        cerr <<"Xatolik: Noto'g'ri qiymat kiritildi!\n";
        return 1;
        
    }
    double masofa = abs(x2-x1);
    cout << "nuqtalar orasidagi masofa: "<< masofa << endl;
    */
    
   // }
   
   /*
    int digitSum(int 211){
    
        int sum = 0;
        do{
            sum += n%10;
            n /= 10;
        }while(n > 0);
        return sum;
        
    }
    */
    
    
    /*
    
    //   16-masala
    
    double a, b, c;
    cout << "A, B, C sonlarno kiriting" << endl;
    cin >> a>>b>>c;
    
    if(a<b && b<c){
        a *= 2;
        b *= 2;
        c *= 2;
    }else{
        a = -a;
        b = -b;
        c = -c;
    }
        cout << "A= "<< a << ", B= " << b << ", C= " << c << endl;
        
   */
   
   /*
   // 23 - masala
   
   int x1, x2, x3, x4, y1, y2, y3, y4;
   
   cout << "1-uchning kordinatalarini kiriting(x1, y1): " ;
   cin >> x1>> y1;
   cout << "2-uchning kordinatalarini kiriting(x2, y2): " ;
   cin >> x2>> y2;
   cout << "3-uchning kordinatalarini kiriting(x3, y3): " ;
   cin >> x3>> y3;
   
   if(x1 == x2){
       x4 = x3;
   }else if(x1 == x3){
       x4 = x2;
   }else{
       x4 = x1;
   }
   
   if(y1 == y2){
      y4 = y3;
   }else if(y1 == y3){
       y4 = y2;
   }else{
       y4 = y1;
   }
   
   cout << "To'rtinchi uchning koordinatasini: (" << x4 << " , " << y4 << ")" << endl;
   
   */
   
   /*
   // 24-masala
   
   double x, y;
   
   cout << "x sonini kiriting: ";
   cin >> x;
   
   if(x>0){
       y = 2*sin(x);
   }else{
       y = x - 6;
   }
   cout << "f(x) = " << y << endl;
   */
   
   /*
   
   // 25-masala
   
   double x, y;
   cout << "x sonni kiriting: " << endl;
   cin >> x;
   
   if((x < -2) || (x > 2)){
       y = x*2;
   }else{
       y = 3;
   }
   cout << "f(x)= " << y << endl;
   
   */
   
   /*
   
   // 27-masala
   
   int x, y;
   
   cout << "x sonni kiriting" << endl;
   cin >> x;
   
   if(x<0){
       y = 0;
   }else if(x%10 == 0){
       y = -1;
   }else{
       y = 1;
   }
   
   cout << "f(x) = " << y << endl;
   
   */
   
   /*
   // 28-masala
   
   int yil;
   cout << "yilni kiriting: " ; 
   cin >> yil;
   
   if ((yil %400 == 0) || (yil % 4 == 0 && yil % 100 != 0)){
       cout << "bu kabisa yili. Kunlar soni: 366" << endl;
   }else{
       cout << "bu kabisa yili emas. Kunlar soni: 365";
   }
   */
   
   /*
   
   // 29-masala
   
   int a;
   cin >> a;
   
   if(a > 0 && a%2 == 0){
       cout << "Musbat juft son" << endl;
   }else if(a > 0 && a%2 != 0){
       cout << "Musbat toq son" << endl;
   }else if(a < 0 && a%2 == 0){
       cout << "Manfiy juft son" << endl;
   }else if(a < 0 && a%2 != 0){
       cout << "Manfiy toq son" << endl;
   }else{
       cout <<" Butun son emas" << endl;
   }
   */
   
   /*
      int a;
      cin >> a;
      
      if (a>=0){
          goto k;
      }else{
          goto l;
      }         
      k:
      cout << "kkkkkk" << endl;
      l:
      cout << "llllll";
   */
   
   /*
   int n;
   float a;
   cin >> a>>n;
   long long res = 1;
   for( int i = 1; i < n; i++){
       res*=a;
   }
   cout << res << endl;
   */
    
    // 5-masala
    
    
   double a, n;
   
       cout << "1kg konfet narxini kirting" << endl;
       cin >> a;
      // long long res = 1;
       for (int i = 1; i <= 10; i++){
           n = i/10.0;
           cout << n << " kg konfet narxi" << n*a << endl;
       }
       //cout << a << endl;
        return 0;
}
    
    