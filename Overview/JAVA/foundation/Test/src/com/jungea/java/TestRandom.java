/**
 * 
 */
package com.jungea.java;
import java.util.Random;
/**
* @Description
* @author jungea
* @version
* @date 2021年9月23日上午12:09:18
*
*/

public class TestRandom {
	public static void main(String[] args) {
		Random rand = new Random();
		int num = rand.nextInt(99);
		System.out.println(num);	//random[0-99] 产生随机数
	}
}
