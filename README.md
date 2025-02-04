# Semáforo Temporizado com Raspberry Pi Pico W

## Descrição
Este projeto implementa um semáforo temporizado utilizando o microcontrolador Raspberry Pi Pico W. O código controla três LEDs (vermelho, amarelo e verde) com temporização de 3 segundos entre as trocas de estado, utilizando a função `add_repeating_timer_ms()` do Pico SDK.

## Requisitos
- Microcontrolador Raspberry Pi Pico W
- 3 LEDs (vermelho, amarelo e verde)
- 3 resistores de 330 Ω
- Ferramenta de simulação Wokwi
- Ferramenta Educacional BitDogLab
- Pico SDK configurado no ambiente de desenvolvimento

## Funcionamento
1. O semáforo inicia com o LED vermelho aceso.
2. A cada 3 segundos, alterna para amarelo e depois para verde.
3. O ciclo se repete indefinidamente.
4. O loop principal imprime uma mensagem na porta serial a cada 1 segundo.

## Configuração dos GPIOs
- **LED Vermelho** - GPIO 2
- **LED Amarelo** - GPIO 3
- **LED Verde** - GPIO 4
- **LED RGB (BitDogLab)** - GPIOs 11, 12 e 13

## Compilando e Executando
1. Configure o ambiente de desenvolvimento para o Raspberry Pi Pico W com o Pico SDK.
2. Compile o código utilizando `cmake` e `make`.
3. Carregue o binário gerado no Raspberry Pi Pico W.
4. Conecte ao dispositivo via porta serial para visualizar as mensagens de depuração.

## Simulação no Wokwi
Para simular o circuito no Wokwi:
1. Configure os LEDs e resistores conforme a Figura 2 do enunciado.
2. Utilize o código fornecido e execute a simulação.

## Testes com BitDogLab
- Utilize os GPIOs 11, 12 e 13 para controlar um LED RGB.
- Teste a funcionalidade conforme o código principal.
