Jogo da Forca em C++
Este é um jogo simples da forca desenvolvido em C++. O jogador tenta adivinhar uma palavra secreta digitando as letras. O jogador tem um número limitado de chances para adivinhar a palavra.

Funcionamento
O jogo começa pedindo ao jogador para digitar uma palavra secreta, que será a palavra a ser adivinhada. A tela é então limpa para esconder a palavra digitada. O jogador tem um máximo de 7 chances para adivinhar a palavra correta.

A cada tentativa, o jogo exibe o status atual do jogo, incluindo o número de chances restantes e a palavra secreta a ser adivinhada. O jogador é solicitado a digitar uma letra. O código verifica se a letra está presente na palavra secreta. Se estiver, a letra é revelada na palavra secreta. O jogador vence quando todas as letras são reveladas ou perde se acabarem suas chances.

Funções Principais
inicializarSecreta(char secreta[], int tam): Inicializa o array de letras secretas com traços.
exibirJogoStatus(int chances, char secreta[], int tam): Exibe o status atual do jogo, incluindo as chances restantes e a palavra secreta.
Como Jogar
Compile e execute o programa.
Digite uma palavra secreta para o jogo (sem que outros vejam).
O jogo começará e mostrará o status atual do jogo.
Digite uma letra em cada tentativa para adivinhar a palavra.
Continue a jogar até que todas as letras sejam reveladas ou você fique sem chances.
Créditos
Este jogo foi desenvolvido em C++ por Matthus Santana - https://github.com/jhinme.

Se você está curioso para aprender mais sobre o jogo da Forca ou como desenvolvi o jogo em C++, sinta-se à vontade para entrar em contato comigo. Estou aqui para ajudar e responder às suas perguntas.

Divirta-se jogando!
