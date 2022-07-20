# Sensor-Temperatura
## Foto do circuito no simulador (TinkerCad)
![alt text](https://github.com/joaoserpellone/Sensor-Temperatura/blob/main/circuitoArduino.png)

[Link para o simulador](https://www.tinkercad.com/things/c7YQY3NpqWX)

## Foto do circuito real
![alt text](https://github.com/joaoserpellone/Sensor-Temperatura/blob/main/cirucitoReal.jpg)
![alt text](https://github.com/joaoserpellone/Sensor-Temperatura/blob/main/circuitoReal2.jpg)

## Lista de Componentes
  * Sensor LM35: sensor de temperatura que lê a temperatura ambiente e transforma em sinal analógico que, no código, é convertido em graus celsius (no simulador ele é um sensor gringo, então ele mede em fahrenheit, por isso temos que converter para celsius).
  * Buzzer: caso atinja a uma certa temperatura ele toca um alarme, achamos na internet um cara que toca o tema do Darth Vader e colocamos no projeto.
  * Led: para cada intervalo de temperatura ele ativa um led, da menor temperatura para a maior: led verde, led amarelo e led vermelho.
  * Resistores: diminuem a tensão de 5V para a tensão segura para o led, utilizamos led 330V que era o que tinha no kit, no led verde ligamos em série com o led, e para os leds vermelho e amarelo precisamos colocar dois desse em paralelo (Req = (330x330)/(330+330) = 165 ohms) para que ligassem.

## Participantes
 João Pedro Oliveira Serpellone - NUSP 13671848.
 
 Vinícius Carneiro Macedo - NUSP 11915752.
