func factorial(n) {
	
	factorial = 1
	
    	if (n < 0)
    		print "n jest ujemna"
    	else {
        	for (i = 1; i <= n; ++i) {
            	factorial *= i
        	}

        return factorial
    }
}
