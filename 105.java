import java.io.*;
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		int[] arr = {6, 3, -1, -3, 4, -2, 2, 4, 6, -12, -7};
            int n = arr.length;
            
            int i=-1;
            int sum=0;
            
            int count=0;
            HashMap<Integer ,Integer> map=new HashMap<>();
            
            map.put(0,1);
            while(i<n-1){
                i++;
                sum+=arr[i];
                if(map.containsKey(sum))
                {
                    count+=map.get(sum);
                    map.put(sum,map.get(sum)+1);
                }
                else{
                    map.put(sum,1);
                }
            }
            System.out.println(count);
	}
}
