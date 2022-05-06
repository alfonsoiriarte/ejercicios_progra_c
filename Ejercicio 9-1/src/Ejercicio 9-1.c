/*
Alumno: Alfonso Iriarte
Ejercicio: 9-1
Crear la estructura Alumno (nombre, materias aprobadas, suma de
notas, promedio). Crear una función que permita cargar los datos de un alumno y
otra que los muestre. Una tercera función calculará el promedio de notas.
 */

#include <stdio.h>

struct alumno {
    char nombre[41];
    int materiasAprobadas;
    int sumaNotas;
    float promedio;
};

void cargar(struct alumno *pUnicoAlumno){
	printf("\nIngrese el nombre del alumno: ");
	fflush(stdin);
	gets((*pUnicoAlumno).nombre);
	printf("\nIngrese cantidad de materias aprobadas: ");
	scanf("%d", &(*pUnicoAlumno).materiasAprobadas);
	printf("\nIngrese la suma de todas las notas del alumno: ");
	scanf("%d", &(*pUnicoAlumno).sumaNotas);
}

void calculoPromedio(struct alumno *unicoAlumno){
	(*unicoAlumno).promedio = (*unicoAlumno).sumaNotas / (*unicoAlumno).materiasAprobadas;
}

void imprimir(struct alumno unicoAlumno){
	printf("\nAlumno: %s", unicoAlumno.nombre);
	printf("\nMaterias aprobadas: %d", unicoAlumno.materiasAprobadas);
	printf("\nSuma de notas: %d", unicoAlumno.sumaNotas);
	printf("\nPromedio: %f", unicoAlumno.promedio);
}

int main(void){
	setbuf(stdout, NULL);
    struct alumno unicoAlumno;
    cargar(&unicoAlumno);
    calculoPromedio(&unicoAlumno);
    imprimir(unicoAlumno);
}
