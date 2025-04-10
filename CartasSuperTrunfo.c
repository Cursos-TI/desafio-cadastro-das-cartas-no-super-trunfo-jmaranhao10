#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {

  cards = []

  card1 = {}
  card1['estado'] = input("Estado (A-H) Carta 1: ").upper()
  card1['codigo'] = input("Código da Carta 1 (ex: A01): ").upper()
  card1['nome_cidade'] = input("Nome da Cidade Carta 1: ")
  card1['populacao'] = int(input("População Carta 1: "))
  card1['area'] = float(input("Área (em km²) Carta 1: "))
  card1['pib'] = float(input("PIB (em bilhões de reais) Carta 1: "))
  card1['pontos_turisticos'] = int(input("Número de Pontos Turísticos Carta 1: "))
  cards.append(card1)
  
  card2 = {}
  card2['estado'] = input("Estado (A-H) Carta 2: ").upper()
  card2['codigo'] = input("Código da Carta 2 (ex: A01): ").upper()
  card2['nome_cidade'] = input("Nome da Cidade Carta 2: ")
  card2['populacao'] = int(input("População Carta 2: "))
  card2['area'] = float(input("Área (em km²) Carta 2: "))
  card2['pib'] = float(input("PIB (em bilhões de reais) Carta 2: "))
  card2['pontos_turisticos'] = int(input("Número de Pontos Turísticos Carta 2: "))
  cards.append(card2)
  
  print(f"\nCarta 1:")
  print(f"Estado: {cards[0]['estado']}")
  print(f"Código: {cards[0]['codigo']}")
  print(f"Nome da Cidade: {cards[0]['nome_cidade']}")
  print(f"População: {cards[0]['populacao']}")
  print(f"Área: {cards[0]['area']} km²")
  print(f"PIB: {cards[0]['pib']} bilhões de reais")
  print(f"Número de Pontos Turísticos: {cards[0]['pontos_turisticos']}")

  print(f"\nCarta 2:")
  print(f"Estado: {cards[1]['estado']}")
  print(f"Código: {cards[1]['codigo']}")
  print(f"Nome da Cidade: {cards[1]['nome_cidade']}")
  print(f"População: {cards[1]['populacao']}")
  print(f"Área: {cards[1]['area']} km²")
  print(f"PIB: {cards[1]['pib']} bilhões de reais")
  print(f"Número de Pontos Turísticos: {cards[1]['pontos_turisticos']}")
  
if __name__ == "__main__":
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
