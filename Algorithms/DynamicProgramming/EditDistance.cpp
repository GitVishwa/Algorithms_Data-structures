#include<iostream>
#include<stdlib.h>

//#define min(a,b) return a>b?a:b;

int EditDistance(std::string s1, std::string s2){

	int m = s1.length();
	int n = s2.length();
	int dp[m+1][n+1];

	for(int i=0;i<=m;i++) {
		dp[i][0] = i;
	}

	printf("\n\n");
	for(int j=0;j<=n;j++) {
		dp[0][j] = j;
	}

	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(s1[i-1] == s2[j-1])
					dp[i][j] = dp[i-1][j-1];
			else
					dp[i][j] = 1 + std::min(std::min(dp[i][j-1],dp[i-1][j]),dp[i-1][j-1]);
		}
	}
	return dp[m][n];
}

int main(void){

	std::string s1,s2;

	std::cout << "Enter the First string " << std::endl;
	std::cin >> s1;

	std::cout << "Enter the Second string " << std::endl;
	std::cin >> s2;
	std::cout << "The Edit distance operations are " << EditDistance(s1,s2) << std::endl;
	return 0;
}
