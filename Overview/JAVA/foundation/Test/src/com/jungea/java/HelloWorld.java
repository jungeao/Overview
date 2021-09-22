package com.jungea.java;

public class HelloWorld {
	public static void main(String[] args){
		
		/*字符串注意事项，String强制转换int.
		 * 包装类Integer.parseInt
		 则可以实现把字符串转换成基本类型。*/
		String str1 = "2";
		int i = Integer.parseInt(str1);
		System.out.println("str1 = " + i); //str1 = 2
		
		//加号起连接作用
		System.out.println("5 + 5 = "+5+5); //5 + 5 = 55
		
		int bai,shi,ge,ii = 520;
		bai = ii / 100;
		shi = ii % 100 / 10;
		ge = ii % 10;
		System.out.println(bai+""+shi+""+ge+""); //520
		
		/*字符型*/
		int a = '0';
		System.out.println(a);
		
		System.out.println('0'+'1');//48+49=97
		
		
	}
	
}
