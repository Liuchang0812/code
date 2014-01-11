package exam;
import java.util.Random;
import java.util.Scanner;
import java.io.*;
import java.util.Date;

public class pro3 {
	static Random rand;
	public static void init()
	{
		rand = new Random();
	}
	public static double getRandomDouble()
	{
		return rand.nextDouble();
	}
	public static long getCurrentTime()
	{
		Date date = new Date();
		System.out.println("Current time: " + String.valueOf(date.getTime()));
		return date.getTime();
	}
	
	/*
	 *  test for writeing 1000 000 number to a buffered file
	 */
	public static void testWriteBufferedFile()
	{
		long begintime, endtime;
		begintime = getCurrentTime();
		System.out.println("Testing for buffer-file");
		System.out.println("Starting....");
		PrintWriter out;
		try {
			out = new PrintWriter(new BufferedWriter(new FileWriter("foo-buff.out")));
		} catch (IOException e) {
			e.printStackTrace();
			return ;
		}
		for (int i = 0;i < 1000000;i ++)
		{
			out.println(getRandomDouble());
		}
		System.out.println("Finished.");
		endtime = getCurrentTime();
		System.out.println("Total time: " + String.valueOf(endtime - begintime));
	}
	
	public static void testWriteUnbufferedFile()
	{
		long begintime, endtime;
		begintime = getCurrentTime();
		System.out.println("Testing for unbuffer-file");
		System.out.println("Starting....");
		PrintWriter out;
		try {
			out = new PrintWriter(new FileWriter("foo-unbuff.out"));
		} catch (IOException e) {
			e.printStackTrace();
			return ;
		}
		for (int i = 0;i < 1000000;i ++)
		{
			out.println(getRandomDouble());
		}
		System.out.println("Finished.");
		endtime = getCurrentTime();
		System.out.println("Total times: " + String.valueOf(endtime - begintime));
	}
	
	public static void testReadBufferedFile() throws Exception
	{
		long begintime, endtime;
		begintime = getCurrentTime();
		System.out.println("Testing for buffer-file");
		System.out.println("Starting....");
		PrintWriter out;
		BufferedReader bin = new BufferedReader(new FileReader("foo-buff.out"));
		while ( bin.readLine()!= null )
		{
			;
		}
		System.out.println("Finished.");
		endtime = getCurrentTime();
		System.out.println("Total time: " + String.valueOf(endtime - begintime));
	}
	public static void testReadUnbufferedFile() throws Exception
	{
		long begintime, endtime;
		begintime = getCurrentTime();
		System.out.println("Testing for unbuffer-file");
		System.out.println("Starting....");
		PrintWriter out;
		FileInputStream bin = new FileInputStream("foo-unbuff.out");
		while ( bin.read()!= -1)
		{
			;
		}
		System.out.println("Finished.");
		endtime = getCurrentTime();
		System.out.println("Total time: " + String.valueOf(endtime - begintime));
	}
	public static void main(String[] args) throws Exception {
		init();
		testWriteBufferedFile();
		testWriteUnbufferedFile();
		testReadBufferedFile();
		testReadUnbufferedFile();
	}
}
