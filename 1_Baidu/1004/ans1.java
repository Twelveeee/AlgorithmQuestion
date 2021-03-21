 package p1004;
/**
* @author ChenTengFeng
* @email Twelveeee12@gmail.com	
* @time Feb 18, 2021
*/
 
 import java.util.Scanner;

public class p1004 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        float sumPrice = 0;
        int sumDiscount = 0 ;
        
        
        //get discountList and timeList
        String[] input = in.nextLine().split(" ");
        int[] discountList = new int[24];
        int[] timeList = new int[24];
        for(int i =0;i<input.length;i++) {
            discountList[i]=Integer.parseInt(input[i]);
            if(i==0) {
                timeList[i]=0;
            }else {
                timeList[i]=timeList[i-1]+60;
            }
            
        }
        
        input=null;
        //get counter and orderNum
        input = in.nextLine().split(" ");
        int counterN = Integer.parseInt(input[0]);
        int orderNum = Integer.parseInt(input[1]);
        
        //get order info
        Order[] orderList = new Order[orderNum];
        for(int i=0;i<orderNum;i++) {
            input=null;
            input = in.nextLine().split(" ");
            orderList[i] = new Order(input[0],input[1],input[2]);
        }
        
        //��orderList ��������
        orderList=orderBubbleSort(orderList);
        
        
        
        //init counter
        Counter[] counterList = new Counter[counterN];
        for(int i =0;i<counterN;i++) {
            counterList[i] = new Counter();
        }
        
        //�������е�Order
        for(Order order:orderList) {
            //�ҵ���̵Ĺ�̨
            int minLastTimeIndex=0;
            if(counterN!=1) {
                //�޸���
                for(int i=1;i<counterN;i++) {
                    
                    
                    //�ҵ�����ʱ������Ĺ�̨
                    if(counterList[minLastTimeIndex].getLastTime() > counterList[i].getLastTime()) {
                        minLastTimeIndex=i;
                    }
                }
            }
            //ֱ�ӻ�ȡ�ȴ�ʱ�� �� �ۿ�
            int waitTime=counterList[minLastTimeIndex].getWaitTime(order.startTime,order.produceTime);
            //���Ҫ�Ŷӣ���Ҫ���ۣ�
            if(waitTime!=0) {
                
                int startHour = (int)order.startTime/60;
                int endHour = (int)(order.startTime+waitTime)/60;
                
                //�ж��Ƿ��ʱ��
                if(startHour != endHour) {
                    //�ж��������Ҫ��Ҫ�ȶ��Сʱ
                    int period = endHour-startHour;
                    if(period>1) {
                        for(int i=startHour+1;i<endHour;i++) {
                            sumDiscount += 60*discountList[i];
                        }
                    }
                    //��ͷ
                    sumDiscount += ((startHour+1)*60-order.startTime)*discountList[startHour];
                    //��β
                    sumDiscount += (order.startTime+waitTime-(endHour*60))*discountList[endHour];
                    
                
                }else {
                    sumDiscount += (waitTime)*discountList[startHour];
                }

                //System.out.println("sumDiscount:"+sumDiscount);
            }
            //�ܼ�
            sumPrice += order.unitPrice;
            
        }
        in.close();
        double ans=Double.valueOf(sumPrice)-(sumDiscount*0.01);
        System.out.println(String.format("%.2f",ans ));
    }
    
    public static Order[] orderBubbleSort(Order[] orderList) {
        for(int i =0 ; i < orderList.length-1 ; i++) {
            for(int j = 0;j<orderList.length-i-1;j++) {
                if(orderList[j].startTime>orderList[j+1].startTime) {
                    int temp = orderList[j].startTime;
                    orderList[j].startTime=orderList[j+1].startTime;
                    orderList[j+1].startTime=temp;
                }
            }
        }
        return orderList;
        
    }

}


/**
*   ������Ϣ
*   ��ʼʱ�䡢����ʱ�䡢���ۡ��Ŷ�ʱ�䡢�ۿ�
*/
class Order{
    int startTime; 
    int produceTime;
    float unitPrice;
    int queuingTime;
    int discount;
    Order(String time,String produceTime,String unitPrice){
        String[] hhmm = time.split(":");
        this.startTime=Integer.parseInt(hhmm[0])*60+Integer.parseInt(hhmm[1]);
        this.produceTime = Integer.parseInt(produceTime);
        this.unitPrice = Float.parseFloat(unitPrice);
    }
    
}

class Counter{
    int length=0;
    int lastTime=0;
    
    int getWaitTime(int startTime,int produceTime) {
        int waitTime=this.lastTime-startTime;
        if(waitTime<=0) {
            //û�еȴ�ʱ��
            this.lastTime =startTime+produceTime;
            return 0;
        }else {
            this.lastTime = this.lastTime + produceTime;
            return waitTime;
        }

    }
    
    int getLastTime() {
        return this.lastTime;
    }
    
    Counter(){
        super();
    }
    
}

