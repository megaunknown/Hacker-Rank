#include <iostream>
#include <climits>
#include <iomanip>
#include <algorithm>
#include <sstream>
#include <stack>
#include <vector>
#include <set>
#include <string>
#include <list>
#include <cmath>
#include <stdlib.h>     /* srand, rand */
using namespace std;


const int MAX_CHAR = 26 ;
// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
	// vector for storing character occurrences
	vector<bool> v(MAX_CHAR, 0);
	
	// increment vector index for every
	// character of str1
	for (int i = 0; i < s1.length(); i++)
		v[s1[i] - 'a'] = true;
	
	// checking common substring of str2 in str1
	for (int j = 0; j < s2.length(); j++)
		if (v[s2[j] - 'a'])
			return "YES";
		
		return "NO";
}



void main()
{
	string s1 = "hitcwvrtvizzztsecgtezzitwhgcbvesrtgwijrvbihsctwvigrbtbbisgewzevjgsessiebrstirztjtwgzzgevweigiccjzswecbtwgitzsicbjezjttcjiittgsggtehtwwgjbtghrirejechbhiwcbrvcgzevjvszztwssirsitsihcegrtctzghrbgibibgjrjgebcvbtgetjbrthjzvesiieciwivrzwhbvbhhihchgsjgjsezhgihtghrcrewbgibicrzzrtijcctsvehhgzticrbhvjzjgeitsbberizjivbzegjjbwrsbzrrsvhgbgewgeiwvvzihbgwgeseiiriewgvitjbtbrgicjgvgjegzewsbvrwtibsbivzjivjebcthzwsersbeeeeccthwztgwcwwgjbwtbvctwievsbzjstviiwtctvbgiicgetijrczchbwecitzcrehejrstjjgzbgvwvrwhiwzggcbvgjegtewrjwbwscgcwgjbeswssbhcsrgicigsjjrhsrtegjbrjczbchzjteewchbjiwvhtwwgsretsteiieiisvizzjrgriigwvezvbtzvrzjzjtsttgrvsjrithiizhzvzszjjrwjrwhgcrgcwzhetvriregsectewzvevcrrzrrrbvgiirwhitbzetcbbcjezsbezzbbtjzcszsbstzcbjjstsvjewwrihjzbcgswbhtvjjsgevciwzcheetvgezgrjhbbbwesrwrzwigweehcvsertjhezwbvrswjeghczbgjrzvwwwceijvijvviggwthvzsvrijhwzjihrbecswwwgtrchevsivwrbwwiiwhvgrhbvtghcstsrzzthjgrewghiecwcbgwzhvjezsrseccerssgticvzeecjgiiwrcbcvbchiirvithwrzgrsviihjecrgbvbzeertivssjgeijzgrtrjcbbbhsgeirsgsswigcizgcszzwebvbrstjehrhsebsbbz";
	string s2 = "Welcome";
	
	
	cout << twoStrings(s1,s2) << endl;
	
	
	system("pause");
}