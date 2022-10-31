// A recursive C# program to find
using System;

class GFG {

	static int catalan(int n)
	{
		int res = 0;

		if (n <= 1) {
			return 1;
		}
		for (int i = 0; i < n; i++) {
			res += catalan(i) * catalan(n - i - 1);
		}
		return res;
	}

	public static void Main()
	{
		for (int i = 0; i < 10; i++)
			Console.Write(catalan(i) + " ");
	}
}

