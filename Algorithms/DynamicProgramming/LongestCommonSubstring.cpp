/*

Longest Common Substring

*/
#include<iostream>
#include<string>
#include<algorithm>


int LCS(std::string s1,std::string s2){
	int m = s1.length();
	int n = s2.length();
	int dp[m+1][n+1];

	for(int i=0;i<=m;i++){
		dp[i][0] = 0;
	}	
	for(int j=0;j<=n;j++){
		dp[0][j] = 0;
	}


	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(s1[i-1] == s2[j-1])
					dp[i][j] = 1 + dp[i-1][j-1];
			else
					dp[i][j] = 0;
		}
	}
	return dp[m][n];

}
int main(void) {

	std::string s1,s2;
	
	std::cout <<"Enter the first string " << std::endl;
	std::cin >> s1;

	std::cout << "Enter the second string " << std::endl;
	std::cin >> s2;

	std::cout << "The LCS for the given string is " << LCS(s1,s2) << std::endl;


	return 0;
}
