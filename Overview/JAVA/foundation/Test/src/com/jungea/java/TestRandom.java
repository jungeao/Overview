
package com.jungea.java;
import java.util.Random;
/**
* @Description
* @author jungea
* @version
* @date --------------
*
*/

public class TestRandom {
	public static void main(String[] args) {
		Random rand = new Random();
		int randomNum = rand.nextInt(99);
		System.out.println(randomNum);	//random[0-99] 产生随机数
	}
}
