/*01 – Crie uma estrutura para armazenar informações de matrícula, nome e situação (ativo /
inativo). Utilize o nome aluno para a estrutura.
02 – De forma dinâmica, solicite a quantidade de registros para um vetor do tipo estrutura de
pessoa e então crie o vetor.
03 – Elabore um menu para efetuar a inicialização (init_aluno), a inclusão (include_aluno), a
remoção (remove_aluno), a listagem por matrícula (list_index_aluno) e de todos os elementos do
vetor (list_all_aluno) do tipo aluno.
04 – Adicione a estrutura disciplina para armazenar o nome da disciplina, o período e a lista de
alunos inscritos.
05 – Inclua no menu criado opções para inicializar (init_disciplina), a inclusão (include_disciplina), a
remoção (remove_disciplina), a listagem por matrícula (list_index_disciplina) e de todos os
elementos do vetor (list_all_disciplina) do tipo disciplina.*/

#include<stdio.h>
#include<stdlib.h>

void menu(struct dados *vetor, int qts );
void init_aluno(struct dados *vetor, int qts);
void include_aluno(struct dados *vetor, int qts);
void remove_aluno();
void list_index_aluno();
void list_all_aluno();

enum situacao {inativo, ativo};

struct dados {
	
	enum situacao sit;
	char nome [20];
	int matricula;
	int preenchido;
	
};

int main (){
	int qtsAluno, i;
	struct dados *vetor;
	
	do{
	
		printf("Informe quantos alunos vc deseja matricular ");
		scanf("%d", &qtsAluno);
		fflush(stdin);
		if (qtsAluno > 0){
			vetor = (struct dados *)malloc(qtsAluno * sizeof(struct dados));
			printf("\nVetor criado\n");
		}
		else printf("\nQuantidade invalida\n");
	
	}while (qtsAluno <= 0);
	
	menu(vetor, qtsAluno);
	
	/*
	for (i=0;i<qtsAluno;i++){
		
		printf("Digite o nome: \n");
		gets(vetor[i].nome);
		printf("Informe a matricula: \n");
		scanf("%d", &vetor[i].matricula);
		fflush(stdin);
		printf("Informe a situacao, 0 para inativo e 1 para ativo\n");
		scanf("%d", &vetor[i].sit);
}*/
	return 0;
}
void menu(struct dados *vetor, int qts){
	int op;
	printf("--Menu--\nEscolha uma das opcoes\n1-inicializacao\n2-inclusao\n3-remocao\n4-listagem por matricula\n5-listagem de todos os elementos do vetor\n5-sair\n");
	scanf("%d", &op);
	fflush(stdin);
	
	switch(op){
	    case 1:	    	
	    	init_aluno(vetor, qts);
	    break;
	    case 2:
	    	printf("op = 2");
	    break;
	    case 3:
	    	printf("op = 3");
	    break;
	    case 4:
	    	printf("op = 4");
	    break;
	    case 5:
	    	printf("ate");
	    break;
	}
}

void init_aluno(struct dados *vetor, int qts){
	int i;
	for (i=0;i<qts;i++){
		vetor[i].preenchido = 0;
	}
	printf("\nO vetor foi inicializado\n");
}

void include_aluno(struct dados *vetor, int qts){
	int i;
	for (i=0;i<qts;i++){
		for vetor[i].preenchido =
	}
}





