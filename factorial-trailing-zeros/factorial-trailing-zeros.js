/**
 * @param {number} n
 * @return {number}
 */
var trailingZeroes = function(n) {
	var answer = 0;
	while(n >= 5)
	{
	    n = ~~(n / 5);
		answer += n;

	}
    return answer;
};