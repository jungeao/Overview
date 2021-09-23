
package com.jungea.java;

/**
* @Description
* @author jungea
* @version
* @date --------
*
*/
public class TestBasicDataBoundary {

	public static void main(String[] args) {
		//数据类型范围
		System.out.println((Byte.MIN_VALUE) + "~"+ (Byte.MAX_VALUE));
		System.out.println((Short.MIN_VALUE) + "~"+ (Short.MAX_VALUE));
		
		System.out.println((Integer.MIN_VALUE) + "~"+ (Integer.MAX_VALUE));
		System.out.println((Long.MIN_VALUE) + "~"+ (Long.MAX_VALUE));
		
		System.out.println((Float.MIN_VALUE) + "~"+ (Float.MAX_VALUE));
		System.out.println((Double.MIN_VALUE) + "~"+ (Double.MAX_VALUE));
		
		
		System.out.println("-----------------------------------------");
		/*********************Test-charAt************************/
		//charAt:根据索引得到字符串中的单个字符
		String string = "你好啊，我是jungeaJ";
		for(int i=0;i<string.length();i++) {
			char ch = string.charAt(i);
			if(ch>= 97 && ch<=122) {
				System.out.println(ch);
			}
		}
		
	}

}
