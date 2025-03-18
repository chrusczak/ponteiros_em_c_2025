/*
Váriaveis locais e globais
var local - fica declarada dentro de uma função ou bloco de código e só pode ser usada naquele escopo;
var global declarada de fora de qualquer função,podendo ser acessada por todas funções do programa;
*/

const float PI = 3.14159; //constante global
#define PI 3.14159 //constante via #define

//TADS - tipos abstratos de dados

//TADS - imagine um controle de play4, vc sabe como ele funciona, 
/*
imagine quais funçoes ele executa - depende do jogo - consigo pular, atacar, mas n tenho acesso a como ele foi construido, a ideia do tipo abstrato é dessa maneira
Eu vou lá, construo meu código, não estou escondendo nenhum dado meu, agora vou começar a esconder algumas informações

abordagem de aplicação 
atualmente fazemos todas as funções em um arquivo somente
agora transformaremos os programas modularmente , agora retiraremos as funções e o main fará parte de uma só coisa

Proposta por Barbara Liskov em 1974, o objetivo é criar um tipo de dado que funcione independentemente de como ele é implementado e que seja separado de quem usa a aplicação 

começaremos a usar cabeçalho, por exemplo, as .h da vida, começaremos a montar as ideias da nossa biblioteca

um tipo de dado abstrato define um conjunto e valores e operações 

segue um caminho similar à funções , começando de uma visão geral e avançando para detalhes específicos

- definir especificação 
- implementação detalhada 


Aplicaãp (main.c) -> TDA(especificação(bibliotecas) <-> concretação )

TAD = estrutura que encapsula dados e operações relacionadas 


um módulo pode ser utilizado usando arquivos de cabeçario .h e arquivos de implementação .c 
todos os exercicios agora será uma pasta 

um módulo não é um tipo abstrato de dados pois podem ser usados para outro função 

arquivos de cabeçalho- 

módulos , em linguagens orientada a objeto a implementação é feita através de classes 
em linguagens estruturadas (c,pascal) 
TADS = implementar os tads em arquivos separados do prigrama principal
.h com as declarações e  .c  com as implementações

estruturas opacas
separar espeificação de implementação 


*/

