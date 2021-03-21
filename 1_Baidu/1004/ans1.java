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
        
        //对orderList 进行排序
        orderList=orderBubbleSort(orderList);
        
        
        
        //init counter
        Counter[] counterList = new Counter[counterN];
        for(int i =0;i<counterN;i++) {
            counterList[i] = new Counter();
        }
        
        //遍历所有的Order
        for(Order order:orderList) {
            //找到最短的柜台
            int minLastTimeIndex=0;
            if(counterN!=1) {
                //修改了
                for(int i=1;i<counterN;i++) {
                    
                    
                    //找到结束时间最早的柜台
                    if(counterList[minLastTimeIndex].getLastTime() > counterList[i].getLastTime()) {
                        minLastTimeIndex=i;
                    }
                }
            }
            //直接获取等待时间 与 折扣
            int waitTime=counterList[minLastTimeIndex].getWaitTime(order.startTime,order.produceTime);
            //如果要排队，就要打折；
            if(waitTime!=0) {
                
                int startHour = (int)order.startTime/60;
                int endHour = (int)(order.startTime+waitTime)/60;
                
                //判断是否夸时区
                if(startHour != endHour) {
                    //判断这个订单要不要等多个小时
                    int period = endHour-startHour;
                    if(period>1) {
                        for(int i=startHour+1;i<endHour;i++) {
                            sumDiscount += 60*discountList[i];
                        }
                    }
                    //加头
                    sumDiscount += ((startHour+1)*60-order.startTime)*discountList[startHour];
                    //加尾
                    sumDiscount += (order.startTime+waitTime-(endHour*60))*discountList[endHour];
                    
                
                }else {
                    sumDiscount += (waitTime)*discountList[startHour];
                }

                //System.out.println("sumDiscount:"+sumDiscount);
            }
            //总价
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
*   订单信息
*   开始时间、制作时间、单价、排队时间、折扣
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
            //没有等待时间
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

