# Projeto - Separador de Tampinhas por Cores
Desenvolvimento de um separador de tampinhas por cores para a ONG PraMia, visando auxiliar em procedimentos de castração de animais de rua. Sistema facilitará a reciclagem e geração de recursos financeiros para a ONG. Combina tecnologia e sustentabilidade para uma causa social relevante.

## Problema

A separação manual de tampinhas por cores é um processo demorado e suscetível a erros. Além disso, demanda mão de obra e esforço humano. O desafio é encontrar uma solução automatizada que seja precisa, eficiente e capaz de realizar a separação de forma rápida e confiável.


## Equipe

<ul>
  <li>Breno Tonini Costa</li>
  <li>Eduardo Martins Cardoso</li>
  <li>Gianluca Scalzi Sampogna</li>
  <li>Henrique Dalmagro</li>
  <li>Raphael da Silva Branco</li>
</ul>

<p>Professores (Orientadores)</p>
<ul>
  <li>João Paulo Chamon</li>
  <li>Zirlene Effgen </li>
</ul>

![Equipe na Apresentação do Protótipo](imagens_pi1/apresentacao.jpg)
  

## Solução Proposta

Nossa solução foi dividir o problema em duas etapas: separação por tamanho e separação por cor.

Na etapa de separação por tamanho, desenvolvemos uma caixa separadora com três níveis, semelhante a uma peneira. O primeiro nível é projetado para tampinhas maiores, com diâmetro de 40mm. O segundo nível é destinado a tampinhas PET em geral, com diâmetro entre 20mm e 40mm. Por fim, o último nível é projetado para tampinhas menores, com diâmetro inferior a 20mm. Essa estrutura permite que as tampinhas sejam direcionadas ao nível apropriado de acordo com seu tamanho.

![Caixa Separadora](videos_pi1/caixa_funcionando.mp4)

Após a etapa de separação por tamanho, as tampinhas que permaneceram no segundo nível são encaminhadas para o separador por cor. Criamos uma estrutura semelhante a um gabinete de computador, onde fizemos um furo na parte superior para a inserção de um galão de água, que funciona como local para despejo das tampinhas. Dentro desse galão, há um cano de 45mm que empilha as tampinhas, permitindo que caiam uma por uma em uma roda seletora.

![Protótipo do gabinete](imagens_pi1/prototipo_gabinete.jpg)

A roda seletora é responsável por pegar uma tampinha, girar para ler sua cor e, em seguida, girar novamente para direcionar a tampinha para a rampa correspondente ao local correto de despejo com base em sua cor. Dessa forma, as tampinhas são separadas de acordo com sua cor e despejadas nos respectivos recipientes de coleta.

![Funcionamento Final](videos_pi1/funcionando_final.mp4)


## Funcionalidades Principais

- Identificação precisa das cores das tampinhas utilizando um sensor de cor.
- Separação das tampinhas por tamanho, utilizando uma caixa separadora com três níveis.
  - O primeiro nível é projetado para tampinhas maiores, com diâmetro de 40mm.
  - O segundo nível é destinado a tampinhas PET em geral, com diâmetro entre 20mm e 40mm.
  - O último nível é projetado para tampinhas menores, com diâmetro inferior a 20mm.
- Movimentação das tampinhas através de motores e esteiras para o processo de separação por tamanho.
- Separação das tampinhas restantes por cor, utilizando um separador específico.
  - A estrutura do separador é a de um gabinete de computador.
  - Inserção de um galão de água no topo do gabinete para despejo das tampinhas.
  - Utilização de um cano de 45mm dentro do galão para empilhar as tampinhas.
  - Uso de uma roda seletora para pegar, girar e ler a cor de cada tampinha.
  - Direcionamento da tampinha para a rampa correspondente, com base na cor identificada.
- Despejo das tampinhas separadas nos respectivos recipientes de coleta, organizados por cor.


## Benefícios e Vantagens

- Economia de tempo e mão de obra em comparação com a separação manual.
- Redução de erros humanos na identificação e separação das cores das tampinhas.
- Aumento da produtividade do processo de separação.
- Possibilidade de reciclagem mais eficiente das tampinhas separadas.

## Instalação e Configuração

1. Clone este repositório em sua máquina local.
2. Ligue a estrutura na energia elétrica.
3. Ajuste as configurações no script conforme necessário, como calibração do sensor de cor, velocidade dos motores e parâmetros de detecção de cores.
4. Certifique-se de verificar e atualizar qualquer arquivo de configuração adicional, se necessário.
5. Inicie o separador de tampinhas e observe o processo de separação por tamanho e por cor em ação.

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir uma issue para relatar problemas ou propor melhorias. Se preferir, você também pode enviar um pull request com suas modificações.

## Resultados e Considerações Finais

O sistema de separação de tampinhas por cores demonstrou ser eficaz e confiável durante os testes realizados. A automação do processo resultou em uma separação mais rápida e precisa, reduzindo significativamente o tempo necessário em comparação com a separação manual.

Embora o projeto esteja funcional, reconhecemos que ainda existem oportunidades de melhoria. Estamos abertos a feedbacks e sugestões para aprimorar o sistema.

![Apresentação Final](imagens_pi1/apresentacao_final_equipe.jpg)

## Contato

Para mais informações sobre este projeto, entre em contato conosco através do e-mail: raphaelbranco@ucl.br

![Apresentação Final](imagens_pi1/apresentacao_final.jpg)


