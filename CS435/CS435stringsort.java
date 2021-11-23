

public class CS435stringsort {
    
    String ar[];
public static void lsd(String[] a) {
    int R = 256; 
    String[] temp = {};
    int N=a.length;
    int W=a[0].length();
    for(int d=W-1;d>=0;d--)
    {
        int[]count=new int[R];
        for(int i=0;i<N;i++)
            count[a[i].charAt(d)+1]++;
        for(int k=1;k<256;k++)
            count[k]+=count[k-1];
        for(int i=0;i<N;i++)
            temp[count[a[i].charAt(d)]++]=a[i];
        for(int i=0;i<N;i++)
            a[i]=temp[i];
    }
}
    public static void main(String[] args) {
      System.out.println("Hello World");
      String[] ar =  {"abc","acc","cba","bca","aaa","aaaa","aab"};
      lsd(ar);
    }
  }