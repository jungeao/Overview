package com.jungea.java;

public class HelloWorld {
	public static void main(String[] args){
		//字符串注意事项
		String str1 = "2";
		int i = Integer.parseInt(str1);
		System.out.println("str1 = " + i);
		//加号起连接作用
		System.out.println("5 + 5 = "+5+5);
		
		int bai,shi,ge,ii = 520;
		bai = ii / 100;
		shi = ii % 100 / 10;
		ge = ii % 10;
		System.out.println(bai+""+shi+""+ge+"");

	}
	
}
