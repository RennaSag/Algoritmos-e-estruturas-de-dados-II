
int func(int *vet, int tamanho){
	int somador;
	
	for(int i=0; i<tamanho; i++){
		somador=vet[i]+somador;
	}
	
	return somador;
}
