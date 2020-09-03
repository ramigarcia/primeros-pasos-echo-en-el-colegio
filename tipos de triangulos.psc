Algoritmo tipos
	Escribir ("ingrese lado1 lado2 lado3");
	Leer lado1 lado2 lado3
	Si lado1 = lado2 y lado1 = lado3 Entonces
		Escribir ("tipo equilatero");
	SiNo
		si lado1 = lado2 o lado2 = lado3 Entonces
			Escribir ("tipo isoseles");
		SiNo
			Escribir ("tipo escaleno");
		FinSi
	Fin Si
FinAlgoritmo
