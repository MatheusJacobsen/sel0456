;; Functions

(defun f (x)
  (* x x))

  (f 2)

  (defun fact (x)
    (if (= x 0)
    1
    (* x (fact (- x 1)))))

(fact 4)

(setq l '(1 2 3 4))

(defun sqr (x) (* x x))

(defun list-quad (l)
  (list (sqr (car l)) (list-quad (cdr l))))
(list-quad l)

__________________________________________________

;; Functions

(defun f (x)
  (* x x))

  (f 2)

  (defun fact (x)
    (if (= x 0)
    1
     (* x (fact (- x 1)))))

(fact 4)

(setq l '(1 2 3 4))

(defun sqr (x) (* x x))

(defun list-quad (l fcn)
  (and l
      (cons (funcall fcn (car l)) 
             (list-quad (cdr l) fcn))))
(list-quad l #sqr) ou (list-quad l #fact) ou (list-quad '(1 2 3 4 5) #'fact)

______________________________________________________

;; Functions

(defun f (x)
  (* x x))

  (f 2)

  (defun fact (x)
    1
     (* x (fact (- x 1))))

(fact 4)

(setq l '(1 2 3 4))

(defun sqr (x) (* x x))

(defun list-quad (l fcn)
  (and l
      (cons (funcall fcn (car l)) 
            (list-quad (cdr l) fcn))))

(list-quad ' (1 2 3 4 5) #'fact)
(list-quad ' ("abc"  "de"  "fghi") #'length)
(mapcar (lambda (x) (* x x x)) (list 1 2 3 5))
(defun cube (x)
  (* x x x))
(mapcar #'cube (list 1 2 3 5))
(setq f (lambda (x) (*x x x)))
(f 2)
(setq n '())
n

____________________________________________________________________

(let (x 3)
    (y 2))
    (setq x 4)
    (message (format "x = %d" x))
    (* x y)

(progn
  "sempre"
  "retorna"
  "o"
  "último")

(defun fx ()
  "sempre"
  "retorna"
  "o"
  "último")

(setq w (fx))
W

(defun fx ()
 "Documentação da função fx: ela retorna string 'último'."
 "sempre"
 "retorna"
 "o"
 "último")

(documentation #'mapcar)


