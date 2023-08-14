#include <iostream>
#include <cstdlib>
using namespace std;

const int MAX_TAM = 30;    // Tamanho máximo da palavra escolhida
const int MAX_CHANCES = 7; // Número máximo de chances

// Função que vai inicializar o array de letras secretas com traços
void inicializarSecreta(char secreta[], int tam)
{
  for (int i = 0; i < tam; i++)
  {
    secreta[i] = '-';
  }
}

// Função no qual vai exibir o status atual do jogo
void exibirJogoStatus(int chances, char secreta[], int tam)
{
  cout << "Chances restantes: " << chances << "\n\n";
  cout << "Palavra secreta: ";

  for (int i = 0; i < tam; i++)
  {
    cout << secreta[i];
  }
  cout << "\n";
}

int main()
{
  char palavra[MAX_TAM], letra;
  char secreta[MAX_TAM];
  int tam = 0, acertos = 0, chances = MAX_CHANCES;
  bool acerto = false;

  cout << "Digite a palavra para o jogo e nao deixe o advesario olhar: ";
  cin >> palavra;
  system("cls"); // Limpa a tela para esconder a palavra digitada

  int i = 0;
  while (palavra[i] != '\0') // Enquanto não chegar no fim da palavra digitada
  {
    i++;
    tam++;
  }

  inicializarSecreta(secreta, tam); // Inicializa o array de letras secretas com traços

  while (chances > 0 && acertos < tam) // Loop principal do jogo
  {
    exibirJogoStatus(chances, secreta, tam); // Exibe o status do jogo

    cout << "\nDigite uma letra: ";
    cin >> letra; // Lê a letra digitada pelo jogador

    acerto = false;
    for (i = 0; i < tam; i++) // Verifica se a letra está na palavra
    {
      if (palavra[i] == letra)
      {
        acerto = true;
        if (secreta[i] != palavra[i]) // Verifica se a letra já não foi acertada antes
        {
          secreta[i] = palavra[i]; // Atualiza o array de letras secretas
          acertos++;               // Incrementa os acertos
        }
      }
    }

    if (!acerto)
    {
      chances--; // Se não acertou, vai diminuindo a variavel chances
    }
    system("cls"); // Limpa a tela para esconder a palavra digitada
  }

  if (acertos == tam) // Verifica se o jogador venceu
  {
    cout << "Parabéns! Você venceu.\n";
  }
  else
  {
    cout << "Que pena! Você perdeu.\n"; // Se não, o jogador perdeu
  }

  system("pause"); // Pausa o programa para que o jogador  veja o resultado
  return 0;
}
