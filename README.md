# Run Away
Neste projeto, desenvolvido em C, o jogador assume o papel de um herói que precisa atravésar um labirinto desafiador, onde ele deve encontrar e coletar três chaves estrategicamente posicionadas no mapa. 

## Executando
### Utilizando GCC no Terminal
Para compilar e executar o projeto utilizando o GCC diretamente no terminal, siga estes passos:

1. Navegue até o diretório raiz do projeto no terminal.
2. Utilize o comando `gcc` para compilar os arquivos fonte. Por exemplo:

```
gcc src/main.c src/game_logic/character.c src/game_logic/enemy.c src/game_logic/map.c src/input_handling/keyboard.c src/input_handling/keyboard_unix.c src/rendering/rendering.c src/utils/randomNumber.c -o program  -Iinclude
```
3. Após a compilação bem-sucedida, execute o binário gerado. Por exemplo:
```
./program
```

### Utilizando o Makefile
Para compilar e executar o projeto utilizando o Makefile, siga estes passos:

1. Certifique-se de ter o Makefile no diretório raiz do projeto.
2. Abra o terminal e navegue até o diretório raiz do projeto.
3. Execute o comando `make`. Isso iniciará o processo de compilação de acordo com as regras definidas no Makefile.
4.Após a conclusão da compilação, execute o binário gerado. Por exemplo:
```
./run_away
```
