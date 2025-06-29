#include <iostream>
#include <cstring>
#include <fstream>
#include <locale.h>

using namespace std;

struct dados
{
	char nome[100];
	int idade;
	char senha[100];
};

int main()
{
	// permitindo acentuação no console
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	dados usuario;
	ofstream arq;
	char i; // contador.
	int categoria_do_filme;
	char letra_do_filme;
	char nomearq[100];
	char c;
	int id;
	int a=1;
	
	// dados para comparar no login do usuário
	char nomeU[100];
	char senhaU[100];
	int login = 0;
	
	// Abrindo o arquivo.
	cout << "Primeiro, para confirmar que não é um robô, escreva o que está escrito aqui: captch.txt " << endl;
	cin.getline(nomearq,100);
	arq.open(nomearq, ofstream::out);
	
	while(a==1){
		cout << "Bem vindo à Dinasty Streaming, esperamos que aproveite seu tempo curtindo os filmes conosco!" << endl;
		cout << endl;
	
		cout << "Primeiro, precisamos de alguns dados." << endl;
		cout << endl;
	
		cout << "Por gentileza, insira seu nome aqui: ";
		cin.getline(usuario.nome, 100);
		cout << endl;
		cout << "Insira uma senha para seu perfil: ";
		cin.getline(usuario.senha, 100);
	
		cout << endl;
	
		cout << "Insira sua idade aqui: ";
		cin >> usuario.idade;
		id = usuario.idade;
		cout << "" << endl;
		cin.ignore();
	
		do
		{
			// comparando o nome do usuario e a senha para login
			cout << "Fazendo login..." << endl;
			cout << "Insira seu nome de usuário: ";
			cin.getline(nomeU, 100);
		   	cout << endl;
	
		   	cout << "Insira a sua senha: ";	
		   	cin.getline(senhaU, 100);

		if((strcmp(nomeU, usuario.nome) == 0) && (strcmp(senhaU, usuario.senha) == 0))
		   	{
		   	cout << "Entrando..." << endl;
		   	//Escrevendo no arquivo
		   	arq << nomeU << endl;
		   	arq << id << endl;
		   	arq << senhaU << endl;
		   	/*arq << usuario.idade << endl;*/
		   	login = 1;
		   	a=0;
	   	}
		   	else
		{
		   	cout << "Usuário e/ou senha inválido" << endl;
		}
	
		}while(login != 1);	
	}
		
	i = 's';
	c = 's';
	while(c!='n'){
		while(i =='s' || i == 'S'){
		if(usuario.idade >= 16){
		// Código com todos os filmes do catálogo.
		cout << "Escolha dentre esta variedade de filmes de nosso catálogo : " << endl;
		cout << endl;
		// Mostrando todas as categorias para 
		cout << "1. Ação" << endl;
		cout << "2. Aventura" << endl;
		cout << "3. Comédia" << endl;
		cout << "4. Drama" << endl;
		cout << "5. Fantasia" << endl;
		cout << "6. Ficção Científica" << endl;
		cout << "7. Mistério" << endl;
		cout << "8. Terror" << endl;
		cout << "9. Romance" << endl;
		cout << "10. Infantil" << endl;
		
		cout << "" << endl;
		cin >> categoria_do_filme;
		
		// Categoria com filmes de Ação.
		if(categoria_do_filme == 1)
		{
			cout << "" << endl;
			cout << "Boa escolha! Então ação é a sua categoria preferida!" << endl;
			cout << endl;
			cout << "Escolha entre os filmes ou séries a seguir: " << endl;
			cout << endl;
			cout << "Filmes de ação: " << endl;
			cout << endl;
			cout << "A. Duro de Matar (Die Hard, 1988)" << endl;
			cout << "B. Mad Max: Estrada da Fúria (Mad Max: Fury Road, 2015)" << endl;
			cout << "C. John Wick (2014)" << endl;
			cout << "D. Operação Invasão (The Raid: Redemption, 2011)" << endl;
			cout << "E. Velozes e Furiosos 5: Operação Rio (Fast Five, 2011)" << endl;
			cout << "F. 007 - Operação Skyfall (Skyfall, 2012)" << endl;
			cout << "G. Missão: Impossível - Protocolo Fantasma (Mission: Impossible - Ghost Protocol, 2011)" << endl;
			cout << endl;
			cout << "Séries de ação: " << endl;
			cout << endl;
			cout << "H. Game of Thrones (Game of Thrones, 2011 - 2019)" << endl;
			cout << "I. La Casa de Papel (La Casa de Papel, 2017 - 2021)" << endl;
			cout << "J. Breaking Bad (Breaking Bad, 2008 - 2013)" << endl;
			cout << "K. The Walking Dead (The Walking Dead, 2008 - 2022)" << endl;
			cout << "L. Prison Break (Prison Break, 2005 - 2017)" << endl;
			cout << "M. Demolidor (Daredevil, 2015 - 2018)" << endl;
			cout << "N. Vikings (Vikings, 2013 - 2020)" << endl;
			cout << "O. The Witcher (The Witcher, 2019 - 2023)" << endl; 
			cout << "" << endl;
			cin >> letra_do_filme;
			
			switch(toupper(letra_do_filme))
			{
			case 'A':
				cout << "Estrelado por Bruce Willis, este clássico filme de ação segue o policial John McClane enquanto ele enfrenta terroristas em um arranha-céu. É conhecido por suas sequências de ação empolgantes e diálogos icônicos." << endl;
				break;
			case 'B':
				cout << "Dirigido por George Miller e estrelado por Tom Hardy e Charlize Theron, este filme se passa em um deserto pós-apocalíptico, onde um guerreiro relutante chamado Max se junta a um grupo de mulheres rebeldes em uma fuga alucinante. É uma verdadeira montanha-russa de ação e adrenalina." << endl;
				break;
			case 'C':
				cout << "Estrelado por Keanu Reeves, este filme acompanha um ex-assassino que busca vingança após o assassinato de seu cachorro e o roubo de seu carro. Com sequências de luta coreografadas de forma brilhante e um estilo visual único, 'John Wick' se tornou uma franquia muito popular." << endl;
				break;
			case 'D':
				cout << "Este filme indonésio dirigido por Gareth Evans é conhecido por suas cenas de luta intensas e brutais. A história segue um grupo de policiais que se aventuram em um prédio dominado por criminosos, resultando em uma batalha pela sobrevivência." << endl;
				break;
			case 'E':
				cout << "O quinto filme da franquia 'Velozes e Furiosos' leva a ação para o Rio de Janeiro, onde a equipe de pilotos habilidosos se envolve em um assalto de proporções épicas. Com perseguições de carros emocionantes e um elenco carismático, este filme entrega muita ação e diversão." << endl;
				break;
			case 'F':
				cout << "Estrelado por Daniel Craig como James Bond, este filme da franquia '007' segue o agente secreto em uma missão para deter um terrorista que ameaça o MI6. Com ação emocionante, reviravoltas surpreendentes e performances marcantes, é considerado um dos melhores filmes de James Bond." << endl;
				break;
			case 'G':
				cout << "Tom Cruise retorna como o agente Ethan Hunt nesta sequência cheia de ação." << endl;
				break;
			case 'H':
				cout << "Uma série de ação e fantasia que acompanha as disputas pelo Trono de Ferro em Westeros. Com batalhas, intrigas políticas e reviravoltas chocantes, a história narra a luta pelo poder entre diversas famílias nobres. A série é conhecida por sua imprevisibilidade, personagens complexos e produção de alta qualidade." << endl;
				break;
			case 'I':
				cout << "Um grupo de criminosos, liderados pelo Professor (Álvaro Morte), realiza um plano audacioso para assaltar a Casa da Moeda da Espanha e imprimir bilhões de euros enquanto mantém reféns. A série é conhecida por sua narrativa cativante, personagens carismáticos e reviravoltas inteligentes. Com cenas de ação intensas e estratégias elaboradas, 'La Casa de Papel' mantém a tensão durante toda a trama." << endl;
				break;
			case 'J':
				cout << "O professor de química Walter White, interpretado por Bryan Cranston, recebe um diagnóstico de câncer e decide entrar no mundo do tráfico de drogas para garantir o futuro financeiro de sua família. Ao lado de seu ex-aluno, Jesse Pinkman (Aaron Paul), Walter mergulha em um mundo perigoso, lidando com gangues rivais e agentes da DEA. Com uma trama cheia de suspense e personagens complexos, a série é aclamada por sua narrativa envolvente." << endl;
				break;
			case 'K':
				cout << "Baseada na série de quadrinhos de mesmo nome, a trama se passa em um mundo pós-apocalíptico infestado por zumbis. Os sobreviventes, liderados pelo ex-xerife Rick Grimes, interpretado por Andrew Lincoln, enfrentam não apenas os mortos-vivos, mas também ameaças de outros grupos de sobreviventes desesperados. Com cenas de ação tensas e uma atmosfera sombria, a série explora temas como sobrevivência, moralidade e os limites da humanidade." << endl;
				break;
			case 'L':
				cout << "Michael Scofield (Wentworth Miller) elabora um plano para ajudar seu irmão, Lincoln Burrows (Dominic Purcell), a escapar da prisão depois que ele é condenado injustamente por um crime que não cometeu. A série segue os dois irmãos enquanto enfrentam obstáculos, correm contra o tempo e desvendam uma conspiração de grandes proporções, com reviravoltas emocionantes e sequências de fuga eletrizantes." << endl;
				break;
			case 'M':
				cout << "O advogado cego Matt Murdock se transforma em um vigilante mascarado conhecido como Demolidor. Ele combate o crime nas ruas de Hell's Kitchen, em Nova York, enfrentando gangues e corruptos, enquanto lida com seus próprios demônios internos." << endl;
				break;
			case 'N':
				cout << "Ambientada na era dos guerreiros nórdicos, a série acompanha as aventuras de Ragnar Lothbrok, um lendário herói viking. Com batalhas épicas, exploração de terras desconhecidas e disputas de poder, 'Vikings' retrata a brutalidade e a coragem dos guerreiros da época." << endl;
				break;
			case 'O':
				cout << " Baseada na série de livros de Andrzej Sapkowski, a história segue Geralt de Rivia, um caçador de monstros conhecido como Witcher, em um mundo repleto de criaturas sobrenaturais e intrigas políticas. Geralt enfrenta desafios mortais enquanto tenta encontrar seu lugar em um mundo dividido." << endl;
				break;
			}
		}
		// Categoria com filmes de Aventura.
		else if(categoria_do_filme == 2)
		{
			
			cout << "" << endl;
			cout << "Boa escolha! Entao você gosta de uma boa aventura!" << endl;
			cout << "" << endl;
			cout << "Escolha entre os filmes ou séries a seguir: " << endl;
			cout << endl;
			cout << "Filmes de Aventura: " << endl;
			cout << endl;
			cout << "A. Indiana Jones: Os Caçadores da Arca Perdida (Raiders of the Lost Ark, 1981)" << endl;
			cout << "B. O Senhor dos Anéis: A Sociedade do Anel (The Lord of the Rings: The Fellowship of the Ring, 2001)" << endl;
			cout << "C. Piratas do Caribe: A Maldição do Pérola Negra (Pirates of the Caribbean: The Curse of the Black Pearl, 2003)" << endl;
			cout << "D. Jurassic Park (1993)" << endl;
			cout << "E. A Princesa Mononoke (Princess Mononoke, 1997)" << endl;
			cout << endl;
			cout << "Séries de Aventura: " << endl;
			cout << endl;
			cout << "F. The Mandalorian (The Mandalorian, 2019 - 2023) " << endl;
			cout << "G. Doctor Who (Doctor Who, 1963 - presente)" << endl;
			cout << "H. Lost (Lost, 2004 - 2010)" << endl;
			
			cout << "" << endl;
			cin >> letra_do_filme;
			
			switch(toupper(letra_do_filme))
			{
			case 'A':
				cout << "Dirigido por Steven Spielberg e estrelado por Harrison Ford, este filme segue as aventuras do icônico arqueólogo Indiana Jones em busca da Arca da Aliança. Repleto de ação, humor e suspense, é um clássico dos filmes de aventura." << endl;
				break;
			case 'B':
				cout << "Baseado na obra de J.R.R. Tolkien, este filme dirigido por Peter Jackson dá início à trilogia épica que acompanha Frodo Baggins em sua jornada para destruir um anel poderoso. Com paisagens deslumbrantes, personagens cativantes e uma história rica, é uma aventura imperdível." << endl;
				break;
			case 'C':
				cout << " Estrelado por Johnny Depp como o excêntrico Capitão Jack Sparrow, este filme traz uma mistura de ação, comédia e fantasia. A história gira em torno de piratas, tesouros e uma maldição sobrenatural." << endl;
				break;
			case 'D':
				cout << "Outro filme dirigido por Steven Spielberg, 'Jurassic Park' é um clássico moderno que leva os espectadores a uma ilha habitada por dinossauros recriados geneticamente. Repleto de emoção e suspense, o filme combina aventura e elementos de ficção científica de maneira brilhante." << endl;
				break;
			case 'E':
				cout << "Dirigido por Hayao Miyazaki e produzido pelo Studio Ghibli, este filme de animação japonês é uma jornada épica e poética ambientada em um mundo repleto de espíritos e criaturas fantásticas. Com uma mensagem ecológica e personagens complexos, é um filme de aventura cativante para todas as idades." << endl;
				break;
			case 'F':
				cout << "Ambientada no universo de 'Star Wars', a série acompanha um caçador de recompensas mascarado conhecido como o Mandaloriano. Ele embarca em uma jornada através de planetas perigosos e desconhecidos, enquanto protege uma misteriosa criança chamada Grogu. A série apresenta ação, aventura e um olhar mais profundo no universo expansivo de 'Star Wars'." << endl;
				break;
			case 'G':
				cout << "A série acompanha um ser extraterrestre conhecido como Doctor, que viaja no tempo e no espaço em sua nave espacial, a TARDIS. Ele embarca em aventuras emocionantes, encontrando criaturas alienígenas, resolvendo problemas e ajudando a salvar planetas e civilizações ao longo de sua jornada." << endl;
				break;
			case 'H':
				cout << "A série conta a história de um grupo de sobreviventes de um acidente de avião que fica preso em uma misteriosa ilha tropical. Conforme eles exploram a ilha, encontram perigos desconhecidos, mistérios intrigantes e segredos pessoais. 'Lost' combina elementos de aventura, drama e mistério, mantendo os telespectadores ansiosos por respostas ao longo de suas temporadas." << endl;
				break;
		}
		}
		// Categoria com filmes de Comédia.
		else if(categoria_do_filme == 3)
		{
			cout << "Boa escolha! Uma boa comedia eh sempre bem vinda!" << endl;
			cout << endl;
			cout << "Escolha entre os filmes a seguir: " << endl;
			cout << endl;
			cout << "Filmes de Comédia: " << endl;
			cout << endl;
			cout << "A. Apertem os Cintos... O Piloto Sumiu! (Airplane!, 1980)" << endl;
			cout << "B. Debi & Lóide: Dois Idiotas em Apuros (Dumb and Dumber, 1994)" << endl;
			cout << "C. Superbad: É Hoje! (Superbad, 2007)" << endl;
			cout << "D. Escola de Rock (School of Rock, 2003)" << endl;
			cout << "E. Quero Ser Grande (Big, 1988)" << endl;
			cout << "F. As Branquelas (White Chicks, 2004)" << endl;
			cout << endl;
			cout << "Séries de Comédia: " << endl;
			cout << endl;
			cout << "G. Friends (Friends, 1994 - 2004)" << endl;
			cout << "H. Dois Homens e Meio (Two and a Half Men, 2003 - 2015)" << endl;
			cout << "I. The Office (The Office, 2005 - 2013)" << endl;
			cout << "J. Brooklyn Nine-Nine (Brooklyn Nine-Nine, 2013 - 2021)" << endl;
			cout << "K. The Big Bang Theory (The Big Bang Theory, 2007 - 2019)" << endl;
			
			cout << "" << endl;
			cin >> letra_do_filme;
			
			switch(toupper(letra_do_filme))
			{
			case 'A':
				cout << "Esta paródia clássica do gênero de filmes de catástrofe segue a história de um avião em apuros. Repleto de piadas rápidas, trocadilhos e situações absurdas, é um dos filmes mais engraçados de todos os tempos." << endl;
				break;
			case 'B':
				cout << "Estrelado por Jim Carrey e Jeff Daniels, este filme conta a história de dois amigos muito atrapalhados em uma jornada maluca. Com humor físico e um roteiro hilário, é uma comédia que arranca risadas do início ao fim." << endl;
				break;
			case 'C':
				cout << "Esta comédia adolescente segue um grupo de amigos desajustados enquanto eles tentam aproveitar ao máximo sua última noite no ensino médio. Com diálogos afiados, personagens hilários e situações constrangedoras, é uma comédia moderna imperdível." << endl;
				break;
			case 'D':
				cout << "Estrelado por Jack Black, este filme segue um músico fracassado que se disfarça como professor substituto em uma escola. Com uma mistura de comédia e música, é uma história divertida e inspiradora sobre a formação de uma banda de rock." << endl;
				break;
			case 'E':
				cout << "Tom Hanks interpreta um menino de 12 anos que, após fazer um pedido em um parque de diversões, acorda no corpo de um adulto. Com uma abordagem encantadora e divertida sobre o amadurecimento e a nostalgia da infância, é uma comédia clássica que ainda diverte." << endl;
				break;
			case 'F':
				cout << "Dirigido pelo ator e diretor Keenen Ivory Wayans, este filme mostra dois agentes do FBI se disfarçando de irmãs ricas para se infiltrarem na alta sociedade. O filme foi um sucesso de bilheteria e aclamado pelo público, especialmente no Brasil." << endl;
				break;
			case 'G':
				cout << "A icônica série acompanha um grupo de seis amigos - Ross, Rachel, Monica, Chandler, Joey e Phoebe - enquanto eles enfrentam os altos e baixos da vida em Nova York. Com situações hilárias, diálogos afiados e personagens adoráveis, 'Friends' aborda amizade, amor, carreira e as loucuras do cotidiano." << endl;
				break;
			case 'H':
				cout << "A série segue a vida de Charlie Harper, um solteirão hedonista e mulherengo, e seu irmão Alan, um divorciado e pai de um adolescente. Juntos, eles criam situações cômicas enquanto enfrentam os desafios da vida adulta, com a adição do jovem Jake, filho de Alan, trazendo mais humor à dinâmica familiar." << endl;
				break;
			case 'I':
				cout << "Uma comédia de estilo mockumentary, 'The Office' mostra a rotina diária dos funcionários da filial da Dunder Mifflin Paper Company em Scranton, Pensilvânia. A série apresenta personagens excêntricos, situações constrangedoras e humor sarcástico, proporcionando uma visão hilária do ambiente de trabalho." << endl;
				break;
			case 'J':
				cout << "A série se passa em uma delegacia de polícia no Brooklyn, Nova York, e segue a vida do detetive Jake Peralta e seus colegas de trabalho. Com um elenco talentoso e engraçado, 'Brooklyn Nine-Nine' combina comédia, ação e momentos de amizade, oferecendo risadas garantidas." << endl;
				break;
			case 'K':
				cout << "A série gira em torno de um grupo de amigos nerds e socialmente desajeitados, incluindo os físicos Leonard e Sheldon, suas vizinhas Penny e Amy, e seus amigos Howard e Raj. Com referências à cultura geek, piadas inteligentes e interações sociais engraçadas, 'The Big Bang Theory' é conhecida por seu humor nerd e carismáticos personagens." << endl;
				break;
			}
		
		}
		// Categoria com filmes de Drama.
		else if(categoria_do_filme == 4)
		{
			cout << "" << endl;
			cout << "Uma boa escolha para quem gosta de sentir os momentos." << endl;
			cout << endl;
			cout << "Escolha entre os filmes e séries a seguir: " << endl;
			cout << endl;
			cout << "Filmes de Comédia: " << endl;
			cout << endl;
			cout << "A. O Poderoso Chefão (The Godfather, 1972)" << endl;
			cout << "B. Cidadão Kane (Citizen Kane, 1941)" << endl;
			cout << "C. A Lista de Schindler (Schindler's List, 1993)" << endl;
			cout << "D. Clube da Luta (Fight Club, 1999)" << endl;
			cout << "E. O Labirinto do Fauno (Pan's Labyrinth, 2006)" << endl;
			cout << "F. O Menino do Pijama Listrado (The Boy in the Striped Pajamas, 2008)" << endl;
			cout << "G. A Vida é Bela (La vita è bella, 1997)" << endl;
			cout << "H. La La Land: Cantando Estacoes (La La Land, 2016)" << endl;
			cout << "I. Túmulo dos Vagalumes (Hotaru no Haka, 1988)" << endl;
			cout << endl;
			cout << "Séries de Drama: " << endl;
			cout << endl;
			cout << "J. The Crown (The Crown, 2016 - presente) " << endl;
			cout << "K. This Is Us (This is Us, 2016 - 2022)" << endl;
			cout << "L. Westworld (Westworld, 2016 - 2022)" << endl;
			cout << "M. O Conto da Aia (The Handmaid´s Tale, 2017 - presente)" << endl;
			
			cout << "" << endl;
			cin >> letra_do_filme;
			
			switch(toupper(letra_do_filme))
			{
			case 'A':
				cout << "Dirigido por Francis Ford Coppola, este clássico do cinema acompanha a história da família Corleone, uma poderosa dinastia do crime organizado. Com atuações memoráveis, roteiro brilhante e uma narrativa envolvente, é considerado um dos melhores filmes de todos os tempos." << endl;
				break;
			case 'B':
				cout << "Dirigido por Orson Welles, este filme revolucionou a linguagem cinematográfica e conta a história de um magnata da imprensa em uma narrativa não linear. Com uma direção inovadora, atuações marcantes e reflexões sobre poder e ambição, é um marco na história do cinema." << endl;
				break;
			case 'C':
				cout << "Dirigido por Steven Spielberg, este filme é baseado em fatos reais e retrata a história de Oskar Schindler, um empresário alemão que salvou a vida de mais de mil judeus durante o Holocausto. Com uma abordagem sensível e emocional, o filme retrata os horrores do nazismo e a coragem humana." << endl;
				break;
			case 'D':
				cout << "Dirigido por David Fincher e estrelado por Edward Norton e Brad Pitt, este filme aborda questões de identidade e alienação na sociedade moderna. Com uma narrativa ousada, reviravoltas surpreendentes e uma reflexão sobre o consumismo e a masculinidade tóxica, é um drama psicológico fascinante." << endl;
				break;
			case 'E':
				cout << "Dirigido por Guillermo del Toro, este filme mescla fantasia e drama para contar a história de uma jovem garota durante a Guerra Civil Espanhola. Com uma estética visual deslumbrante, elementos de conto de fadas e uma reflexão sobre a crueldade e a inocência, é um filme emocionante e poético." << endl;
				break;
			case 'F':
				cout << "Dirigido por Mark Herman, este filme mostra, durante a Segunda Guerra Mundial, Bruno, um garoto de oito anos, vive próximo a um campo de concentração, onde seu pai acaba de se tornar comandante. Infeliz e solitário, ele vagueia fora de sua casa e certo dia encontra Shmuel, um menino judeu de sua idade. Embora a cerca de arame farpado do campo os separem, os meninos começam uma amizade proibida." << endl;
				break;
			case 'G':
				cout << "Dirigido por Roberto Benigni, mesmo ator principal do filme. Este filme emocionante e comovente que conta a história de um pai judeu e seu filho pequeno que são levados para um campo de concentração durante a Segunda Guerra Mundial. Com amor, criatividade e bom humor, o pai faz com que o filho acredite que estão participando de um jogo para protegê-lo do horror em que estão inseridos. É uma fábula tocante sobre o amor e a fantasia em meio à dura realidade da guerra. " << endl;
				break;
			case 'H':
				cout << "Dirigido por Damien Chazelle, este filme musical emocionante e encantador sobre um pianista de jazz e uma atriz iniciante que se conhecem e se apaixonam em Los Angeles. Enquanto perseguem seus sonhos de fama e sucesso, eles tentam fazer o relacionamento amoroso dar certo." << endl;
				break;
			case 'I':
				cout << "Dirigido por Isao Takahata, este filme é baseado no romance semi-autobiográfico de Akiyuki Nosaka e conta a história de dois irmãos, Seita e Setsuko, lutando para sobreviver durante os meses finais da Segunda Guerra Mundial." << endl;
				break;
			case 'J':
				cout << "A série retrata a vida da Rainha Elizabeth II desde seu início como monarca jovem e inexperiente até os desafios enfrentados ao longo de seu reinado. Explorando eventos históricos e as complexidades da realeza, 'The Crown' mergulha no mundo da realeza britânica com uma narrativa envolvente." << endl;
				break;
			case 'K':
				cout << "A série segue a vida e as histórias interligadas de diversos personagens ao longo de diferentes décadas. Com um foco em relacionamentos familiares, amor e perda, 'This Is Us' aborda questões profundas e emocionais, oferecendo momentos tocantes e reflexões sobre a vida." << endl;
				break;
			case 'L':
				cout << "Situada em um parque temático futurista povoado por androides, a série explora a interação entre humanos e máquinas, questionando a natureza da consciência e a moralidade. Com um enredo complexo e repleto de reviravoltas, 'Westworld' mescla drama, ação e ficção científica de forma intrigante." << endl;
				break;
			case 'M':
				cout << "Baseada no livro de Margaret Atwood, a série apresenta um futuro distópico onde mulheres férteis são forçadas a servir como aias para procriação. Explorando temas como opressão, resistência e identidade, 'The Handmaid's Tale' é uma jornada emocional e perturbadora." << endl;
				break;
			}
		}
		// Categoria com filmes de Fantasia.
		else if(categoria_do_filme == 5)
		{
			cout << "" << endl;
			cout << "Boa escolha! Aqui há alguns filmes direcionados aqueles que buscam aventura e emoção em mundos imaginários repletos de magia e criaturas fantásticas." << endl;
			cout << endl;
			cout << "Escolha entre os filmes e séries a seguir: " << endl;
			cout << endl;
			cout << "Filmes de Fantasia: " << endl;
			cout << endl;
			cout << "A. O Senhor dos Anéis: A Sociedade do Anel (The Lord of the Rings: The Fellowship of the Ring, 2001)" << endl;
			cout << "B. Harry Potter e a Pedra Filosofal (Harry Potter and the Philosopher's Stone, 2001)" << endl;
			cout << "C. A Viagem de Chihiro (Spirited Away, 2001)" << endl;
			cout << "D. O Labirinto do Fauno (Pan's Labyrinth, 2006)" << endl;
			cout << "E. A História Sem Fim (The NeverEnding Story, 1984)" << endl;
			cout << endl;
			cout << "Séries de Fantasia: " << endl;
			cout << endl;
			cout << "F. Stranger Things (Stranger Things, 2016 - presente)" << endl;
			cout << "G. Outlander (Outlander, 2014 - presente) " << endl;
			cout << "H. Fronteiras do Universo(His Dark Materials, 2019 - 2022)" << endl;
			
			cout << "" << endl;
			cin >> letra_do_filme;
			
			switch(toupper(letra_do_filme))
			{
			case 'A':
				cout << "Baseado na obra de J.R.R. Tolkien, este filme dirigido por Peter Jackson dá início à trilogia épica que segue a jornada do hobbit Frodo Baggins para destruir um anel poderoso. Com uma história rica, personagens memoráveis e paisagens deslumbrantes, é um clássico do gênero fantasia." << endl;
				break;
			case 'B':
				cout << "Este filme, o primeiro da franquia 'Harry Potter', apresenta o jovem bruxo Harry Potter em sua jornada para descobrir seu destino na Escola de Magia e Bruxaria de Hogwarts. Com magia, aventura e um mundo repleto de criaturas fantásticas, é uma história envolvente que cativa pessoas de todas as idades." << endl;
				break;
			case 'C':
				cout << "Dirigido por Hayao Miyazaki e produzido pelo Studio Ghibli, este filme de animação japonês segue a história de Chihiro, uma menina que se vê em um mundo mágico após seus pais serem transformados em porcos. Com uma animação deslumbrante e uma história envolvente, é considerado uma obra-prima da fantasia." << endl;
				break;
			case 'D':
				cout << "Dirigido por Guillermo del Toro, este filme mescla fantasia e drama para contar a história de uma jovem garota durante a Guerra Civil Espanhola. Com uma estética visual deslumbrante, elementos de conto de fadas e uma narrativa sombria e poética, é uma obra-prima que mergulha no poder da imaginação." << endl;
				break;
			case 'E':
				cout << "Baseado no livro de Michael Ende, este filme acompanha a jornada de um jovem garoto chamado Bastian em um mundo de fantasia chamado Fantasia. Com criaturas mágicas, paisagens fascinantes e uma mensagem sobre a importância da imaginação, é um filme que encanta o público de todas as idades." << endl;
				break;
			case 'F':
				cout << "Situada nos anos 80, a série segue um grupo de crianças que se depara com fenômenos sobrenaturais e uma dimensão paralela chamada 'O Mundo Invertido'. Com referências à cultura pop dos anos 80 e um toque de suspense, 'Stranger Things' combina elementos de fantasia, horror e aventura." << endl;
				break;
			case 'G':
				cout << "Baseada nos livros de Diana Gabaldon, a série acompanha a enfermeira Claire Randall, que viaja no tempo e vai parar na Escócia do século XVIII. Lá, ela se envolve em eventos históricos, apaixona-se por um guerreiro escocês e vive uma intensa história de amor e aventura, com elementos de romance, história e fantasia." << endl;
				break;
			case 'H':
				cout << "Baseada na trilogia de Philip Pullman, a série segue a jornada de uma jovem chamada Lyra Belacqua em um mundo onde cada pessoa tem um daemon, uma manifestação física de sua alma. Lyra embarca em uma busca perigosa para descobrir segredos sobre partículas misteriosas, mundos paralelos e uma organização sinistra." << endl;
				break;
			}
		}
		
		// Categoria com filmes de Ficção científica.
		else if(categoria_do_filme == 6)
		{
			cout << "" << endl;
			cout << "Boa escolha! O desejo de explorar mundos inimagináveis e imaginar futuros possíveis através da ciência e tecnologia esta com voce!" << endl;
			cout << endl;
			cout << "Escolha entre os filmes a seguir: " << endl;
			cout << endl;
			cout << "Filmes de Ficção Científica: " << endl;
			cout << endl;
			cout << "A. Blade Runner (1982)" << endl;
			cout << "B. Matrix (1999)" << endl;
			cout << "C. Interestelar (2014)" << endl;
			cout << "D. Ex-Machina: Instinto Artificial (Ex Machina, 2014)" << endl;
			cout << "E. A Chegada (Arrival, 2016)" << endl;
			cout << "F. Star Wars : Episodio V : O Imperio Contra-Ataca (The Empire Strikes Back : Star Wars : Episode V, 1980)" << endl;
			cout << "G. Alita: Anjo de Combate (Battle Angel Alita, 2019)" << endl;
			cout << endl;
			cout << "Séries de Ficção Científica: " << endl;
			cout << endl;
			cout << "H. Black Mirror (Black Mirror, 2011 - presente)" << endl;
			cout << "I. Stranger Things (Stranger Things, 2016 - presente)" << endl;
			cout << "J. Westworld (Westworld, 2016 - 2022)" << endl;
			cout << "K. The Expanse (The Expanse, 2015 - presente)" << endl;
			
			cout << "" << endl;
			cin >> letra_do_filme;
			
			switch(toupper(letra_do_filme))
			{
			case 'A':
				cout << "Dirigido por Ridley Scott, este clássico do gênero apresenta um futuro distópico onde humanos e replicantes (androides) coexistem. O filme segue um detetive que deve caçar replicantes rebeldes. Com uma atmosfera sombria, questionamentos sobre identidade e avanços tecnológicos, é uma obra-prima da ficção científica." << endl;
				break;
			case 'B':
				cout << "Dirigido pelos irmãos Wachowski, 'Matrix' narra a história de um programador que descobre que a realidade em que vive é uma simulação controlada por máquinas. Com sequências de ação inovadoras, filosofia complexa e efeitos visuais revolucionários, o filme se tornou um marco no gênero." << endl;
				break;
			case 'C':
				cout << " Dirigido por Christopher Nolan, este filme épico acompanha uma equipe de astronautas que viaja pelo espaço em busca de um novo lar para a humanidade. Com uma abordagem científica sólida, visuais deslumbrantes e uma trama emocionante, é uma exploração fascinante do espaço e da condição humana." << endl;
				break;
			case 'D':
				cout << "Este filme dirigido por Alex Garland conta a história de um jovem programador que é convidado a participar de um experimento envolvendo uma inteligência artificial com aparência humana. Com uma abordagem cerebral, questionamentos éticos e atuações cativantes, é um thriller psicológico envolvente." << endl;
				break;
			case 'E':
				cout << "Dirigido por Denis Villeneuve, este filme segue uma linguista que é convocada para decifrar a linguagem de seres extraterrestres que chegaram à Terra. Com uma atmosfera tensa, abordagem inteligente e reflexões sobre comunicação e tempo, é um filme que desafia as expectativas do gênero." << endl;
				break;
			case 'F':
				cout << "Dirigido por Irvin Kershner, este incrível filme segue a luta continua da Aliança Rebelde contra o Imperio Galactico. Com batalhas espaciais impressionantes e personagens icônicos, é uma aventura inesquecível." << endl;
				break;
			case 'G':
				cout << "Dirigido por Robert Rodriguez, este filme aborda uma ciborgue que é encontrada pelo cientista Dyson Ido e busca descobrir sua origem. Com cenas de ação impressionantes e uma história envolvente, é uma aventura inesquecível." << endl;
				break;
			case 'H':
				cout << "Uma série antológica que explora o impacto da tecnologia na sociedade. Cada episódio apresenta uma história independente e sombria, abordando temas como redes sociais, inteligência artificial, realidade virtual e consequências imprevistas do avanço tecnológico. 'Black Mirror' oferece uma visão distópica e provocativa do futuro próximo." << endl;
				break;
			case 'I':
				cout << "Situada nos anos 80, a série combina elementos de ficção científica, horror e aventura. Um grupo de crianças se depara com fenômenos sobrenaturais e uma dimensão paralela chamada 'O Mundo Invertido'. Com referências à cultura pop da década de 80, a série oferece suspense, mistério e uma atmosfera envolvente." << endl;
				break;
			case 'J':
				cout << "Situada em um parque temático futurista povoado por androides, a série questiona a natureza da consciência e a moralidade. Os visitantes do parque podem realizar seus desejos mais obscuros sem consequências, enquanto os androides começam a desenvolver sua própria consciência. 'Westworld' mescla drama, ação e mistério em um mundo repleto de reviravoltas e questionamentos existenciais." << endl;
				break;
			case 'K':
				cout << "Baseada na série de livros de James S.A. Corey, a trama se passa em um futuro próximo, onde a humanidade colonizou o sistema solar. A série aborda a tensão política, disputas entre planetas e uma conspiração que pode levar a uma guerra interplanetária. 'The Expanse' combina elementos de ficção científica, drama e ação, explorando temas como exploração espacial, política e sobrevivência." << endl;
				break;
			}
		}
		// Categoria com filmes de Mistério.
		else if(categoria_do_filme == 7)
		{
			cout << "" << endl;
			cout << "Aqui alguns filmes para voce que adora desvendar enigmas e mergulhar em histórias cheias de suspense e reviravoltas surpreendentes." << endl;
			cout << endl;
			cout << "Escolha entre os filmes e séries a seguir: " << endl;
			cout << endl;
			cout << "Filmes de Mistério: " << endl;
			cout << endl;
			cout << "A. Seven: Os Sete Crimes Capitais (Se7en, 1995)" << endl;
			cout << "B. O Sexto Sentido (The Sixth Sense, 1999) " << endl;
			cout << "C. Clube dos Cinco (The Breakfast Club, 1985)" << endl;
			cout << "D. A Origem (Inception, 2010)" << endl;
			cout << "E. Zodíaco (Zodiac, 2007)" << endl;
			cout << "F. Sherlock Holmes (Sherlock Holmes, 2009)" << endl;
			cout << endl;
			cout << "Séries de Mistério: " << endl;
			cout << endl;
			cout << "G. Sherlock (Sherlock, 2010 - 2017)" << endl;
			cout << "H. True Detective (True Detective, 2014 - presente) " << endl;
			cout << "I. Mindhunter (Mindhunter, 2017 - 2019)" << endl;
			cout << "J. Broadchurch (Broadchurch, 2013 - 2017)" << endl;
			
			cout << "" << endl;
			cin >> letra_do_filme;
			
			switch(toupper(letra_do_filme))
			{
			case 'A':
				cout << "Dirigido por David Fincher, este filme segue dois detetives que investigam uma série de assassinatos baseados nos sete pecados capitais. Com uma atmosfera sombria, reviravoltas chocantes e uma narrativa envolvente, é um thriller psicológico arrepiante." << endl;
				break;
			case 'B':
				cout << "Dirigido por M. Night Shyamalan, este filme conta a história de um menino que vê e fala com os mortos e seu terapeuta que tenta ajudá-lo. Com uma reviravolta surpreendente e uma atmosfera de suspense, é um filme que cativa o espectador até o final." << endl;
				break;
			case 'C':
				cout << "Dirigido por John Hughes, este filme se passa durante um sábado na detenção de cinco estudantes de estereótipos diferentes. À medida que passam o dia juntos, segredos são revelados e surgem laços inesperados. Com diálogos inteligentes e uma abordagem profunda sobre identidade e relacionamentos, é um clássico do gênero." << endl;
				break;
			case 'D':
				cout << "Dirigido por Christopher Nolan, este filme segue um grupo de ladrões especializados em invadir os sonhos das pessoas para extrair informações. Com uma trama complexa, sequências de ação eletrizantes e uma exploração da realidade e da mente humana, é um filme intrigante e repleto de mistérios." << endl;
				break;
			case 'E':
				cout << "Dirigido por David Fincher, este filme é baseado em eventos reais e segue a busca obsessiva de um jornalista e de um investigador policial pelo assassino conhecido como 'Zodíaco'. Com uma narrativa meticulosa, interpretações brilhantes e uma atmosfera de tensão crescente, é um mistério fascinante que mantém o espectador envolvido do início ao fim." << endl;
				break;
			case 'F':
				cout << "Dirigido por Guy Ritchie e estrelado por Robert Downey Jr., este filme aborda o detetive mais famoso do mundo, Sherlock Holmes, em mais um de seus intrigantes casos, com o auxílio de seu parceiro dr. John Watson. " << endl;
				break; 
			case 'G':
				cout << "Esta série britânica segue as aventuras do lendário detetive Sherlock Holmes e seu parceiro, Dr. John Watson, enquanto resolvem crimes complexos em uma Londres contemporânea. Com uma abordagem moderna, cada episódio é um quebra-cabeça intrigante repleto de reviravoltas." << endl;
				break;
			case 'H':
				cout << "A série segue diferentes detetives e suas investigações ao longo de várias temporadas independentes. Cada temporada apresenta uma história única com um elenco diferente, explorando crimes obscuros, segredos enterrados e as complexidades da natureza humana." << endl;
				break;
			case 'I':
				cout << "Baseada em eventos reais, 'Mindhunter' segue dois agentes do FBI que entrevistam assassinos em série para entender suas motivações e desenvolver perfis criminais. A série mergulha na mente dos criminosos e na psicologia por trás de seus atos perturbadores." << endl;
				break;
			case 'J':
				cout << "Após o assassinato de um garoto em uma pequena cidade costeira, 'Broadchurch' acompanha a investigação liderada pelos detetives Alec Hardy e Ellie Miller. A série explora o impacto do crime na comunidade, revelando segredos sombrios e mantendo os espectadores em suspense." << endl;
				break;
			}
		}
		// Categoria com filmes de Terror.
		else if(categoria_do_filme == 8)
		{
			cout << "" << endl;
			cout << "Ótima escolha! Experiências assustadoras e inesquecíveis adiante!" << endl;
			cout << endl;
			cout << "Escolha entre os filmes e séries a seguir: " << endl;
			cout << endl;
			cout << "Filmes de Terror: " << endl;
			cout << endl;
			cout << "A. O Exorcista (The Exorcist, 1973)" << endl;
			cout << "B. O Iluminado (The Shining, 1980)" << endl;
			cout << "C. O Massacre da Serra Elétrica (The Texas Chainsaw Massacre, 1974)" << endl;
			cout << "D. Psicose (Psycho, 1960)" << endl;
			cout << "E. Corra! (Get Out, 2017)" << endl;
			cout << "F. A Noite dos Mortos-Vivos (Night of the Living Dead, 1968)" << endl; 
			cout << "G. Pânico (Scream, 1996)" << endl;
			cout << "H. Jogos Mortais (Saw, 2004)" << endl;
			cout << endl;
			cout << "Séries de Terror: " << endl;
			cout << endl;
			cout << "I. American Horror Story (American Horror Story, 2011 - presente)" << endl;
			cout << "J. Yamishibai (Yamishibai : Japanese Ghost Stories, 2013 - presente)" << endl;
			cout << "K. The Haunting of Hill House (The Haunting of Hill House, 2018 - presente)" << endl;
			cout << "L. Penny Dreadful(Penny Dreadful, 2014 - 2016)" << endl;
			cout << "M. Junji Ito Collection (Junji Ito Collection, 2018)" << endl;
			
			cout << "" << endl;
			cin >> letra_do_filme;
			
			switch(toupper(letra_do_filme))
			{
			case 'A':
				cout << "Dirigido por William Friedkin, este clássico do terror segue a história de uma jovem possuída pelo demônio e os esforços de um padre para exorcizá-la. Com uma atmosfera intensa, cenas perturbadoras e uma abordagem psicológica, é considerado um dos filmes de terror mais assustadores de todos os tempos." << endl;
				break;
			case 'B':
				cout << "Baseado no livro de Stephen King e dirigido por Stanley Kubrick, este filme acompanha um escritor que se muda com sua família para um hotel isolado durante o inverno. Conforme a solidão e a influência sobrenatural se instalam, a sanidade do escritor é colocada em xeque. Com uma atuação icônica de Jack Nicholson e uma atmosfera aterrorizante, é um clássico do horror psicológico." << endl;
				break;
			case 'C':
				cout << "Dirigido por Tobe Hooper, este filme de terror segue um grupo de jovens que se tornam alvos de uma família canibal liderada por Leatherface. Com sua violência gráfica e atmosfera perturbadora, é um dos filmes mais influentes do gênero slasher." << endl;
				break;
			case 'D':
				cout << "Dirigido por Alfred Hitchcock, este clássico do suspense e terror psicológico acompanha a história de uma secretária que foge após roubar dinheiro e se hospeda em um motel gerenciado por Norman Bates. Com uma trama cheia de reviravoltas, uma icônica cena de chuveiro e uma atmosfera tensa, é um dos filmes mais conhecidos de Hitchcock." << endl;
				break;
			case 'E':
				cout << "Dirigido por Jordan Peele, este filme traz uma mistura de terror e crítica social. A história segue um jovem afro-americano que visita a família de sua namorada branca e descobre segredos perturbadores. Com uma narrativa inteligente, comentários sociais afiados e momentos de suspense arrepiantes, é um filme de terror moderno aclamado pela crítica." << endl;
				break;
			case 'F':
				cout << "Dirigido por George Romero, este clássico do terror é uns dos mais importantes na ascensão dos filmes de zumbis.  A radiação provocada pela queda de um satélite faz com que os mortos saiam de suas covas, fazendo com que um grupo de pessoas refugiados em uma casa tenham que lutar pela sobrevivência contra uma horda sedenta de carne e sangue." << endl;
				break;
			case 'G':
				cout << "Dirigido por Wes Craven, este estrelado filme aborda Sidney Prescott (Neve Campbell), que começa a desconfiar que a morte de dois estudantes está relacionada com o falecimento da sua mãe, há cerca de um ano. Enquanto isso, os jovens da pacata cidadezinha começam a receber ligações de um maníaco que faz perguntas sobre filmes de horror." << endl;
				break;
			case 'H':
				cout << "Dirigido por James Wan, este filme é centrado na luta contra o tempo de dois homens, o médico Dr. Lawrence Gordon (Cary Elwes) e o fotógrafo Adam Stanheight (Leigh Whannell). Eles acordam em um banheiro imundo presos pelos pés numa corrente bastante forte. No meio deles há um corpo de um homem ensanguentado com um revólver e um gravador nas mãos." << endl;
				break;
			case 'I':
				cout << "A série é uma antologia de temporadas independentes, cada uma com uma história e ambientação diferentes. Cada temporada aborda temas de horror e terror, explorando desde casas assombradas até instituições psiquiátricas macabras. 'American Horror Story' é conhecida por sua atmosfera sombria, personagens memoráveis e narrativas envolventes." << endl;
				break;
			case 'J':
				cout << "uma série de antologia de horror japonesa que se baseia na tradição do kamishibai, uma forma de teatro de papel. Cada episódio apresenta uma história de terror única, inspirada em lendas urbanas, folclore e contos populares do Japão. A série é conhecida por sua animação em estilo de teatro de papel e atmosfera assustadora." << endl;
				break;
			case 'K':
				cout << "A série acompanha uma família traumatizada pelos eventos ocorridos em sua antiga residência, a assustadora Mansão Hill. Alternando entre passado e presente, 'The Haunting of Hill House' explora segredos obscuros, fenômenos sobrenaturais e o impacto duradouro do medo." << endl;
				break;
			case 'L':
				cout << "Ambientada na Londres vitoriana, 'Penny Dreadful' reúne personagens clássicos da literatura de terror, como Drácula, Frankenstein e Dorian Gray. A série explora o submundo sombrio da cidade, repleto de criaturas sobrenaturais, magia negra e mistérios obscuros." << endl;
				break;
			case 'M':
				cout << "uma série de antologia de terror baseada nos mangás do aclamado autor de horror Junji Ito. Cada episódio apresenta uma história diferente, trazendo os elementos característicos do trabalho de Ito, como o grotesco, o surreal e o sobrenatural. As histórias exploram medos e pesadelos profundos, oferecendo visuais perturbadores e narrativas arrepiantes." << endl;
				break;
			}
		}
		// Categoria com filmes de Romance.
		else if(categoria_do_filme == 9)
		{
			cout << "" << endl;
			cout << "Boa escolha! Os filmes de romance são a escolha perfeita para aquecer o coração e alimentar a alma." << endl;
			cout << endl;
			cout << "Escolha entre os filmes e séries a seguir: " << endl;
			cout << endl;
			cout << "Filmes de Romance: " << endl;
			cout << endl;
			cout << "A. E o Vento Levou (Gone with the Wind, 1939)" << endl;
			cout << "B. Orgulho e Preconceito (Pride and Prejudice, 2005)" << endl;
			cout << "C. Simplesmente Amor (Love Actually, 2003)" << endl;
			cout << "D. Titanic (1997)" << endl;
			cout << "E. Me Chame pelo Seu Nome (Call Me by Your Name, 2017)" << endl;
			cout << "F. Your Name (Kimi no Na Wa, 2016)" << endl;
			cout << "G. Weathering with You ( Tenki no Ko, 2019)" << endl; 
			cout << endl;
			cout << "Séries de Romance: " << endl;
			cout << endl;
			cout << "H. Bridgerton (Bridgerton, 2020 - presente) " << endl;
			cout << "I. Grey's Anatomy (Grey's Anatomy, 2005 - presente) " << endl;
			cout << "J. Jane the Virgin (Jane the Virgin, 2014 - 2019)" << endl;
			cout << "K. Outlander (Outalander, 2014 - presente) " << endl;
			
			cout << "" << endl;
			cin >> letra_do_filme;
			
			switch(toupper(letra_do_filme))
			{
			case 'A':
				cout << "Dirigido por Victor Fleming, este épico romântico se passa durante a Guerra Civil Americana e narra a história de Scarlett O'Hara e Rhett Butler. Com um cenário histórico, performances memoráveis e um romance cheio de altos e baixos, é um clássico do cinema." << endl;
				break;
			case 'B':
				cout << "Baseado no romance de Jane Austen e dirigido por Joe Wright, este filme conta a história das cinco irmãs Bennet em sua busca pelo amor e casamento. Com uma bela fotografia, diálogos encantadores e uma química irresistível entre Elizabeth Bennet e Mr. Darcy, é uma adaptação apaixonante." << endl;
				break;
			case 'C':
				cout << "Dirigido por Richard Curtis, este filme segue uma série de histórias de amor interligadas durante a temporada de Natal em Londres. Com um elenco estelar, momentos emocionantes e uma abordagem divertida e romântica, é um filme encantador que celebra o amor em suas diversas formas." << endl;
				break;
			case 'D':
				cout << "Dirigido por James Cameron, este épico romântico se passa a bordo do famoso navio durante sua fatídica viagem inaugural. A história segue a jovem Rose e o artista Jack, que se apaixonam apesar das diferenças sociais. Com uma combinação de romance, tragédia e ação, o filme conquistou o coração de milhões de espectadores em todo o mundo." << endl;
				break;
			case 'E':
				cout << "Dirigido por Luca Guadagnino, este filme se passa no norte da Itália durante o verão de 1983 e segue o relacionamento entre Elio, um jovem de 17 anos, e Oliver, um estudante de pós-graduação que passa o verão na casa de sua família. Com uma atmosfera delicada, performances extraordinárias e uma história de amor sensível, é um filme que emociona e cativa." << endl;
				break;
			case 'F':
				cout << "Dirigido por Makoto Shinkai, este filme mostra a diferente relacao de amor entre dois jovens que vivem em tempos e locais distintos, mas por certas cincunstancias trocam de corpo. Eh um filme comovente e com um final espetacular." << endl;
				break;
			case 'G':
				cout << "Dirigido por Makoto Shinkai, este filme aborda a difícil situação vivida por Hodaka Morishima, um garoto menor de idade que, ao deixar sua casa, conhece uma garota com poderes 'temporais', momento em que sua vida é transformada para sempre." << endl;
				break;
			case 'H':
				cout << "Baseada na série de livros de Julia Quinn, 'Bridgerton' é um drama de época que segue a vida e os romances da família Bridgerton na alta sociedade de Londres. A série apresenta intrigas amorosas, casamentos arranjados, segredos escandalosos e momentos românticos em uma atmosfera luxuosa do século XIX." << endl;
				break;
			case 'I':
				cout << "Um drama médico que também aborda intensamente os relacionamentos românticos entre os médicos e estagiários do Hospital Grey Sloan Memorial. A série apresenta histórias de amor complicadas, triângulos amorosos e momentos emocionantes, enquanto os personagens enfrentam desafios pessoais e profissionais." << endl;
				break;
			case 'J': 
				cout << "uma comédia romântica que gira em torno da vida de Jane Villanueva, uma jovem latina religiosa e virgem que acidentalmente é inseminada artificialmente. A série acompanha as reviravoltas e complicações em sua vida amorosa, enquanto ela lida com triângulos amorosos, descobre segredos de família e busca o verdadeiro amor." << endl;
				break;
			case 'K':
				cout << "Baseada nos livros de Diana Gabaldon, 'Outlander' segue a história de Claire Randall, uma enfermeira do século XX que viaja no tempo para a Escócia do século XVIII. Lá, ela se envolve em um romance apaixonante com Jamie Fraser, enfrentando obstáculos e desafios ao longo de suas jornadas no tempo. A série combina romance, aventura e elementos históricos em uma trama cativante." << endl;
				break;
			}
		}
		// Categoria com filmes infantis.
		else if(categoria_do_filme == 10)
		{
			cout << "" << endl;
			cout << "Boa escolha! Vejo que voce busca histórias divertidas e emocionantes que encantam e inspiram crianças e adultos de todas as idades !" << endl;
			cout << endl;
			cout << "Escolha entre os filmes e séries a seguir: " << endl;
			cout << endl;
			cout << "Filmes Infanto-juvenis" << endl;
			cout << endl;
			cout << "A. Toy Story (1995)" << endl;
			cout << "B. O Rei Leão (The Lion King, 1994)" << endl;
			cout << "C. Procurando Nemo (Finding Nemo, 2003)" << endl;
			cout << "D. A Bela e a Fera (Beauty and the Beast, 1991)" << endl;
			cout << "E. Up: Altas Aventuras (Up, 2009)" << endl;
			cout << "F. Frozen: Uma Aventura Congelante (Frozen, 2013)" << endl;
			cout << "G. Shrek (2001)" << endl;
			cout << "H. Moana: Um Mar de Aventuras (Moana, 2016)" << endl;
			cout << "I. Ratatouille (2007)" << endl;
			cout << "J. Mulan (1998) " << endl;
			cout << "K. Gato de Botas 2: O Último Pedido (Puss in Boots: The Last Wish, 2022)" << endl;
			cout << endl;
			cout << "Séries Infanto-juvenis: " << endl;
			cout << endl;
			cout << "L. Bob Esponja (SpongeBob SquarePants, 1999 - presente)" << endl;
			cout << "M. Hora de Aventura (Adventure Time, 2010 - 2018)" << endl;
			cout << "N. Apenas um Show (Regular Show, 2010 - 2017)" << endl;
			cout << "O. O Incrível Mundo de Gumball (The Amazing World of Gumball, 2011 - presente)" << endl;
			cout << "P. Steven Universo (Steven Universe, 2013 - 2019)" << endl;
			
			cout << "" << endl;
			cin >> letra_do_filme;
			
			switch(toupper(letra_do_filme))
			{
			case 'A':
				cout << "Uma animação da Pixar que conta a história dos brinquedos de Andy e sua jornada para encontrar seu propósito. Repleto de aventura, amizade e emoção, é um clássico moderno." << endl;
				break;
			case 'B':
				cout << "Um filme da Disney que segue a jornada de Simba, um jovem leão destinado a se tornar rei da savana. Com uma trilha sonora inesquecível e personagens carismáticos, é um filme adorado por gerações." << endl;
				break;
			case 'C':
				cout << "Uma animação da Pixar que narra a busca emocionante de um peixe-palhaço chamado Marlin por seu filho Nemo, perdido no oceano. Com humor encantador e belas animações subaquáticas, é um filme cativante para crianças e adultos." << endl;
				break;
			case 'D':
				cout << "Um conto de fadas clássico da Disney sobre uma jovem chamada Bela que se apaixona por uma fera amaldiçoada. Com músicas encantadoras e uma mensagem poderosa sobre a importância da verdadeira beleza interior, é um filme atemporal." << endl;
				break;
			case 'E':
				cout << "Uma aventura emocionante da Pixar que segue Carl, um idoso solitário, e seu jovem amigo Russell em uma jornada pelos céus em uma casa flutuante. Com uma história comovente e personagens adoráveis, é um filme que inspira imaginação e exploração." << endl;
				break;
			case 'F':
				cout << "Uma animação da Disney que conta a história das princesas Elsa e Anna em um reino de inverno eterno. Com músicas icônicas, mensagens de amor fraterno e empoderamento feminino, é um filme que conquistou o coração de milhões de crianças ao redor do mundo." << endl;
				break;
			case 'G':
				cout << "Uma animação divertida e irreverente que subverte os contos de fadas tradicionais, seguindo as aventuras do ogro Shrek e seu fiel companheiro, o Burro. Com humor inteligente, personagens engraçados e uma mensagem sobre aceitação e autoaceitação, é um filme adorado por crianças e adultos." << endl;
				break;
			case 'H':
				cout << "Uma animação da Disney que acompanha a corajosa Moana em sua jornada para restaurar o coração da deusa Te Fiti e salvar sua ilha. Com uma trilha sonora cativante e uma protagonista determinada, é um filme que celebra a cultura polinésia e a força interior." << endl;
				break;
			case 'I':
				cout << "Uma animação da Pixar que narra a história de Remy, um rato com um talento culinário excepcional, que busca realizar seu sonho de se tornar um grande chef. Com uma abordagem única e uma mensagem inspiradora sobre seguir sua paixão, é um filme que encanta tanto crianças quanto adultos." << endl;
				break;
			case 'J':
				cout << "Uma corajosa jovem chinesa se disfarça de homem e se junta ao exército para lutar no lugar de seu pai, tornando-se uma das heroínas mais adoradas da Disney." << endl;
				break;
			case 'K':
				cout << "Nesta animação da DreamWorks, o Gato de Botas descobre que sua paixão pela aventura cobrou seu preço: por conta de seu gosto pelo perigo, ele queimou oito de suas nove vidas. Com apenas uma vida restante, o Gato precisa pedir ajuda para uma antiga parceira - que atualmente é sua rival e inimiga mortal, Kitty Pata Mansa - para continuar vivo." << endl;
				break;
			case 'L':
				cout << "Uma animação que se passa na cidade submarina de Bikini Bottom e segue as trapalhadas e aventuras do otimista Bob Esponja Calça Quadrada e seus amigos marinhos. Com muito humor e personagens carismáticos, a série estimula a imaginação das crianças e aborda temas como amizade, trabalho em equipe e resiliência." << endl;
				break;
			case 'M':
				cout << "Segue as aventuras de Finn, um garoto humano, e seu melhor amigo, Jake, um cão com habilidades mágicas. Juntos, eles exploram a Terra de Ooo, conhecem personagens coloridos e enfrentam desafios emocionantes em um mundo pós-apocalíptico cheio de fantasia, humor e reflexões sobre amizade e crescimento." << endl;
				break;
			case 'N':
				cout << "Uma animação que acompanha as aventuras de Mordecai, um gaio-azul, e Rigby, um guaxinim, dois amigos preguiçosos que trabalham em um parque. Com situações surreais e humor peculiar, a série mistura elementos cotidianos com eventos fantásticos, explorando a vida adulta, responsabilidades e amadurecimento." << endl;
				break;
			case 'O':
				cout << "Uma animação que segue as aventuras de Gumball Watterson, um gato azul de doze anos, e sua família em uma cidade cheia de personagens peculiares. Com uma combinação única de animação 2D e 3D, a série aborda temas cotidianos de uma forma hilariante e criativa, explorando relacionamentos familiares, amizades e desafios da infância." << endl;
				break;
			case 'P':
				cout << "'Steven Universo' conta as aventuras de Steven, um jovem garoto meio humano e meio Gem, um grupo de alienígenas com poderes mágicos. Steven vive em Beach City e, junto com as Gems Garnet, Ametista e Pérola, protege a Terra de ameaças intergalácticas. A série aborda temas como amor, amizade, família e autodescoberta, explorando a jornada de Steven para entender e controlar seus poderes enquanto lida com os desafios da vida cotidiana." << endl;
				break;
			}
		}
	
	}
	
	else{
		// Código com apenas filmes infantis.
		cout << "Voce pode escolher filmes e séries que escolhemos especialmente para você: " << endl;
		cout << "" << endl;
		
		// Filmes infantis.
		cout << endl;
			cout << "Escolha entre os filmes a seguir: " << endl;
			cout << endl;
			cout << "A. Toy Story (1995)" << endl;
			cout << "B. O Rei Leão (The Lion King, 1994)" << endl;
			cout << "C. Procurando Nemo (Finding Nemo, 2003)" << endl;
			cout << "D. A Bela e a Fera (Beauty and the Beast, 1991)" << endl;
			cout << "E. Up: Altas Aventuras (Up, 2009)" << endl;
			cout << "F. Frozen: Uma Aventura Congelante (Frozen, 2013)" << endl;
			cout << "G. Shrek (2001)" << endl;
			cout << "H. Moana: Um Mar de Aventuras (Moana, 2016)" << endl;
			cout << "I. Ratatouille (2007)" << endl;
			cout << "J. Mulan (1998) " << endl;
			cout << "K. Gato de Botas 2: O Último Pedido (Puss in Boots: The Last Wish, 2022)" << endl;
			cout << "L. Indiana Jones: Os Caçadores da Arca Perdida (Raiders of the Lost Ark, 1981)" << endl;
			cout << "M. O Senhor dos Anéis: A Sociedade do Anel (The Lord of the Rings: The Fellowship of the Ring, 2001)" << endl;
			cout << "N. Piratas do Caribe: A Maldição do Pérola Negra (Pirates of the Caribbean: The Curse of the Black Pearl, 2003)" << endl;
			cout << "O. Jurassic Park (1993)" << endl;
			cout << "P. A Princesa Mononoke (Princess Mononoke, 1997)" << endl;
			cout << endl;
			cout << "Séries: " << endl;
			cout << endl;
			cout << "Q. Bob Esponja (SpongeBob SquarePants, 1999 - presente)" << endl;
			cout << "R. Hora de Aventura (Adventure Time, 2010 - 2018)" << endl;
			cout << "S. Apenas um Show (Regular Show, 2010 - 2017)" << endl;
			cout << "T. O Incrível Mundo de Gumball (The Amazing World of Gumball, 2011 - presente)" << endl;
			cout << "U. Steven Universo (Steven Universe, 2013 - 2019)" << endl;
			
			cout << "" << endl;
			cin >> letra_do_filme;
			
			switch(toupper(letra_do_filme))
			{
			case 'A':
				cout << "Uma animação da Pixar que conta a história dos brinquedos de Andy e sua jornada para encontrar seu propósito. Repleto de aventura, amizade e emoção, é um clássico moderno." << endl;
				break;
			case 'B':
				cout << "Um filme da Disney que segue a jornada de Simba, um jovem leão destinado a se tornar rei da savana. Com uma trilha sonora inesquecível e personagens carismáticos, é um filme adorado por gerações." << endl;
				break;
			case 'C':
				cout << "Uma animação da Pixar que narra a busca emocionante de um peixe-palhaço chamado Marlin por seu filho Nemo, perdido no oceano. Com humor encantador e belas animações subaquáticas, é um filme cativante para crianças e adultos." << endl;
				break;
			case 'D':
				cout << "Um conto de fadas clássico da Disney sobre uma jovem chamada Bela que se apaixona por uma fera amaldiçoada. Com músicas encantadoras e uma mensagem poderosa sobre a importância da verdadeira beleza interior, é um filme atemporal." << endl;
				break;
			case 'E':
				cout << "Uma aventura emocionante da Pixar que segue Carl, um idoso solitário, e seu jovem amigo Russell em uma jornada pelos céus em uma casa flutuante. Com uma história comovente e personagens adoráveis, é um filme que inspira imaginação e exploração." << endl;
				break;
			case 'F':
				cout << "Uma animação da Disney que conta a história das princesas Elsa e Anna em um reino de inverno eterno. Com músicas icônicas, mensagens de amor fraterno e empoderamento feminino, é um filme que conquistou o coração de milhões de crianças ao redor do mundo." << endl;
				break;
			case 'G':
				cout << "Uma animação divertida e irreverente que subverte os contos de fadas tradicionais, seguindo as aventuras do ogro Shrek e seu fiel companheiro, o Burro. Com humor inteligente, personagens engraçados e uma mensagem sobre aceitação e autoaceitação, é um filme adorado por crianças e adultos." << endl;
				break;
			case 'H':
				cout << "Uma animação da Disney que acompanha a corajosa Moana em sua jornada para restaurar o coração da deusa Te Fiti e salvar sua ilha. Com uma trilha sonora cativante e uma protagonista determinada, é um filme que celebra a cultura polinésia e a força interior." << endl;
				break;
			case 'I':
				cout << "Uma animação da Pixar que narra a história de Remy, um rato com um talento culinário excepcional, que busca realizar seu sonho de se tornar um grande chef. Com uma abordagem única e uma mensagem inspiradora sobre seguir sua paixão, é um filme que encanta tanto crianças quanto adultos." << endl;
				break;
			case 'J':
				cout << "Uma corajosa jovem chinesa se disfarça de homem e se junta ao exército para lutar no lugar de seu pai, tornando-se uma das heroínas mais adoradas da Disney." << endl;
				break;
			case 'K':
				cout << "Nesta animação da DreamWorks, o Gato de Botas descobre que sua paixão pela aventura cobrou seu preço: por conta de seu gosto pelo perigo, ele queimou oito de suas nove vidas. Com apenas uma vida restante, o Gato precisa pedir ajuda para uma antiga parceira - que atualmente é sua rival e inimiga mortal, Kitty Pata Mansa - para continuar vivo." << endl;
				break;
			case 'L':
				cout << "Dirigido por Steven Spielberg e estrelado por Harrison Ford, este filme segue as aventuras do icônico arqueólogo Indiana Jones em busca da Arca da Aliança. Repleto de ação, humor e suspense, é um clássico dos filmes de aventura." << endl;
				break;
			case 'M':
				cout << "Baseado na obra de J.R.R. Tolkien, este filme dirigido por Peter Jackson dá início à trilogia épica que acompanha Frodo Baggins em sua jornada para destruir um anel poderoso. Com paisagens deslumbrantes, personagens cativantes e uma história rica, é uma aventura imperdível." << endl;
				break;
			case 'N':
				cout << " Estrelado por Johnny Depp como o excêntrico Capitão Jack Sparrow, este filme traz uma mistura de ação, comédia e fantasia. A história gira em torno de piratas, tesouros e uma maldição sobrenatural." << endl;
				break;
			case 'O':
				cout << "Outro filme dirigido por Steven Spielberg, 'Jurassic Park' é um clássico moderno que leva os espectadores a uma ilha habitada por dinossauros recriados geneticamente. Repleto de emoção e suspense, o filme combina aventura e elementos de ficção científica de maneira brilhante." << endl;
				break;
			case 'P':
				cout << "Dirigido por Hayao Miyazaki e produzido pelo Studio Ghibli, este filme de animação japonês é uma jornada épica e poética ambientada em um mundo repleto de espíritos e criaturas fantásticas. Com uma mensagem ecológica e personagens complexos, é um filme de aventura cativante para todas as idades." << endl;
				break;
			case 'Q':
				cout << "Uma animação que se passa na cidade submarina de Bikini Bottom e segue as trapalhadas e aventuras do otimista Bob Esponja Calça Quadrada e seus amigos marinhos. Com muito humor e personagens carismáticos, a série estimula a imaginação das crianças e aborda temas como amizade, trabalho em equipe e resiliência." << endl;
				break;
			case 'R':
				cout << "Segue as aventuras de Finn, um garoto humano, e seu melhor amigo, Jake, um cão com habilidades mágicas. Juntos, eles exploram a Terra de Ooo, conhecem personagens coloridos e enfrentam desafios emocionantes em um mundo pós-apocalíptico cheio de fantasia, humor e reflexões sobre amizade e crescimento." << endl;
				break;
			case 'S':
				cout << "Uma animação que acompanha as aventuras de Mordecai, um gaio-azul, e Rigby, um guaxinim, dois amigos preguiçosos que trabalham em um parque. Com situações surreais e humor peculiar, a série mistura elementos cotidianos com eventos fantásticos, explorando a vida adulta, responsabilidades e amadurecimento." << endl;
				break;
			case 'T':
				cout << "Uma animação que segue as aventuras de Gumball Watterson, um gato azul de doze anos, e sua família em uma cidade cheia de personagens peculiares. Com uma combinação única de animação 2D e 3D, a série aborda temas cotidianos de uma forma hilariante e criativa, explorando relacionamentos familiares, amizades e desafios da infância." << endl;
				break;
			case 'U':
				cout << "'Steven Universo' conta as aventuras de Steven, um jovem garoto meio humano e meio Gem, um grupo de alienígenas com poderes mágicos. Steven vive em Beach City e, junto com as Gems Garnet, Ametista e Pérola, protege a Terra de ameaças intergalácticas. A série aborda temas como amor, amizade, família e autodescoberta, explorando a jornada de Steven para entender e controlar seus poderes enquanto lida com os desafios da vida cotidiana." << endl;
				break;
			}
		}
		cout << endl;
		cout << "Gostaria de mais alguma recomendação de filmes? s(Para sim) n(Para não)" << endl;
		cout << endl;
		cin >> i;
		cout << endl;
	}
	if(i == 'n' || i == 'N'){
		// Fechando o arquivo.
		arq.close();
		cout << "Obrigado por usar os serviços da Dinasty, volte sempre!" << endl;
		return 0;
	}
	while((i!= 's') || (i!= 'S') && (i!= 'n') || (i!= 'N'))
	{
		cout << "Desculpe, poderia repetir? " << endl;
		cin >> i;
	}
	}
	
	
	return 0;
	}