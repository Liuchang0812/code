(define (larger x y)
 (if (> x y )
	 x
	 y ) )
(define (largest x y z )
 (larger 
	(larger x y )
		z))
(define (smaller x y )
	(if ( > x y )
		y
		x))
(define (smallest x y z)
	(smaller 
		(smaller x y )
		z))
(define (sum x z y ) ( + x y z))
(define (square x) (* x x) )

(define (square-sum-two-largest x y z)
	( + (square (largest x y z))(square (- (sum x y z) (largest x y z ) (smallest x y z )))) )

;(larger 1 2 ) ;2
;(largest 2 1 5 ) ;5
;(smaller 1 2 ) ;1
;(smallest 2 1 4) ;1
;(sum 1 1 2) ;4
;(square 2) ;4
(square-sum-two-largest 3 4 5) ;41
