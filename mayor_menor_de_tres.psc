	Algoritmo cual_de_los_3_es_mayor
		Escribir ("ingrese n1 n2 n3");
		Leer n1 n2 n3
		Si (n1 >n2) y (n1 >n3) Entonces
			Escribir n1,(" es mayor");
		SiNo
			si (n2 >n1) y (n2 >n3) Entonces
				Escribir n2,(" es mayor");
			SiNo
				Escribir n3,(" es mayor");
			FinSi
		Fin Si
FinAlgoritmo
