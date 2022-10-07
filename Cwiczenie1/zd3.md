Zadanie 3

3 dana calkowita liczba k (1 <= k <= 180) i ciag lizcb 10111213...9899, do ktorego sa zapisane wszytkie dwoznakowe liczby.
Wyznaczyc numer pary liczb, to ktorej wpada liczba k.

```
	while (1 >= k && 180 <= k ) {
	k1=0
	k2=0
	k3=0
	}

	if (k>99) {
		
			k1 = k / 100
			k2 = k mod 100 / 10
			k3 = k mod 100 mod 10 
		}
			for (i = 10; i < 99; i++) {

				if (i mod 10=k1 || i mod 10=k2 || i mod 10=k3 || i div 10=k1 || i div 10=k2 || i div 10=k3 ) {
					print i
						
				
			}
				
	if (k<10) { 
		
		for ( 1 = 10 < 99 )
		
			if ( i = 10; i < 90; i++ ) {
				if( i mod 10 = k || i / 10 =k )
				print i
			}

		}

```
