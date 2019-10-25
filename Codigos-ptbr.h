#define CODES_SIZE 
2973char *codes[][2] = { {"P0001","Controle regulador de volume de combustível – Circuito aberto"}
,{"P0002","Controle regulador de volume de combustível – Faixa/desempenho"}
,{"P0003","Controle regulador de volume de combustível – circuito baixo"}
,{"P0004","Controle regulador de volume de combustível – circuito alto"}
,{"P0005","Válvula de controle de combustível A – circuito aberto"}
,{"P0006","Válvula de controle de combustível A – circuito baixo"}
,{"P0007","Válvula de controle de combustível A – circuito alto"}
,{"P0008","Sistema de posição do motor – Desempenho (banco 1)"}
,{"P0009","Sistema de posição do motor – Desempenho (banco  )"}
,{"P0010","Atuador A de posição do comando – Avaria no circuito do banco 1"}
,{"P0011","Atuador A de posição do comando – Sincronismo muito avançado"}
,{"P0012","Atuador A de posição do comando – Sincronismo muito atrasado"}
,{"P0013","Atuador B de posição do comando – Avaria no circuito do banco 1"}
,{"P0014","Atuador B de posição do comando – Sincronismo muito avançado"}
,{"P0015","Atuador B de posição do comando – Sincronismo muito atrasado"}
,{"P0016","Sensor A de posição de correlação Virabrequim/Comando – Banco 1"}
,{"P0017","Sensor B de posição de correlação Virabrequim/Comando – Banco 1"}
,{"P0018","Sensor A de posição de correlação Virabrequim/Comando – Banco"}
,{"P0019","Sensor B de posição de correlação Virabrequim/Comando – Banco"}
,{"P0020","Atuador A de posição do comando – Avaria no circuito do Banco"}
,{"P0021","Atuador A de posição do comando – Sincronismo muito avançado Banco"}
,{"P0022","Atuador A de posição do comando – Sincronismo muito atrasado Banco"}
,{"P0023","Atuador B de posição do comando – Avaria no circuito do Banco"}
,{"P0024","Atuador B de posição do comando – Sincronismo muito avançado banco"}
,{"P0025","Atuador B de posição do comando – Sincronismo muito atrasado banco"}
,{"P0026","Solenóide controle banco 1 Válvula admissão CKT – Faixa/desempenho"}
,{"P0027","Solenóide controle banco 1 Válvula escape CKT – Faixa desempenho"}
,{"P0028","Solenóide controle banco   Válvula admissão CKT – Faixa/desempenho"}
,{"P0029","Solenóide controle banco   Válvula escape CKT – Faixa/desempenho"}
,{"P0030","Circuito do aquecedor da sonda oxigênio 1 – Banco 1"}
,{"P0031","Circuito do aquecedor da sonda oxigênio 1 – Banco 1 baixo"}
,{"P0032","Circuito do aquecedor da sonda oxigênio 1 – Banco 1 alto"}
,{"P0033","Circuito de controle da válvula wastegate do turbo/sup"}
,{"P0034","Circuito de controle da válvula wastegate do turbo/sup baixo"}
,{"P0035","Circuito de controle da válvula wastegate do turbo/sup alto"}
,{"P0036","Circuito do aquecedor da sonda oxigênio   – banco 1"}
,{"P0037","Circuito do aquecedor da sonda oxigênio   – banco 1 baixo"}
,{"P0038","Circuito do aquecedor da sonda oxigênio   – banco 1 alto"}
,{"P0039","Controle do desvio do turbo CKT – desempenho"}
,{"P0040","Sinal do sensor de oxigênio 1 banco 1 alterado pelo sinal sensor oxigênio   banco"}
,{"P0041","Sinal do sensor de oxigênio   banco 1 alterado pelo sinal sensor oxigênio   banco"}
,{"P0042","Circuito do aquecedor sensor de oxigênio sensor 3 banco 1"}
,{"P0043","Circuito do aquecedor sensor de oxigênio sensor 3 banco 1 baixo"}
,{"P0044","Circuito do aquecedor sensor de oxigênio sensor 3 banco 1 alto"}
,{"P0045","Solenóide de controle A do turbo – circuito aberto"}
,{"P0046","Solenóide de controle A do turbo – Faixa/desempenho"}
,{"P0047","Solenóide controle A do turbo – circuito baixo"}
,{"P0048","Solenóide controle A do turbo – circuito alto"}
,{"P0049","Sobre rotação da turbina – sinal de entrada fora de faixa"}
,{"P0050","Circuito do aquecedor sensor de oxigênio sensor 1 banco"}
,{"P0051","Circuito do aquecedor sensor de oxigênio sensor 1 banco   – baixo"}
,{"P0052","Circuito do aquecedor sensor de oxigênio sensor 1 banco   – alto"}
,{"P0053","Resistência do aquecedor do sensor de oxigênio banco 1 sensor 1"}
,{"P0054","Resistência do aquecedor do sensor de oxigênio banco 1 sensor"}
,{"P0055","Resistência do aquecedor do sensor de oxigênio banco 1 sensor 3"}
,{"P0056","Circuito do aquecedor sensor de oxigênio banco   sensor"}
,{"P0057","Circuito do aquecedor sensor de oxigênio banco   sensor   – baixo"}
,{"P0058","Circuito do aquecedor sensor de oxigênio banco   sensor   – alto"}
,{"P0059","Resistência do aquecedor do sensor de oxigênio – banco   sensor 1"}
,{"P0060","Resistência do aquecedor do sensor de oxigênio – banco   sensor"}
,{"P0061","Resistência do aquecedor do sensor de oxigênio – banco   sensor 3"}
,{"P0062","Circuito do aquecedor do sensor de oxigênio – Banco   sensor 3"}
,{"P0063","Circuito do aquecedor do sensor de oxigênio – Banco   sensor 3 baixo"}
,{"P0064","Circuito do aquecedor do sensor de oxigênio – Banco   sensor 3 alto"}
,{"P0065","Injetor assistido a ar – Desempenho/Faixa do controle"}
,{"P0066","Injetor assistido a ar – Circuito de controle baixo"}
,{"P0067","Injetor assistido a ar – Circuito de controle alto"}
,{"P0068","Correlação incorreta entre sensor MAF/MAP e TPS"}
,{"P0069","Correlação incorreta entre MAP e BARO"}
,{"P0070","Circuito do sensor temp. do ar ambiente"}
,{"P0071","Desempenho/faixa sensor temp. ar ambiente"}
,{"P0072","Circuito Baixo – Sensor temp ar ambiente"}
,{"P0073","Circuito Alto – Sensor temp. ar ambiente"}
,{"P0074","Problema intermitente – circ. Sensor temp. ambiente"}
,{"P0075","Circuito de controle válvulas admissão – banco 1"}
,{"P0076","Circuito de controle válvulas admissão banco 1 – baixo"}
,{"P0077","Circuito de controle válvulas admissão banco 1 – alto"}
,{"P0078","Circuito de controle válvulas escape – banco 1"}
,{"P0079","Circuito de controle válvulas de escape – banco 1 baixo"}
,{"P0080","Circuito de controle válvulas de escape – banco 1 alto"}
,{"P0081","Circuito de controle válvulas de admissão – banco"}
,{"P0082","Circuito de controle válvulas de admissão – banco   baixo"}
,{"P0083","Circuito de controle válvulas de admissão – banco   alto"}
,{"P0084","Circuito de controle válvulas de escape – banco"}
,{"P0085","Circuito de controle válvulas de escape – banco   baixo"}
,{"P0086","Circuito de controle válvulas de escape – banco 3 alto"}
,{"P0087","Pressão do tubo de combustível muito baixa"}
,{"P0088","Pressão do tubo de combustível muito alta"}
,{"P0089","Desempenho do regulador de pressão 1"}
,{"P0090","Circuito de controle do regulador de pressão 1"}
,{"P0091","Circuito de controle do regulador de pressão 1 baixo"}
,{"P0092","Circuito de controle do regulador de pressão 1 alto"}
,{"P0093","Vazamento do sistema de combustível – (grande)"}
,{"P0094","Vazamento do sistema de combustível – (pequeno)"}
,{"P0095","Circuito do sensor   de temp. do ar de admissão IAT"}
,{"P0096","Circuito do sensor IAT   – Performance"}
,{"P0097","Circuito do sensor IAT   – Baixo"}
,{"P0099","Circuito do sensor IAT   – Sinal intermitente"}
,{"P0100","Malfuncionamento do sensor MAF ou VAF"}
,{"P0101","Sensor MAF ou VAF – Faixa incorreta"}
,{"P0102","Sensor MAF ou VAF – sinal muito baixo"}
,{"P0103","Sensor MAF ou VAF – sinal muito alto"}
,{"P0104","Sensor MAF ou VAF – sinal intermitente"}
,{"P0105","Circuito do Sensor MAP/BARO – Mau funcionamento"}
,{"P0106","Circuito do sensor MAP/BARO – Faixa/Desempenho"}
,{"P0107","Circuito do sensor MAP/BARO – Sinal muito baixo"}
,{"P0108","Circuito do sensor MAP/BARO – Sinal muito alto"}
,{"P0109","Circuito do sensor MAP/BARO – Sinal intermitente"}
,{"P0110","Circuito do sensor IAT 1 – Malfuncionamento"}
,{"P0111","Circuito do sensor IAT 1 – Faixa/Desempenho"}
,{"P0112","Circuito do sensor IAT 1 – Sinal muito baixo"}
,{"P0113","Circuito do sensor IAT 1 – Sinal muito alto"}
,{"P0114","Circuito do sensor IAT 1 – Sinal intermitente"}
,{"P0115","Circuito do sensor ECT – Mau funcionamento"}
,{"P0116","Circuito do sensor ECT – Faixa/Desempenho"}
,{"P0117","Circuito do sensor ECT – Sinal muito baixo"}
,{"P0118","Circuito do sensor ECT – Sinal muito alto"}
,{"P0119","Circuito do sensor ECT – Sinal intermitente"}
,{"P0120","Circuito do sensor TPS A – Mau funcionamento"}
,{"P0121","Circuito do sensor TPS A – Faixa/Desempenho"}
,{"P0122","Circuito do sensor TPS A – Sinal muito baixo"}
,{"P0123","Circuito do sensor TPS A – Sinal muito alto"}
,{"P0124","Circuito do sensor TPS A – Sinal intermitente"}
,{"P0125","Circuito sensor ECT – Controle comb. Malha fechada insuficiente."}
,{"P0126","Circuito sensor ECT – Operação Instável"}
,{"P0127","Circuito do sensor IAT – sinal muito alto"}
,{"P0128","Temp. liquido arrefecimento abaixo de controle do termostato"}
,{"P0129","Pressão barométrica – sinal muito baixo"}
,{"P0130","Circuito do sensor de O  – Mau funcionamento – Sensor 1 banco 1"}
,{"P0131","Circuito do sensor de O  – Baixa voltagem – Sensor 1 banco 1"}
,{"P0132","Circuito do sensor de O  – Alta voltagem – sensor 1 banco 1"}
,{"P0133","Circuito do sensor de O  – Resposta lenta – sensor 1 banco 1"}
,{"P0134","Circuito do sensor de O  – Sem atividade – sensor 1 banco 1"}
,{"P0135","Circuito do sensor de O  – Mau funcionamento do aquecedor Sensor 1 Banco 1"}
,{"P0136","Circuito do sensor de O  – Mau funcionamento – sensor   banco 1"}
,{"P0137","Circuito do sensor de O  – Baixa voltagem – sensor   banco 1"}
,{"P0138","Circuito do sensor de O  – Alta voltagem – sensor   banco 1"}
,{"P0139","Circuito do sensor de O  – Resposta lenta – sensor   banco 1"}
,{"P0140","Circuito do sensor de O  – Sem atividade – sensor   banco 1"}
,{"P0141","Circuito do sensor de O  – Mau funcionamento do aquecedor – Sensor   banco 1"}
,{"P0142","Circuito do sensor de O  – Mau funcionamento – sensor 3 banco 1"}
,{"P0143","Circuito do sensor de O  – Baixa voltagem – sensor 3 banco 1"}
,{"P0144","Circuito do sensor de O  – Alta voltagem – sensor 3 banco 1"}
,{"P0145","Circuito do sensor de O  – Resposta lenta – sensor 3 banco 1"}
,{"P0146","Circuito do sensor de O  – Sem atividade – sensor 3 banco 1"}
,{"P0147","Circuito do sensor de O  – Mau funcionamento do aquecedor – sensor 3 banco 1"}
,{"P0148","Mau funcionamento da distribuição de combustível"}
,{"P0149","Sincronismo da distribuição de combustível deficiente"}
,{"P0150","Circuito do sensor de O  – Mau funcionamento – Sensor 1 banco"}
,{"P0151","Circuito do sensor de O  – Baixa voltagem – Sensor 1 banco"}
,{"P0152","Circuito do sensor de O  – Alta voltagem – sensor 1 banco"}
,{"P0153","Circuito do sensor de O  – Resposta lenta – sensor 1 banco"}
,{"P0154","Circuito do sensor de O  – Sem atividade –sensor 1 banco"}
,{"P0155","Circuito do sensor de O  – Mau funcionamento do aquecedor – sensor 1 banco"}
,{"P0156","Circuito do sensor de 0  – Mau funcionamento – sensor   banco"}
,{"P0157","Circuito do sensor de O  – Baixa voltagem – sensor   banco"}
,{"P0158","Circuito do sensor de O  – Alta voltagem – sensor   banco"}
,{"P0159","Circuito do sensor de O  – Resposta lenta – sensor   banco"}
,{"P0160","Circuito do sensor de O  – Sem atividade – sensor   banco"}
,{"P0161","Circuito do sensor de O  – Mau funcionamento do aquecedor – sensor   banco"}
,{"P0162","Circuito do sensor de O  – Mau funcionamento – sensor 3 banco"}
,{"P0163","Circuito do sensor de O  – Baixa voltagem – sensor 3 banco"}
,{"P0164","Circuito do sensor de O  – Alta voltagem – sensor 3 banco"}
,{"P0165","Circuito do sensor de O  – Resposta lenta – sensor 3 banco"}
,{"P0166","Circuito do sensor de O  – Sem atividade – sensor 3 banco"}
,{"P0167","Circuito do sensor de O  – Mau funcionamento do aquecedor – sensor 3 banco"}
,{"P0168","Temperatura do combustível muito alta"}
,{"P0169","Composição do combustível incorreta"}
,{"P0170","Mau funcionamento da correção de combustível – Banco 1"}
,{"P0171","Sistema muito pobre – banco 1"}
,{"P0172","Sistema muito rico – banco 1"}
,{"P0173","Mau funcionamento da correção de combustível – banco"}
,{"P0174","Sistema muito pobre – banco"}
,{"P0175","Sistema muito rico – banco"}
,{"P0176","Mau funcionamento do circuito do sensor de compensação de combustível"}
,{"P0177","Circuito do sensor de compensação de combustível – Faixa/Desempenho"}
,{"P0178","Circuito do sensor de compensação de combustível – sinal muito baixo"}
,{"P0179","Circuito do compensação de combustível – sinal muito alto"}
,{"P0180","Circuito do sensor de temp. de combustível A – Mau funcionamento"}
,{"P0181","Circ. Do sensor de temp. combustível A – Faixa/Desempenho."}
,{"P0182","Circ. Do sensor de temp. combustível A – Sinal muito baixo."}
,{"P0183","Circ. Do sensor de temp. combustível A – Sinal muito alto."}
,{"P0184","Circ. Sensor temp. combustível A – Funcionamento intermitente."}
,{"P0185","Circuito do sensor de temp. de combustível B – Mau funcionamento"}
,{"P0186","Circ. Do sensor de temp. combustível B – Faixa/Desempenho."}
,{"P0187","Circ. Do sensor de temp. combustível B – Sinal muito baixo."}
,{"P0188","Circ. Do sensor de temp. combustível B – Sinal muito alto"}
,{"P0189","Circ. Sensor temp. combustível B – Funcionamento intermitente"}
,{"P0190","Circ. Sensor pressão tubo distr. Combustível – Mau funcionamento"}
,{"P0191","Circ. Sensor pressão tubo distr. Combustível Faixa/Desempenho"}
,{"P0192","Circ. Sensor pressão tubo distr. Combustível – sinal muito baixo"}
,{"P0193","Circ. Sensor pressão tubo distr. Combustível – sinal muito alto"}
,{"P0194","Circ. Sensor pressão tubo distr  combustível – sinal intermitente"}
,{"P0195","Circ. Sensor temp. óleo do motor – mau funcionamento"}
,{"P0196","Circ. Sensor temp. óleo do motor – Faixa/desempenho"}
,{"P0197","Circ. Sensor temp. óleo do motor – Sinal muito baixo"}
,{"P0198","Circ. Sensor temp. óleo do motor – sinal muito alto"}
,{"P0199","Circ. Sensor temp. óleo do motor – Sinal intermitente"}
,{"P0200","Injetor – circuito aberto"}
,{"P0201","Injetor cilindro 1 – circuito aberto"}
,{"P0202","Injetor cilindro   – circuito aberto"}
,{"P0203","Injetor cilindro 3 – circuito aberto"}
,{"P0204","Injetor cilindro 4 – circuito aberto"}
,{"P0205","Injetor cilindro 5 – circuito aberto"}
,{"P0206","Injetor cilindro 6 – circuito aberto"}
,{"P0207","Injetor cilindro 7 – circuito aberto"}
,{"P0208","Injetor cilindro 8 – circuito aberto"}
,{"P0209","Injetor cilindro 9 – circuito aberto"}
,{"P0210","Injetor cilindro 10 – circuito aberto"}
,{"P0211","Injetor cilindro 11 – circuito aberto"}
,{"P0212","Injetor cilindro 1  – circuito aberto"}
,{"P0213","Injetor 1 de partida a frio – mau funcionamento"}
,{"P0214","Injetor   de partida a frio – mau funcionamento"}
,{"P0215","Solenoidee de corte do motor – mau funcionamento"}
,{"P0216","Circuito de controle do tempo de injeção – mau funcionamento"}
,{"P0217","Condição de superaquecimento do motor"}
,{"P0218","Condição de sobre rotação do motor"}
,{"P0220","Sensor de pos. do pedal do acelerador – Interruptor B – Mau funcionamento"}
,{"P0221","Sensor de pos. do pedal do acelerador – Interruptor B – Faixa/desempenho"}
,{"P0222","Sensor de pos. do pedal do acelerador – Interruptor B – Sinal muito Baixo"}
,{"P0223","Sensor de pos. do pedal do acelerador – Interruptor B – sinal muito Alto"}
,{"P0224","Sensor de pos. do pedal do acelerador – Interruptor B – sinal Intermitente"}
,{"P0225","Sensor de pos. do pedal do acelerador – Interruptor C – Mau funcionamento"}
,{"P0226","Sensor de pos. do pedal do acelerador – Interruptor C – Faixa/desempenho"}
,{"P0227","Sensor de pos. do pedal do acelerador – Interruptor C – sinal muito Baixo"}
,{"P0228","Sensor de pos. do pedal do acelerador – Interruptor C – sinal muito Alto"}
,{"P0229","Sensor de pos. do pedal do acelerador – Interruptor C – sinal Intermitente"}
,{"P0230","Circuito primário da bomba de combustível – Mau funcionamento"}
,{"P0231","Circuito secundário da bomba de combustível – Baixa voltagem"}
,{"P0232","Circuito secundário da bomba de combustível – alta voltagem"}
,{"P0233","Circuito secundário da bomba de combustível – falha intermitente"}
,{"P0234","Condição de super pressurização do motor"}
,{"P0235","Sensor de pressão do turbo – sensor A – Mau funcionamento"}
,{"P0236","Sensor de pressão do turbo – sensor A – Faixa/desempenho"}
,{"P0237","Sensor de pressão do turbo – sensor A – Sinal muito baixo"}
,{"P0238","Sensor de pressão do turbo – sensor A – Sinal muito alto"}
,{"P0239","Sensor de pressão do turbo – sensor B – mau funcionamento"}
,{"P0240","Sensor de pressão do turbo – sensor B – Faixa/desempenho"}
,{"P0241","Sensor de pressão do turbo – sensor B – Sinal muito baixo"}
,{"P0242","Sensor de pressão do turbo – sensor B – sinal muito alto"}
,{"P0243","Solenoidee A do wastegate (válv. De alívio) – mau funcionamento"}
,{"P0244","Solenoidee A do wastegate – faixa/desempenho"}
,{"P0245","Solenoidee A do wastegate – sinal baixo"}
,{"P0246","Solenoidee A do wastegate – sinal alto"}
,{"P0247","Solenoidee B do wastegate (valv. De alívio) – Mau funcionamento"}
,{"P0248","Solenoidee B do wastegate – Faixa/desempenho"}
,{"P0249","Solenoidee B do wastegate – sinal baixo"}
,{"P0250","Solenoidee B do wastegate – sinal alto"}
,{"P0251","Falha no controle A de medição da bomba injetora"}
,{"P0252","Controle A de medição da bomba injetora – Faixa/desempenho"}
,{"P0253","Controle A de medição da bomba injetora – Sinal Baixo"}
,{"P0254","Controle A de medição da bomba injetora – Sinal Alto"}
,{"P0255","Controle A de medição da bomba injetora – Intermitente (Cam/rotor/injetor)"}
,{"P0256","Falha no controle B de medição da bomba injetora (Cam/rotor/injetor)"}
,{"P0257","Controle B de medição da bomba injetora – Faixa/desempenho (Cam/rotor/injetor)"}
,{"P0258","Controle B de medição da bomba injetora – sinal baixo"}
,{"P0259","Controle B de medição da bomba injetora – sinal alto"}
,{"P0260","Controle B de medição da bomba injetora – sinal intermitente"}
,{"P0261","Circuito de controle do injetor – cilindro 1 – sinal baixo"}
,{"P0262","Circuito de controle do injetor – cilindro 1 – sinal alto"}
,{"P0263","Cilindro 1 – Falha de balanceamento"}
,{"P0264","Circuito de controle do injetor – cilindro   – sinal baixo"}
,{"P0265","Circuito de controle do injetor – cilindro   – sinal alto"}
,{"P0266","Cilindro   – falha de balanceamento"}
,{"P0267","Circuito de controle do injetor – cilindro 3 – sinal baixo"}
,{"P0268","Circuito de controle do injetor – cilindro 3 – sinal alto"}
,{"P0269","Cilindro 3 – falha de balanceamento"}
,{"P0270","Circuito de controle do injetor – cilindro 4 – sinal baixo"}
,{"P0271","Circuito de controle do injetor – cilindro 4 – sinal alto"}
,{"P0272","Cilindro 4 – falha de balanceamento"}
,{"P0273","Circuito de controle do injetor – cilindro 5 – sinal baixo"}
,{"P0274","Circuito de controle do injetor – cilindro 5 – sinal alto"}
,{"P0275","Cilindro 5 –falha de balanceamento"}
,{"P0276","Circuito de controle do injetor – cilindro 6 – sinal baixo"}
,{"P0277","Circuito de controle do injetor – cilindro 6 – sinal alto"}
,{"P0278","Cilindro 6 – falha de balanceamento"}
,{"P0279","Circuito de controle do injetor – cilindro 7 – sinal baixo"}
,{"P0280","Circuito de controle do injetor – cilindro 7 – sinal alto"}
,{"P0281","Cilindro 7 – falha de balanceamento"}
,{"P0282","Circuito de controle do injetor – cilindro 8 – sinal baixo"}
,{"P0283","Circuito de controle do injetor – cilindro 8 – sinal alto"}
,{"P0284","Cilindro 8 – falha de balanceamento"}
,{"P0285","Circuito de controle do injetor – cilindro 9 – sinal baixo"}
,{"P0286","Circuito de controle do injetor – cilindro 9 – sinal alto"}
,{"P0287","Cilindro 9 – falha de balanceamento"}
,{"P0288","Circuito de controle do injetor – cilindro 10 – sinal baixo"}
,{"P0289","Circuito de controle do injetor – cilindro 10 – sinal alto"}
,{"P0290","Cilindro 10 – falha de balanceamento"}
,{"P0291","Circuito de controle do injetor – cilindro 11 – sinal baixo"}
,{"P0292","Circuito de controle do injetor – cilindro 11 – sinal alto"}
,{"P0293","Cilindro 11 – falha de balanceamento"}
,{"P0294","Circuito de controle do injetor – cilindro 1  – sinal baixo"}
,{"P0295","Circuito de controle do injetor – cilindro 1  – sinal alto"}
,{"P0296","Cilindro 1  – falha de balanceamento"}
,{"P0297","Erro de velocidade do veículo"}
,{"P0298","Temperatura do óleo do motor muito alta"}
,{"P0299","Pressão do turbo muito baixo"}
,{"P0300","Falha de ignição de vários cilindros detectada"}
,{"P0301","Falha de ignição cilindro 1 detectada"}
,{"P0302","Falha de ignição cilindro   detectada"}
,{"P0303","Falha de ignição cilindro 3 detectada"}
,{"P0304","Falha de ignição cilindro 4 detectada"}
,{"P0305","Falha de ignição cilindro 5 detectada"}
,{"P0306","Falha de ignição cilindro 6 detectada"}
,{"P0307","Falha de ignição cilindro 7 detectada"}
,{"P0308","Falha de ignição cilindro 8 detectada"}
,{"P0309","Falha de ignição cilindro 9 detectada"}
,{"P0310","Falha de ignição cilindro 10 detectada"}
,{"P0311","Falha de ignição cilindro 11 detectada"}
,{"P0312","Falha de ignição cilindro 1  detectada"}
,{"P0313","Nível de combustível baixo – falha de ignição detectada"}
,{"P0314","Falha de ignição detectada – cilindro não especificado"}
,{"P0315","Posição do virabrequim – variação do sistema não apreendida"}
,{"P0316","Falha de ignição detectada nas primeiras 1000 RPMs."}
,{"P0317","Hardware de pista irregular não presente"}
,{"P0318","Circuito do sinal do sensor A de pista irregular"}
,{"P0319","Sensor B de pista irregular"}
,{"P0320","Circuito de entrada de RPM do motor – Ignição/distr. – mau funcionamento"}
,{"P0321","Circuito de entrada de RPM do motor – Ignição/distr. – faixa/desempenho"}
,{"P0322","Sem sinal circuito de entrada de rotação do motor –Ignição/distr."}
,{"P0323","Sinal de rotação do motor CKT intermitente – Ignição/distr."}
,{"P0324","Mau funcionamento do sistema de controle de detonação"}
,{"P0325","Mau funcionamento do circuito de detonação – Banco 1 ou sensor 1"}
,{"P0326","Sensor de detonação fora de faixa – sensor 1 ou banco 1"}
,{"P0327","Sensor de detonação – sinal de entrada baixo – sensor 1 ou banco 1"}
,{"P0328","Sensor de detonação – sinal de entrada muito alto – sensor 1 ou banco 1"}
,{"P0329","Sensor de detonação – sinal intermitente – sensor 1 ou banco 1"}
,{"P0330","Mau funcionamento do circuito do sensor de detonação – sensor   ou banco"}
,{"P0331","Sensor de detonação fora de faixa – sensor   ou banco"}
,{"P0332","Baixo sinal de entrada – sensor de detonação – sensor   ou banco"}
,{"P0333","Alto sinal de entrada – sensor de detonação – sensor   ou banco"}
,{"P0334","Sinal intermitente do sensor de detonação – sensor   ou banco"}
,{"P0335","Mau funcionamento do sensor CKP – circuito A"}
,{"P0336","Sensor CKP fora de faixa – Sensor A"}
,{"P0337","Baixo sinal de entrada do sensor CKP – sensor A"}
,{"P0338","Alto sinal de entrada do sensor CKP – sensor A"}
,{"P0339","Sinal intermitente do sensor CKP – sensor A"}
,{"P0340","Mau funcionamento do circuito Banco 1 – sensor CKP A"}
,{"P0341","Sensor CKP banco 1 fora de faixa – sensor A"}
,{"P0342","Baixo sinal de entrada do sensor CKP – sensor A banco 1"}
,{"P0343","Alto sinal de entrada do sensor CKP – sensor A banco 1"}
,{"P0344","Sinal intermitente do sensor CKP – sensor A banco 1"}
,{"P0345","Mau funcionamento do circuito Banco   – sensor CKP A"}
,{"P0346","Sensor CKP banco   fora de faixa – sensor A"}
,{"P0347","Baixo sinal de entrada do sensor CKP – sensor A banco"}
,{"P0348","Alto sinal de entrada do sensor CKP – sensor A banco"}
,{"P0349","Sinal intermitente do sensor CKP – sensor A banco"}
,{"P0350","Mau funcionamento do circuito primário/secundário da bobina de ignição"}
,{"P0351","Mau funcionamento do primário/secundário da bobina de ignição A"}
,{"P0352","Mau funcionamento do primário/secundário da bobina de ignição B"}
,{"P0353","Mau funcionamento do primário/secundário da bobina de ignição C"}
,{"P0354","Mau funcionamento do primário/secundário da bobina de ignição D"}
,{"P0355","Mau funcionamento do primário/secundário da bobina de ignição E"}
,{"P0356","Mau funcionamento do primário/secundário da bobina de ignição F"}
,{"P0357","Mau funcionamento do primário/secundário da bobina de ignição G"}
,{"P0358","Mau funcionamento do primário/secundário da bobina de ignição H"}
,{"P0359","Mau funcionamento do primário/secundário da bobina de ignição I"}
,{"P0360","Mau funcionamento do primário/secundário da bobina de ignição J"}
,{"P0361","Mau funcionamento do primário/secundário da bobina de ignição K"}
,{"P0362","Mau funcionamento do primário/secundário da bobina de ignição L"}
,{"P0363","Alimentação desabilitada – falha de ignição detectada"}
,{"P0364","Reservado"}
,{"P0365","Mau funcionamento do sensor CMP – Sensor B banco 1"}
,{"P0366","Sensor CMP fora de faixa – Sensor B banco 1"}
,{"P0367","Baixo sinal de entrada sensor CMP – sensor B banco 1"}
,{"P0368","Alto sinal de entrada sensor CMP – sensor B banco 1"}
,{"P0369","Sinal intermitente sensor CMP – sensor B banco 1"}
,{"P0370","Mau funcionamento do sincronismo de referencia – sinal A"}
,{"P0371","Excesso de pulsos do sincronismo de referencia – sinal A"}
,{"P0372","Poucos pulsos do sincronismo de referencia – sinal A"}
,{"P0373","Pulsos erráticos do sincronismo de referencia – sinal A"}
,{"P0374","Ausência de pulsos do sincronismo de referencia – sinal A"}
,{"P0375","Mau funcionamento do sincronismo de referencia – sinal B"}
,{"P0376","Excesso de pulsos do sincronismo de referencia – sinal B"}
,{"P0377","Poucos pulsos do sincronismo de referencia – sinal B"}
,{"P0378","Pulsos erráticos do sincronismo de referencia – sinal B"}
,{"P0379","Ausência de pulsos do sincronismo de referencia – sinal B"}
,{"P0380","Mau funcionamento do circuito das velas aquecedoras – circuito A"}
,{"P0381","Mau funcionamento do circuito indicador das velas aquecedoras"}
,{"P0382","Mau funcionamento do circuito das velas aquecedoras – circuito B"}
,{"P0383","Sinal baixo do circuito de controle do módulo das velas aquecedoras"}
,{"P0384","Sinal alto do circuito de controle do módulo das velas aquecedoras"}
,{"P0385","Mau funcionamento do circuito do sensor CKP – sensor B"}
,{"P0386","Sinal do Sensor CKP fora de faixa – sensor B"}
,{"P0387","Sinal baixo do sensor CKP – sensor B"}
,{"P0388","Sinal alto do sensor CKP – sensor B"}
,{"P0389","Sinal intermitente do sensor CKP – sensor B"}
,{"P0390","Mau funcionamento do circuito do sensor CKP – sensor B banco"}
,{"P0391","Circuito do sensor CKP fora de faixa – sensor B banco"}
,{"P0392","Baixo sinal de entrada do sensor CKP – sensor B banco"}
,{"P0393","Sinal Alto de entrada do sensor CKP – sensor B banco"}
,{"P0394","Sinal intermitente do sensor CKP – sensor B banco"}
,{"P0400","Recirculação de Gás de fluxo Avaria"}
,{"P0401","Fluxo insuficiente da EGR"}
,{"P0402","Fluxo excessivo da EGR"}
,{"P0403","Mau funcionamento do circuito de fluxo da EGR"}
,{"P0404","Fluxo da EGR fora de faixa/desempenho"}
,{"P0405","Baixo sinal de entrada do sensor A – fluxo da EGR"}
,{"P0406","Alto sinal de entrada do sensor A – fluxo da EGR"}
,{"P0407","Baixo sinal de entrada do sensor B – fluxo da EGR"}
,{"P0408","Alto sinal de entrada do sensor B – fluxo da EGR"}
,{"P0409","Circuito do sensor A – fluxo da EGR"}
,{"P0410","Mau funcionamento do sistema de injeção de ar secundário"}
,{"P0411","Fluxo incorreto do sistema de injeção de ar secundário"}
,{"P0412","Mau funcionamento da válvula A do sistema de injeção de ar secundário"}
,{"P0413","Circuito aberto da válvula A do sistema de injeção de ar secundário"}
,{"P0414","Curto circuito da válvula A do sistema de injeção de ar secundário"}
,{"P0415","Mau funcionamento da válvula B do sistema de injeção de ar secundário"}
,{"P0416","Circuito aberto da válvula B do sistema de injeção de ar secundário"}
,{"P0417","Curto circuito da válvula B do sistema de injeção de ar secundário"}
,{"P0418","Mau funcionamento do rele A do sistema de injeção de ar secundário"}
,{"P0419","Mau funcionamento do rele B do sistema de injeção de ar secundário"}
,{"P0420","Eficiência do catalisador abaixo do limite (banco 1)"}
,{"P0421","Aquecimento do catalisador abaixo do limite (banco 1)"}
,{"P0422","Catalisador principal abaixo do limite (banco 1)"}
,{"P0423","Catalisador aquecido abaixo do limite (banco 1)"}
,{"P0424","Temperatura do catalisador aquecido abaixo do limite (banco 1)"}
,{"P0425","Sensor de temperatura do catalisador – (banco 1 sensor 1)"}
,{"P0426","Desempenho do sensor de temperatura do catalisador – (sensor 1 banco 1)"}
,{"P0427","Sinal baixo do sensor de temp. do catalisador – (sensor 1 banco 1)"}
,{"P0428","Sinal alto do sensor de temp. do catalisador – (sensor 1 banco 1)"}
,{"P0429","Controle de aquecimento do catalisador (banco 1)"}
,{"P0430","Eficiência do catalisador abaixo do limite (banco  )"}
,{"P0431","Aquecimento do catalisador abaixo do limite – (banco  )"}
,{"P0432","Catalisador principal abaixo do limite – (banco  )"}
,{"P0433","Catalisador aquecido abaixo do limite – (banco  )"}
,{"P0434","Temperatura do catalisador aquecido abaixo do limite – (banco  )"}
,{"P0435","Sensor de temperatura do catalisador – (Banco   sensor 1)"}
,{"P0436","Desempenho do sensor de temperatura do catalisador – (Banco   sensor 1)"}
,{"P0437","Sinal baixo do sensor de temp. do catalisador – (Banco   sensor 1)"}
,{"P0438","Sinal alto do sensor de temp. do catalisador – (banco   sensor 1)"}
,{"P0439","Controle de aquecimento do catalisador – (Banco  )"}
,{"P0440","Mau funcionamento do sistema de controle de emissões EVAP"}
,{"P0441","Falha do fluxo de purga do sistema de controle de emissões EVAP"}
,{"P0442","Vazamento do sistema de controle de emissões EVAP (pequeno)"}
,{"P0443","Falha da válvula C de purga do sistema de controle de emissões EVAP"}
,{"P0444","Válvula C de purga aberta do sistema de controle de emissões EVAP"}
,{"P0445","Curto circuito da válvula C de purga do sistema de controle EVAP"}
,{"P0446","Mau funcionamento do circuito de ventilação sistema EVAP"}
,{"P0447","Circuito aberto de ventilação do sistema EVAP"}
,{"P0448","Curto circuito do sistema de ventilação do EVAP"}
,{"P0449","Mau funcionamento da válvula solenoidee de ventilação do sistema EVAP"}
,{"P0450","Falha do sensor de pressão do sistema de controle de emissões EVAP"}
,{"P0451","Faixa do sensor de pressão do sistema de controle de emissões EVAP"}
,{"P0452","Sinal baixo do sensor de pressão do sist. de controle de emissões EVAP"}
,{"P0453","Sinal alto do sensor de pressão do sistema de controle de emissões EVAP"}
,{"P0454","Sinal errático do sensor de pressão do sistema EVAP"}
,{"P0455","Vazamento do sistema de controle de emissões EVAP (grande)"}
,{"P0456","Vazamento muito pequeno do sistema de controle de emissões EVAP"}
,{"P0457","Vazamento devido à tampa solta ou fora do sistema EVAP"}
,{"P0458","Sinal baixo do circuito do solenoidee de purga do canister do sistema EVAP"}
,{"P0459","Sinal alto do circuito do solenoidee de purga do canister do sistema EVAP"}
,{"P0460","Mau funcionamento do sensor A do circuito de nível de combustível"}
,{"P0461","Desempenho/faixa do sensor A do circuito de nível de combustível"}
,{"P0462","Sinal baixo de entrada do sensor A do circuito de nível de combustível"}
,{"P0463","Sinal alto de entrada do sensor A do circuito de nível de combustível"}
,{"P0464","Sinal intermitente do sensor A do circuito de nível de combustível"}
,{"P0465","Mau funcionamento do circuito do sensor de fluxo da purga da EVAP"}
,{"P0466","Faixa/desempenho do circuito do sensor de fluxo da purga da EVAP"}
,{"P0467","Baixo sinal de entrada do sensor de fluxo da purga da EVAP"}
,{"P0468","Alto sinal de entrada do sensor de fluxo da purga da EVAP"}
,{"P0469","Sinal intermitente do sensor de fluxo da purga da EVAP"}
,{"P0470","Mau funcionamento do circuito do sensor de pressão do escapamento"}
,{"P0471","Desempenho/faixa do sensor de pressão do escapamento"}
,{"P0472","Baixo sinal de entrada do sensor de pressão do escapamento"}
,{"P0473","Alto sinal de entrada do circuito do sensor de pressão do escapamento"}
,{"P0474","Sinal intermitente do circuito do sensor de pressão do escapamento"}
,{"P0475","Mau funcionamento do circuito da válvula de controle de pressão do escapamento"}
,{"P0476","Desempenho/faixa do circuito da válvula de controle de pressão do escapamento"}
,{"P0477","Baixo sinal de entrada da válvula de controle de pressão do escapamento"}
,{"P0478","Alto sinal de entrada da válvula de controle de pressão do escapamento"}
,{"P0479","Sinal intermitente da válvula de controle de pressão do escapamento"}
,{"P0480","Circuito de controle do ventilador de arrefecimento número 1"}
,{"P0481","Circuito de controle do ventilador de arrefecimento número"}
,{"P0482","Circuito de controle do ventilador de arrefecimento número 3"}
,{"P0483","Mau funcionamento da verificação de racionalidade do controle do ventilador"}
,{"P0484","Corrente excessiva do circuito de controle do ventilador"}
,{"P0485","Mau funcionamento do circuito alimentação/massa de controle do ventilador"}
,{"P0486","Circuito do sensor B do sistema EGR"}
,{"P0487","Circuito de controle do TPS da EGR"}
,{"P0488","Desempenho/faixa do circuito de controle do TPS da EGR"}
,{"P0489","Baixo sinal do circuito de controle da EGR"}
,{"P0490","Sinal alto do circuito de controle da EGR"}
,{"P0491","Sistema de ar secundário (banco 1)"}
,{"P0492","Sistema de ar secundário (banco  )"}
,{"P0493","Sobregiro de rotação do ventilador"}
,{"P0494","Baixa velocidade de rotação do ventilador"}
,{"P0495","Alta velocidade de rotação do ventilador"}
,{"P0496","Falha de fluxo de purga alta do sistema de emissões EVAP"}
,{"P0497","Falha de fluxo de purga baixa do sistema de emissões EVAP"}
,{"P0498","Circuito baixo – mau funcionamento da válvula sol. Ventilação EVAP"}
,{"P0499","Circuito alto – mau funcionamento da válvula sol. Ventilação EVAP"}
,{"P0500","Mau funcionamento do sensor A de velocidade do veículo"}
,{"P0501","Desempenho/faixa do sensor A de velocidade do veículo"}
,{"P0502","Baixo sinal de entrada do circuito do sensor A de veloc. do veículo"}
,{"P0503","Sinal errático/alto do sensor A de velocidade do veículo"}
,{"P0504","Correlação interruptor do freio A/interruptor do freio B"}
,{"P0505","Mau funcionamento do sistema de controle da marcha lenta"}
,{"P0506","Rotação baixa do sistema de controle da marcha lenta"}
,{"P0507","Rotação alta do sistema de controle da marcha lenta"}
,{"P0508","circuito Baixo do sistema de controle da marcha lenta"}
,{"P0509","Circuito Alto do sistema de controle da marcha lenta"}
,{"P0510","Interruptor de posição do acelerador fechado"}
,{"P0511","Circuito do controle de ar da marcha lenta"}
,{"P0512","Circuito do sinal de partida"}
,{"P0513","Sinal do imobilizador incorreto"}
,{"P0514","Desempenho/faixa do sensor de temperatura da bateria"}
,{"P0515","Circuito do sensor de temperatura da bateria"}
,{"P0516","Circuito baixo de temperatura da bateria"}
,{"P0517","Circuito alto de temperatura da bateria"}
,{"P0518","Sinal intermitente do circuito de controle de ar da marcha lenta"}
,{"P0519","Desempenho do sistema de controle de ar da marcha lenta"}
,{"P0520","Mau funcionamento do circuito do sensor/interruptor de pressão óleo motor"}
,{"P0521","Desempenho/faixa circuito sensor/interruptor de pressão de óleo do motor"}
,{"P0522","Baixa tensão do sensor/interruptor de pressão de óleo do motor"}
,{"P0523","Alta tensão do sensor/interruptor de pressão de óleo do motor"}
,{"P0524","Pressão de óleo do motor muito baixa"}
,{"P0525","Desempenho/faixa do circuito do servo do piloto automático"}
,{"P0526","Circuito do sensor de rotação do ventilador"}
,{"P0527","Desempenho/faixa do circuito do sensor de rotação do ventilador"}
,{"P0528","Sem sinal de rotação do sensor de rotação do ventilador"}
,{"P0529","Sinal intermitente do sensor de rotação do ventilador"}
,{"P0530","Mau funcionamento do circuito do sensor A de pressão do refrigerante A/C"}
,{"P0531","Desempenho/faixa do circuito do sensor A de pressão do refrigerante A/C"}
,{"P0532","Sinal baixo de entrada do sensor A de pressão do refrigerante do A/C"}
,{"P0533","Sinal alto de entrada do sensor A de pressão do refrigerante do A/C"}
,{"P0534","Perda de carga do refrigerante do A/C"}
,{"P0535","Circuito do sensor de temperatura do evaporador do A/C"}
,{"P0536","Desempenho/faixa do sensor de temperatura do evaporador do A/C"}
,{"P0537","Sinal baixo do circuito do sensor de temperatura do evaporador do A/C"}
,{"P0538","Sinal alto do circuito do sensor de temperatura do evaporador do A/C"}
,{"P0539","Sinal intermitente do sensor de temperatura do evaporador do A/C"}
,{"P0540","Circuito do aquecedor A do ar de admissão"}
,{"P0541","Sinal baixo do circuito do aquecedor A do ar de admissão"}
,{"P0542","Sinal alto do circuito do aquecedor A do ar de admissão"}
,{"P0543","Circuito Aberto do aquecedor A do ar de admissão"}
,{"P0544","Circuito do sensor de temperatura dos gases de escape (Banco 1 sensor 1)"}
,{"P0545","Sinal baixo do sensor de temperatura dos gases escape (Banco 1 sensor 1)"}
,{"P0546","Sinal alto do sensor de temperatura dos gases escape (Banco 1 sensor 1)"}
,{"P0547","Circuito do sensor de temperatura dos gases de escape (banco   sensor 1)"}
,{"P0548","Sinal baixo do sensor de temperatura dos gases de escape (banco   sensor 1)"}
,{"P0549","Sinal alto do sensor de temperatura dos gases de escape (banco   sensor 1)"}
,{"P0550","Mau funcionamento no circuito do sensor de pressão da direção hidráulica"}
,{"P0551","Desempenho/faixa do sensor de pressão da direção hidráulica"}
,{"P0552","Baixo sinal de entrada do sensor de pressão da direção hidráulica"}
,{"P0553","Alto sinal de entrada do sensor de pressão da direção hidráulica"}
,{"P0554","Sinal intermitente do sensor de pressão da direção hidráulica"}
,{"P0555","Circuito do sensor de pressão do servo freio"}
,{"P0556","Desempenho/faixa do sensor de pressão do servo freio"}
,{"P0557","Baixo sinal de entrada do sensor de pressão do servo freio"}
,{"P0558","Alto sinal de entrada do sensor de pressão do servo freio"}
,{"P0559","Sinal intermitente do sensor de pressão do servo freio"}
,{"P0560","Mau funcionamento do sistema de tensão"}
,{"P0561","Sistema de tensão instável"}
,{"P0562","Sistema de tensão baixo"}
,{"P0563","Sistema de tensão alto"}
,{"P0564","Erro do sinal de entrada A do piloto automático"}
,{"P0565","Mau funcionamento do sinal de LIGADO do piloto automático"}
,{"P0566","Mau funcionamento do sinal de DESLIGADO do piloto automático"}
,{"P0567","Mau funcionamento do sinal de REASSUMIR do piloto automático"}
,{"P0568","Mau funcionamento do sinal de AJUSTAR do piloto automático"}
,{"P0569","Mau funcionamento do sinal de COAST do piloto automático"}
,{"P0570","Erro do sinal de aceleração do piloto automático"}
,{"P0571","Mau funcionamento do circuito A do interruptor de freio"}
,{"P0572","Baixo sinal de entrada do interruptor de freio A"}
,{"P0573","Alto sinal de entrada do interruptor de freio A"}
,{"P0574","Velocidade muito alta do veículo no sistema de piloto automático"}
,{"P0575","Mau funcionamento do circuito do piloto automático"}
,{"P0576","Baixo sinal de entrada do circuito do piloto automático"}
,{"P0577","Alto sinal de entrada do circuito do piloto automático"}
,{"P0578","Circuito de entrada A travado do piloto automático"}
,{"P0579","Desempenho/faixa do circuito de entrada A do piloto automático"}
,{"P0580","Baixo sinal de entrada do circuito de entrada A do piloto automático"}
,{"P0581","Alto sinal de entrada do circuito de entrada A do piloto automático"}
,{"P0582","Circuito aberto do controle de vácuo do piloto automático"}
,{"P0583","Baixo sinal de entrada do controle de vácuo do piloto automático"}
,{"P0584","sinal Alto de entrada do controle de vácuo do piloto automático"}
,{"P0585","Correlação de entrada do piloto automático"}
,{"P0586","Circuito aberto do controle de ventilação do piloto automático"}
,{"P0587","Sinal Baixo de entrada do controle de ventilação do piloto automático"}
,{"P0588","Sinal Alto de entrada do controle de ventilação do piloto automático"}
,{"P0589","Circuito de entrada B do piloto automático"}
,{"P0590","Circuito de entrada B do piloto automático travado"}
,{"P0591","Desempenho/faixa do circuito de entrada B do piloto automático"}
,{"P0592","Baixo sinal de entrada do circuito de entrada B do piloto automático"}
,{"P0593","Alto sinal de entrada do circuito de entrada B do piloto automático"}
,{"P0594","Circuito aberto de controle do servo do piloto automático"}
,{"P0595","Sinal Baixo de entrada do controle do servo do piloto automático"}
,{"P0596","Sinal Alto de entrada do controle do servo do piloto automático"}
,{"P0597","Circuito aberto do piloto automático"}
,{"P0598","Sinal Baixo do piloto automático"}
,{"P0599","Sinal Alto do piloto automático"}
,{"P0600","Mau funcionamento da linha de comunicação serial"}
,{"P0601","Erro de memória do módulo de controle interno"}
,{"P0602","Erro de programação do módulo de controle"}
,{"P0603","Erro de memória KAM do PCM"}
,{"P0604","Erro de memória RAM do PCM"}
,{"P0605","Erro de memória ROM do PCM"}
,{"P0606","Falha do processador do PCM"}
,{"P0607","Desempenho do módulo de controle"}
,{"P0608","Mau funcionamento da saída do VSS A do módulo de controle"}
,{"P0609","Mau funcionamento da saída do VSS B do módulo de controle"}
,{"P0610","Mau funcionamento das opções do módulo de controle do veículo"}
,{"P0611","Desempenho do módulo de controle dos injetores"}
,{"P0612","Rele de controle do módulo dos injetores"}
,{"P0613","Falha do processador do TCM"}
,{"P0614","ECM / TCM incompatíveis"}
,{"P0615","Circuito do relé de partida"}
,{"P0616","Sinal baixo do relé de partida"}
,{"P0617","Sinal alto do relé de partida"}
,{"P0618","Erro de memória KAM do módulo de combustível alternativo"}
,{"P0619","Memória do módulo de combustível alternativo"}
,{"P0620","Mau funcionamento do controle do alternador"}
,{"P0621","Controle da lâmpada do terminal L do alternador"}
,{"P0622","Controle do campo F do terminal F do alternador"}
,{"P0623","Circuito de controle da lâmpada do alternador"}
,{"P0624","Circuito da lâmpada da tampa do tanque de combustível"}
,{"P0625","Sinal baixo do circuito do terminal F do alternador"}
,{"P0626","Sinal alto do circuito do terminal F do alternador"}
,{"P0627","Circuito aberto do controle A da bomba de combustível"}
,{"P0628","Sinal baixo do circuito de controle A da bomba de combustível"}
,{"P0629","Sinal alto do circuito de controle A da bomba de combustível"}
,{"P0630","VIN não programado ou erro de programa no PCM"}
,{"P0631","VIN não programado ou erro de programa no TCM"}
,{"P0632","Código do hodômetro não programado no ECM/PCM"}
,{"P0633","Código do imobilizador não programado no ECM/PCM"}
,{"P0634","Temperatura interna do PCM/TCM/ECM muito alta"}
,{"P0635","Circuito de controle da direção hidráulica"}
,{"P0636","Sinal baixo do circuito de controle da direção hidráulica"}
,{"P0637","Sinal alto do circuito de controle da direção hidráulica"}
,{"P0638","Desempenho/faixa do atuador do acelerador (Banco 1)"}
,{"P0639","Desempenho/faixa do atuador do acelerador (Banco  )"}
,{"P0640","Circuito de controle do aquecedor do ar de admissão"}
,{"P0641","Circuito aberto do sensor A de tensão de referência"}
,{"P0642","Sinal baixo do sensor A de tensão de referência"}
,{"P0643","Sinal alto do sensor A de tensão de referência"}
,{"P0644","Elo de comunicação serial com o display do motorista"}
,{"P0645","Circuito de controle do rele da embreagem do A/C"}
,{"P0646","Sinal baixo do rele de controle da embreagem do A/C"}
,{"P0647","Sinal alto do rele de controle da embreagem do A/C"}
,{"P0648","Circuito da lâmpada do imobilizador"}
,{"P0649","Circuito da lâmpada do piloto automático"}
,{"P0650","Mau funcionamento do circuito de controle da luz MIL"}
,{"P0651","Circuito aberto do sensor B de tensão de referência"}
,{"P0652","Sinal baixo do sensor B de tensão de referência"}
,{"P0653","Sinal alto do sensor B de tensão de referência"}
,{"P0654","Mau funcionamento do circuito de RPM do motor"}
,{"P0655","Mau funcionamento do circuito de saída da lâmpada de superaquecimento do motor"}
,{"P0656","Mau funcionamento do circuito de saída do nível de combustível"}
,{"P0657","Circuito aberto do atuador de fornecimento de tensão A"}
,{"P0658","Baixo sinal do atuador de fornecimento de tensão A"}
,{"P0659","Sinal alto do atuador de fornecimento de tensão A"}
,{"P0660","Circuito de controle do coletor de admissão do banco 1 – circuito aberto"}
,{"P0661","Sinal baixo do circuito de controle do coletor de admissão banco 1"}
,{"P0662","Sinal alto do circuito de controle do coletor de admissão banco 1"}
,{"P0663","Circuito de controle do coletor de admissão do banco   – circuito aberto"}
,{"P0664","Sinal baixo do circuito de controle do coletor de admissão banco 1"}
,{"P0665","Sinal alto do circuito de controle do coletor de admissão banco 1"}
,{"P0666","Circuito do sensor de temperatura interna do PCM/ECM/TCM"}
,{"P0667","Desempenho/faixa do sensor de temperatura interna do PCM/ECM/TCM"}
,{"P0668","Sinal baixo do sensor de temperatura interna do PCM/ECM/TCM"}
,{"P0669","Sinal alto do sensor de temperatura interna do PCM/ECM/TCM"}
,{"P0670","Módulo de controle do aquecedor/vela aquecedora"}
,{"P0671","Aquecedor/vela aquecedora do cilindro 1"}
,{"P0672","Aquecedor/vela aquecedora do cilindro"}
,{"P0673","Aquecedor/vela aquecedora do cilindro 3"}
,{"P0674","Aquecedor/vela aquecedora do cilindro 4"}
,{"P0675","Aquecedor/vela aquecedora do cilindro 5"}
,{"P0676","Aquecedor/vela aquecedora do cilindro 6"}
,{"P0677","Aquecedor/vela aquecedora do cilindro 7"}
,{"P0678","Aquecedor/vela aquecedora do cilindro 8"}
,{"P0679","Aquecedor/vela aquecedora do cilindro 9"}
,{"P0680","Aquecedor/vela aquecedora do cilindro 10"}
,{"P0681","Aquecedor/vela aquecedora do cilindro 11"}
,{"P0682","Aquecedor/vela aquecedora do cilindro 1"}
,{"P0683","Problema de comunicação com o módulo do aquecedor/vela aquecedora"}
,{"P0684","Problema de comunicação – Desempenho/faixa do módulo do aquecedor/vela aquec."}
,{"P0685","Circuito aberto do rele de controle de alimentação do ECM/PCM/TCM"}
,{"P0686","Sinal baixo do circuito do rele de controle de alimentação do ECM/PCM/TCM"}
,{"P0687","Sinal alto do circuito do relé de controle de alimentação do ECM/PCM/TCM"}
,{"P0688","Circuito aberto do sensor do rele de alimentação do ECM/PCM"}
,{"P0689","Sinal baixo do sensor do relé de alimentação do ECM/PCM"}
,{"P0690","Sinal alto do sensor do relé de alimentação do ECM/PCM"}
,{"P0691","Sinal baixo do circuito de controle do ventilador número 1"}
,{"P0692","Sinal alto do circuito de controle do ventilador número 1"}
,{"P0693","Sinal baixo do circuito de controle do ventilador número"}
,{"P0694","Sinal alto do circuito de controle do ventilador número"}
,{"P0695","Sinal baixo do circuito de controle do ventilador número 3"}
,{"P0696","Sinal alto do circuito de controle do ventilador número 3"}
,{"P0697","Circuito aberto do sensor C de tensão de referência"}
,{"P0698","Sinal baixo do sensor C de tensão de referência"}
,{"P0699","Sinal alto do sensor C de tensão de referência"}
,{"P0700","Mau funcionamento do sistema de controle da transmissão"}
,{"P0701","Desempenho/faixa do sistema de controle da transmissão"}
,{"P0702","Sistema elétrico do sistema de controle da transmissão"}
,{"P0703","Mau funcionamento do circuito do interruptor de freio B"}
,{"P0704","Mau funcionamento do circuito de entrada do interruptor da embreagem"}
,{"P0705","Mau funcionamento do circuito do sensor de posição da alavanca (entrada PRNDL)"}
,{"P0706","Desempenho/faixa do sensor de posição da alavanca"}
,{"P0707","Sinal baixo do sensor de posição da alavanca"}
,{"P0708","Sinal alto do sensor de posição da alavanca"}
,{"P0709","Sinal intermitente do sensor de posição da alavanca"}
,{"P0710","Mau funcionamento do circuito do sensor de temperatura do fluido da transmissão"}
,{"P0711","Desempenho/faixa do sensor A de temperatura do fluido da transmissão"}
,{"P0712","Sinal baixo do sensor A de temperatura do fluido da transmissão"}
,{"P0713","Sinal alto do sensor A de temperatura do fluido da transmissão"}
,{"P0714","Sinal intermitente do sensor A de temperatura do fluido da transmissão"}
,{"P0715","Mau funcionamento do circuito do sensor A de rotação de entrada da turbina"}
,{"P0716","Desempenho/faixa do sensor A de rotação de entrada da turbina"}
,{"P0717","Sem sinal do sensor A de rotação de entrada da turbina"}
,{"P0718","Sinal intermitente do sensor A de rotação de entrada da turbina"}
,{"P0719","Sinal baixo de entrada do circuito do interruptor de freio B"}
,{"P0720","Mau funcionamento do circuito do sensor de rotação do eixo de saída"}
,{"P0721","Desempenho/faixa do sensor de rotação do eixo de saída"}
,{"P0722","Sem sinal do sensor de rotação do eixo de saída"}
,{"P0723","Sinal intermitente do sensor de rotação do eixo de saída"}
,{"P0724","Sinal de entrada alto do interruptor do freio B"}
,{"P0725","Mau funcionamento do sensor de rotação do motor"}
,{"P0726","Desempenho/faixa do sensor de rotação do motor"}
,{"P0727","Sem sinal do sensor de rotação do motor"}
,{"P0728","Sinal intermitente do sensor de rotação do motor"}
,{"P0729","Relação incorreta da 6ª marcha"}
,{"P0730","Relação de marcha incorreta"}
,{"P0731","Relação incorreta da 1ª marcha"}
,{"P0732","Relação incorreta da  a marcha"}
,{"P0733","Relação incorreta da 3a marcha"}
,{"P0734","Relação incorreta da 4a marcha"}
,{"P0735","Relação incorreta da 5a marcha"}
,{"P0736","Relação incorreta da marcha à ré"}
,{"P0737","Circuito de saída da rotação do motor para o TCM"}
,{"P0738","Sinal baixo de saída de rotação do motor para o TCM"}
,{"P0739","Sinal alto de saída de rotação do motor para o TCM"}
,{"P0740","Mau funcionamento do circuito da embreagem do conversor de torque TCC"}
,{"P0741","Desempenho da embreagem do conversor de torque ou TCC travado"}
,{"P0742","Circuito da embreagem do conversor de torque travado aplicado"}
,{"P0743","Sistema elétrico da embreagem do conversor de torque"}
,{"P0744","Aplicação intermitente da embreagem do conversor de torque"}
,{"P0745","Mau funcionamento do circuito do solenoide de controle de pressão A"}
,{"P0746","Mau desempenho ou travamento do solenoide de controle de pressão A"}
,{"P0747","Solenoide de controle de pressão A travado aplicado"}
,{"P0748","Circuito elétrico do solenoide de controle de pressão A"}
,{"P0749","Falha intermitente do solenoide de controle de pressão A"}
,{"P0750","Mau funcionamento do solenoide de mudança A"}
,{"P0751","Solenoide de controle de mudança A – travado desligado ou mau funcionamento"}
,{"P0752","Circuito do solenoide de mudança A travado ligado"}
,{"P0753","Circuito elétrico do solenoide de mudança A"}
,{"P0754","Defeito intermitente do solenoide de mudança A"}
,{"P0755","Mau funcionamento do solenoide de mudança B"}
,{"P0756","Solenoide de controle de mudança B – travado desligado ou mau funcionamento"}
,{"P0757","Circuito do solenoide de mudança B travado ligado"}
,{"P0758","Circuito elétrico do solenoide de mudança B"}
,{"P0759","Defeito intermitente do solenoide de mudança B"}
,{"P0760","Mau funcionamento do solenoide de mudança C"}
,{"P0761","Solenoide de controle de mudança C – travado desligado ou mau funcionamento"}
,{"P0762","Circuito do solenoide de mudança C travado ligado"}
,{"P0763","Circuito elétrico do solenoide de mudança C"}
,{"P0764","Defeito intermitente do solenoide de mudança C"}
,{"P0765","Mau funcionamento do solenoide de mudança D"}
,{"P0766","Solenoide de controle de mudança D – travado desligado ou mau funcionamento"}
,{"P0767","Circuito do solenoide de mudança D travado ligado"}
,{"P0768","Circuito elétrico do solenoide de mudança D"}
,{"P0769","Defeito intermitente do solenoide de mudança D"}
,{"P0770","Mau funcionamento do solenoide de mudança E"}
,{"P0771","Solenoide de controle de mudança E – Travado desligado ou mau funcionamento"}
,{"P0772","Circuito do solenoide de mudança E travado ligado"}
,{"P0773","Circuito elétrico do solenoide de mudança E"}
,{"P0774","Defeito intermitente do solenoide de mudança E"}
,{"P0775","Mau funcionamento do circuito do solenoide de controle de pressão B"}
,{"P0776","Mau desempenho ou travamento do solenoide de controle de pressão B"}
,{"P0777","Circuito do solenoide de controle de pressão B travado ligado"}
,{"P0778","Circuito elétrico do solenoide de controle de pressão B"}
,{"P0779","Defeito intermitente do solenoidee de controle de pressão B"}
,{"P0780","Mau funcionamento das mudanças de marcha"}
,{"P0782","Mau funcionamento da mudança  -3"}
,{"P0783","Mau funcionamento da mudança 3-4"}
,{"P0784","Mau funcionamento da mudança 4-5"}
,{"P0785","Mau funcionamento do solenoide de mudança/sincronismo de marchas"}
,{"P0786","Desempenho/faixa do solenoide de mudança/sincronismo de marchas"}
,{"P0787","Sinal baixo do solenoide de mudança/sincronismo de marchas"}
,{"P0788","Sinal alto do solenoide de mudança/sincronismo de marchas"}
,{"P0789","Sinal intermitente do solenoide de mudança/sincronismo de marchas"}
,{"P0790","Mau funcionamento do circuito do interruptor esportivo/econômico"}
,{"P0791","Circuito do sensor A de rotação do eixo intermediário"}
,{"P0792","Desempenho/faixa do sensor A de rotação do eixo intermediário"}
,{"P0793","Sem sinal do sensor A de rotação do eixo intermediário"}
,{"P0794","Sinal intermitente do sensor A de rotação do eixo intermediário"}
,{"P0795","Mau funcionamento do solenoide de controle de pressão C"}
,{"P0796","Desempenho ou travamento do solenoide de controle de pressão C"}
,{"P0797","Circuito do solenoide de controle de pressão C – travado ligado"}
,{"P0798","Circuito elétrico do solenoidee de controle de pressão C"}
,{"P0799","Defeito intermitente do solenoide de controle de pressão C"}
,{"P0800","Solicitação de acendimento da luz MIL para o sistema de controle da caixa de transferência"}
,{"P0801","Mau funcionamento do circuito de controle do inibidor da Ré"}
,{"P0802","Circuito de acendimento da LUZ mil para a transmissão – circuito aberto"}
,{"P0803","Mau funcionamento do circuito dos solenoidees de mudança 1-4"}
,{"P0804","Mau funcionamento do circuito da lâmpada de mudanças ascendentes 1-4"}
,{"P0805","Mau funcionamento do circuito do sensor de posição da embreagem"}
,{"P0806","Desempenho/faixa do circuito do sensor de posição da embreagem"}
,{"P0807","Sinal baixo do circuito do sensor de posição da embreagem"}
,{"P0808","Sinal alto do circuito do sensor de posição da embreagem"}
,{"P0809","Sinal intermitente do sensor de posição da embreagem"}
,{"P0810","Mau funcionamento do sensor de posição da embreagem"}
,{"P0811","Excessiva patinação da embreagem"}
,{"P0812","Mau funcionamento do circuito de entrada da Ré"}
,{"P0813","Mau funcionamento do circuito de saída da Ré"}
,{"P0814","Mau funcionamento do circuito do display da transmissão"}
,{"P0815","Mau funcionamento do circuito do interruptor de mudanças ascendentes"}
,{"P0816","Mau funcionamento do circuito do interruptor de mudanças descendentes"}
,{"P0817","Circuito de desabilitação da partida"}
,{"P0818","Entrada do interruptor de desconexão do eixo cardã"}
,{"P0819","Correlação do interruptor de posição da alavanca com o interruptor de marchas ascendentes e descendentes"}
,{"P0820","Circuito do sensor X-Y da alavanca de mudanças"}
,{"P0821","Circuito do sensor X da alavanca de mudanças"}
,{"P0822","Circuito do sensor Y da alavanca de mudanças"}
,{"P0823","Sinal intermitente do sensor X da alavanca de mudanças"}
,{"P0824","Sinal intermitente do sensor Y da alavanca de mudanças"}
,{"P0825","Interruptor da alavanca de mudanças (mudanças antecipadas)"}
,{"P0826","Circuito do interruptor de mudanças ascendentes e descendentes"}
,{"P0827","Sinal baixo do interruptor de mudanças ascendentes e descendentes"}
,{"P0828","Sinal alto do interruptor de mudanças ascendentes e descendentes"}
,{"P0829","Mudança 5-6"}
,{"P0830","Mau funcionamento do interruptor A da posição da embreagem"}
,{"P0831","Sinal baixo do interruptor A de posição da embreagem"}
,{"P0832","Sinal alto do interruptor A de posição da embreagem"}
,{"P0833","Mau funcionamento circuito do interruptor B de posição da embreagem"}
,{"P0834","Sinal baixo do interruptor B de posição da embreagem"}
,{"P0835","Sinal alto do interruptor B de posição da embreagem"}
,{"P0836","Mau funcionamento do circuito do interruptor da tração 4X4"}
,{"P0837","Desempenho/faixa do interruptor da tração 4X4"}
,{"P0838","Sinal baixo do interruptor da tração 4X4"}
,{"P0839","Sinal alto do interruptor da tração 4X4"}
,{"P0840","Mau funcionamento do sensor/interruptor A de pressão do fluido da transmissão"}
,{"P0841","Desempenho/faixa do sensor/interruptor A de pressão do fluido da transmissão"}
,{"P0842","Sinal baixo do sensor/interruptor A de pressão do fluido da transmissão"}
,{"P0843","Sinal alto do sensor/interruptor A de pressão do fluido da transmissão"}
,{"P0844","Sinal intermitente do sensor/interruptor de pressão A fluido da transmissão"}
,{"P0845","Mau funcionamento do sensor/interruptor de pressão B fluido da transmissão"}
,{"P0846","Desempenho/faixa do sensor/interruptor de pressão B do fluido da transmissão"}
,{"P0847","Sinal baixo do sensor/interruptor de pressão B do fluido da transmissão"}
,{"P0848","Sinal alto do sensor/interruptor de pressão B do fluido da transmissão"}
,{"P0849","Sinal intermitente do sensor/interruptor de pressão B fluido da transmissão"}
,{"P0850","Circuito de entrada do interruptor Park/Neutro"}
,{"P0851","Sinal baixo do interruptor Park/Neutro"}
,{"P0852","Sinal alto do interruptor Park/Neutro"}
,{"P0853","Circuito de entrada do interruptor Drive"}
,{"P0854","Sinal baixo do interruptor Drive"}
,{"P0855","Sinal alto do interruptor Drive"}
,{"P0856","Sinal de entrada do controle de tração"}
,{"P0857","Desempenho/faixa do sinal de entrada do controle de tração"}
,{"P0858","Sinal baixo de entrada do controle de tração"}
,{"P0859","Sinal alto de entrada do controle de tração"}
,{"P0860","Circuito de comunicação do módulo de mudanças de marcha"}
,{"P0861","Sinal baixo do circuito de comunicação do módulo de mudanças de marcha"}
,{"P0862","Sinal alto do circuito de comunicação do módulo de mudanças de marcha"}
,{"P0863","Circuito de comunicação do TCM"}
,{"P0864","Desempenho/faixa do circuito de comunicação do TCM"}
,{"P0865","Sinal baixo do circuito de comunicação do TCM"}
,{"P0866","Sinal alto do circuito de comunicação do TCM"}
,{"P0867","Pressão do fluido da transmissão"}
,{"P0868","Pressão baixa do fluido da transmissão"}
,{"P0869","Pressão alta do fluido da transmissão"}
,{"P0870","Circuito do sensor/interruptor C de pressão do fluido da transmissão"}
,{"P0871","Desempenho/faixa do sensor interruptor C de pressão fluido transmissão"}
,{"P0872","Sinal baixo do sensor/interruptor C de pressão fluido transmissão"}
,{"P0873","Sinal alto do sensor/interruptor C de pressão fluido transmissão"}
,{"P0874","Sinal intermitente do sensor/interruptor C de pressão fluido transmissão"}
,{"P0875","Circuito do sensor/interruptor D de pressão fluido transmissão"}
,{"P0876","Desempenho/faixa do sensor/interruptor D de pressão fluido transmissão"}
,{"P0877","Sinal baixo do sensor/interruptor D de pressão fluido transmissão"}
,{"P0878","Sinal alto do sensor/interruptor D de pressão fluido transmissão"}
,{"P0879","Sinal intermitente do sensor/interruptor D de pressão fluido transmissão"}
,{"P0880","Sinal de entrada de alimentação do TCM"}
,{"P0881","Desempenho/faixa do sinal de entrada de alimentação do TCM"}
,{"P0882","Sinal baixo de entrada de alimentação do TCM"}
,{"P0883","Sinal alto de entrada de alimentação do TCM"}
,{"P0884","Sinal intermitente de entrada de alimentação do TCM"}
,{"P0885","Circuito aberto do relé de alimentação do TCM"}
,{"P0886","Sinal baixo de tensão do relé de alimentação do TCM"}
,{"P0887","Sinal alto de tensão do relé de alimentação do TCM"}
,{"P0888","Circuito sensor do relé de alimentação do TCM"}
,{"P0889","Desempenho/faixa do circuito sensor do relé de alimentação do TCM"}
,{"P0890","Sinal baixo do sensor do relé de alimentação do TCM"}
,{"P0891","Sinal alto do sensor do relé de alimentação do TCM"}
,{"P0892","Sinal intermitente do sensor do relé de alimentação do TCM"}
,{"P0893","Várias marchas engatadas"}
,{"P0894","Patinação da transmissão"}
,{"P0895","Tempo de mudança muito curto"}
,{"P0896","Tempo de mudança muito longo"}
,{"P0897","Deterioração do fluido da transmissão"}
,{"P0898","Sinal baixo da lâmpada MIL de controle da transmissão"}
,{"P0899","Sinal alto da lâmpada MIL de controle da transmissão"}
,{"P0900","Circuito aberto do atuador da embreagem"}
,{"P0901","Desempenho/faixa do atuador da embreagem"}
,{"P0902","Sinal baixo do atuador da embreagem"}
,{"P0903","Sinal alto do atuador da embreagem"}
,{"P0904","Circuito de posição de seleção de porta"}
,{"P0905","Desempenho/faixa de posição de seleção de porta"}
,{"P0906","Sinal baixo do circuito de posição de seleção de porta"}
,{"P0907","Sinal alto do circuito de posição de seleção de porta"}
,{"P0908","Sinal intermitente do circuito de posição de seleção de porta"}
,{"P0909","Erro do controle de seleção de porta"}
,{"P0910","Circuito aberto do atuador de seleção de porta"}
,{"P0911","Desempenho/faixa do atuador de seleção de porta"}
,{"P0912","Sinal baixo do atuador de seleção de porta"}
,{"P0913","Sinal alto do atuador de seleção de porta"}
,{"P0914","Circuito de posição de engate de marchas"}
,{"P0915","Desempenho/faixa do circuito de posição de engate de marchas"}
,{"P0916","Sinal baixo do circuito de posição de engate de marchas"}
,{"P0917","Sinal alto do circuito de posição de engate de marchas"}
,{"P0918","Sinal intermitente do circuito de posição de engate de marchas"}
,{"P0919","Erro do controle de posição de engate das marchas"}
,{"P0920","Circuito aberto do atuador de mudanças de marchas à frente"}
,{"P0921","Desempenho/faixa do atuador de mudanças de marchas à frente"}
,{"P0922","Sinal baixo do atuador de mudanças de marchas à frente"}
,{"P0923","Sinal alto do atuador de mudanças de marchas à frente"}
,{"P0924","Circuito aberto do atuador de mudança à Ré"}
,{"P0925","Desempenho/faixa do circuito do atuador de mudança à Ré"}
,{"P0926","Sinal baixo do circuito do atuador de mudança à Ré"}
,{"P0927","Sinal alto do circuito do atuador de mudança à Ré"}
,{"P0928","Circuito aberto do solenoidee de travamento da alavanca de mudanças"}
,{"P0929","Desempenho/faixa do solenoidee de travamento alavanca de mudanças"}
,{"P0930","Sinal baixo do solenoidee de travamento da alavanca de mudanças"}
,{"P0931","Sinal alto do solenoidee de travamento da alavanca de mudanças"}
,{"P0932","Circuito do sensor de pressão hidráulica"}
,{"P0933","Desempenho/faixa do sensor de pressão hidráulica"}
,{"P0934","Sinal baixo do sensor de pressão hidráulica"}
,{"P0935","Sinal alto do sensor de pressão hidráulica"}
,{"P0936","Sinal intermitente do sensor de pressão hidráulica"}
,{"P0937","Circuito do sensor de temperatura do fluido hidráulico"}
,{"P0938","Desempenho/faixa do sensor de temperatura do fluido hidráulico"}
,{"P0939","Sinal baixo do sensor de temperatura do fluido hidráulico"}
,{"P0940","Sinal alto do sensor de temperatura do fluido hidráulico"}
,{"P0941","Sinal intermitente do sensor de temperatura do fluido hidráulico"}
,{"P0942","Unidade de pressão hidráulica"}
,{"P0943","Ciclagem muito curta de pressão da unidade hidráulica"}
,{"P0944","Perda de pressão da unidade hidráulica"}
,{"P0945","Circuito aberto do relé da bomba hidráulica"}
,{"P0946","Desempenho/faixa do relé da bomba hidráulica"}
,{"P0947","Sinal baixo do relé da bomba hidráulica"}
,{"P0948","Sinal alto do relé da bomba hidráulica"}
,{"P0949","Aprendizado adaptativo do auto shift incompleto"}
,{"P0950","Circuito de controle manual do auto shift"}
,{"P0951","Desempenho/faixa do controle manual do auto shift"}
,{"P0952","Sinal baixo do controle manual do auto shift"}
,{"P0953","Sinal alto do controle manual do auto shift"}
,{"P0954","Sinal intermitente do controle manual do auto shift"}
,{"P0955","Circuito de modo manual do auto shift"}
,{"P0956","Desempenho/faixa do modo manual do auto shift"}
,{"P0957","Sinal baixo do modo manual do auto shift"}
,{"P0958","Sinal alto do modo manual do auto shift"}
,{"P0959","Sinal intermitente do modo manual do auto shift"}
,{"P0960","Circuito do solenoidee A de controle de pressão – circuito aberto"}
,{"P0961","Desempenho/faixa do circuito do solenoidee A de pressão"}
,{"P0962","Sinal baixo do circuito do solenoidee de controle de pressão A"}
,{"P0963","Sinal alto do circuito do solenoidee de controle de pressão A"}
,{"P0964","Circuito do solenoidee B de controle de pressão – circuito aberto"}
,{"P0965","Desempenho/faixa do circuito do solenoidee B de pressão"}
,{"P0966","Sinal baixo do solenoidee de controle de pressão B"}
,{"P0967","Sinal alto do solenoidee de controle de pressão B"}
,{"P0968","Circuito do solenoidee C de controle de pressão – circuito aberto"}
,{"P0969","Desempenho/faixa do circuito do solenoidee C de pressão"}
,{"P0970","Sinal baixo do solenoidee de controle de pressão C"}
,{"P0971","Sinal alto do solenoidee de controle de pressão C"}
,{"P0972","Desempenho/faixa do solenoidee de mudança A"}
,{"P0973","Sinal baixo do solenoidee de mudança A"}
,{"P0974","Sinal alto do solenoidee de mudança A"}
,{"P0975","Desempenho/faixa do solenoidee de mudança B"}
,{"P0976","Sinal baixo do solenoidee mudança B"}
,{"P0977","Sinal alto do solenoidee de mudança B"}
,{"P0978","Desempenho/faixa do solenoidee de mudança C"}
,{"P0979","Sinal baixo do solenoidee de mudança C"}
,{"P0980","Sinal alto do solenoidee de mudança C"}
,{"P0981","Desempenho/faixa do solenoidee de mudança D"}
,{"P0982","Sinal baixo do solenoidee de mudança D"}
,{"P0983","Sinal alto do solenoidee de mudança D"}
,{"P0984","Desempenho/faixa do solenoidee de mudança E"}
,{"P0985","Sinal baixo do solenoidee de mudança E"}
,{"P0986","Sinal alto do solenoidee de mudança E"}
,{"P0987","Circuito do sensor/interruptor E de pressão do fluido da transmissão"}
,{"P0988","Desempenho/faixa do sensor/interruptor E de pressão fluido transmissão"}
,{"P0989","Sinal baixo do sensor/interruptor E de pressão fluido transmissão"}
,{"P0990","Sinal alto do sensor/interruptor E de pressão fluido transmissão"}
,{"P0991","Sinal intermitente do sensor/interruptor E de pressão fluido transmissão"}
,{"P0992","Circuito do sensor/interruptor F de pressão do fluido da transmissão"}
,{"P0993","Desempenho/faixa do sensor/interruptor F de pressão do fluido da transmissão"}
,{"P0994","Sinal baixo do sensor/interruptor de pressão F do fluido da transmissão"}
,{"P0995","Sinal alto do sensor/interruptor de pressão F do fluido da transmissão"}
,{"P0996","Sinal intermitente do sensor/interruptor de pressão F fluido transmissão"}
,{"P0997","Desempenho/faixa do circuito de controle do solenoidee de mudança F"}
,{"P0998","Sinal baixo do circuito de controle do solenoidee de mudança F"}
,{"P0999","Sinal alto do circuito de controle do solenoidee de mudança F Sistema de Controle de Transmissão MIL Pedido circuito de alta"}
,{"P0A00","Circuito do Sensor de Temperatura do Refrigerador Eletrônico do Motor"}
,{"P0A01","Faixa/Desempenho do Circuito do Sensor de Temperatura do Refrigerador Eletrônico do Motor"}
,{"P0A02","Circuito do Sensor de Temperatura do Refrigerador Eletrônico do Motor Baixo"}
,{"P0A03","Circuito do Sensor de Temperatura do Refrigerador Eletrônico do Motor Alto"}
,{"P0A04","Circuito do Sensor de Temperatura do Refrigerador Eletrônico do Motor Intermitente"}
,{"P0A05","Circuito de Controle da Bomba do Refrigerador da Eletrônica do Motor/ Aberto"}
,{"P0A06","Circuito de Controle da Bomba do Refrigerador da Eletrônica do Motor Baixo"}
,{"P0A07","Circuito de Controle da Bomba do Refrigerador da Eletrônica do Motor Alto"}
,{"P0A08","Status do Circuito do Conversor DC/ DC."}
,{"P0A09","Entrada do Status do Circuito do Conversor DC/ DC Baixa"}
,{"P0A10","Entrada do Status do Circuito do Conversor DC/ DC Alta"}
,{"P0A11","Circuito de Habilitação do Conversor DC/ DC / Aberto"}
,{"P0A12","Circuito de Habilitação do Conversor DC/ DC Baixo"}
,{"P0A13","Circuito de Habilitação do Conversor DC/ DC Alto"}
,{"P0A14","Circuito de Controle da Montagem de Motor/ Aberto"}
,{"P0A15","Circuito de Controle da Montagem de Motor Baixa"}
,{"P0A16","Circuito de Controle da Montagem de Motor Alta"}
,{"P0A17","Circuito do Sensor de Torque do Motor"}
,{"P0A18","Faixa do Circuito do Sensor de Torque do Motor / Desempenho"}
,{"P0A19","Circuito do Sensor de Torque do Motor Baixo"}
,{"P0A20","Circuito do Sensor de Torque do Motor Alto"}
,{"P0A21","Circuito do Sensor de Torque do Motor Intermitente"}
,{"P0A22","Circuito do Sensor do Gerador de Torque"}
,{"P0A23","Faixa do Circuito do Sensor do Gerador de Torque/ Desempenho"}
,{"P0A24","Circuito do Sensor do Gerador de Torque Baixo"}
,{"P0A25","Circuito do Sensor do Gerador de Torque Alto"}
,{"P0A26","Circuito do Sensor do Gerador de Torque Intermitente"}
,{"P0A27","Circuito Power Off da Bateria"}
,{"P0A28","Circuito Power Off da Bateria Baixo"}
,{"P0A29","Circuito Power Off da Bateria Alto"}
,{"P1000","Sistema de preparação para o teste não for concluído"}
,{"P1001","Sistema de diagnóstico incompleto"}
,{"P1039","Sinal de velocidade do veículo ausente ou inadequada"}
,{"P1051","Interruptor do travão de sinal ausente ou inadequada"}
,{"P1100","Sensor flujo massa ar – interrupção intermitente"}
,{"P1101","Sensor flujo masa aire – fuera limites"}
,{"P1102","O  Circ Aquecimento Sensor.  Bank1-Sensor1 curto para B +"}
,{"P1103","O  Circ Aquecimento Sensor.  Bank1-Sensor1 saída muito baixa"}
,{"P1104","Bank1 sensor   leak Tensão Muito Baixa"}
,{"P1105","Sensor pressão barométrica – circuito defeituoso"}
,{"P1106","Sinal de baixa tensão Sensor Alternador / MAPA"}
,{"P1107","Sinal de baixa tensão Sensor Alternador / MAPA"}
,{"P1108","Testigo Bateria  alternador – circuito defectuoso"}
,{"P1109","Temperatura do ar de admissão – falha intermitente"}
,{"P1110","Entrada da válvula cronometrando banco de controle 1"}
,{"P1111","Temperatura do ar de admissão – intermitente / alta rompimento"}
,{"P1112","Temperatura do ar de admissão – baixo interrupção intermitente /"}
,{"P1113",""}
,{"P1114","Temperatura motor intermitente / Ar admissão sinal de entrada baixa"}
,{"P1115","Temperatura motor intermitente / Ar admissão sinal entrada alta"}
,{"P1116","Temperatura motor fora de faixa"}
,{"P1117","Sensor temperatura refrigerante motor – interrupção intermitente"}
,{"P1118","Absoluto escape Sensor de Temperatura – Entrada de sinal baixo"}
,{"P1119","Sensor Temperatura absoluta escape – sinal de entrada alta"}
,{"P1120","Sensor posição mariposa – fora da faixa"}
,{"P1121","Sensor posição mariposa – intermitente  sinal alta"}
,{"P1122","Sensor de posição do acelerador – sinal intermitente  baixa"}
,{"P1123","Sensor posição mariposa – valor elevado"}
,{"P1124","Fora dos limites – sensor de posição do acelerador"}
,{"P1125","Sensor posição mariposa – interrupção intermitente"}
,{"P1126",""}
,{"P1127","Temperatura escape – fora da faixa"}
,{"P1128","Sondas Lambda 1 – transpostas"}
,{"P1129","sondas lambda – transpostas"}
,{"P1130","Limite de controle de injeção – Lambda"}
,{"P1131","Lambda – magra"}
,{"P1132","Lambda – mistura rica"}
,{"P1133","Lambda 1 – Insuficiente"}
,{"P1134","Lambda 1 – tempo de reacção"}
,{"P1135","Sensor posição pedal A – circuito defeituoso"}
,{"P1136",""}
,{"P1137","Lambda 1 bloco   – magra"}
,{"P1138","Lambda 1 bloco   – mistura rica"}
,{"P1139","Água no Indicador de combustível – circuito defeituoso"}
,{"P1140","Água no combustível"}
,{"P1141","Combustível Indicador de Restrição – circuito defeituoso"}
,{"P1142","Restrição de combustível"}
,{"P1150","Lambda – regulação para limitar a injeção"}
,{"P1151","Lambda – magra"}
,{"P1152","Lambda – mistura rica"}
,{"P1153","Controle de combustível (Bloco  ) – magra"}
,{"P1154","Controle de combustível (bloco  ) – mistura rica"}
,{"P1155","Controlador de combustível alternativo"}
,{"P1156",""}
,{"P1157","Lambda   bloco   – magra"}
,{"P1158","Lambda   bloco   – mistura rica"}
,{"P1159",""}
,{"P1160",""}
,{"P1161",""}
,{"P1162",""}
,{"P1163",""}
,{"P1164",""}
,{"P1165",""}
,{"P1166",""}
,{"P1167",""}
,{"P1168","Sensor ferroviário de combustível – valor muito baixo"}
,{"P1169","Sensor ferroviário de combustível – valor muito alto"}
,{"P1170","Solenóide desconexão motor – falha"}
,{"P1171","Rotor Sensor – fallo"}
,{"P1172","Rotor de controle – falta"}
,{"P1173","Calibração do rotor – falha"}
,{"P1174","Sensor de aumentos de árvores – fallo"}
,{"P1175","Controle árvore cames – falha"}
,{"P1176","Cam árvore Calibração – falha"}
,{"P1177","Falha de sincronização"}
,{"P1178","Circuito aberto"}
,{"P1179",""}
,{"P1180","Sensor temperatura combustível-sinal baixa"}
,{"P1181","Sensor temperatura combustível-sinal alta"}
,{"P1182",""}
,{"P1183","Temperatura óleo motor – circuito defeituoso"}
,{"P1184","Temperatura óleo motor – fora da faixa"}
,{"P1185","Sensor temperatura bomba combustível – alto"}
,{"P1186","Bomba de combustível sensor de temperatura – bajo"}
,{"P1187","Seleção variante"}
,{"P1188","Falhas de memória de calibração"}
,{"P1189","Falha de sinal – Velocidade da bomba"}
,{"P1190","Calibração resistor fora da faixa"}
,{"P1191","Tecla de linha de tensão"}
,{"P1192","Tensão externa"}
,{"P1193","EGR controlador de circuito"}
,{"P1194","UCE conversor A / D"}
,{"P1195","Bomba combustível – Falha inicializar"}
,{"P1196","Fora de tensão Chave – alto valor"}
,{"P1197","Tensão fora da chave – valor sob"}
,{"P1198","Controle de combustível rotor – pouco combustível"}
,{"P1199",""}
,{"P1200",""}
,{"P1201",""}
,{"P1202",""}
,{"P1203",""}
,{"P1204",""}
,{"P1205",""}
,{"P1206",""}
,{"P1207",""}
,{"P1208",""}
,{"P1209","Pressão controle inyector – falha sistema"}
,{"P1210","Pressão Controle Injector – valor mais alto esperado"}
,{"P1211",""}
,{"P1212","Controle de pressão Injector – nenhum sinal"}
,{"P1213",""}
,{"P1214","Sensor posição pedal B – interrupção intermitente"}
,{"P1215","Sensor de posição do pedal A – sinal de entrada baixo"}
,{"P1216","Sensor posição pedal C – sinal de entrada alta"}
,{"P1218","Controle de injeção – alta"}
,{"P1219","Controle de injeção – baixo"}
,{"P1220","Controle Mariposa – circuito defectuoso"}
,{"P1221","Controlo Tracção – circuito defeituoso"}
,{"P1222","Controle Traccuin saída – circuito defeituoso"}
,{"P1223","Paragem de emergência redundante"}
,{"P1224","Sensor posição Mariposa B – valor fora da faixa"}
,{"P1225",""}
,{"P1226",""}
,{"P1227","Regulação da injecção solenóide – valor de sobrepressão"}
,{"P1228","Valor Breakbeat Ciência Phorum – Regulação da injecção solenóide"}
,{"P1229","Controlador bomba intercooler – falha"}
,{"P1230","Bomba de combustível de baixa velocidade – circuito defeituoso"}
,{"P1231","Bomba de combustível secundário  de alta velocidade – sinal de baixa"}
,{"P1232","Principal velocidade da bomba de combustível – circuito defeituoso"}
,{"P1233","Modulo Controlador Bomba combustível desconexão linha"}
,{"P1234","Modulo Controlador Bomba combustível desconexão linha"}
,{"P1235","Controle da bomba de combustível – fora da faixa"}
,{"P1236","Controle da bomba de combustível – fora da faixa"}
,{"P1237","Bomba de combustível secundário – circuito defeituoso"}
,{"P1238","Bomba de combustível secundário – circuito defeituoso"}
,{"P1239","Falha da bomba de combustível Velocidade"}
,{"P1240",""}
,{"P1241",""}
,{"P1242",""}
,{"P1243","Falha segunda bomba combustível a massa"}
,{"P1244","Alternador – sinal de entrada alto"}
,{"P1245","Alternador – sinal de entrada baixo"}
,{"P1246","Alternador"}
,{"P1247","Baixa pressão de turbo"}
,{"P1248","Pressão turbo no detectada"}
,{"P1249","Ajuste da válvula de injeção – Operando"}
,{"P1250","Solenóide Bomba – circuito defeituoso"}
,{"P1251",""}
,{"P1252","Correlação pedal PDS1 e LPDS alta"}
,{"P1253","E baixa correlação PDS1 LPDS pedal"}
,{"P1254","Correlação pedal PDS  e LPDS alta"}
,{"P1255","E baixa correlação PDS  LPDS pedal"}
,{"P1256","Correlação pedal PDS1 e HPDS"}
,{"P1257","Correlação pedal PDS  e HPDS"}
,{"P1258","Correlação pedal PDS1 e PDS"}
,{"P1259",""}
,{"P1260","Detecção de Roubo – veículo imobilizado"}
,{"P1261","Cilindro 1 Alto para baixo – curto"}
,{"P1262","Cilindro   alto a baixo – curto"}
,{"P1263","3 cilindros alto a baixo – curto"}
,{"P1264","4 cilindros alto a baixo – curto"}
,{"P1265","Cilindro 5 alto a baixo – curto"}
,{"P1266","6 Cilindro alto a baixo – curto"}
,{"P1267","Cilindro 7 alto a baixo – curto"}
,{"P1268","8 Cilindro alto a baixo – curto"}
,{"P1269",""}
,{"P1270","Velocidade do motor Regime / veículo maxima atingida"}
,{"P1271","Cilindro 1 Alto para baixo – aberto"}
,{"P1272","Cilindro   alto a baixo – aberto"}
,{"P1273","3 Cilindro Alto para Baixo – Aberto"}
,{"P1274","4 cilindros alto a baixo – aberto"}
,{"P1275","Cilindro 5 alto a baixo – aberto"}
,{"P1276","6 Cilindro Alto para Baixo – Aberto"}
,{"P1277","Cilindro 7 alto a baixo – aberto"}
,{"P1278","8 Cilindro Alto para Baixo – Aberto"}
,{"P1279",""}
,{"P1280","Pressão Controle de injeção – muito baixo"}
,{"P1281","Pressão Controle de injeção – muito alto"}
,{"P1282",""}
,{"P1283","Regulador pressão inyector – circuito defeituoso"}
,{"P1284","Falha injector pressão Controle"}
,{"P1285","Temperatura da cabeça do sensor – superaquecimento"}
,{"P1286","Combustível Impulse – menor do que o esperado"}
,{"P1287","Combustível Impulse – maior do que o esperado"}
,{"P1288","Sensor de temperatura da cabeça do cilindro – fora dos limites"}
,{"P1289","Sensor temperatura culatra – sinal de entrada alta"}
,{"P1290","Sensor de temperatura da cabeça do cilindro – sinal de entrada baixo"}
,{"P1291","Inyector bloco 1 Corte a massa o positivo"}
,{"P1292","Inyector bloco   Corte a massa o positivo"}
,{"P1293","Bloco 1 Injector aberto"}
,{"P1294","Bloco Injector   aberto"}
,{"P1295","Múltiplas Falhas 1 bloco"}
,{"P1296","Várias bloco falha"}
,{"P1297","Injector corte"}
,{"P1298","IDM Fallo"}
,{"P1299","Sensor temperatura culada – sistema de proteção ativo"}
,{"P1300","Falha do compressor de Calibração"}
,{"P1301","Calibração alta compressor"}
,{"P1302","Compressor de calibração baixo"}
,{"P1303","Falha calibração EGR"}
,{"P1304","Calibração EGR alta"}
,{"P1305","EGR Calibração Baixo"}
,{"P1306","Rele Kickdown Forzado – fallo circuito"}
,{"P1307","Rele Kickdown mantenido – fallo circuito"}
,{"P1309","Supervisor de chips Foul detonacion"}
,{"P1310","Culpa Ionização Misfire Módulo de Detecção"}
,{"P1311","Módulo de comunicação Dectection Ionização Misfire culpa"}
,{"P1312",""}
,{"P1313",""}
,{"P1314",""}
,{"P1315",""}
,{"P1316","Códigos Injector Circuit / IDM"}
,{"P1317",""}
,{"P1318",""}
,{"P1319",""}
,{"P1340","Sensor posição árvore cames B – circuito defeituoso"}
,{"P1345","Sensor posição árvore cames – circuito defeituoso"}
,{"P1351","Monitor diagnóstico acendimento – circuito entrada defeituoso"}
,{"P1352","Primário acendimento A – circuito defeituoso"}
,{"P1353","Primário acendimento B – circuito defeituoso"}
,{"P1354","Primário acendimento C – circuito defeituoso"}
,{"P1355","Primário acendimento D – circuito defeituoso"}
,{"P1356","Perda de entrada Ignição Módulo de Diagnóstico para PCM"}
,{"P1357","Ignition monitor de diagnóstico pulsewidth não definido"}
,{"P1358","Monitor em diagnóstico – Sinal fora de limites"}
,{"P1359","Sistema de ignição  sinal de saída de faísca – circuito defeituoso"}
,{"P1360","Secundário acendimento A – circuito defeituoso"}
,{"P1361","Interruptor de controle – Baixa Tensão"}
,{"P1362","Secundário acendimento C – circuito defeituoso"}
,{"P1363","Secundário acendimento D – circuito defeituoso"}
,{"P1364","Ignição Primária – circuito defeituoso"}
,{"P1365","Ignição secundária – circuito defeituoso"}
,{"P1369","Testemunha temperatura motor – circuito defeituoso"}
,{"P1380","Detonação Detectado"}
,{"P1381","Accionador posição árvore cames (bloco 1) – acendimento sobreavanzado"}
,{"P1383","Accionador posição árvore cames (bloco 1) – acendimento sobreretrasado"}
,{"P1385","Solenóide B árvore cames – circuito defeituoso"}
,{"P1386","Accionador posição árvore cames (bloco  ) – acendimento sobreavanzado"}
,{"P1388","Accionador posição árvore cames (bloco  ) – acendimento sobreretrasado"}
,{"P1390","Conector de programação Octane – circuito aberto"}
,{"P1400","Escape de pressão do sensor de recirculação dos gases – sinal de baixa"}
,{"P1401","Sensor pressão recirculação gases escape – sinal alta"}
,{"P1402","Sistema recirculação gases escape EGR – orifício medição restringido"}
,{"P1403","Sensor EGR – Diferencia control"}
,{"P1404","Temperatura ar injeção / Recirculação EGR"}
,{"P1405","EGR Sensor – Frente tubo flexível desconectado ou obstruído"}
,{"P1406","Sensor EGR – tubo flexível trasero desligado u obstruido"}
,{"P1407","EGR Sensor – Não detecta fluxo"}
,{"P1408","Recirculação dos gases – fluir fora dos limites"}
,{"P1409","Solenóide recirculação gases escape – circuito defeituoso"}
,{"P1410","Controle de regulador de pressão de combustível solenóide ou EGR controle solenóide"}
,{"P1411","Injecção de ar secundário – baixo fluxo"}
,{"P1413","Secundária Supervisor injeção de ar – sinal de entrada baixo"}
,{"P1414","Secundária Supervisor injeção de ar – sinal de entrada alto"}
,{"P1431","Misfire Monitor de pessoas com mobilidade condicionada  incapaz de aprender perfil da roda gatilho"}
,{"P1442","Controlo das emissões por evaporação"}
,{"P1442","Controlo das emissões por evaporação"}
,{"P1443","Válvula de controle das emissões por evaporação"}
,{"P1444","Sensor purga flujo – baja señal"}
,{"P1445","Sensor purga flujo – señal alta"}
,{"P1450","tanque de combustível"}
,{"P1451","Das emissões por evaporação válvula de controle"}
,{"P1452","tanque de combustível"}
,{"P1455","Controlo das emissões por evaporação"}
,{"P1457","Força de sucção do tanque de combustível Impossível"}
,{"P1460","Entre borboleta plena carga (corte A / C) – circuito defeituoso"}
,{"P1461","Sensor pressão ar condicionado – tensão baixa"}
,{"P1462","Sensor pressão ar condicionado – tensão alta"}
,{"P1463","Sensor pressão ar condicionado – pressão insuficiente"}
,{"P1464","Petição ar condicionado fora diagnóstico limites"}
,{"P1465","Relê ar condicionado – circuito defeituoso"}
,{"P1469","Período de reciclagem de ar condicionado"}
,{"P1473","Fan Secundária alta com os fãs Off"}
,{"P1474","Fan – circuito defeituoso"}
,{"P1477","Relé do ventilador adicional – circuito defeituoso"}
,{"P1479","Ventilador refrigerante motor – circuito defeituoso"}
,{"P1480","Baixo secundário Fan com baixos ventiladores movidos"}
,{"P1481","Motor do ventilador lento em veltilador rápido"}
,{"P1482","Bomba de combustível"}
,{"P1483","Fãs do alimento – Circuito"}
,{"P1484","Lojas terreno aberto"}
,{"P1485","Valcula EGR – circuito defeituoso"}
,{"P1486","Accionador EGR – circuito defeituoso"}
,{"P1487","Solenóide EGR – circuito defeituoso"}
,{"P1500","Sensor de velocidade do veículo"}
,{"P1501","Fora dos limites – sensor de velocidade do veículo"}
,{"P1502","Sensor velocidade veículo – interrupção intermitente"}
,{"P1504","Válvula de controle de movimento lento aire – circuito defectuoso"}
,{"P1505","Ajuste Controle Air ocioso"}
,{"P1506","Válvula de controle de ar ocioso – Erro de excesso de velocidade"}
,{"P1507","Válvula de controle de ar ocioso – Erro em velocidade"}
,{"P1512","Controle ar coletor admissão (bloco 1) – fechado"}
,{"P1513","Controle ar coletor admissão (bloco  ) – fechado"}
,{"P1516","Solenóide ar coletor admissão (bloco 1) – error sinal de entrada"}
,{"P1517","Solenóide ar coletor admissão (bloco  ) – error sinal de entrada"}
,{"P1518","Controle coletor de admissão – Aberto"}
,{"P1519","Controle ar coletor admissão – fechado"}
,{"P1520","Solenóide controle ar coletor admissão – circuito defeituoso"}
,{"P1521","Solenóide controle ar coletor admissão (bloco 1) – circuito defeituoso"}
,{"P1522","Solenóide controle ar coletor admissão (bloco  ) – circuito defeituoso"}
,{"P1523","Solenóide admissão variável – circuito defeituoso"}
,{"P1530","Circuito Ar condicionado"}
,{"P1532","Circuito IMCC (Bloco B) com defeito"}
,{"P1533","AAI Circuito defectuoso"}
,{"P1534","Interruptor de inércia ativado"}
,{"P1537","Controle coletor de admissão de ar (bloco 1) – aberto"}
,{"P1538","Controle coletor de admissão de ar (bloco  ) – aberto"}
,{"P1539","Alimentação circuito ar condicionado – sobrecorriente"}
,{"P1549","Circuito IMCC (Bloco B) com defeito"}
,{"P1550","PSPS fora da faixa"}
,{"P1565","Interruptor controle velocidade – fora de alcance  alto"}
,{"P1566","Interruptor de controle de velocidade – fora da faixa de baixa"}
,{"P1567","Saída de Controle de Velocidade – continuou"}
,{"P1568","Controle de Velocidade – impossível para manter a velocidade"}
,{"P1570","Chave incorreta – pene ECM – Imobilizador – fiação"}
,{"P1572","Interruptor pedal Freno – circuito defeituoso"}
,{"P1573","Posição do acelerador não disponível"}
,{"P1574","Sensor posição mariposa – contradição entre sensores"}
,{"P1575","Pedal posição – fora da faixa"}
,{"P1576","Posição do pedal – não disponível"}
,{"P1577","Pedal Position – contradição entre os sensores"}
,{"P1578","ETC potência menor que o necessário"}
,{"P1579","ETC Alimentos para limitar"}
,{"P1580","Supervisor borboleta eletrônica"}
,{"P1581","Supervisor mariposa eletrônico – circuito defeituoso"}
,{"P1582","Supervisor mariposa eletrônica – dados"}
,{"P1583","Supervisor Borboleta Eletrônico – cruzeiro off"}
,{"P1584","Unidade de controle da borboleta detecta IPE – circuito defeituoso"}
,{"P1585","Unidade de controle da borboleta – circuito defeituoso"}
,{"P1586","Unidade controle mariposa – posição mariposa defeituoso"}
,{"P1587","Unidade controle mariposa modulada – circuito defeituoso"}
,{"P1588","Unidade de controle da borboleta detecta perda de retorno"}
,{"P1589","Unidade de controle da borboleta não pode controlar ângulo do acelerador desejado"}
,{"P1605","Falha na memória permanente"}
,{"P1609","Falhas Testemunha – motorista culpa"}
,{"P1625","Alimentação positivo para ventilador – circuito defeituoso"}
,{"P1626","Recebido sem sinal ativado deslizamento"}
,{"P1633","Tensão de alimentação – muito baixo"}
,{"P1635","Outliers"}
,{"P1636","Erro de Comunicação sinal de chip indutivo"}
,{"P1639","Identificação veículo erronea o no agendada"}
,{"P1640","Remoção de falhas disponíveis em outro módulo"}
,{"P1641","Bomba de combustível principal – circuito defeituoso"}
,{"P1642","Monitorar bomba de combustível – sinal de entrada alto"}
,{"P1643","Módulos de circuitos de rede com fio"}
,{"P1644","Controle velocidade bomba combustível – circuito defeituoso"}
,{"P1650","Interruptor pressão direcção assistida – fora limites"}
,{"P1651","Interruptor de pressão Direção hidráulica – sinal de entrada"}
,{"P1656","Pode ligar PCM / rede de circuitos PCM"}
,{"P1657","Pode ligar mau funcionamento de chips"}
,{"P1700","Transmissão – falha na posição neutra"}
,{"P1701","Erro reversível"}
,{"P1702","Circuito de transmissão – interrupção intermitente"}
,{"P1703","Freio do interruptor de posição do pedal – fora dos limites"}
,{"P1704","Falha transição estados em Transmissão Digital"}
,{"P1705","Interruptor marchas curtas / longas – sem função em P / B"}
,{"P1709","Posição da chave parque / neutros – fora dos limites"}
,{"P1710","Transmissão falha midrange sensor de temperatura do fluido"}
,{"P1711","Sensor de TFT fora da faixa"}
,{"P1712","Sistema de redução de transmissão de torque – o sinal de erro"}
,{"P1713","TFT Sensor – valor muito baixo"}
,{"P1714","Sinal com defeito indutivo SSA"}
,{"P1715","Defeituosa SSB sinal indutivo"}
,{"P1716","SSC indutivo de Sinais com defeito"}
,{"P1717","Sinal indutivo defeituoso SSD"}
,{"P1718","TFT Sensor – elevação valor muy"}
,{"P1719","Velocidade Overdrive falha no circuito do sensor"}
,{"P1720","Veículo sensor de velocidade – circuito defeituoso"}
,{"P1727","Sinal indutivas solenóide ar condicionado – circuito defeituoso"}
,{"P1728","Erro de transmissão"}
,{"P1729","Erro Interruptor 4×4 bajo"}
,{"P1731","Mudança de velocidades 1-  – circuito defeituoso"}
,{"P1732","Mudança de velocidades  -3 – circuito defeituoso"}
,{"P1733","Mudança de velocidades 3-4 – circuito defeituoso"}
,{"P1740","Conversor rotativo sinal indutivo embreagem – circuito defeituoso"}
,{"P1741","Controle de erro embreagem do conversor rotativo"}
,{"P1742","Falha solenóide converidor embraiagem jornal"}
,{"P1743","Falha solenóide converidor embraiagem jornal"}
,{"P1744","Rotary Converter Clutch – Desempenho"}
,{"P1745","Solenóide pressão sistema"}
,{"P1746","Um solenóide de controle de pressão – circuito aberto"}
,{"P1747","Solenóide controle pressão A – curto-circuito"}
,{"P1749","Solenóide de controle de pressão – falha em"}
,{"P1751","Solenóide A – Operação"}
,{"P1754","Solenóide embraiagem – circuito defeituoso"}
,{"P1756","Solenóide B – Operacional"}
,{"P1760","Solenóide controle pressão A – curto-circuito"}
,{"P1761","Solenóide C – Desempenho"}
,{"P1762","Top Margin Fault"}
,{"P1767","Conversor embraiagem jornal – circuito defeituoso"}
,{"P1768","Modo de operação Normal / inverno – circuito defeituoso"}
,{"P1770","Solenóide embraiagem – circuito defeituoso"}
,{"P1780","Interruptor controle transmissão – fora da faixa"}
,{"P1781","Interruptor 4X4 – fora da faixa"}
,{"P1783","Condição sobre-em transmissão"}
,{"P1784","Falha mecânica Transmissão – First and Back"}
,{"P1785","Falha mecânica de transmissão – Primeira e Segunda"}
,{"P1786","Mudança de erro engrenagens 3-"}
,{"P1787","Mudança de erro engrenagens  -1"}
,{"P1788","Controle da Pressão solenóide B – circuito aberto"}
,{"P1789","Solenóide controle pressão B – curto-circuito"}
,{"P1792","Sensor pressão barométrica – circuito defeituoso"}
,{"P1794","Tensão da bateria"}
,{"P1795","Interruptor câmera lenta – circuito defectuoso"}
,{"P1797","Interruptor de ponto morto – circuito defeituoso"}
,{"P1804","Alta indicador 4WD transmissão – circuito defeituoso"}
,{"P1806","Indicador transmissão alta 4 Rueda – Corte a positivo"}
,{"P1808","Indicador de transmissão 4WD – circuito defeituoso"}
,{"P1810","Indicador de transmissão 4WD – Short para positivo"}
,{"P1812","Modo de selecção transmissão 4 Rueda – circuito defeituoso"}
,{"P1815","Modo de selecção transmissão 4 Rueda – Corte a massa"}
,{"P1819","Interruptor segurança transmissão ponto Muerto – Corte a massa"}
,{"P1820","Relê mudança transferência transmissão – circuito defeituoso"}
,{"P1822","Relê mudança transferência transmissão – Corte a positivo"}
,{"P1824","Relé transmissão 4WD embreagem – circuito defeituoso"}
,{"P1826","Low 4WD transmissão relé embreagem – Short para positivo"}
,{"P1830","Relê mudança transferência transmissão – Corte a positivo"}
,{"P1832","Solenóide bloqueio diferencial transferência transmissão – circuito defeituoso"}
,{"P1834","Solenóide bloqueio diferencial transferência transmissão – Corte a positivo"}
,{"P1838","Motor mudança transferência transmissão – circuito defeituoso"}
,{"P1846","Contato prata A transferência transmissão Transmission – circuito defeituoso"}
,{"P1850","Contato prata B transferência transmissão Transmission – circuito defeituoso"}
,{"P1854","Contato prata C transferência transmissão Transmission – circuito defeituoso"}
,{"P1858","Contato prata D transferência transmissão Transmission – circuito defeituoso"}
,{"P1866","Transferência de transmissão – serviço necessário"}
,{"P1867","Transmissão de prata Contato transferência – circuito defeituoso"}
,{"P1876","Solenóide transferência transmissão   Rueda – circuito defeituoso"}
,{"P1877","Solenóide transferência transmissão   Rueda – Corte a positivo"}
,{"P1881","Interruptor nível refrigerante motor – circuito defeituoso"}
,{"P1882","Interruptor nível refrigerante motor – Corte a massa"}
,{"P1883","Interruptor nível refrigerante motor – circuito defeituoso"}
,{"P1884","Testemunha Interruptor nível refrigerante motor – Corte a massa"}
,{"P1891","Transmissão de prata Contato transferência – circuito aberto"}
,{"P1900","Circuito OSS – interrupção intermitente"}
,{"P1901","Circuito TSS – Interrupção intermitente"}
,{"P2000","NOx Armadilha Eficiência Abaixo do Limite Bank1"}
,{"P2001","NOx Armadilha Eficiência Abaixo do Limite Bank"}
,{"P2002","Filtro de Partículas Diesel Eficiência Abaixo do Limite Banco 1"}
,{"P2003","Filtro de Partículas Diesel Eficiência Abaixo do Limite Banco"}
,{"P2004","Intake Manifold Runner Ctrl Preso Abrir Bank1"}
,{"P2005","Intake Manifold Runner Ctrl Preso Abrir Bank"}
,{"P2006","Intake Manifold Runner Ctrl Preso Fechado Bank1"}
,{"P2007","Intake Manifold Runner Ctrl Preso Fechado Bank"}
,{"P2008","Intake Manifold Runner Ctrl Circ / Aberto Bank1"}
,{"P2009","Intake Manifold Runner Ctrl Circ Baixo Bank1"}
,{"P2010","Intake Manifold Runner Ctrl Circ alta Bank1"}
,{"P2011","Intake Manifold Runner Ctrl Circ / Aberto Bank"}
,{"P2012","Intake Manifold Runner Ctrl Circ Baixo Bank"}
,{"P2013","Intake Manifold Runner Ctrl Circ alta Bank"}
,{"P2014","Intake Manifold Runner Pos Sensor / Switch Circ Bank1"}
,{"P2015","Intake Manifold Runner Pos Sensor / Switch Circ Faixa / Perf Bank1"}
,{"P2016","Intake Manifold Runner Pos Sensor / Switch Circ Baixo Bank1"}
,{"P2017","Intake Manifold Runner Pos Sensor / Switch Circ alta Bank1"}
,{"P2018","Intake Manifold Runner Pos Sensor / Switch Circ Interm Bank1"}
,{"P2019","Intake Manifold Runner Pos Sensor / Switch Circ Bank"}
,{"P2020","Intake Manifold Runner Pos Sensor / Switch Circ Faixa / Perf Bank"}
,{"P2021","Intake Manifold Runner Pos Sensor / Switch Circ Baixo Bank"}
,{"P2022","Intake Manifold Runner Pos Sensor / Switch Circ alta Bank"}
,{"P2023","Intake Manifold Runner Pos Sensor / Switch Circ Interm Bank"}
,{"P2024","EVAP Combustível Vapor Temp. Sensor Circ"}
,{"P2025","EVAP Combustível Vapor Temp. Sensor Perf"}
,{"P2026","EVAP Combustível Vapor Temp. Sensor Circ Baixa Tensão"}
,{"P2027","EVAP Combustível Vapor Temp. Sensor Circ Alta Tensão"}
,{"P2028","EVAP Combustível Vapor Temp. Sensor Circ Interm"}
,{"P2029","Combustível Aquecedor Fired Desativado"}
,{"P2030","Combustível Aquecedor Fired Perf P 031 Escapamento Gas Temp Sensor Circ Bank1 Sensor"}
,{"P2032","Escapamento Gas Temp Sensor Circ Baixo Bank1 Sensor"}
,{"P2033","Escapamento Gas Temp Sensor Circ alta Bank1 Sensor"}
,{"P2034","Escapamento Gas Temp Sensor Circ Bank  Sensor"}
,{"P2035","Escapamento Gas Temp Sensor Circ Baixo Bank  Sensor"}
,{"P2036","Escapamento Gas Temp Sensor Circ alta Bank  Sensor"}
,{"P2037","redutor Inj Ar Imprensa Sensor Circ"}
,{"P2038","redutor Inj Ar Imprensa Sensor Circ Faixa / Perf"}
,{"P2039","redutor Inj Ar Imprensa Sensor Circ Baixa/o Entrada"}
,{"P2040","redutor Inj Ar Imprensa Sensor Circ alta Entrada"}
,{"P2041","redutor Inj Ar Imprensa Sensor Circ Interm"}
,{"P2042","redutor Temp Sensor Circ P 043 redutor Temp Sensor Circ Faixa / Perf"}
,{"P2044","redutor Temp Sensor Circ Baixa/o Entrada"}
,{"P2045","redutor Temp Sensor Circ alta Entrada"}
,{"P2046","redutor Temp Sensor Circ Interm"}
,{"P2047","redutor Injetor Circ / Aberto Unidade Bank1 1"}
,{"P2048","redutor Injetor Circ Baixa/o Unidade Bank1 1"}
,{"P2049","redutor Injetor Circ Unidade alta Bank1 1"}
,{"P2050","redutor Injetor Circ / Aberto Unidade Bank  1"}
,{"P2051","redutor Injetor Circ Baixa/o Unidade Bank  1"}
,{"P2052","redutor Injetor Circ Unidade alta Bank  1"}
,{"P2053","redutor Injetor Circ / Aberto Unidade Bank1"}
,{"P2054","redutor Injetor Circ Baixa/o Unidade Bank1"}
,{"P2055","redutor Injetor Circ Unidade alta Bank1"}
,{"P2056","redutor Injetor Circ / Aberto Unidade Bank"}
,{"P2057","redutor Injetor Circ Baixa/o Unidade Bank"}
,{"P2058","redutor Injetor Circ Unidade alta Bank"}
,{"P2059","redutor bomba de ar Inj Ctrl Circ / Aberto"}
,{"P2060","redutor bomba de ar Inj Ctrl Circ Baixo"}
,{"P2061","redutor bomba de ar Inj Ctrl Circ alta"}
,{"P2062","redutor Abastecimento Ctrl Circ / Aberto"}
,{"P2063","redutor Abastecimento Ctrl Circ Baixo"}
,{"P2064","redutor Abastecimento Ctrl Circ alta"}
,{"P2065","Nível de Combustível SensorB Circ"}
,{"P2066","Nível de Combustível SensorB Perf"}
,{"P2067","Nível de Combustível SensorB Circ Baixo"}
,{"P2068","Nível de Combustível SensorB Circ alta"}
,{"P2069","Nível de Combustível SensorB Circ Interm"}
,{"P2070","Intake Manifold Sintonia (IMT) Válvula Preso Aberto IMT Válvula"}
,{"P2071","Preso Fechado"}
,{"P2072","acelerador Sistema de Controle do atuador – Bloqueio Ice Pressão"}
,{"P2073","Manifold Absolute / Massa de Ar – Correlação posição do acelerador em marcha lenta Pressão"}
,{"P2074","Manifold Absolute / Massa de Ar – Correlação posição do acelerador em maior carga IMT Válvula"}
,{"P2075","Pos Sensor / Switch Circ IMT Válvula"}
,{"P2076","Pos Sensor / Switch Circ Faixa / Perf"}
,{"P2077","IMT Válvula Pos Sensor / Switch Circ Baixo"}
,{"P2078","IMT Válvula Pos Sensor / Switch Circ alta IMT Válvula"}
,{"P2079","Pos Sensor / Switch Circ Interm"}
,{"P2080","Escapamento Gas Temp Sensor Circ Faixa / Perf Bank1 Sensor 1"}
,{"P2081","Escapamento Gas Temp Sensor Circ Interm Bank1 Sensor 1"}
,{"P2082","Escapamento Gas Temp Sensor Circ Faixa / Perf Bank  Sensor 1"}
,{"P2083","Escapamento Gas Temp Sensor Circ Interm Bank  Sensor 1"}
,{"P2084","Escapamento Gas Temp Sensor Circ Faixa / Perf Bank1 Sensor"}
,{"P2085","Escapamento Gas Temp Sensor Circ Interm Bank1 Sensor"}
,{"P2086","Escapamento Gas Temp Sensor Circ Faixa / Perf Bank  Sensor"}
,{"P2087","Escapamento Gas Temp Sensor Circ Interm Bank  Sensor   A"}
,{"P2088","Comando de válvulas Pos atuador Ctrl Circ Baixo Bank1 A"}
,{"P2089","Comando de válvulas Pos atuador Ctrl Circ alta Bank1"}
,{"P2090","B Comando de válvulas Pos atuador Ctrl Circ Baixo Bank1 P 091 B Comando de válvulas Pos atuador Ctrl Circ alta Bank1 A P 09  Comando de válvulas Pos atuador Ctrl Circ Baixo Bank  A"}
,{"P2093","Comando de válvulas Pos atuador Ctrl Circ alta Bank"}
,{"P2094","B Comando de válvulas Pos atuador Ctrl Circ Baixo Bank"}
,{"P2095","B Comando de válvulas Pos atuador Ctrl Circ alta Bank"}
,{"P2096","Mensagem Catalisador de combustível Sistema de Trim Ban demasiado magra k1"}
,{"P2097","Mensagem Catalisador de combustível Sistema de Trim Banco muito rico 1"}
,{"P2098","Mensagem Catalisador de combustível Sistema de Trim Banco demasiado magra   P 099 Mensagem Catalisador de combustível Sistema de Trim Banco muito rico"}
,{"P2100","acelerador atuador Ctrl Motor Circ / Aberto"}
,{"P2101","acelerador atuador Ctrl Motor Circ Faixa / Perf"}
,{"P2102","acelerador atuador Ctrl Motor Circ Baixo"}
,{"P2103","acelerador atuador Ctrl Motor Circ alta"}
,{"P2104","acelerador atuador Ctrl ocioso Sys-Forçado"}
,{"P2105","acelerador atuador Ctrl Sys-forçado de desligamento do motor"}
,{"P2106","acelerador atuador Ctrl Sys-forçado Power Limited"}
,{"P2107","acelerador atuador Ctrl Mod Processor"}
,{"P2108","acelerador atuador Ctrl Mod Perf P 109 acelerador / Pedal Pos Sensora mínima Parar Perf P 110 acelerador atuador Ctrl Sys-forçado RPM Limitada"}
,{"P2111","acelerador atuador Ctrl Sys-Furado Aberto"}
,{"P2112","acelerador atuador Ctrl Sys-Furado Fechado"}
,{"P2113","acelerador / Pedal Pos SensorB mínima Parar Perf"}
,{"P2114","acelerador / Pedal Pos Sensor C mínima Parar Perf"}
,{"P2115","acelerador / Pedal Pos Sensor D mínima Parar Perf"}
,{"P2116","acelerador / Pedal Pos Sensor E Mínimo Parar Perf"}
,{"P2117","acelerador / Pedal Pos Sensor F mínima Parar Perf"}
,{"P2118","acelerador atuador Ctrl Corrente do Motor Faixa / Perf"}
,{"P2119","acelerador atuador Ctrl Carburador Faixa / Perf"}
,{"P2120","acelerador / Pedal Pos Sensor / interruptor D Circ"}
,{"P2121","acelerador / Pedal Pos Sensor / Switch D Circ Faixa / Perf"}
,{"P2122","acelerador / Pedal Pos Sensor / Switch D Circ Baixa/o Entrada"}
,{"P2123","acelerador / Pedal Pos Sensor / Switch D Circ alta Entrada"}
,{"P2124","acelerador / Pedal Pos Sensor / Switch D Circ Interm"}
,{"P2125","acelerador / Pedal Pos Sensor / interruptor E Circ"}
,{"P2126","acelerador / Pedal Pos Sensor / interruptor E Circ Faixa / Perf"}
,{"P2127","acelerador / Pedal Pos Sensor / interruptor E Circ Baixa/o Entrada"}
,{"P2128","acelerador / Pedal Pos Sensor / interruptor E Circ alta Entrada"}
,{"P2129","acelerador / Pedal Pos Sensor / interruptor E Circ Interm"}
,{"P2130","acelerador / Pedal Pos Sensor / Switch F Circ"}
,{"P2131","acelerador / Pedal Pos Sensor / Switch F Circ Faixa Perf"}
,{"P2132","acelerador / Pedal Pos Sensor / Switch F Circ Baixa/o Entrada"}
,{"P2133","acelerador / Pedal Pos Sensor / Switch F Circ alta Entrada"}
,{"P2134","acelerador / Pedal Pos Sensor / Switch F Circ Interm"}
,{"P2135","acelerador / Pedal Pos Sensor / interruptor A / B Correlação Tensão"}
,{"P2136","acelerador / Pedal Pos Sensor / interruptor A / C Correlação Tensão"}
,{"P2137","acelerador / Pedal Pos Sensor / interruptor B / C Correlação Tensão"}
,{"P2138","acelerador / Pedal Pos Sensor / interruptor D / E Correlação Tensão"}
,{"P2139","acelerador / Pedal Pos Sensor / interruptor D / F Correlação Tensão"}
,{"P2140","acelerador / Pedal Pos Sensor / interruptor E / F Correlação Tensão"}
,{"P2141","Escapamento Gas recirculação do acelerador Ctrl Circ Baixo"}
,{"P2142","Escapamento Gas recirculação do acelerador Ctrl Circ alta"}
,{"P2143","Recirculação dos gases de ventilação Ctrl Circ / Aberto"}
,{"P2144","Recirculação dos gases de ventilação Ctrl Circ Baixo"}
,{"P2145","Recirculação dos gases de ventilação Ctrl Circ alta"}
,{"P2146","Injetor de combustível Grupo A Tensão de alimentação Circ / Aberto"}
,{"P2147","Injetor de combustível Grupo A Tensão de alimentação Circ Baixo"}
,{"P2148","Injetor de combustível Grupo A Tensão de alimentação Circ alta"}
,{"P2149","Injetor de combustível Grupo B Tensão de alimentação Circ / Aberto"}
,{"P2150","Combustível Injetor Grupo B Tensão de alimentação Circ Baixo"}
,{"P2151","Injetor de combustível Grupo B Tensão de alimentação Circ alta"}
,{"P2152","Injetor de combustível Grupo C Tensão de alimentação Circ / Aberto"}
,{"P2153","Injetor de combustível Grupo C Tensão de alimentação Circ Baixo"}
,{"P2154","Injetor de combustível Grupo C Tensão de alimentação Circ alta"}
,{"P2155","Injetor de combustível Grupo D Tensão de alimentação Circ / Aberto"}
,{"P2156","Combustível Injetor Grupo D Tensão de alimentação Circ Baixo"}
,{"P2157","Injetor de combustível Grupo D Tensão de alimentação Circ alta"}
,{"P2158","Velocidade do Veículo SensorB"}
,{"P2159","Velocidade do Veículo SensorB Faixa / Perf"}
,{"P2160","Velocidade do Veículo SensorB Circ Baixo"}
,{"P2161","Velocidade do Veículo SensorB Interm / errático"}
,{"P2162","Velocidade do Veículo Sensora / B Correlação"}
,{"P2163","acelerador / Pedal Pos Sensora máxima Parar"}
,{"P2165","acelerador / Pedal Pos Sensor C Máximo Parar Perf"}
,{"P2166","acelerador / Pedal Pos Sensor D máxima Parar Perf"}
,{"P2167","acelerador / Pedal Pos Sensor E máxima Parar Perf"}
,{"P2168","acelerador / Pedal Pos Sensor F máxima Parar Perf"}
,{"P2169","escape Imprensa Reg ventilação solenóide Ctrl Circ / Aberto"}
,{"P2170","escape Imprensa Reg ventilação solenóide Ctrl Circ Baixo"}
,{"P2171","escape Imprensa Reg ventilação solenóide Ctrl Circ alta"}
,{"P2172","acelerador atuador Ctrl Sys-súbita alta Arfbaixa/o Detectado"}
,{"P2173","acelerador atuador Ctrl Sys-alta Arfbaixa/o Detectado"}
,{"P2174","acelerador atuador Ctrl Sys-Sudden baixo fluxo de ar Detectado"}
,{"P2175","acelerador atuador Ctrl Sys-baixo fluxo de ar Detectado"}
,{"P2176","acelerador atuador Ctrl Sys-idle Pos Não Aprendidas"}
,{"P2177","Sys muito pobre fora inativo Bank1"}
,{"P2178","Sys muito rico Off ocioso Bank1 P 179 Sys muito pobre fora inativo Bank"}
,{"P2180","Sys muito rico Off ocioso Bank  O desempenho do sistema de refrigeração"}
,{"P2181","Motor Refrigerante Temp Sensor   Circ"}
,{"P2182","Motor Refrigerante Temp Sensor   Circ"}
,{"P2183","Motor Refrigerante Temp Sensor   Circ Faixa / Perf"}
,{"P2184","Motor Refrigerante Temp Sensor   Circ Baixo"}
,{"P2185","Motor Refrigerante Temp Sensor   Circ alta"}
,{"P2186","Motor Refrigerante Temp Sensor   Circ Interm / errático"}
,{"P2187","Sys demasiado magra no Idle Bank1 P 188 Sys muito rico no Idle Bank1"}
,{"P2189","Sys demasiado magra no Idle Bank"}
,{"P2190","Sys muito rico no Idle Bank"}
,{"P2191","Sys demasiado magra em Bank1 carga maior"}
,{"P2192","Sys muito rico em Bank1 carga maior"}
,{"P2193","Sys demasiado magra em Bank  carga maior"}
,{"P2194","Sys muito rico em Bank  carga maior"}
,{"P2195","Sinal Sensor O  Preso magra Bank1 Sensor 1"}
,{"P2196","Sinal Sensor O  Preso Rico Bank1 Sensor 1"}
,{"P2197","Sinal Sensor O  Preso magra Bank  Sensor 1"}
,{"P2198","Sinal Sensor O  Preso Rico Bank  Sensor 1"}
,{"P2199","Intake Ar Temp Sensor 1/  Correlação"}
,{"P2200","NOx Sensor Circ Bank1"}
,{"P2201","NOx Sensor Circ Faixa / Perf Bank1"}
,{"P2202","NOx Sensor Circ Bank1 Baixa/o Entrada"}
,{"P2203","NOx Sensor Circ Bank1 alta Entrada"}
,{"P2204","NOx Sensor Circ Interm Bank1 entrada"}
,{"P2205","NOx Sensor Aquecedor Ctrl Circ / Aberto Bank1"}
,{"P2206","NOx Sensor Aquecedor Ctrl Circ Baixo Bank1"}
,{"P2207","NOx Sensor Aquecedor Ctrl Circ alta Bank1"}
,{"P2208","NOx Sensor Aquecedor Sense Circ Bank1"}
,{"P2209","NOx Sensor Aquecedor Sense Circ Faixa / Perf Bank1"}
,{"P2210","NOx Sensor Aquecedor Sense Circ Baixa/o Entrada Bank1"}
,{"P2211","NOx Sensor Aquecedor Sense Circ alta Entrada Bank1"}
,{"P2212","NOx Sensor Aquecedor Sense Circ Interm Bank1"}
,{"P2213","NOx Sensor Circ Bank"}
,{"P2214","NOx Sensor Circ Faixa / Perf Bank"}
,{"P2215","NOx Sensor Circ Bank  Baixa/o Entrada"}
,{"P2216","NOx Sensor Circ Bank  alta Entrada"}
,{"P2217","NOx Sensor Circ Interm Bank  entrada"}
,{"P2218","NOx Sensor Aquecedor Ctrl Circ / Aberto Bank"}
,{"P2219","NOx Sensor Aquecedor Ctrl Circ Baixo Bank"}
,{"P2220","NOx Sensor Aquecedor Ctrl Circ alta Bank  P   1 NOx Sensor Aquecedor Sense Circ Bank"}
,{"P2222","NOx Sensor Aquecedor Sense Circ Faixa / Perf Bank"}
,{"P2223","NOx Sensor Aquecedor Sense Circ Baixo Bank"}
,{"P2224","NOx Sensor Aquecedor Sense Circ alta Bank"}
,{"P2225","NOx Sensor Aquecedor Sense Circ Interm Bank"}
,{"P2226","barométrica Imprensa Circ"}
,{"P2227","barométrica Imprensa Circ Faixa / Perf"}
,{"P2228","barométrica Imprensa Circ Baixo"}
,{"P2229","barométrica Imprensa Circ alta"}
,{"P2230","barométrica Imprensa Circ Interm Sensor Sinal"}
,{"P2231","O  Circ curto com aquecedor Circ Bank1 Sensor 1 Sensor Sinal"}
,{"P2232","O  Circ curto com aquecedor Circ Bank1 Sensor   Sensor Sinal"}
,{"P2233","O  Circ curto com aquecedor Circ Bank1 Sensor 3 Sensor Sinal"}
,{"P2234","O  Circ curto com aquecedor Circ Bank  Sensor 1 Sensor Sinal"}
,{"P2235","O  Circ curto com aquecedor Circ Bank  Sensor   Sensor Sinal"}
,{"P2236","O  Circ curto com aquecedor Circ Bank  Sensor 3"}
,{"P2237","O  Sensor positiva atual Ctrl Circ / Aberto Bank1 Sensor 1"}
,{"P2238","O  Sensor positiva atual Ctrl Circ Baixo Bank1 Sensor 1"}
,{"P2239","O  Sensor positiva Ctrl atual Circ alta Bank1 Sensor 1"}
,{"P2240","O  Sensor positiva atual Ctrl Circ / Aberto Bank  Sensor 1"}
,{"P2241","O  Sensor positiva atual Ctrl Circ Baixo Bank  Sensor 1"}
,{"P2242","O  Sensor positiva Ctrl atual Circ alta Bank  Sensor 1"}
,{"P2243","O  Sensor Ref Voltage Circ / Aberto Bank1 Sensor 1"}
,{"P2244","O  Sensor Ref Voltage Perf Bank1 Sensor 1"}
,{"P2245","O  Sensor Ref Voltage Circ Baixo Bank1 Sensor 1"}
,{"P2246","O  Sensor Ref Voltage Circ alta Bank1 Sensor 1"}
,{"P2247","O  Sensor Ref Voltage Circ / Aberto Bank  Sensor 1"}
,{"P2248","O  Sensor Ref Voltage Perf Bank  Sensor 1"}
,{"P2249","O  Sensor Ref Voltage Circ Baixo Bank  Sensor 1"}
,{"P2250","O  Sensor Ref Voltage Circ alta Bank  Sensor 1"}
,{"P2251","O  Sensor negativa atual Ctrl Circ / Aberto Bank1 Sensor 1"}
,{"P2252","O  Sensor negativa atual Ctrl Circ Baixo Bank1 Sensor 1"}
,{"P2253","O  Sensor negativa atual Ctrl Circ alta Bank1 Sensor 1"}
,{"P2254","O  Sensor negativa atual Ctrl Circ / Aberto Bank  Sensor 1"}
,{"P2255","O  Sensor negativa atual Ctrl Circ Baixo Bank  Sensor 1"}
,{"P2256","O  Sensor negativa atual Ctrl Circ alta Bank  Sensor 1"}
,{"P2257","Sec Ar Inj Sys Ctrl A Circ Baixo"}
,{"P2258","Sec Ar Inj Sys Ctrl A Circ alta"}
,{"P2259","Sec Ar Inj Sys Circ Ctrl B Baixo"}
,{"P2260","Sec Ar Inj Sys Ctrl B Circ alta"}
,{"P2261","T / S Charger Bypass Válvula-Mechanical"}
,{"P2262","Turbo Boost Imprensa não detectada-Mechanical"}
,{"P2263","T / S Charger impulso Sys Perf"}
,{"P2264","água no combustível Sensor Circ"}
,{"P2265","água no combustível Sensor Circ Faixa / Perf"}
,{"P2266","água no combustível Sensor Circ Baixo"}
,{"P2267","água no combustível Sensor Circ alta"}
,{"P2268","água no combustível Sensor Circ Interm"}
,{"P2269","água no combustível Condição"}
,{"P2270","Sinal Sensor O  Preso Banco magra 1 Sensor"}
,{"P2271","Sinal Sensor O  Preso Rico Banco 1 Sensor"}
,{"P2272","Sinal Sensor O  Preso Banco magra   Sensor"}
,{"P2273","Sinal Sensor O  Preso Rico Banco   Sensor"}
,{"P2274","Sinal Sensor O  Preso Banco magra 1 Sensor 3"}
,{"P2275","Sinal Sensor O  Preso Rico Banco 1 Sensor 3"}
,{"P2276","Sinal Sensor O  Preso Banco magra   Sensor 3"}
,{"P2277","Sinal Sensor O  Preso Rico Banco   Sensor 3 Sinais"}
,{"P2278","O  Sensor Swapped Banco 1 Sensor 3 / Banco   Sensor 3"}
,{"P2279","Intake Ar Sys Leak"}
,{"P2280","fluxo de ar Restrição / Ar Vazamento entre o filtro de ar e MAF"}
,{"P2281","Ar Leak Entre MAF e Carburador"}
,{"P2282","Ar Leak Entre Throttle Body e válvulas de admissão"}
,{"P2283","Injetor Ctrl Imprensa Sensor Circ"}
,{"P2284","Injetor Ctrl Imprensa Sensor Circ Faixa / Perf"}
,{"P2285","Injetor Ctrl Imprensa Sensor Circ Baixo"}
,{"P2286","Injetor Ctrl Imprensa Sensor Circ alta"}
,{"P2287","Injetor Ctrl Imprensa Sensor Circ Interm"}
,{"P2288","Injetor Ctrl Imprensa Too High"}
,{"P2289","Injetor Ctrl Imprensa Too High-Engine Off"}
,{"P2290","Injetor Ctrl Imprensa muito baixo"}
,{"P2291","Injetor Ctrl pressione muito baixa arranque do motor"}
,{"P2292","Injetor Ctrl Imprensa errático"}
,{"P2293","combustível Imprensa Reg   Perf"}
,{"P2294","combustível Imprensa Reg   Ctrl Circ"}
,{"P2295","combustível Imprensa Reg   Ctrl Circ Baixo"}
,{"P2296","combustível Imprensa Reg   Ctrl Circ alta"}
,{"P2297","O  Sensor fora da faixa durante desaceleração Bank1 Sensor 1"}
,{"P2298","O  Sensor fora da faixa durante desaceleração Bank  Sensor 1"}
,{"P2299","Brake Pedal Pos / Pedal do Acelerador Pos Incompatível"}
,{"P2300","Bobina de ignição A Pri Ctrl Circ Baixo"}
,{"P2301","Bobina de ignição A Pri Ctrl Circ alta"}
,{"P2302","Bobina de ignição A Sec Circ"}
,{"P2303","Bobina de ignição B Pri Ctrl Circ Baixo"}
,{"P2304","Bobina de ignição B Pri Ctrl Circ alta"}
,{"P2305","Bobina de ignição B Sec Circ"}
,{"P2306","Bobina de ignição C Pri Ctrl Circ Baixo"}
,{"P2307","Bobina de ignição C Pri Ctrl Circ alta"}
,{"P2308","Bobina de ignição C Sec Circ"}
,{"P2309","Bobina de ignição D Pri Ctrl Circ Baixo"}
,{"P2310","Bobina de ignição D Pri Ctrl Circ alta"}
,{"P2311","Bobina de ignição D Sec Circ"}
,{"P2312","Bobina de ignição E Pri Ctrl Circ Baixo P"}
,{"P2314","Bobina de ignição E Sec Circ"}
,{"P2315","Bobina de ignição F Pri Ctrl Circ Baixo"}
,{"P2316","Bobina de ignição F Pri Ctrl Circ alta"}
,{"P2317","Bobina de ignição F Sec Circ"}
,{"P2318","Bobina de ignição G Pri Ctrl Circ Baixo"}
,{"P2319","Bobina de ignição G Pri Ctrl Circ alta"}
,{"P2320","Bobina de ignição G Sec Circ"}
,{"P2321","Bobina de ignição H Pri Ctrl Circ Baixo"}
,{"P2322","Bobina de ignição H Pri Ctrl Circ alta"}
,{"P2323","Bobina de ignição H Sec Circ"}
,{"P2324","Bobina de ignição I Pri Ctrl Circ Baixo"}
,{"P2325","Bobina de ignição I Pri Ctrl Circ alta"}
,{"P2326","Bobina de ignição I Sec Circ"}
,{"P2327","Bobina de ignição J Pri Ctrl Circ Baixo"}
,{"P2328","Bobina de ignição J Pri Ctrl Circ alta"}
,{"P2329","Bobina de ignição J Sec Circ"}
,{"P2330","Bobina de ignição K Pri Ctrl Circ Baixo"}
,{"P2331","Bobina de ignição K Pri Ctrl Circ alta"}
,{"P2332","Bobina de ignição K Sec Circ"}
,{"P2333","Bobina de ignição L Pri Ctrl Circ Baixo"}
,{"P2334","Bobina de ignição L Pri Ctrl Circ alta"}
,{"P2335","Bobina de ignição L Sec Circ"}
,{"P2336","Cilindro N º 1 Acima Bata Threshold"}
,{"P2337","Cilindro #   acima Bata Threshold"}
,{"P2338","Cilindro N º 3 Acima Bata Threshold"}
,{"P2339","Cilindro N º 4 Acima Bata Threshold"}
,{"P2340","Cilindro N º 5 Acima Bata Threshold"}
,{"P2341","Cilindro N º 6 Acima Bata Threshold"}
,{"P2342","Cilindro N º 7 Acima Bata Threshold"}
,{"P2343","Cilindro N º 8 Acima Bata Threshold"}
,{"P2344","Cilindro N º 9 Acima Bata Threshold"}
,{"P2345","Cilindro N º 10 Acima Bata Threshold"}
,{"P2346","Cilindro N º 11 Acima Bata Threshold"}
,{"P2347","Cilindro N º 1  Acima Bata Threshold"}
,{"P2400","EVAP Bomba Detecção de vazamento Ctrl Circ / Aberto"}
,{"P2401","EVAP Bomba Detecção de vazamento Ctrl Circ Baixo"}
,{"P2402","EVAP Vazamento Bomba Detecção Ctrl Circ alta"}
,{"P2403","EVAP Bomba Detecção de vazamento Sense Circ / Aberto Bomba de Detecção"}
,{"P2404","EVAP vazamento Sense Circ Faixa / Perf Bomba de Detecção"}
,{"P2405","EVAP vazamento Sense Circ Baixo"}
,{"P2406","EVAP Vazamento Bomba Detection Sense Circ alta"}
,{"P2407","EVAP Vazamento Bomba Detection Sense Circ Interm / errático"}
,{"P2408","Combustível Cap Sensor / Switch Circ"}
,{"P2409","Combustível Cap Sensor / Switch Circ Faixa / Perf"}
,{"P2410","Combustível Cap Sensor / Switch Circ Baixo"}
,{"P2411","Combustível Cap Sensor / Switch Circ alta"}
,{"P2412","Combustível Cap Sensor / Switch Circ Interm / errático"}
,{"P2413","Recirculação de Gás Sys Perf"}
,{"P2414","O  Sensor de escape Amostra erro Bank1 Sensor 1"}
,{"P2415","O  Sensor de escape Amostra erro Bank  Sensor 1 Sinais"}
,{"P2416","O  Sensor Swapped Bank1 Sensor   / Bank1 Sensor 3 Sinais"}
,{"P2417","O  Sensor Swapped Bank  Sensor   / Bank  Sensor 3"}
,{"P2418","EVAP comutação da válvula Ctrl Circ / Aberto"}
,{"P2419","EVAP comutação da válvula Ctrl Circ Baixo"}
,{"P2420","EVAP comutação da válvula Ctrl Circ alta"}
,{"P2421","válvula de ventilação EVAP Preso Aberto"}
,{"P2422","válvula de ventilação EVAP Preso Fechado"}
,{"P2423","HC Adsorção Catalisador Eficiência Abaixo do Limite Bank1"}
,{"P2424","HC Adsorção Catalisador Eficiência Abaixo do Limite Bank"}
,{"P2425","Recirculação dos gases de refrigeração válvula Ctrl Circ / Aberto"}
,{"P2426","Recirculação dos gases de refrigeração válvula Ctrl Circ Baixo"}
,{"P2427","Recirculação dos gases de refrigeração válvula Ctrl Circ alta"}
,{"P2428","Escapamento Gas Temp Too High Bank1"}
,{"P2429","Escapamento Gas Temp Too High Bank"}
,{"P2430","Sec Ar Inj Sys fluxo de ar / Sensor de Imprensa Circ Bank1"}
,{"P2431","Sec Ar Inj Sys fluxo de ar / Sensor de Imprensa Circ Faixa / Perf Bank1"}
,{"P2432","Sec Ar Inj Sys fluxo de ar / Sensor de Imprensa Circ Baixo Bank1"}
,{"P2433","Sec Ar Inj Sys fluxo de ar / Sensor de Imprensa Circ alta Bank1"}
,{"P2434","Sec Ar Inj Sys fluxo de ar / Sensor de Imprensa Circ Interm / errático Bank1"}
,{"P2435","Sec Ar Inj Sys fluxo de ar / Sensor de Imprensa Circ Bank"}
,{"P2436","Sec Ar Inj Sys fluxo de ar / Sensor de Imprensa Circ Faixa / Perf Bank"}
,{"P2437","Sec Ar Inj Sys fluxo de ar / Sensor de Imprensa Circ Baixo Bank"}
,{"P2438","Sec Ar Inj Sys fluxo de ar / Sensor de Imprensa Circ alta Bank"}
,{"P2439","Sec Ar Inj Sys fluxo de ar / Sensor de Imprensa Circ Interm / eratic Bank"}
,{"P2440","Sec Ar Inj Sys comutação da válvula Preso Abrir Bank1"}
,{"P2441","Sec Ar Inj Sys comutação da válvula Preso Fechado Bank1"}
,{"P2442","Sec Ar Inj Sys comutação da válvula Preso Abrir Bank"}
,{"P2443","Sec Ar Inj Sys comutação da válvula Preso Fechado Bank"}
,{"P2444","Sec Ar Inj Sys Bomba Stuck On Bank1"}
,{"P2445","Sec Ar Inj Sys Bomba Preso Off Bank1 P"}
,{"P2446","Sec Ar Inj Sys Bomba Stuck On Bank"}
,{"P2447","Sec Ar Inj Sys Bomba Preso Off Bank"}
,{"P2455","DPF Diferencial Sensor curto para voltagem"}
,{"P2456","Sensor de Partículas Diesel Pressão Filtro ‘A’ Circuito Intermitente / errático  455 DPF Diferencial Sensor curto para voltagem"}
,{"P2457","Desempenho do Sistema recirculação dos gases de refrigeração"}
,{"P2458","Filtro de Partículas Diesel Regeneração Duração"}
,{"P2459","Filtro de Partículas Diesel Regeneration Frequency"}
,{"P2460","‘B’ Filtro de Partículas Diesel Pressure Sensor Circuit Baixo"}
,{"P2461","Sensor de pressão Filtro de Partículas Diesel ‘B’ Circuito de Alta"}
,{"P2462","Sensor de Partículas Diesel Pressão Filtro ‘B’ Circuito Intermitente / errático"}
,{"P2463","Filtro de Partículas Diesel Restrição – Fuligem Acumulação"}
,{"P2464","Filtro de Partículas Diesel Pressão Diferencial muito baixo Banco"}
,{"P2465","Filtro de Partículas Diesel Pressão Diferencial Too High Bank"}
,{"P2467","Escapamento Gas Temperature Sensor Circuit Faixa / Banco Desempenho   Sensor 3"}
,{"P2468","Escapamento Gas Temperature Sensor Circuito Banco Baixo   Sensor 3"}
,{"P2469","Escapamento Gas Temperature Sensor Circuit High Bank   Sensor 3"}
,{"P2470","Escapamento Gas Temperature Sensor Circuit Baixa/o Banco 1 Sensor 4"}
,{"P2471","Escapamento Gas Temperature Sensor Circuit High Bank 1 Sensor 4"}
,{"P2472","Escapamento Gas Temperature Sensor Circuito Intermitente / errático Banco 1 Sensor 4"}
,{"P2473","Escapamento Gas Temperature Sensor Circuito Banco   Sensor 4"}
,{"P2474","Escapamento Gas Temperature Sensor Circuit Faixa / Banco Desempenho   Sensor 4"}
,{"P2475","– Escapamento Gas Temperature Sensor Circuito Banco Baixo   Sensor 4"}
,{"P2501","Generator Lamp / L-Terminal Circ alta"}
,{"P2502","carregamento Sys Tensão"}
,{"P2503","carregamento Sys de Baixa Tensão"}
,{"P2504","carregamento Sys Tensão alta"}
,{"P2505","ECM / PCM potência do sinal de entrada"}
,{"P2506","ECM / PCM Entrada de Sinal Faixa / Perf"}
,{"P2507","ECM / PCM Entrada de Sinal Baixo Sinal"}
,{"P2508","ECM / PCM de entrada de alta potência Sinal"}
,{"P2509","ECM / PCM Entrada de alimentação intermitente"}
,{"P2510","ECM / PCM Poder Sense Relé Circ Faixa / Perf"}
,{"P2511","ECM / PCM Poder Sense Relé Circ Interm"}
,{"P2512","Evento Data Recorder Pedido Circ / Aberto"}
,{"P2513","Evento Data Recorder Pedido Circ Baixo"}
,{"P2514","Evento Data Recorder Pedido Circ alta"}
,{"P2515","A / C Refrigerante Imprensa SensorB Circ"}
,{"P2516","A / C Refrigerante Imprensa SensorB Circ Faixa / Perf"}
,{"P2517","A / C Circ refrigerante Imprensa SensorB Baixo"}
,{"P2518","A / C Refrigerante Imprensa SensorB Circ alta"}
,{"P2519","A / C Pedir um Circ P 5 0 A / C Pedir um Circ Baixo"}
,{"P2521","A / C Pedido um Circ alta"}
,{"P2522","A / C Pedido B Circ"}
,{"P2523","A / C Pedido Circ B Baixo"}
,{"P2524","A / C Pedido B Circ alta"}
,{"P2525","vácuo Reservatório Imprensa Sensor Circ"}
,{"P2526","vácuo Reservatório Imprensa Sensor Circ Faixa / Perf"}
,{"P2527","vácuo Reservatório Imprensa Sensor Circ Baixo"}
,{"P2528","vácuo Reservatório Imprensa Sensor Circ alta"}
,{"P2529","vácuo Reservatório Imprensa Sensor Circ Interm"}
,{"P2530","Ignição Run Pos Circ"}
,{"P2531","Interruptor de ignição Run Pos Circ Baixo"}
,{"P2532","Interruptor de ignição Run Pos Circ alta"}
,{"P2533","Interruptor de ignição Run / Start Pos Circ"}
,{"P2534","Interruptor de ignição Run / Start Pos Circ Baixo"}
,{"P2535","Interruptor de ignição Run / Start Pos Circ alta"}
,{"P2536","Ignição Acessório Pos Circ"}
,{"P2537","Ignição Acessório Pos Circ Baixo"}
,{"P2538","Ignição Acessório Pos Circ alta"}
,{"P2539","Baixo Imprensa Combustível Sys Sensor Circ"}
,{"P2540","Baixo Imprensa Combustível Sys Sensor Circ Faixa / Perf"}
,{"P2541","Baixo Imprensa Combustível Sys Sensor Circ Baixo"}
,{"P2542","Baixo Imprensa Combustível Sys Sensor Circ alta"}
,{"P2543","Baixo Imprensa Combustível Sys Sensor Circ Interm Sinal"}
,{"P2544","Torque Mgmt Request Entrada A"}
,{"P2545","Torque Mgmt Request Entrada Sinal A Gama / Perf Sinal"}
,{"P2546","Torque Mgmt Request Entrada A Baixa/o"}
,{"P2547","Torque Mgmt Request Entrada Sinal A alta"}
,{"P2548","Torque Mgmt Pedido de sinal de entrada B"}
,{"P2549","Torque Mgmt Request Entrada Sinal B Faixa / Perf"}
,{"P2550","Torque Mgmt Request Entrada Sinal B Baixo"}
,{"P2551","Torque Mgmt Pedido de sinal de entrada B alta"}
,{"P2552","acelerador / Combustível Inibição Circ P"}
,{"P2553","acelerador / Combustível Inibição Circ Faixa / Perf"}
,{"P2554","acelerador / Combustível Inibição Circ Baixo"}
,{"P2555","acelerador / Combustível Inibição Circ alta"}
,{"P2556","refrigeração do motor Sensor de Nível / Switch Circ"}
,{"P2557","refrigeração do motor Sensor de Nível / Switch Circ Faixa / Perf"}
,{"P2558","refrigeração do motor Sensor de Nível / Switch Circ Baixo"}
,{"P2559","refrigeração do motor Sensor de Nível / Switch Circ alta"}
,{"P2560","Motor Refrigerante Nível Baixo Iluminação MIL"}
,{"P2561","A / C Ctrl Mod Requerida"}
,{"P2562","Turbocharger impulso Ctrl Pos Sensor Circ"}
,{"P2563","Turbocharger impulso Ctrl Pos Sensor Circ Faixa / Perf"}
,{"P2564","Turbocharger Aumentar Ctrl Pos Sensor Circ Baixo"}
,{"P2565","Turbocharger Aumentar Ctrl Pos Sensor Circ alta"}
,{"P2566","Turbocharger Aumentar Ctrl Pos Sensor Circ Interm"}
,{"P2567","direto Redução de Ozônio Catalisador Temp Sensor Circ"}
,{"P2568","direto Redução de Ozônio Catalisador Temp Sensor Circ Faixa / Perf"}
,{"P2569","direto Redução de Ozônio Catalisador Temp Sensor Circ Baixo"}
,{"P2570","direto Redução de Ozônio Catalisador Temp Sensor Circ alta"}
,{"P2571","direto Redução de Ozônio Catalisador Temp Sensor Circ Interm/Erratic4"}
,{"P2572","Deterioração Catalisador de Redução de Ozônio direto Sensor Circ4"}
,{"P2573","Deterioração Catalisador de Redução de Ozônio direto Sensor Circ Range/Perf4"}
,{"P2574","Deterioração Catalisador de Redução de Ozônio direto Sensor Circ Baixa/o4"}
,{"P2575","Deterioração Catalisador de Redução de Ozônio direto Sensor Circ High4"}
,{"P2576","direto Redução de Ozônio Catalisador Deterioração Sensor Circ Interm / errático"}
,{"P2577","direto Redução de Ozônio Catalisador Eficiência Abaixo do Limite"}
,{"P2600","Refrigerante Bomba Ctrl Circ / Aberto"}
,{"P2601","Refrigerante Bomba Ctrl Circ Faixa / Perf"}
,{"P2602","Refrigerante Bomba Ctrl Circ Baixo"}
,{"P2603","Refrigerante Bomba Ctrl Circ alta"}
,{"P2604","Intake Ar Aquecedor A Circ Faixa / Perf"}
,{"P2605","Intake Ar Aquecedor A Circ / Aberto"}
,{"P2606","Intake Ar Aquecedor B Circ Faixa / Perf"}
,{"P2607","Intake Ar Aquecedor B Circ Baixo"}
,{"P2608","Intake Ar Aquecedor B Circ alta"}
,{"P2609","Intake Ar Aquecedor Sys Perf P 610 ECM / PCM Internos do Motor Off Timer Perf"}
,{"P2611","A / C Refrigerante Distribuição Válvula Ctrl Circ / Aberto"}
,{"P2612","A / C Distribuição refrigerante Válvula Ctrl Circ Baixo"}
,{"P2613","A / C Distribuição refrigerante Válvula Ctrl Circ alta Saída"}
,{"P2614","Comando de válvulas Pos sinal Circ / Aberto Saída"}
,{"P2615","Comando de válvulas Pos sinal Circ Baixo Saída"}
,{"P2616","Comando de válvulas Pos sinal Circ alta Saída"}
,{"P2617","Crank Pos sinal Circ / Aberto Saída"}
,{"P2618","Crank Pos sinal Circ Baixo Saída"}
,{"P2619","Crank Pos sinal Circ alta"}
,{"P2620","acelerador Pos saída Circ / Aberto"}
,{"P2621","acelerador Pos saída Circ Baixo"}
,{"P2622","acelerador Pos saída Circ alta"}
,{"P2623","Injetor Ctrl Imprensa Reg Circ / Aberto"}
,{"P2624","Injetor Ctrl Imprensa Reg Circ Baixo"}
,{"P2625","Injetor Ctrl Imprensa Reg Circ alta"}
,{"P2626","O  Sensor de bombeamento guarnição atual Circ / Aberto Bank1 Sensor 1"}
,{"P2627","O  Sensor de bombeamento atual guarnição Circ Baixo Bank1 Sensor 1"}
,{"P2628","O  Sensor de bombeamento guarnição atual Circ alta Bank1 Sensor 1"}
,{"P2629","O  Sensor de bombeamento guarnição atual Circ / Aberto Bank  Sensor 1"}
,{"P2630","O  Sensor de bombeamento atual guarnição Circ Baixo Bank  Sensor 1"}
,{"P2631","O  Sensor de bombeamento guarnição atual Circ alta Bank  Sensor 1 Bomba de Combustível"}
,{"P2632","B Ctrl Circ / Aberto Bomba de Combustível"}
,{"P2633","B Ctrl Circ Baixo Bomba de Combustível"}
,{"P2634","B Ctrl Circ alta"}
,{"P2635","Bomba de Combustível A Baixa/o Fbaixa/o / Perf Bomba de Combustível"}
,{"P2636","B Baixa Vazão / Perf"}
,{"P2637","Torque Mgmt resposta sinal A"}
,{"P2638","Torque Mgmt resposta Sinal A Gama / Perf Sinal"}
,{"P2639","Torque Mgmt resposta A Baixa/o"}
,{"P2640","Torque Mgmt resposta Sinal A alta"}
,{"P2641","Torque Mgmt resposta Sinal B"}
,{"P2642","Torque Mgmt resposta Sinal B Faixa / Perf"}
,{"P2643","Torque Mgmt resposta Sinal B Baixo"}
,{"P2644","Torque Mgmt resposta Sinal B alta"}
,{"P2645","A Rocker braço atuador Ctrl Circ / Aberto Bank1"}
,{"P2646","A Rocker braço atuador Sys Perf ou Preso Off Bank1"}
,{"P2647","A Rocker braço atuador Sys Stuck On Bank1"}
,{"P2648","A Rocker braço atuador Ctrl Circ Baixo Bank1"}
,{"P2649","A Rocker braço atuador Ctrl Circ alta Bank1"}
,{"P2650","B Rocker braço atuador Ctrl Circ / Aberto Bank1"}
,{"P2651","B Rocker braço atuador Sys Perf ou Preso Off Bank1"}
,{"P2652","B Rocker braço atuador Sys Stuck On Bank1"}
,{"P2653","B Rocker braço atuador Ctrl Circ Baixo Bank1"}
,{"P2654","B Rocker braço atuador Ctrl Circ alta Bank1"}
,{"P2655","A Rocker braço atuador Ctrl Circ / Aberto Bank"}
,{"P2656","A Rocker braço atuador Sys Perf ou Preso Off Bank"}
,{"P2657","A Rocker braço atuador Sys Stuck On Bank"}
,{"P2658","A Rocker braço atuador Ctrl Circ Baixo Bank"}
,{"P2659","A Rocker braço atuador Ctrl Circ alta Bank"}
,{"P2660","B Rocker braço atuador Ctrl Circ / Aberto Bank"}
,{"P2661","B Rocker braço atuador Sys Perf ou Preso Off Bank"}
,{"P2662","B Rocker braço atuador Sys Stuck On Bank"}
,{"P2663","B Rocker braço atuador Ctrl Circ Baixo Bank"}
,{"P2664","B Rocker braço atuador Ctrl Circ alta Bank"}
,{"P2665","de combustível Válvula de Corte B Ctrl Circ / Aberto"}
,{"P2666","de combustível Válvula de Corte B Ctrl Circ Baixo"}
,{"P2667","de combustível Válvula de Corte B Ctrl Circ alta Modo de combustível"}
,{"P2668","Indicator Lamp Ctrl Circ"}
,{"P2669","Atuador Tensão de alimentação B Circ / Aberto"}
,{"P2670","Atuador Tensão de alimentação B Circ Baixo"}
,{"P2671","Atuador Tensão de alimentação B Circ alta"}
,{"P2700","Trans Atrito Elemento A Aplicar Intervalo de tempo / Perf"}
,{"P2701","Trans Atrito Elemento B Aplicar Intervalo de tempo / Perf"}
,{"P2702","Trans Atrito Elemento C Aplicar Intervalo de tempo / Perf"}
,{"P2703","Trans Atrito Elemento D Aplicar Intervalo de tempo / Perf"}
,{"P2704","Trans Atrito Elemento E Aplicar Intervalo de tempo / Perf"}
,{"P2705","Trans Atrito Elemento F Aplicar Intervalo de tempo / Perf"}
,{"P2706","solenóide F"}
,{"P2707","solenóide F Perf ou Preso Off"}
,{"P2708","solenóide F Stuck On"}
,{"P2709","solenóide F Elétrica"}
,{"P2710","solenóide F Interm"}
,{"P2711","inesperado mecânica engrenagem desocupação Unidade"}
,{"P2712","Energia Hidráulica Vazamento"}
,{"P2713","Pressione Ctrl solenóide D"}
,{"P2714","Pressione Ctrl solenóide D Perf ou Preso Off"}
,{"P2715","Pressione Ctrl solenóide D Stuck On"}
,{"P2716","Pressione Ctrl solenóide D Elétrica"}
,{"P2717","Pressione Ctrl solenóide D Interm"}
,{"P2718","Pressione Ctrl solenóide D Ctrl Circ / Aberto"}
,{"P2719","Pressione Ctrl solenóide D Ctrl Circ Faixa / Perf"}
,{"P2720","Pressione Ctrl solenóide D Ctrl Circ Baixo"}
,{"P2721","Pressione Ctrl solenóide D Ctrl Circ alta"}
,{"P2722","Pressione Ctrl Solenoide E"}
,{"P2723","Pressione Ctrl Solenoide E Perf ou Preso Off"}
,{"P2724","Pressione Ctrl Solenoide E Stuck On"}
,{"P2725","Pressione Ctrl Solenoide E Elétrica"}
,{"P2726","Pressione Ctrl Solenoide E Interm"}
,{"P2727","Pressione Ctrl Solenoide E Ctrl Circ / Aberto"}
,{"P2728","Pressione Ctrl Solenoide E Ctrl Circ Faixa / Perf"}
,{"P2729","Pressione Ctrl Solenoide E Ctrl Circ Baixo"}
,{"P2730","Pressione Ctrl Solenoide E Ctrl Circ alta"}
,{"P2731","Pressione Ctrl Solenoide F"}
,{"P2732","Pressione Ctrl Solenoide F Perf ou Preso Off"}
,{"P2733","Pressione Ctrl Solenoide F Stuck On"}
,{"P2734","Pressione Ctrl F solenóide elétrica"}
,{"P2735","Pressione Ctrl Solenoide F Interm"}
,{"P2736","Pressione Ctrl Solenoide F Ctrl Circ / Aberto"}
,{"P2737","Pressione Ctrl Solenoide F Ctrl Circ Faixa / Perf"}
,{"P2738","Pressione Ctrl Solenoide F Ctrl Circ Baixo"}
,{"P2739","Pressione Ctrl Solenoide F Ctrl Circ alta"}
,{"P2740","Trans Fluid Temp SensorB Circ"}
,{"P2741","Trans Fluid Temp SensorB Circ Faixa Perf"}
,{"P2742","Trans Fluid Temp SensorB Circ Baixo"}
,{"P2743","Trans Fluid Temp SensorB Circ alta"}
,{"P2744","Trans Fluid Temp SensorB Circ Interm"}
,{"P2745","Intermediate Shaft velocidade SensorB Circ"}
,{"P2746","Intermediate Shaft velocidade SensorB Circ Faixa / Perf"}
,{"P2747","Intermediate Shaft velocidade SensorB Circ No Sinal"}
,{"P2748","Intermediate Shaft velocidade SensorB Circ Interm"}
,{"P2749","Intermediate Shaft Sensor de Velocidade C Circ"}
,{"P2750","Intermediate Shaft Sensor de Velocidade C Circ Faixa / Perf"}
,{"P2751","Intermediate Shaft Sensor de Velocidade C Circ No Sinal"}
,{"P2752","Intermediate Shaft Sensor de Velocidade C Circ Interm"}
,{"P2753","Trans cooler Fluid Ctrl Circ / Aberto"}
,{"P2754","Trans cooler Fluid Ctrl Circ Baixo"}
,{"P2755","Trans cooler Fluid Ctrl Circ alta"}
,{"P2756","Torq Conv Clutch Pressione Ctrl Solenoide"}
,{"P2757","Torq Conv Clutch Pressione Ctrl Solenoide Ctrl Circ Perf ou Preso Off"}
,{"P2758","Torq Conv Clutch Pressione Ctrl Solenoide Ctrl Circ Stuck On"}
,{"P2759","Torq Conv Clutch Pressione Ctrl Solenoide Ctrl Circ Elétrica"}
,{"P2760","Torq Conv Clutch Pressione Ctrl Solenoide Ctrl Circ Interm"}
,{"P2761","Torq Conv Clutch Pressione Ctrl Solenoide Ctrl Circ / Aberto"}
,{"P2762","Torq Conv Clutch Pressione Ctrl Solenoide Ctrl Circ Faixa / Perf"}
,{"P2763","Torq Conv Clutch Pressione Ctrl Solenoide Ctrl Circ alta"}
,{"P2764","Torq Conv Clutch Pressione Ctrl Solenoide Ctrl Circ Baixo Entrada"}
,{"P2765","/ Turbina velocidade SensorB Circ Entrada"}
,{"P2766","/ Turbina velocidade SensorB Circ Faixa / Perf Entrada"}
,{"P2767","/ Turbina velocidade SensorB Circ No Sinal Entrada"}
,{"P2768","/ Turbina velocidade SensorB Circ Interm"}
,{"P2769","Torq Conv Clutch Circ Baixo"}
,{"P2770","Torq Conv Clutch Circ alta"}
,{"P2771","4WD Baixa/o Mudar Circ"}
,{"P2772","4WD Baixa/o Mudar Circ Faixa / Perf"}
,{"P2773","4WD Baixa/o Mudar Circ Baixo"}
,{"P2774","4WD Baixa/o Mudar Circ alta"}
,{"P2775","mudança de marcha Mudar Circ Faixa / Perf"}
,{"P2776","​​mudança de marcha Mudar Circ Baixo"}
,{"P2777","mudança de marcha Mudar Circ alta"}
,{"P2778","mudança de marcha Mudar Circ Interm / errático"}
,{"P2779","Downshift Mudar Circ Faixa / Perf"}
,{"P2780","Downshift Mudar Circ Baixo"}
,{"P2781","Downshift Mudar Circ alta"}
,{"P2782","Downshift Mudar Circ Interm / errático"}
,{"P2783","Torq Conv Temp Too High Entrada"}
,{"P2784","/ Turbina velocidade Sensora / B Correlação"}
,{"P2785","embreagem atuador Temp Too High"}
,{"P2786","da SHIFT de engrenagem do atuador Temp Too High"}
,{"P2787","Clutch Temp Too High Manual de Mudança"}
,{"P2788","Auto Adaptive Aprendizagem no Limite"}
,{"P2789","Clutch Adaptive Aprendizagem no Limite"}
,{"P2790","Portão Selecionar direção Circ"}
,{"P2791","Portão Selecionar direção Circ Baixo"}
,{"P2792","Portão Selecionar direção Circ alta"}
,{"P2793","engrenagem Direção Mudança Circ"}
,{"P2794","engrenagem Direção Mudança Circ Baixo"}
,{"P2795","engrenagem Direção Mudança Circ alta"}
,{"P2A00","O  Sensor Circ Faixa / Perf Bank1 Sensor 1"}
,{"P2A01","O  Sensor Circ Faixa / Perf Bank1 Sensor"}
,{"P2A02","O  Sensor Circ Faixa / Perf Bank1 Sensor 3"}
,{"P2A03","O  Sensor Circ Faixa / Perf Bank  Sensor 1"}
,{"P2A04","O  Sensor Circ Faixa / Perf Bank  Sensor"}
,{"P2A05","O  Sensor Circ Faixa / Perf Bank  Sensor 3 Códigos"}
,{"P3400","Cilindro Desativação Sys Bank1"}
,{"P3401","Cyl1 Desativação / Intake Válvula Ctrl Circ / Aberto"}
,{"P3402","Cyl1 Desativação / Intake Válvula Ctrl Perf"}
,{"P3403","Cyl1 Desativação / Intake Válvula Ctrl Circ Baixo"}
,{"P3404","Cyl1 Desativação / Intake Válvula Ctrl Circ alta"}
,{"P3405","Cyl1 válvula de escape Ctrl Circ / Aberto"}
,{"P3406","Cyl1 válvula de escape Ctrl Perf"}
,{"P3407","Cyl1 válvula de escape Ctrl Circ Baixo"}
,{"P3408","Cyl1 válvula de escape Ctrl Circ alta"}
,{"P3409","Cyl  Desativação / Intake Válvula Ctrl Circ / Aberto"}
,{"P3410","Cyl  Desativação / Intake Válvula Ctrl Perf"}
,{"P3411","Cyl  Desativação / Intake Válvula Ctrl Circ Baixo"}
,{"P3412","Cyl  Desativação / Intake Válvula Ctrl Circ alta"}
,{"P3413","Cyl  válvula de escape Ctrl Circ / Aberto"}
,{"P3414","Cyl  válvula de escape Ctrl Perf"}
,{"P3415","Cyl  válvula de escape Ctrl Circ Baixo"}
,{"P3416","Cyl  válvula de escape Ctrl Circ alta"}
,{"P3417","Cyl3 Desativação / Intake Válvula Ctrl Circ / Aberto"}
,{"P3418","Cyl3 Desativação / Intake Válvula Ctrl Perf"}
,{"P3419","Cyl3 Desativação / Intake Válvula Ctrl Circ Baixo"}
,{"P3420","Cyl3 Desativação / Intake Válvula Ctrl Circ alta"}
,{"P3421","Cyl3 válvula de escape Ctrl Circ / Aberto"}
,{"P3422","Cyl3 válvula de escape Ctrl Perf"}
,{"P3423","Cyl3 válvula de escape Ctrl Circ Baixo"}
,{"P3424","Cyl3 válvula de escape Ctrl Circ alta"}
,{"P3425","Cyl4 Desativação / Intake Válvula Ctrl Circ / Aberto"}
,{"P3426","Cyl4 Desativação / Intake Válvula Ctrl Perf"}
,{"P3427","Cyl4 Desativação / Intake Válvula Ctrl Circ Baixo"}
,{"P3428","Cyl4 Desativação / Intake Válvula Ctrl Circ alta"}
,{"P3429","Cyl4 válvula de escape Ctrl Circ / Aberto"}
,{"P3430","Cyl4 válvula de escape Ctrl Perf P"}
,{"P3432","Cyl4 válvula de escape Ctrl Circ alta"}
,{"P3433","Cyl5 Desativação / Intake Válvula Ctrl Circ / Aberto"}
,{"P3434","Cyl5 Desativação / Intake Válvula Ctrl Perf"}
,{"P3435","Cyl5 Desativação / Intake Válvula Ctrl Circ Baixo"}
,{"P3436","Cyl5 Desativação / Intake Válvula Ctrl Circ alta"}
,{"P3437","Cyl5 válvula de escape Ctrl Circ / Aberto"}
,{"P3438","Cyl5 válvula de escape Ctrl Perf"}
,{"P3439","Cyl5 válvula de escape Ctrl Circ Baixo"}
,{"P3440","Cyl5 válvula de escape Ctrl Circ alta"}
,{"P3441","Cyl6 Desativação / Intake Válvula Ctrl Circ / Aberto"}
,{"P3442","Cyl6 Desativação / Intake Válvula Ctrl Perf"}
,{"P3443","Cyl6 Desativação / Intake Válvula Ctrl Circ Baixo"}
,{"P3444","Cyl6 Desativação / Intake Válvula Ctrl Circ alta"}
,{"P3445","Cyl6 válvula de escape Ctrl Circ / Aberto"}
,{"P3446","Cyl6 válvula de escape Ctrl Perf"}
,{"P3447","Cyl6 válvula de escape Ctrl Circ Baixo"}
,{"P3448","Cyl6 válvula de escape Ctrl Circ alta"}
,{"P3449","Cyl7 Desativação / Intake Válvula Ctrl Circ / Aberto"}
,{"P3450","Cyl7 Desativação / Intake Válvula Ctrl Perf"}
,{"P3451","Cyl7 Desativação / Intake Válvula Ctrl Circ Baixo"}
,{"P3452","Cyl7 Desativação / Intake Válvula Ctrl Circ alta"}
,{"P3453","Cyl7 válvula de escape Ctrl Circ / Aberto"}
,{"P3454","Cyl7 válvula de escape Ctrl Perf"}
,{"P3455","Cyl7 válvula de escape Ctrl Circ Baixo"}
,{"P3456","Cyl7 válvula de escape Ctrl Circ alta"}
,{"P3457","Cyl8 Desativação / Intake Válvula Ctrl Circ / Aberto"}
,{"P3458","Cyl8 Desativação / Intake Válvula Ctrl Perf"}
,{"P3459","Cyl8 Desativação / Intake Válvula Ctrl Circ Baixo"}
,{"P3460","Cyl8 Desativação / Intake Válvula Ctrl Circ alta"}
,{"P3461","Cyl8 válvula de escape Ctrl Circ / Aberto"}
,{"P3462","Cyl8 válvula de escape Ctrl Perf"}
,{"P3463","Cyl8 válvula de escape Ctrl Circ Baixo"}
,{"P3464","Cyl8 válvula de escape Ctrl Circ alta"}
,{"P3465","Cyl9 Desativação / Intake Válvula Ctrl Circ / Aberto"}
,{"P3466","Cyl9 Desativação / Intake Válvula Ctrl Perf"}
,{"P3467","Cyl9 Desativação / Intake Válvula Ctrl Circ Baixo"}
,{"P3468","Cyl9 Desativação / Intake Válvula Ctrl Circ alta"}
,{"P3469","Cyl9 válvula de escape Ctrl Circ / Aberto"}
,{"P3470","Cyl9 válvula de escape Ctrl Perf"}
,{"P3471","Cyl9 válvula de escape Ctrl Circ Baixo"}
,{"P3472","Cyl9 válvula de escape Ctrl Circ alta"}
,{"P3473","Cyl10 Desativação / Intake Válvula Ctrl Circ / Aberto"}
,{"P3474","Cyl10 Desativação / Intake Válvula Ctrl Perf"}
,{"P3475","Cyl10 Desativação / Intake Válvula Ctrl Circ Baixo"}
,{"P3476","Cyl10 Desativação / Intake Válvula Ctrl Circ alta"}
,{"P3477","Cyl10 válvula de escape Ctrl Circ / Aberto"}
,{"P3478","Cyl10 válvula de escape Ctrl Perf"}
,{"P3479","Cyl10 válvula de escape Ctrl Circ Baixo"}
,{"P3480","Cyl10 válvula de escape Ctrl Circ alta"}
,{"P3481","Cyl11 Desativação / Intake Válvula Ctrl Circ / Aberto"}
,{"P3482","Cyl11 Desativação / Intake Válvula Ctrl Perf"}
,{"P3483","Cyl11 Desativação / Intake Válvula Ctrl Circ Baixo"}
,{"P3484","Cyl11 Desativação / Intake Válvula Ctrl Circ alta"}
,{"P3485","Cyl11 válvula de escape Ctrl Circ / Aberto"}
,{"P3486","Cyl11 válvula de escape Ctrl Perf"}
,{"P3487","Cyl11 válvula de escape Ctrl Circ Baixo"}
,{"P3488","Cyl11 válvula de escape Ctrl Circ alta"}
,{"P3489","Cyl1  Desativação / Intake Válvula Ctrl Circ / Aberto"}
,{"P3490","Cyl1  Desativação / Intake Válvula Ctrl Perf"}
,{"P3491","Cyl1  Desativação / Intake Válvula Ctrl Circ Baixo"}
,{"P3492","Cyl1  Desativação / Intake Válvula Ctrl Circ alta"}
,{"P3493","Cyl1  válvula de escape Ctrl Circ / Aberto"}
,{"P16395","P00 0 -A-Comando-valvulas Pos. Atuador Circ. Banco Mau-funcionamento"}
,{"P16449","P0065 Ar Faixa de Controle Assisted Injetor / Performance"}
,{"P16450","P0066 Ar Assisted Injetor controle de entrada Low / Short para a terra"}
,{"P16451","P0067 Ar Assisted Injetor Entrada de Controle / Short para B +"}
,{"P16485","P0101 Massa ou Volume Ar Flow Faixa Circ / Performance"}
,{"P16486","P010  Massa ou Volume Ar Flow Entrada Circ Baixo"}
,{"P16487","P0103 Massa ou Volume Ar Flow Entrada Circ alta"}
,{"P16489","P0105 Abs.Pressure múltiplas ou o fornecimento de tensão Bar.Pressure"}
,{"P16490","P0106 Abs.Pressure Manifold ou Bar.Pressure Faixa / Performance"}
,{"P16491","P0107 Abs.Pressure Manifold ou Entrada Bar.Pressure Baixo"}
,{"P16492","P0108 Abs.Pressure Manifold ou Entrada Bar.Pressure alta"}
,{"P16496","P011  Entrada de ar Entrada Temp.Circ Baixo"}
,{"P16497","P0113 Entrada de ar Entrada Temp.Circ alta"}
,{"P16500","P0116 Motor de refrigeração Temp.Circ Faixa / Performance"}
,{"P16501","P0117 Motor de refrigeração de entrada Temp.Circ Baixo"}
,{"P16502","P0118 Motor de refrigeração Temp.Circ de entrada de alta"}
,{"P16504","P01 0 Acelerador / Pedal Mau-funcionamento A Pos.Sensor Circ"}
,{"P16505","P01 1 Acelerador / Pedal Pos.Sensor A Faixa de Circ / Performance"}
,{"P16506","P01   Acelerador / Pedal Entrada A Pos.Sensor Circ Baixo"}
,{"P16507","P01 3 Acelerador / Pedal Entrada A Pos.Sensor Circ alta"}
,{"P16509","P01 5 Refrigerante insuficiente Temp.for Closed loop de controle de combustível"}
,{"P16512","P01 8 Temperatura de refrigeração Termostato / Valve abaixo da faixa de controle"}
,{"P16514","P0130 O  Sensor Circ.  Bank1-Sensor1 Mau-funcionamento"}
,{"P16515","P0131 O  Sensor Circ.  Bank1-Sensor1 de Baixa Tensão"}
,{"P16516","P013  O  Sensor Circ.  Voltagem Bank1-Sensor1 alta"}
,{"P16517","P0133 O  Sensor Circ.  Resposta Bank1-Sensor1 lento"}
,{"P16518","P0134 O  Sensor Circ.  Bank1-Sensor1 Sem atividade Detectado"}
,{"P16519","P0135 O  Circ Aquecedor Sensor.  Bank1-Sensor1 Mau-funcionamento"}
,{"P16520","P0136 O  Sensor Circ.  Bank1-SENSOR  Mau-funcionamento"}
,{"P16521","P0137 O  Sensor Circ.  Bank1-SENSOR  de Baixa Tensão"}
,{"P16522","P0138 O  Sensor Circ.  Voltagem Bank1-SENSOR  alta"}
,{"P16523","P0139 O  Sensor Circ.  Resposta Bank1-SENSOR  lento"}
,{"P16524","P0140 O  Sensor Circ.  Bank1-SENSOR  Sem atividade Detectada"}
,{"P16525","P0141 O  Circ Aquecedor Sensor.  Bank1-SENSOR  Mau-funcionamento"}
,{"P16534","P0150 O  Sensor Circ.  Bank -Sensor1 Mau-funcionamento"}
,{"P16535","P0151 O  Sensor Circ.  Bank -Sensor1 de Baixa Tensão"}
,{"P16536","P015  O  Sensor Circ.  Voltagem Bank -Sensor1 alta"}
,{"P16537","P0153 O  Sensor Circ.  Resposta Bank -Sensor1 lento"}
,{"P16538","P0154 O  Sensor Circ.  Bank -Sensor1 Sem atividade Detectada"}
,{"P16539","P0155 O  Circ Aquecedor Sensor.  Bank -Sensor1 Mau-funcionamento"}
,{"P16540","P0156 O  Sensor Circ.  Bank -SENSOR  Mau-funcionamento"}
,{"P16541","P0157 O  Sensor Circ.  Bank -SENSOR  de Baixa Tensão"}
,{"P16542","P0158 O  Sensor Circ.  Voltagem Bank -SENSOR  alta"}
,{"P16543","P0159 O  Sensor Circ.  Resposta Bank -SENSOR  lento"}
,{"P16544","P0160 O  Sensor Circ.  Bank -SENSOR  Sem atividade Detectada"}
,{"P16545","P0161 O  Circ Aquecedor Sensor.  Bank -SENSOR  Mau-funcionamento"}
,{"P16554","P0170 Corte de combustível  Bank1 Mau-funcionamento"}
,{"P16555","P0171 Corte de combustível  Bank1 do sistema demasiado magra"}
,{"P16556","P017  Corte de combustível  Bank1 Sistema também rico"}
,{"P16557","P0173 Corte de combustível  Mau-funcionamento Bank"}
,{"P16558","P0174 Sistema de Combustível  Trim Bank  muito magra"}
,{"P16559","P0175 Sistema de Combustível  Trim Bank  muito rica"}
,{"P16566","P018  Temperatura do combustível remetente-G81 curto para a terra"}
,{"P16567","P0183 Temperatura do combustível remetente-G81 Interrupção / Short para B +"}
,{"P16581","P0197 Óleo do motor do Circuito de Entrada Baixa Temperatura"}
,{"P16582","P0198 Óleo do motor do Circuito de Entrada de Alta Temperatura"}
,{"P16585","P0 01 Cyl.1  Injetor Falha no circuito elétrico Circuito"}
,{"P16586","P0 0  Cyl.   Injetor Falha no circuito elétrico Circuito"}
,{"P16587","P0 03 Cyl.3  Injetor Falha no circuito elétrico Circuito"}
,{"P16589","P0 05 Cyl.5 Fault Circuit Injetor no circuito elétrico"}
,{"P16590","P0 06 Cyl.6 Fault Circuit Injetor no circuito elétrico"}
,{"P16591","P0 07 Cyl.7 Fault Circuit Injetor no circuito elétrico"}
,{"P16592","P0 08 Cyl.8 Fault Circuit Injetor no circuito elétrico"}
,{"P16599","P0 15 Mau funcionamento do motor Solenoid Shut-Off"}
,{"P16600","P0 16 Injetor / Injeção Mau-funcionamento Timing Control"}
,{"P16603","P0 19 Excesso de velocidade do motor Condição"}
,{"P16605","P0  1 Pos acelerador. Sensor-B-Range Circuit / Performance"}
,{"P16606","P0    Pos acelerador. Sensor-B-Circuito de Entrada Baixa"}
,{"P16607","P0  3 Pos acelerador. Sensor-B-Circuito de entrada de alta"}
,{"P16609","P0  5 Pos acelerador. Sensor-C-circuito de alimentação de tensão"}
,{"P16610","P0  6 Pos acelerador. Sensor-C Circuit-Range / Performance"}
,{"P16611","P0  7 Pos acelerador. Sensor-C-Circuito de Entrada Baixa"}
,{"P16612","P0  8 Pos acelerador. Sensor-C-Circuito de Entrada Hight"}
,{"P16614","P0 30 Bomba de combustível falha Circuito Primário no circuito elétrico"}
,{"P16618","P0 34 Turbocompressor Overboost limite de Controle Condição ultrapassado"}
,{"P16619","P0 35 Sensor Aumente turbocompressor (A) não Circ limite de controle alcançado"}
,{"P16620","P0 36 Sensor Aumente turbocompressor (A) Faixa Circ / Performance"}
,{"P16621","P0 37 Sensor Aumente turbocompressor (A) de entrada Circ Baixo"}
,{"P16622","P0 38 Sensor turbocompressor Boost (A) Circ de entrada de alta"}
,{"P16627","P0 43 Solenóide turbocompressor wastegate (A) de Circuito Aberto / Curto para Terra"}
,{"P16629","P0 45 Solenóide turbocompressor wastegate (A) de entrada Low / Short para a terra"}
,{"P16630","P0 46 Solenóide turbocompressor wastegate de entrada (A) alta / Short para B +"}
,{"P16636","P0 5  Bomba de injeção de Controle de Medição Faixa de (A) / Performance"}
,{"P16645","P0 61 Cyl.1 Injetor Circuito de Entrada Baixa / Short para a terra"}
,{"P16646","P0 6  Cyl.1 Injetor Circuito de entrada de alta / Short para B +"}
,{"P16648","P0 64 Cyl.  Injetor Circuito de Entrada Baixa / Short para a terra"}
,{"P16649","P0 65 Cyl.  Injetor Circuito de entrada de alta / Short para B +"}
,{"P16651","P0 67 Cyl.3 Injetor Circuito de Entrada Baixa / Short para a terra"}
,{"P16652","P0 68 Cyl.3 Injetor Circuito de entrada de alta / Short para B +"}
,{"P16654","P0 70 Cyl.4 Injetor Circuito de Entrada Baixa / Short para a terra"}
,{"P16655","P0 71 Cyl.4 Injetor Circuito de entrada de alta / Short para B +"}
,{"P16657","P0 73 Cyl.5 Injetor Circuito de Entrada Baixa / Short para a terra"}
,{"P16658","P0 74 Cyl.5 Injetor Circuito de entrada de alta / Short para B +"}
,{"P16660","P0 76 Cyl.6 Injetor Circuito de Entrada Baixa / Short para a terra"}
,{"P16661","P0 77 Cyl.6 Injetor Circuito de entrada de alta / Short para B +"}
,{"P16663","P0 79 Cyl.7 Injetor Circuito de Entrada Baixa / Short para a terra"}
,{"P16664","P0 80 Cyl.7 Injetor Circuito de entrada de alta / Short para B +"}
,{"P16666","P0 8  Cyl.8 Injetor Circuito de Entrada Baixa / Short para a terra"}
,{"P16667","P0 83 Cyl.8 Injetor Circuito de entrada de alta / Short para B +"}
,{"P16684","P0300 Aleatória / Várias falhas de ignição do cilindro Detectado"}
,{"P16685","P0301 Cyl.1 Falha-ignição Detectado"}
,{"P16686","P030  Cyl.  Falha-ignição Detectado"}
,{"P16687","P0303 Cyl.3 Falha-ignição Detectado"}
,{"P16688","P0304 Cyl.4 Falha-ignição Detectado"}
,{"P16689","P0305 Cyl.5 Falha-ignição Detectado"}
,{"P16690","P0306 Cyl.6 Falha-ignição Detectado"}
,{"P16691","P0307 Cyl.7 Falha-ignição Detectado"}
,{"P16692","P0308 Cyl.8 Falha-ignição Detectado"}
,{"P16697","P0313 Falha-ignição Detectado baixo nível de combustível"}
,{"P16698","P0314 Cilindro de falhas de ignição única"}
,{"P16705","P03 1 Ign. / Distribuidor Eng.Speed Inp.Circ Faixa / Performance"}
,{"P16706","P03   Ign. / Distribuidor Eng.Speed Inp.Circ Sem sinal"}
,{"P16709","P03 5 Knock sensor Fault Circuit um Elétricas em Circuito"}
,{"P16710","P03 6 Knock sensor 1 Circuito Faixa / Performance"}
,{"P16711","P03 7 Knock sensor 1 Entrada Circ Baixo"}
,{"P16712","P03 8 Knock sensor 1 Entrada Circ alta"}
,{"P16716","P033  Knock sensor   Circ de Entrada Baixa"}
,{"P16717","P0333 Knock sensor   Circ de entrada de alta"}
,{"P16719","P0335 Pos virabrequim. Sensor (A) Circ Mau-funcionamento"}
,{"P16720","P0336 Pos virabrequim. Sensor (A) Faixa Circ / Performance / dente"}
,{"P16721","P0337 Virabrequim Pos.Sensor (A) de entrada Circ Baixo"}
,{"P16724","P0340 Pos árvore de cames. Sensor (A) alocação Circ incorreto"}
,{"P16725","P0341 Comando-valvulas Faixa Circ Pos.Sensor / Performance"}
,{"P16726","P034  Comando-valvulas Entrada Circ Pos.Sensor Baixo"}
,{"P16727","P0343 Comando-valvulas Entrada Circ Pos.Sensor alta"}
,{"P16735","P0351 Bobina de ignição (A) Cyl.1 Prim. / Sec. Circ Mau-funcionamento"}
,{"P16736","P035  Bobina de ignição (B) Cyl.  Prim. / Sec. Circ Mau-funcionamento"}
,{"P16737","P0353 Bobina de ignição (C) Cyl.3 Prim. / Sec. Circ Mau-funcionamento"}
,{"P16738","P0354 Bobina de ignição (D) Cyl.4 Prim. / Sec. Circ Mau-funcionamento"}
,{"P16739","P0355 Bobina de ignição (E) Cyl.5 Prim. / Sec. Circ Mau-funcionamento"}
,{"P16740","P0356 Bobina de ignição (F) Cyl.6 Prim. / Sec. Circ Mau-funcionamento"}
,{"P16741","P0357 Bobina de ignição (G) Cyl.7 Prim. / Sec. Circ Mau-funcionamento"}
,{"P16742","P0358 Bobina de ignição (H) Cyl.8 Prim. / Sec. Circ Mau-funcionamento"}
,{"P16764","P0380 Circuito de Vela de Ignição / aquecedor (A) de falha elétrica no circuito"}
,{"P16784","P0400 Mau funcionamento de exaustão de gás Recirc.Flow"}
,{"P16785","P0401 Recirc.Flow escape de gás insuficiente Detectado"}
,{"P16786","P040  Escape de gás Recirc.Flow excessiva Detectado"}
,{"P16787","P0403 Dos gases de escape recirc. Contr. Circ Mau-funcionamento"}
,{"P16788","P0404 Dos gases de escape recirc. Contr. Circ Faixa / Performance"}
,{"P16789","P0405 Dos gases de escape recirc. Sensor (A) de entrada Circ Baixo"}
,{"P16790","P0406 Dos gases de escape recirc. Sensor (A) de entrada de alta Circ"}
,{"P16791","P0407 Dos gases de escape recirc. Sensor (B) Input Circ Baixo"}
,{"P16792","P0408 Dos gases de escape recirc. Sensor (B) Input Circ alta"}
,{"P16794","P0410 Sec.Ar Inj.Sys Mau-funcionamento"}
,{"P16795","P0411 Inj.Sys Sec.Ar. Fluxo incorreta Detectado"}
,{"P16796","P041  Sec.Ar Válvula Inj.Sys.Switching A Mau-funcionamento Circ"}
,{"P16802","P0418 Seg. Ar Inj. Sys. Contr relé (A). Circ Mau-funcionamento"}
,{"P16804","P04 0 Catalisador do sistema  Bank1 Eficiência Abaixo do Limite"}
,{"P16806","P04   Principais Catalyst  Bank1 Abaixo do Limite"}
,{"P16811","P04 7 Catalisador sensor de temperatura  o Banco 1 Entrada Baixa / Short para a terra"}
,{"P16812","P04 8 Catalisador sensor de temperatura  o Banco 1 Circuito de Entrada / Open /Short          Alto para B +"}
,{"P16816","P043  Catalisador principal  Bank  Eficiência Abaixo do Limite"}
,{"P16820","P0436 Catalisador sensor de temperatura  o Banco Faixa de   / Performance"}
,{"P16821","P0437 Catalisador sensor de temperatura  Banco   Entrada Baixa / Short para a terra"}
,{"P16822","P0438 Catalisador sensor de temperatura  Bank   Circuitos de entrada / Open / Short Alto para B +"}
,{"P16824","P0440 Contr.Sys EVAP emissão. Funcionamento defeituoso"}
,{"P16825","P0441 EVAP Emissão Fluxo Purge Contr.Sys.Incorrect"}
,{"P16826","P044  Contr.Sys EVAP Emissão. (Pequeno vazamento) Vazamento Detectado"}
,{"P16827","P0443 Emiss EVAP. Contr. Sys. Válvula de purga Fault Circ Elétrica em Circuito"}
,{"P16836","P045  EVAP Emissão de entrada Contr.Sys.Press.Sensor Baixo"}
,{"P16837","P0453 EVAP Emissão de entrada Contr.Sys.Press.Sensor alta"}
,{"P16839","P0455 EVAP Emissão Contr.Sys. (Gross) Vazamento de vazamento detectado"}
,{"P16845","P0461 Sensor de nível de combustível Faixa Circ / Performance"}
,{"P16846","P046  Nível de entrada de combustível Circuito Sensor Baixo"}
,{"P16847","P0463 Nível de entrada de combustível Circuito Sensor de alta"}
,{"P16885","P0501 Faixa de veículo Sensor de Velocidade / Performance"}
,{"P16887","P0503 Entrada de sensor de velocidade do veículo intermitente / Erratic / Alto"}
,{"P16889","P0505 Mau funcionamento do Sistema de Controle ocioso"}
,{"P16890","P0506 RPM System Idle Controle inferior ao esperado"}
,{"P16891","P0507 Sistema de Controle ociosa acima do esperado"}
,{"P16894","P0510 Binário fechado Pos.Switch Mau-funcionamento"}
,{"P16915","P0531 A / C Pressão Faixa de refrigerante Circuito Sensor / Performance"}
,{"P16916","P053  A / C pressão de entrada de refrigerante Circuito Sensor Baixo"}
,{"P16917","P0533 A / C pressão de entrada de refrigerante Circuito Sensor de alta"}
,{"P16935","P0551 Power Steering Pressão Faixa Circuito Sensor / Performance"}
,{"P16944","P0560 Mau funcionamento do sistema de tensão"}
,{"P16946","P056  Tensão sistema de Baixa Tensão"}
,{"P16947","P0563 Tensão sistema de Alta Tensão"}
,{"P16952","P0568 Cruise Control Sinal Sinal Set incorreto"}
,{"P16955","P0571 Cruzeiro / Brake Switch (A) Circ Mau-funcionamento"}
,{"P16984","P0600 Serial Comm. Mensagem Link (Bus de Dados) Missing"}
,{"P16985","P0601 Memória interna Contr.Module Erro soma de verificação"}
,{"P16986","P060  Controle de erros de programação do módulo / Irregularidade"}
,{"P16987","P0603 Interna Contr.Module erro (KAM)"}
,{"P16988","P0604 Interna Contr.Module memória de acesso aleatório de erro (RAM)"}
,{"P16989","P0605 Erro de teste interna Contr.Module ROM"}
,{"P16990","P0606 ECM / PCM Processor"}
,{"P17026","P064  Bata Controle Mau-funcionamento Módulo de Controle"}
,{"P17029","P0645 A / C Clutch circuito de controle de relé"}
,{"P17034","P0650 MIL Controle Fault Circuit Elétrica em Circuito"}
,{"P17038","P0654 RPM do motor Fault Circuit saída elétrica em Circuito"}
,{"P17040","P0656 Nível de combustível  falha do circuito de saída elétrica em Circuito"}
,{"P17084","P0700 Transm.Contr.System Mau-funcionamento"}
,{"P17086","P070  Transm.Contr.System Elétrica"}
,{"P17087","P0703 Torque Converter / Freio Chave B Circ Mau-funcionamento"}
,{"P17089","P0705 Transm.Range Sensor Circ. (PRNDL InP.) Avaria"}
,{"P17090","P0706 Transm.Range Sensor Circ Faixa / Performance"}
,{"P17091","P0707 Transm.Range Sensor Input Circ Baixo"}
,{"P17092","P0708 Transm.Range Sensor Input Circ alta"}
,{"P17094","P0710 Circ Temp.Sensor Transm.Fluid. Funcionamento defeituoso"}
,{"P17095","P0711 Circ Temp.Sensor Transm.Fluid. Faixa / Performance"}
,{"P17096","P071  Circ Temp.Sensor Transm.Fluid. Entrada baixa"}
,{"P17097","P0713 Circ Temp.Sensor Transm.Fluid. Entrada de alta"}
,{"P17099","P0715 Sensor de entrada Circ Turbine / Velocidade. Funcionamento defeituoso"}
,{"P17100","P0716 Sensor de entrada Circ Turbine / Velocidade. Faixa / Performance"}
,{"P17101","P0717 Sensor de entrada Circ Turbine / Velocidade. Sem sinal"}
,{"P17105","P07 1 Velocidade de saída do sensor de Desempenho Circ Gama /"}
,{"P17106","P07   Velocidade de saída do sensor Circ Sem sinal"}
,{"P17109","P07 5 Motor de velocidade Inp.Circ. Funcionamento defeituoso"}
,{"P17110","P07 6 Motor de velocidade Inp.Circ. Faixa / Performance"}
,{"P17111","P07 7 Motor de velocidade Inp.Circ. Sem sinal"}
,{"P17114","P0730 Relação de Engrenagens incorreto"}
,{"P17115","P0731 Relação de engrenagem 1 incorreto"}
,{"P17116","P073  Relação de engrenagem   incorreta"}
,{"P17117","P0733 Relação de engrenagem 3 incorreta"}
,{"P17118","P0734 Relação de engrenagem 4 incorreto"}
,{"P17119","P0735 Relação de engrenagens 5 incorreto"}
,{"P17124","P0740 Torque Clutch Converter Circ Mau-funcionamento"}
,{"P17125","P0741 Torque Clutch Converter Desempenho Circ ou Preso Off"}
,{"P17132","P0748 Contr.Solenoid pressão Elétrica"}
,{"P17134","P0750 Solenóide Uma mudança mau funcionamento"}
,{"P17135","P0751 Solenóide Uma mudança de desempenho ou Preso Off"}
,{"P17136","P075  Solenóide Uma mudança Stuck On"}
,{"P17137","P0753 Solenóide Uma mudança Elétrica"}
,{"P17140","P0756 Mudança de desempenho B ou solenóide Preso Off"}
,{"P17141","P0757 B Solenoid mudança Stuck On"}
,{"P17142","P0758 Mudança solenóide B Elétrica"}
,{"P17145","P0761 Mudança Solenoid desempenho C ou Preso Off"}
,{"P17146","P076  C Solenoid mudança Stuck On"}
,{"P17147","P0763 Mudança Solenoid C Elétrica"}
,{"P17152","P0768 Mudança Solenoid D Electrical"}
,{"P17157","P0773 E mudança solenóide elétrico"}
,{"P17174","P0790 Normal / Desempenho Mudar Mau-funcionamento Circ"}
,{"P17509","P1101 O  Sensor Circ.  Leak Bank1-Sensor1Voltage muito baixa / Ar"}
,{"P17510","P110  O  Circ Aquecimento Sensor.  Bank1-Sensor1 curto para B +"}
,{"P17511","P1103 O  Circ Aquecimento Sensor.  Bank1-Sensor1 saída muito baixa"}
,{"P17512","P1104 Bank1-SENSOR  Leak Tensão muito baixa / Ar"}
,{"P17513","P1105 O  Circ Aquecimento Sensor.  Bank1-SENSOR  curto para B +"}
,{"P17514","P1106 O  Sensor Circ.  Bank -Sensor1 Voltage vazamento muito baixo / Ar"}
,{"P17515","P1107 O  Circ Aquecimento Sensor.  Bank -Sensor1 curto para B +"}
,{"P17516","P1108 O  Circ Aquecimento Sensor.  Bank -Sensor1 saída muito baixa"}
,{"P17517","P1109 O  Sensor Circ.  Bank -SENSOR  Voltage vazamento muito baixo / Ar"}
,{"P17518","P1110 O  Circ Aquecimento Sensor.  Bank -SENSOR  curto para B +"}
,{"P17519","P1111 O  Control System (Banco 1) muito magra"}
,{"P17520","P111  O  Control System (Banco 1) muito rica"}
,{"P17521","P1113 Bank1-Sensor1 resistência interna muito alta"}
,{"P17522","P1114 Bank1-SENSOR  Resistente interna muito alta"}
,{"P17523","P1115 O  Circ Aquecedor Sensor.  Bank1-Sensor1 curto para a Terra"}
,{"P17524","P1116 O  Circ Aquecedor Sensor.  Bank1-Sensor1 Aberto"}
,{"P17525","P1117 O  Circ Aquecedor Sensor.  Bank1-SENSOR  curto para a Terra"}
,{"P17526","P1118 O  Circ Aquecedor Sensor.  Bank1-SENSOR  Aberto"}
,{"P17527","P1119 O  Circ Aquecedor Sensor.  Bank -Sensor1 curto para a Terra"}
,{"P17528","P11 0 O  Circ Aquecedor Sensor.  Bank -Sensor1 Aberto"}
,{"P17529","P11 1 O  Circ Aquecedor Sensor.  Bank -SENSOR  curto para a Terra"}
,{"P17530","P11   O  Circ Aquecedor Sensor.  Bank -SENSOR  Aberto"}
,{"P17531","P11 3 Add.Ar Combustível Long Term Trim.  Bank1 Sistema também rico"}
,{"P17532","P11 4 Add.Ar Combustível Long Term Trim.  Bank1 do sistema demasiado magra"}
,{"P17533","P11 5 Add.Ar Combustível Long Term Trim.  Bank  Sistema também rico"}
,{"P17534","P11 6 Add.Ar Combustível Long Term Trim.  Bank  do sistema demasiado magra"}
,{"P17535","P11 7 Mult Combustível Long Term Trim.  Bank1 Sistema também rico"}
,{"P17536","P11 8 Mult Combustível Long Term Trim.  Bank1 do sistema demasiado magra"}
,{"P17537","P11 9 Mult Combustível Long Term Trim.  Bank  Sistema também rico"}
,{"P17538","P1130 Mult Combustível Long Term Trim.  Bank  do sistema demasiado magra"}
,{"P17539","P1131 Bank -Sensor1 Rsistance interna muito alta"}
,{"P17540","P113  Aquecimento O  Sensor Circ.  Bank1 + - Sensor1 curto para B +"}
,{"P17541","P1133 Aquecimento O  Sensor Circ.  Bank1 + - Sensor1 avaria eléctrica"}
,{"P17542","P1134 Aquecimento O  Sensor Circ.  Bank1 + - SENSOR  curto para B +"}
,{"P17543","P1135 Aquecimento O  Sensor Circ.  Bank1 + - SENSOR  avaria eléctrica"}
,{"P17544","P1136 Long Term Fuel Add.Fuel Trim  Bank1 do sistema demasiado magra"}
,{"P17545","P1137 Long Term Fuel Add.Fuel Trim  Bank1 Sistema também rico"}
,{"P17546","P1138 Long Term Fuel Add.Fuel Trim  Bank  do sistema demasiado magra"}
,{"P17547","P1139 Long Term Fuel Add.Fuel Trim  Bank  Sistema também rico"}
,{"P17548","P1140 Bank -SENSOR  resistência interna muito alta"}
,{"P17549","P1141 Cruz Cálculo de carga Verifique Faixa / Performance"}
,{"P17550","P114  Cruz Cálculo de carga Verifique Limite Excedido"}
,{"P17551","P1143 Cruz Cálculo de carga Verifique Limite Superior Exceeded"}
,{"P17552","P1144 Massa ou fluxo Volume Ar Circ Open / Short para terra"}
,{"P17553","P1145 Massa ou volume Circ fluxo de ar de curto para B +"}
,{"P17554","P1146 Massa ou Volume Ar Flow Mau-funcionamento Abastecimento Circ"}
,{"P17555","P1147 O  Control System (Banco  ) muito magra"}
,{"P17556","P1148 O  Control System (Banco  ) muito rica"}
,{"P17557","P1149 O  Control (Banco 1) Fora da faixa"}
,{"P17558","P1150 O  Control (Banco  ) Fora da faixa"}
,{"P17559","P1151 Bank1  Trim de combustível de Longo Prazo  Faixa Limite Magreza 1 Lower Exceeded"}
,{"P17560","P115  Bank1  Trim de combustível de Longo Prazo  Faixa Limite Magreza   Lower Exceeded"}
,{"P17562","P1154 Mudar Manifold Mais Mau-funcionamento"}
,{"P17563","P1155 Manifold Circ Sensor Abs.Pressure. Curta para B +"}
,{"P17564","P1156 Manifold Circ Sensor Abs.Pressure. Aberto / curto para a Terra"}
,{"P17565","P1157 Manifold Circ Sensor Abs.Pressure. Fornecimento de energia Mau-funcionamento"}
,{"P17566","P1158 Manifold Circ Sensor Abs.Pressure. Faixa / Performance"}
,{"P17568","P1160 Circ Manifold Temp.Sensor. Curto para terra"}
,{"P17569","P1161 Circ Manifold Temp.Sensor. Open / Short para B +"}
,{"P17570","P116  Circ de combustível Temp.Sensor. Curto para terra"}
,{"P17571","P1163 Circ de combustível Temp.Sensor. Open / Short para B +"}
,{"P17572","P1164 Sensor de Temperatura do combustível Faixa / Performance / Sinal incorreto"}
,{"P17573","P1165 Bank1  Trim de combustível de Longo Prazo  Limit Exceeded Faixa de uma rica"}
,{"P17574","P1166 Bank1  Trim de combustível de Longo Prazo  Limit Exceeded Faixa   Rico"}
,{"P17579","P1171 Acelerador Potenciômetro Atuação Sign.  Faixa / Performance"}
,{"P17580","P117  Atuação do acelerador Potenciômetro Sign.  Sinal muito baixo"}
,{"P17581","P1173 Atuação do acelerador Potenciômetro Sign.  Sinal muito alto"}
,{"P17582","P1174 Corte de combustível  o Banco 1 tempos de injeção diferentes"}
,{"P17584","P1176 O  Correção Atrás Catalyst  Limite B1 atingida"}
,{"P17585","P1177 O  Correção Atrás Catalyst  Limite B  atingida"}
,{"P17586","P1178 0  Linear Sensor / Bomba Circuito Aberto atual"}
,{"P17587","P1179 0  Linear Sensor / Bomba corrente de curto para terra"}
,{"P17588","P1180 0  Linear Sensor / Bomba corrente de curto para B +"}
,{"P17589","P1181 0  Linear Sensor / Circuit Referência tensão aberta"}
,{"P17590","P118  0  Linear Voltage Sensor / Referência curto para a terra"}
,{"P17591","P1183 0  Linear Voltage Sensor / Referência curto para B +"}
,{"P17592","P1184 0  Linear Sensor / Circuito Fio Common Ground Aberto"}
,{"P17593","P1185 0  Linear Sensor / fio terra curto comum ao terra"}
,{"P17594","P1186 Linear Sensor 0  / fio terra curto comum para B +"}
,{"P17595","P1187 Linear Sensor 0  / Compens. Resistor de Circuito Aberto"}
,{"P17596","P1188 Linear Sensor 0  / Compens. Resistor curto para a terra"}
,{"P17597","P1189 Linear Sensor 0  / Compens. Resistor curto para B +"}
,{"P17598","P1190 0  Linear sinal de tensão Sensor / referência incorreta"}
,{"P17604","P1196 O  Circ Aquecedor Sensor.  Mau-funcionamento Bank1-Sensor1 Elétrica"}
,{"P17605","P1197 O  Circ Aquecedor Sensor.  Mau-funcionamento Bank -Sensor1 Elétrica"}
,{"P17606","P1198 O  Circ Aquecedor Sensor.  Mau-funcionamento Bank1-SENSOR  Elétrica"}
,{"P17607","P1199 O  Circ Aquecedor Sensor.  Mau-funcionamento Bank -SENSOR  Elétrica"}
,{"P17609","P1 01 Cyl.1-Fuel Inj.Circ. Avaria eléctrica"}
,{"P17610","P1 0  Cyl. -Fuel Inj.Circ. Avaria eléctrica"}
,{"P17611","P1 03 Cyl.3-Fuel Inj.Circ. Avaria eléctrica"}
,{"P17612","P1 04 Cyl.4-Fuel Inj.Circ. Avaria eléctrica"}
,{"P17613","P1 05 Cyl.5-Fuel Inj.Circ. Avaria eléctrica"}
,{"P17614","P1 06 Cyl.6-Fuel Inj.Circ. Avaria eléctrica"}
,{"P17615","P1 07 Cyl.7-Fuel Inj.Circ. Avaria eléctrica"}
,{"P17616","P1 08 Cyl.8-Fuel Inj.Circ. Avaria eléctrica"}
,{"P17617","P1 09 Válvulas de admissão para o circuito de desligamento do cilindro curto para a terra"}
,{"P17618","P1 10 Válvulas de admissão para o cilindro de shut-off curto para B +"}
,{"P17619","P1 11 Válvulas de admissão para o circuito de desligamento do cilindro Aberto"}
,{"P17621","P1 13 Cyl.1-Fuel Inj.Circ. Curta para B +"}
,{"P17622","P1 14 Cyl. -Fuel Inj.Circ. Curta para B +"}
,{"P17623","P1 15 Cyl.3-Fuel Inj.Circ. Curta para B +"}
,{"P17624","P1 16 Cyl.4-Fuel Inj.Circ. Curta para B +"}
,{"P17625","P1 17 Cyl.5-Fuel Inj.Circ. Curta para B +"}
,{"P17626","P1 18 Cyl.6-Fuel Inj.Circ. Curta para B +"}
,{"P17627","P1 19 Cyl.7-Fuel Inj.Circ. Curta para B +"}
,{"P17628","P1  0 Cyl.8-Fuel Inj.Circ. Curta para B +"}
,{"P17629","P1  1 Cilindro de shut-off válvulas de escape de curto-circuito à terra"}
,{"P17630","P1    Cilindro de shut-off válvulas de escape curto para B +"}
,{"P17631","P1  3 Cilindro de shut-off válvulas de escape de circuito aberto"}
,{"P17633","P1  5 Cyl.1-Fuel Inj.Circ. Curto para terra"}
,{"P17634","P1  6 Cyl. -Fuel Inj.Circ. Curto para terra"}
,{"P17635","P1  7 Cyl.3-Fuel Inj.Circ. Curto para terra"}
,{"P17636","P1  8 Cyl.4-Fuel Inj.Circ. Curto para terra"}
,{"P17637","P1  9 Cyl.5-Fuel Inj.Circ. Curto para terra"}
,{"P17638","P1 30 Cyl.6-Fuel Inj.Circ. Curto para terra"}
,{"P17639","P1 31 Cyl.7-Fuel Inj.Circ. Curto para terra"}
,{"P17640","P1 3  Cyl.8-Fuel Inj.Circ. Curto para terra"}
,{"P17645","P1 37 Cyl.1-Fuel Inj.Circ. Abra Circ."}
,{"P17646","P1 38 Cyl. -Fuel Inj.Circ. Abra Circ."}
,{"P17647","P1 39 Cyl.3-Fuel Inj.Circ. Abra Circ."}
,{"P17648","P1 40 Cyl.4-Fuel Inj.Circ. Abra Circ."}
,{"P17649","P1 41 Cyl.5-Fuel Inj.Circ. Abra Circ."}
,{"P17650","P1 4  Cyl.6-Fuel Inj.Circ. Abra Circ."}
,{"P17651","P1 43 Cyl.7-Fuel Inj.Circ. Abra Circ."}
,{"P17652","P1 44 Cyl.8-Fuel Inj.Circ. Abra Circ."}
,{"P17653","P1 45 Circ agulha Sensor Levante. Curto para terra"}
,{"P17654","P1 46 Circ agulha Sensor Levante. Faixa / Performance"}
,{"P17655","P1 47 Circ agulha Sensor Levante. Open / Short para B +"}
,{"P17656","P1 48 Desvio de controle de injeção Início"}
,{"P17657","P1 49 Falha de sinal de combustível Consumo elétrico em Circuito"}
,{"P17658","P1 50 Nível de combustível muito baixo"}
,{"P17659","P1 51 Início do Circ Injection Solenoid curto para B +"}
,{"P17660","P1 5  Início do Circ Solenoid Injection Open / Short para terra"}
,{"P17661","P1 53 Sinal de consumo de combustível curto para a terra"}
,{"P17662","P1 54 Sinal de consumo de combustível curto para B +"}
,{"P17663","P1 55 Motor de refrigeração Temp.Circ curto para a Terra"}
,{"P17664","P1 56 Motor de refrigeração Temp.Circ Open / Short para B +"}
,{"P17665","P1 57 Sistema de refrigeração do motor de válvula Aberta"}
,{"P17666","P1 58 Motor de válvula do sistema de refrigeração curto para B +"}
,{"P17667","P1 59 Motor de válvula do sistema de refrigeração curto para a Terra"}
,{"P17688","P1 80 Combustível Inj.Ar Contr.Valve Circ. Fluxo muito baixo"}
,{"P17691","P1 83 Combustível Inj.Ar Contr.Valve Circ. Avaria eléctrica"}
,{"P17692","P1 84 Combustível Inj.Ar Contr.Valve Circ. Aberto"}
,{"P17693","P1 85 Combustível Inj.Ar Contr.Valve Circ. Curto para terra"}
,{"P17694","P1 86 Combustível Inj.Ar Contr.Valve Circ. Curta para B +"}
,{"P17695","P1 87 Válvula de derivação do turbocompressor aberto"}
,{"P17696","P1 88 Válvula de derivação do turbocompressor curta para B +"}
,{"P17697","P1 89 Válvula de derivação do turbocompressor curto para a terra"}
,{"P17704","P1 96 Mau funcionamento do sistema de arrefecimento"}
,{"P17705","P1 97 Turbocompressor de conexão – Acelerador de mangueira de pressão da válvula"}
,{"P17708","P1300 Falha-ignição detectado Motivo: nível de combustível muito baixo"}
,{"P17721","P1319 Knock sensor 1 Circ. Curto para terra"}
,{"P17728","P13 0 Knock sensor   Circ. Curto para terra"}
,{"P17729","P13 1 Bata Sensor 3 Circ. Entrada baixa"}
,{"P17730","P13   Bata Sensor 3 Circ. Entrada de alta"}
,{"P17731","P13 3 Bata Circ Sensor 4. Entrada baixa"}
,{"P17732","P13 4 Bata Circ Sensor 4. Entrada de alta"}
,{"P17733","P13 5 Cyl.1-Knock Contr. Limite Atingido"}
,{"P17734","P13 6 Cyl. -Knock Contr. Limite Atingido"}
,{"P17735","P13 7 Cyl.3-Knock Contr. Limite Atingido"}
,{"P17736","P13 8 Cyl.4-Knock Contr. Limite Atingido"}
,{"P17737","P13 9 Cyl.5-Knock Contr. Limite Atingido"}
,{"P17738","P1330 Cyl.6-Knock Contr. Limite Atingido"}
,{"P17739","P1331 Cyl.7-Knock Contr. Limite Atingido"}
,{"P17740","P133  Cyl.8-Knock Contr. Limite Atingido"}
,{"P17743","P1335 Motor Torque Monitoramento Limint Control   Exceeded"}
,{"P17744","P1336 Adaptação do motor Torque Monitoramento no limite"}
,{"P17745","P1337 Pos.Sensor árvore de cames  Bank1 curto para a Terra"}
,{"P17746","P1338 Pos.Sensor árvore de cames  Bank1 Abra Circ. / Short para B +"}
,{"P17747","P1339 Sensor de velocidade do virabrequim Pos. / Motor Cruz Connected"}
,{"P17748","P1340 Pos.Sens.Signals Crankshaft-/Comando-valvulas fora de seqüência"}
,{"P17749","P1341 Bobina de ignição Potência Stage 1 curto para a Terra"}
,{"P17750","P134  Bobina de ignição Potência Stage 1 curto para B +"}
,{"P17751","P1343 Bobina de ignição estágio final de potência   Curta a terra"}
,{"P17752","P1344 Bobina de ignição estágio final de potência   Curta a B +"}
,{"P17754","P1346 Bobina de ignição estágio final de potência 3 curto para B +"}
,{"P17755","P1347 Bank   os.Sens.Sign Crankshaft-/Comando-valvulas. Fora de seqüência"}
,{"P17756","P1348 Bobina de ignição Potência de saída Estágio 1 de Circuito Aberto"}
,{"P17757","P1349 Bobina de ignição Potência de saída Estágio   Circuito Aberto"}
,{"P17758","P1350 Bobina de ignição Potência de saída Stage 3 Circuito Aberto"}
,{"P17762","P1354 Piston modulação Displ.Sensor Circ. Funcionamento defeituoso"}
,{"P17763","P1355 Cil. 1  do circuito de ignição de Circuito Aberto"}
,{"P17764","P1356 Cil. 1  de curto-circuito de ignição para B +"}
,{"P17765","P1357 Cil. 1  curto circuito de ignição para a terra"}
,{"P17766","P1358 Cil.    do circuito de ignição de Circuito Aberto"}
,{"P17767","P1359 Cil.    de ignição Circuito Curto-circuito de B +"}
,{"P17768","P1360 Cil.    de ignição Circuito Curto-circuito à terra"}
,{"P17769","P1361 Cil. 3  do circuito de ignição de Circuito Aberto"}
,{"P17770","P136  Cil. 3  de ignição Circuito Curto-circuito de B +"}
,{"P17771","P1363 Cil. 3  de ignição Circuito Curto-circuito à terra"}
,{"P17772","P1364 Cil. 4 do circuito de ignição de Circuito Aberto"}
,{"P17773","P1365 Cil. 4 circuitos Curto circuito de ignição para B +"}
,{"P17774","P1366 Cil. 4 circuitos Curto circuito de ignição para a terra"}
,{"P17775","P1367 Cil. 5  do circuito de ignição de Circuito Aberto"}
,{"P17776","P1368 Cil. 5  de ignição Circuito Curto-circuito de B +"}
,{"P17777","P1369 Cil. 5  de curto circuito de ignição para a terra"}
,{"P17778","P1370 Cil. 6  do circuito de ignição de Circuito Aberto"}
,{"P17779","P1371 Cil. 6  de ignição Circuito Curto-circuito de B +"}
,{"P17780","P137  Cil. 6  curto circuito de ignição para a terra"}
,{"P17781","P1373 Cil. 7  do circuito de ignição de Circuito Aberto"}
,{"P17782","P1374 Cil. 7  de ignição Circuito Curto-circuito de B +"}
,{"P17783","P1375 Cil. 7  curto circuito de ignição para a terra"}
,{"P17784","P1376 Cil. 8  do circuito de ignição de Circuito Aberto"}
,{"P17785","P1377 Cil. 8  de ignição Circuito Curto-circuito para B +"}
,{"P17786","P1378 Cil. 8  curto circuito de ignição para a terra"}
,{"P17794","P1386 Módulo de Controle Interno Circ.Error Controle Bata"}
,{"P17795","P1387 Interna Contr. Módulo de erro do sensor altitude"}
,{"P17796","P1388 Interna Contr. Unidade de módulo por erro fio"}
,{"P17799","P1391 Pos.Sensor árvore de cames  Bank  curto para a Terra"}
,{"P17800","P139  Pos.Sensor árvore de cames  Bank  Abra Circ. / Short para B +"}
,{"P17801","P1393 Bobina de ignição Potência de saída Stage 1 avaria eléctrica"}
,{"P17802","P1394 Bobina de ignição estágio final de potência   avaria eléctrica"}
,{"P17803","P1395 Bobina de ignição Potência de saída Stage 3 avaria eléctrica"}
,{"P17804","P1396 Motor Tooth Sensor de Velocidade Desaparecidas"}
,{"P17805","P1397 Mecanismo de limite de velocidade das rodas atingiu Adaptação"}
,{"P17806","P1398 Motor RPM sinal  TD curto para a terra"}
,{"P17807","P1399 Motor RPM sinal  TD Curto-Circuito de B +"}
,{"P17808","P1400 Válvula EGR Circ avaria eléctrica"}
,{"P17809","P1401 Válvula EGR Circ curto para a Terra"}
,{"P17810","P140  Válvula EGR Circ curto para B +"}
,{"P17811","P1403 EGR desvio de fluxo"}
,{"P17812","P1404 EGR Definir Fluxo Básico não realizado"}
,{"P17814","P1406 EGR Faixa Temp.Sensor / Performance"}
,{"P17815","P1407 EGR Signal Temp.Sensor muito baixo"}
,{"P17816","P1408 EGR Signal Temp.Sensor muito alta"}
,{"P17817","P1409 Ventilação tanque Válvula Circ. Avaria eléctrica"}
,{"P17818","P1410 Ventilação tanque Válvula Circ. Curta para B +"}
,{"P17819","P1411 Inj.Sys Sec.Ar.  Bank  Fluxo Fluxo muito"}
,{"P17820","P141  EGR sinal do sensor Different.Pressure muito baixo"}
,{"P17821","P1413 EGR sinal do sensor Different.Pressure muito alta"}
,{"P17822","P1414 Sec.Ar Inj.Sys.  Bank  vazamento detectado"}
,{"P17825","P1417 Nível de Sinal de combustível Circ Sensor muito baixo"}
,{"P17826","P1418 Nível de Sinal de combustível Circ Sensor muito alta"}
,{"P17828","P14 0 Sec.Ar Inj.Valve Circ avaria eléctrica"}
,{"P17829","P14 1 Sec.Ar Inj.Valve Circ curto para a Terra"}
,{"P17830","P14   Sec.Ar Inj.Sys.Contr.Valve Circ curto para B +"}
,{"P17831","P14 3 Inj.Sys Sec.Ar.  Bank1 fluxo muito baixo"}
,{"P17832","P14 4 Sec.Ar Inj.Sys.  Bank1 vazamento detectado"}
,{"P17833","P14 5 Vent.Valve tanque de curto para terra"}
,{"P17834","P14 6 Tanque Vent.Valve Aberto"}
,{"P17840","P143  Sec.Ar Inj.Valve Aberto"}
,{"P17841","P1433 Sec.Ar Inj.Sys.Pump Relé Circ. aberto"}
,{"P17842","P1434 Sec.Ar Inj.Sys.Pump Relé Circ. Curta para B +"}
,{"P17843","P1435 Sec.Ar Inj.Sys.Pump Relé Circ. Curto para a terra"}
,{"P17844","P1436 Sec.Ar Inj.Sys.Pump Relé Circ. Avaria eléctrica"}
,{"P17847","P1439 EGR Erro Potenciômetro em Armando Básica"}
,{"P17848","P1440 Válvula EGR Poder Palco Aberto"}
,{"P17849","P1441 Válvula EGR Circ Open / Short para terra"}
,{"P17850","P144  Válvula EGR sinal sensor de posição muito alta"}
,{"P17851","P1443 Válvula EGR sinal sensor de posição muito baixa"}
,{"P17852","P1444 Válvula EGR desempenho sensor de posição / intervalo"}
,{"P17853","P1445 Catalisador Temp.Sensor   Circ. Faixa / Performance"}
,{"P17854","P1446 Catalisador Temp.Circ curto para a Terra"}
,{"P17855","P1447 Catalisador Temp.Circ Open / Short para B +"}
,{"P17856","P1448 Catalisador Temp.Sensor   Circ. Curto para terra"}
,{"P17857","P1449 Catalisador Temp.Sensor   Circ. Open / Short para B +"}
,{"P17858","P1450 Sec.Ar Inj.Sys.Circ curto para B +"}
,{"P17859","P1451 Sec.Ar Inj.Sys.Circ curto para a Terra"}
,{"P17860","P145  Inj.Sys Sec.Ar. Abra Circ."}
,{"P17861","P1453 Sensor de temperatura do gás de exaustão um aberto / curto para B +"}
,{"P17862","P1454 Sensor de temperatura de exaustão de gás a curto 1 a solo"}
,{"P17863","P1455 Sensor de temperatura do gás de exaustão uma gama / performance"}
,{"P17864","P1456 Gases de escape de controle de temperatura banco um limite atingido"}
,{"P17865","P1457 Sensor de temperatura do gás de exaustão   aberto / curto para B +"}
,{"P17866","P1458 Sensor de temperatura do gás de exaustão   curto para a terra"}
,{"P17867","P1459 Sensor de temperatura do gás de exaustão   / intervalo de desempenho"}
,{"P17868","P1460 Gases de escape de controle de temperatura do banco atingiu limite de"}
,{"P17869","P1461 Gases de escape do banco de controle de temperatura 1 Faixa / Performance"}
,{"P17870","P146  Gases de escape do banco de controle de temperatura Faixa de   / Performance"}
,{"P17873","P1465 Circuito aditivo Short Pump para B +"}
,{"P17874","P1466 Bomba aditivo Open / Short para terra"}
,{"P17875","P1467 Canister EVAP Purge Circuito Curto Válvula Solenóide para B +"}
,{"P17876","P1468 Canister EVAP Purge Circuito Válvula Solenóide curto para a Terra"}
,{"P17877","P1469 Canister EVAP Purge Circuito Aberto Válvula Solenóide"}
,{"P17878","P1470 EVAP Emissão Contr.LDP Circ avaria eléctrica"}
,{"P17879","P1471 EVAP Emissão Contr.LDP Circ curto para B +"}
,{"P17880","P147  EVAP Emissão Contr.LDP Circ curto para a Terra"}
,{"P17881","P1473 EVAP Emissão Contr.LDP Circ Abra Circ."}
,{"P17882","P1474 Canister EVAP Purge mau funcionamento da válvula solenóide elétrica"}
,{"P17883","P1475 EVAP Emissão Contr.LDP Circ Mau-funcionamento / Sinal Circ.Open"}
,{"P17884","P1476 EVAP Emissão Contr.LDP Circ Mau-funcionamento / vácuo insuficiente"}
,{"P17885","P1477 EVAP Emissão Contr.LDP Circ Mau-funcionamento"}
,{"P17886","P1478 EVAP Emissão Contr.LDP Circ aperto Tubo Detectado"}
,{"P17908","P1500 Circ relé da bomba de combustível. Avaria eléctrica"}
,{"P17909","P1501 Circ relé da bomba de combustível. Curto para terra"}
,{"P17910","P150  Circ relé da bomba de combustível. Curta para B +"}
,{"P17911","P1503 Sinal de carga do alternador Term. DF Gama / performance / Sinal incorreto"}
,{"P17912","P1504 Sys.Bypass Ar ingestão de vazamento detectado"}
,{"P17913","P1505 Binário fechado Pos. Não faz Circ Fechar / Abrir"}
,{"P17914","P1506 Binário fechado Pos.Switch não abre / Short para Terra"}
,{"P17915","P1507 Valor Limite Sys.Learned ocioso Lower atingida"}
,{"P17916","P1508 Valor Limite ocioso Sys.Learned Superior atingida"}
,{"P17917","P1509 Ocioso Ar Control Circ. Avaria eléctrica"}
,{"P17918","P1510 Ocioso Ar Control Circ. Curta para B +"}
,{"P17919","P1511 Do colector de admissão Troca mau funcionamento da válvula de circuito elétrico"}
,{"P17920","P151  Do colector de admissão Válvula de comutação de circuito curto de B +"}
,{"P17921","P1513 Do colector de admissão Troca Valve  de curto-circuito para B +"}
,{"P17922","P1514 Do colector de admissão circuito Valve  Changeover curto para a terra"}
,{"P17923","P1515 Do colector de admissão Válvula de comutação de circuito curto para a Terra"}
,{"P17924","P1516 Do colector de admissão Troca da válvula de circuito aberto"}
,{"P17925","P1517 Circ relé principal. Avaria eléctrica"}
,{"P17926","P1518 Circ relé principal. Curta para B +"}
,{"P17927","P1519 Contr ingestão Comando-valvulas.  Bank1 Mau-funcionamento"}
,{"P17928","P15 0 Ingestão de comutação de circuito aberto Manifold Valve"}
,{"P17929","P15 1 Do colector de admissão Troca Valve  mau funcionamento de circuitos elétricos"}
,{"P17930","P15   Contr ingestão Comando-valvulas.  Bank  Mau-funcionamento"}
,{"P17931","P15 3 Sinal de Bater Arbag Unidade de Controle de gama / performance"}
,{"P17933","P15 5 Contr.Circ ingestão Comando-valvulas.  Bank1 avaria eléctrica"}
,{"P17934","P15 6 Contr.Circ ingestão Comando-valvulas.  Bank1 curto para B +"}
,{"P17935","P15 7 Contr.Circ ingestão Comando-valvulas.  Bank1 curto para a Terra"}
,{"P17936","P15 8 Contr.Circ ingestão Comando-valvulas.  Bank1 Aberto"}
,{"P17937","P15 9 Circuito de Controle Comando-valvulas curto para B +"}
,{"P17938","P1530 Circuito de Controle Comando-valvulas curto para a terra"}
,{"P17939","P1531 Comando-valvulas Circuito de Controle aberto"}
,{"P17941","P1533 Contr.Circ ingestão Comando-valvulas.  Bank  avaria eléctrica"}
,{"P17942","P1534 Contr.Circ ingestão Comando-valvulas.  Bank  curto para B +"}
,{"P17943","P1535 Contr.Circ ingestão Comando-valvulas.  Bank  curto para a Terra"}
,{"P17944","P1536 Contr.Circ ingestão Comando-valvulas.  Bank  Aberto"}
,{"P17945","P1537 Mau funcionamento do motor solenóide de Desligamento"}
,{"P17946","P1538 Solenóide de desligamento do motor Open / Short para terra"}
,{"P17947","P1539 Vacuum embreagem de ventilação sinal interruptor da válvula incorreta"}
,{"P17948","P1540 Veículo de entrada Sensor de Alta Velocidade"}
,{"P17949","P1541 Bomba de combustível relé Circ Aberto"}
,{"P17950","P154  Atuação do acelerador Faixa Potenciômetro / Performance"}
,{"P17951","P1543 Acelerador Signal Potenciômetro Atuação muito baixo"}
,{"P17952","P1544 Acelerador Signal Potenciômetro Atuação muito alta"}
,{"P17953","P1545 Acelerador Pos.Contr Mau-funcionamento"}
,{"P17954","P1546 Aumentar a pressão Contr.Valve curto para B +"}
,{"P17955","P1547 Aumentar a pressão Contr.Valve curto para a Terra"}
,{"P17956","P1548 Aumentar a pressão Contr.Valve Aberto"}
,{"P17957","P1549 Aumentar a pressão Contr.Valve curto para a Terra"}
,{"P17958","P1550 Desvio pressão de carga"}
,{"P17959","P1551 Circ Sensor de pressão barométrica. Curta para B +"}
,{"P17960","P155  Circ Sensor de pressão barométrica. Aberto / curto para a Terra"}
,{"P17961","P1553 Barométrica / manifold relação sinal pressão fora da faixa"}
,{"P17962","P1554 Ocioso velocidade Contr.Throttle Pos. Condições Configuração básica não atingida"}
,{"P17963","P1555 Limite de carga de pressão superior ultrapassado"}
,{"P17964","P1556 Contr pressão de carga. Desvio negativo"}
,{"P17965","P1557 Contr pressão de carga. Desvio positivo"}
,{"P17966","P1558 Mau funcionamento do acelerador atuador elétrico"}
,{"P17967","P1559 Ocioso velocidade Contr.Throttle Pos. Mau funcionamento de adaptação"}
,{"P17968","P1560 Velocidade máxima do motor Exceeded"}
,{"P17969","P1561 Desvio Ajustador quantidade"}
,{"P17970","P156  Limitar quantidade Ajustador Superior atingida"}
,{"P17971","P1563 Limite de quantidade inferior Ajustador atingida"}
,{"P17972","P1564 Ocioso velocidade Contr.Throttle Pos. Baixa Tensão Durante Adaptação"}
,{"P17973","P1565 Ocioso Controle de Velocidade limite posição inferior do acelerador não atingido"}
,{"P17974","P1566 Sinal de carga de A / C gama de compressores / performance"}
,{"P17975","P1567 Sinal de carga de A / C compressor nenhum sinal"}
,{"P17976","P1568 Ocioso velocidade Contr.Throttle Pos. Avaria mecânica"}
,{"P17977","P1569 Cruise control interruptor sinal incorreto"}
,{"P17978","P1570 Contr.Module Locked"}
,{"P17979","P1571 Esquerda Eng. Monte Válvula Solenóide curto para B +"}
,{"P17980","P157  Esquerda Eng. Monte Válvula Solenóide curto para a terra"}
,{"P17981","P1573 Esquerda Eng. Montagem de circuitos Válvula Solenóide Aberto"}
,{"P17982","P1574 Esquerda Eng. Monte culpa válvula solenóide elétrica no circuito"}
,{"P17983","P1575 Direito Eng. Monte Válvula Solenóide curto para B +"}
,{"P17984","P1576 Direito Eng. Monte Válvula Solenóide curto para a terra"}
,{"P17985","P1577 Direito Eng. Montagem de circuitos Válvula Solenóide Aberto"}
,{"P17986","P1578 Direito Eng. Monte culpa válvula solenóide elétrica no circuito"}
,{"P17987","P1579 Ocioso velocidade Contr.Throttle Pos. Adaptação não começou"}
,{"P17988","P1580 Mau funcionamento do acelerador B1 atuador"}
,{"P17989","P1581 Ocioso velocidade Contr.Throttle Pos. Configuração básica não realizada"}
,{"P17990","P158  Adaptação ocioso no limite"}
,{"P17991","P1583 Válvulas de transmissão montagem curto para B +"}
,{"P17992","P1584 Válvulas de transmissão montagem curto para a terra"}
,{"P17993","P1585 Transmissão montar válvulas circuito aberto"}
,{"P17994","P1586 Mecanismo de montagem de válvulas solenóides curto para B +"}
,{"P17995","P1587 Mecanismo de montagem de válvulas solenóides curto para a terra"}
,{"P17996","P1588 Mecanismo de montagem de válvulas solenóides de circuito aberto"}
,{"P18008","P1600 Fonte de alimentação (B +) Terminal Voltage 15 Low"}
,{"P18010","P160  Fonte de alimentação (B +) Terminal 30 de Baixa Tensão"}
,{"P18011","P1603 Mau funcionamento do Módulo de Controle Interno"}
,{"P18012","P1604 Controle Interno Driver Error Módulo"}
,{"P18013","P1605 Mau funcionamento do sensor áspera Road / Aceleração Elétrica"}
,{"P18014","P1606 Áspera estrada Spec motor Torque Mau-funcionamento ABS-ECU Elétrica"}
,{"P18015","P1607 Mensagem de erro de velocidade do veículo sinal do painel de instrumentos"}
,{"P18016","P1608 Mensagem de erro do ângulo de direcção do sinal do sensor de ângulo de direcção"}
,{"P18017","P1609 Bater shut-down ativada"}
,{"P18019","P1611 MIL Chame-up Circ. / Transm.Contr.Module curto para a Terra"}
,{"P18020","P161  Codificação do Módulo de Controle Eletrônico incorreto"}
,{"P18021","P1613 MIL Chame-up Circ Open / Short para B +"}
,{"P18022","P1614 MIL Chame-up Faixa Circ. / Transm.Contr.Module / Performance"}
,{"P18023","P1615 Óleo do motor Temperatura gama Circuito Sensor / performance"}
,{"P18024","P1616 Glow Plug / Circ Indicador aquecedor. Curta para B +"}
,{"P18025","P1617 Glow Plug / Circ Indicador aquecedor. Aberto / curto para a Terra"}
,{"P18026","P1618 Glow Plug / Circ relé do aquecedor. Curta para B +"}
,{"P18027","P1619 Glow Plug / Circ relé do aquecedor. Aberto / curto para a Terra"}
,{"P18028","P16 0 Motor de sinal de temperatura do líquido refrigerante aberto / curto para B +"}
,{"P18029","P16 1 Motor de sinal de temperatura do líquido refrigerante curto para a terra"}
,{"P18030","P16   Arrefecimento do motor alcance do sinal de temperatura / desempenho"}
,{"P18031","P16 3 Bus de dados Motor/cambio Sem comunicação"}
,{"P18032","P16 4 MIL Pedido Sign.active"}
,{"P18033","P16 5 Dados Bus-Motor/cambio Mensagem implausíveis de Transm.Contr."}
,{"P18034","P16 6 Dados Bus-Motor/cambio Mensagem ausentes do Transm.Contr."}
,{"P18035","P16 7 Dados Bus-Motor/cambio mensagem de falta de bomba de injeção de combustível"}
,{"P18036","P16 8 Dados Bus-Motor/cambio mensagem de falta do sensor de direção"}
,{"P18037","P16 9 Dados Bus-Motor/cambio mensagem de falta de controle de distância"}
,{"P18038","P1630 Accelera.Pedal Sinal 1 Pos.Sensor muito baixo"}
,{"P18039","P1631 Accelera.Pedal Sinal 1 Pos.Sensor muito alta"}
,{"P18040","P163  Accelera.Pedal Pos.Sensor um mau funcionamento da fonte de alimentação"}
,{"P18041","P1633 Accelera.Pedal Sinal   Pos.Sensor muito baixo"}
,{"P18042","P1634 Accelera.Pedal Sinal   Pos.Sensor muito alta"}
,{"P18043","P1635 Bus de dados Motor/cambio faltando mensagem de controle condição f.ar"}
,{"P18044","P1636 Dados da mensagem Motor/cambio Bus faltando Arbag controle"}
,{"P18045","P1637 Bus de dados Motor/cambio faltando mensagem electr.control f.central"}
,{"P18046","P1638 Bus de dados Motor/cambio mensagem de falta de controle de embreagem"}
,{"P18047","P1639 Accelera.Pedal Pos.Sensor 1 +  Faixa / Performance"}
,{"P18048","P1640 Interna Contr.Module erro (EEPROM)"}
,{"P18049","P1641 Por favor verifique Memória DTC da Ar Condição ECU"}
,{"P18050","P164  Por favor verifique Memória DTC de Arbag ECU"}
,{"P18051","P1643 Por favor verifique Memória DTC da central eléctrica ECU"}
,{"P18052","P1644 Por favor verifique Memória DTC de embreagem ECU"}
,{"P18053","P1645 Bus de dados Motor/cambio faltando mensagem f.all contr rodas."}
,{"P18054","P1646 Por favor verifique Memória DTC de todos os ECU rodas"}
,{"P18055","P1647 Por favor verifique a codificação de ECU em Dados Bus Motor/cambio"}
,{"P18056","P1648 Dados Bus Motor/cambio Mau-funcionamento"}
,{"P18057","P1649 Bus de dados de mensagem Motor/cambio falta de ABS Módulo de Controle"}
,{"P18058","P1650 Bus de dados Motor/cambio painel fr.instrument Faltando mensagem ECU"}
,{"P18059","P1651 Bus de dados Motor/cambio mensagens em falta"}
,{"P18060","P165  Por favor verifique Memória DTC de transmissão ECU"}
,{"P18061","P1653 Por favor verifique Memória DTC de ABS Módulo de Controle"}
,{"P18062","P1654 Por favor verifique Memória DTC do painel de controle ECU"}
,{"P18063","P1655 Por favor verifique Memória DTC de ADR Módulo de Controle"}
,{"P18064","P1656 A / C do circuito do relé da embreagem curto para a terra"}
,{"P18065","P1657 A / C do circuito do relé da embreagem curta para B +"}
,{"P18066","P1658 Bus de dados de sinal Motor/cambio incorreta de ADR Módulo de Controle"}
,{"P18084","P1676 Drive by Wire-MIL Circ. Avaria eléctrica"}
,{"P18085","P1677 Drive by Wire-MIL Circ. Curta para B +"}
,{"P18086","P1678 Drive by Wire-MIL Circ. Curto para terra"}
,{"P18087","P1679 Drive by Wire-MIL Circ. Aberto"}
,{"P18089","P1681 Programação Contr.Unit  não Programação Finished"}
,{"P18092","P1684 Contr.Unit erro de comunicação de programação"}
,{"P18094","P1686 Erro de programação Contr.Unit erro"}
,{"P18098","P1690 Avaria Avaria Luz Indicação"}
,{"P18099","P1691 Indicação de anomalias Luz Aberto"}
,{"P18100","P169  Mau funcionamento Luz Indicação curto para a Terra"}
,{"P18101","P1693 Mau funcionamento Luz Indicação curto para B +"}
,{"P18102","P1694 Mau funcionamento Luz Indicação Open / Short para terra"}
,{"P18112","P1704 Kick down Mau-funcionamento Mudar"}
,{"P18113","P1705 Gear / Razão limite Adaptação Monitoramento alcançado"}
,{"P18119","P1711 Sinal roda Velocidade 1 Faixa / Performance"}
,{"P18124","P1716 Sinal Speed Wheel Faixa de   / Performance"}
,{"P18129","P17 1 Sinal Speed Wheel 3 Intervalo / Performance"}
,{"P18131","P17 3 Starter Interlock Circ. Aberto"}
,{"P18132","P17 4 Starter Interlock Circ. Curto para terra"}
,{"P18134","P17 6 Roda de sinal de velocidade Faixa 4 / Performance"}
,{"P18136","P17 8 Speed Wheel diferentes Sinais Faixa / Performance"}
,{"P18137","P17 9 Starter Interlock Circ. Curta para B +"}
,{"P18141","P1733 Tiptronic interruptor para baixo Circ. Curto para terra"}
,{"P18147","P1739 Tiptronic Alterne até Circ. Curto para terra"}
,{"P18148","P1740 Embreagem de controle de temperatura"}
,{"P18149","P1741 Adaptação da embreagem pressão no limite"}
,{"P18150","P174  Embreagem adaptação torque no limite"}
,{"P18151","P1743 Sinal de controle de embreagem deslizamento muito alto"}
,{"P18152","P1744 Tiptronic Mudar Reconhecimento Circ. Curto para terra"}
,{"P18153","P1745 Transm.Contr.Unit Relé curto para B +"}
,{"P18154","P1746 Transm.Contr.Unit Mau-funcionamento relé"}
,{"P18155","P1747 Relé Transm.Contr.Unit Open / Short para terra"}
,{"P18156","P1748 Transm.Contr.Unit Self Check-"}
,{"P18157","P1749 Transm.Contr.Unit Coded incorreto"}
,{"P18158","P1750 Tensão de baixa tensão"}
,{"P18159","P1751 Tensão Alta Tensão"}
,{"P18160","P175  Fornecimento de energia Mau-funcionamento"}
,{"P18168","P1760 Mudança Mau-funcionamento Bloqueio"}
,{"P18169","P1761 Mudança de bloqueio curto para a Terra"}
,{"P18170","P176  Mudança de bloqueio curto para B +"}
,{"P18171","P1763 Mudança cadeado aberto"}
,{"P18172","P1764 Controle de temperatura de transmissão"}
,{"P18173","P1765 Pressão hidráulica Sensor   de adaptação no limite"}
,{"P18174","P1766 Sinal Angle acelerador Preso Off"}
,{"P18175","P1767 Sinal Angle acelerador Stuck On"}
,{"P18176","P1768   Sensor hidráulico de pressão muito alta"}
,{"P18177","P1769   Sensor hidráulico de pressão muito baixa"}
,{"P18178","P1770 Faixa de carga de sinal / Performance"}
,{"P18179","P1771 Sinal de carga Preso Off"}
,{"P18180","P177  Sinal de carga Stuck On"}
,{"P18181","P1773 Sensor de pressão hidráulica 1 Too High"}
,{"P18182","P1774 1 Sensor de pressão hidráulica muito baixa"}
,{"P18183","P1775 Pressão hidráulica Sensor 1 adaptação no limite"}
,{"P18184","P1776 Sensor de pressão hidráulica uma gama / performance"}
,{"P18185","P1777 Sensor de pressão hidráulica intervalo de   / performance"}
,{"P18186","P1778 Mau funcionamento do solenóide EV7 Elétrica"}
,{"P18189","P1781 Redução do torque do motor Open / Short para terra"}
,{"P18190","P178  Redução do motor Torque Curto para B +"}
,{"P18192","P1784 Deslocamento para cima / baixo Fio Open / Short para terra"}
,{"P18193","P1785 Deslocamento para cima / baixo Fio curto para B +"}
,{"P18194","P1786 Invertendo Circ Light. Aberto"}
,{"P18195","P1787 Invertendo Circ Light. Curto para terra"}
,{"P18196","P1788 Invertendo Circ Light. Curta para B +"}
,{"P18197","P1789 Circ Intervenção ocioso Speed. Mensagem de erro do Contr Engine."}
,{"P18198","P1790 Faixa de transmissão de exibição Circ. Aberto"}
,{"P18199","P1791 Faixa de transmissão de exibição Circ. Curto para terra"}
,{"P18200","P179  Faixa de transmissão de exibição Circ. Curta para B +"}
,{"P18201","P1793 Velocidade de saída do sensor Circ  . Sem sinal"}
,{"P18203","P1795 Veículo Circ sinal de velocidade. Aberto"}
,{"P18204","P1796 Veículo Circ sinal de velocidade. Curto para terra"}
,{"P18205","P1797 Veículo Circ sinal de velocidade. Curta para B +"}
,{"P18206","P1798 Velocidade de saída do sensor Circ  . Faixa / Performance"}
,{"P18207","P1799 Velocidade de saída do sensor Circ  . Rpm muito alta"}
,{"P18221","P1813 Contr.Solenoid pressão 1 Elétrica"}
,{"P18222","P1814 Contr.Solenoid pressão 1 Abra / Short para Terra"}
,{"P18223","P1815 Contr.Solenoid pressão um curto para B +"}
,{"P18226","P1818 Contr.Solenoid pressão   Elétrica"}
,{"P18227","P1819 Contr.Solenoid pressão   Open / Short para Terra"}
,{"P18228","P18 0 Contr.Solenoid pressão   Curta a B +"}
,{"P18231","P18 3 Contr.Solenoid pressão 3 Elétrica"}
,{"P18232","P18 4 Contr.Solenoid pressão 3 Abra / Short para Terra"}
,{"P18233","P18 5 Contr.Solenoid pressão 3 curto para B +"}
,{"P18236","P18 8 Contr.Solenoid pressão 4 Elétrica"}
,{"P18237","P18 9 Contr.Solenoid pressão 4 Abra / Short para Terra"}
,{"P18238","P1830 Contr.Solenoid pressão 4 Breve para B +"}
,{"P18242","P1834 Contr.Solenoid pressão 5 Abra / Short para Terra"}
,{"P18243","P1835 Contr.Solenoid pressão 5 Curtas de B +"}
,{"P18249","P1841 Módulos de motor / transmissão Controle de Versões não correspondem"}
,{"P18250","P184  Por favor verifique Memória DTC painel de instrumento ECU"}
,{"P18251","P1843 Por favor verifique Memória DTC de ADR Módulo de Controle"}
,{"P18252","P1844 Por favor verifique Memória DTC da central eléctrica de controle ECU"}
,{"P18255","P1847 Por favor verifique Memória DTC de freio sistema ECU"}
,{"P18256","P1848 Por favor verifique Memória DTC ECU do motor"}
,{"P18257","P1849 Por favor verifique Memória DTC de transmissão ECU"}
,{"P18258","P1850 Dados Bus-Motor/cambio Mensagem ausentes do Contr Engine."}
,{"P18259","P1851 Dados Bus-Motor/cambio Mensagem de falta de freio Contr."}
,{"P18260","P185  Dados Bus-Motor/cambio Mensagem implausíveis de Contr Engine."}
,{"P18261","P1853 Dados Bus-Motor/cambio Mensagem implausíveis de freio Contr."}
,{"P18262","P1854 Dados Bus-Motor/cambio Hardware defeituoso"}
,{"P18263","P1855 Dados Bus-Motor/cambio Contr versão do software."}
,{"P18264","P1856 Acelerador / Pedal Circ A Pos.Sensor. Mensagem de erro do Contr Engine."}
,{"P18265","P1857 Mensagem de erro de carga do sinal de Contr Engine."}
,{"P18266","P1858 Circ motor de entrada de velocidade. Mensagem de erro do Contr Engine."}
,{"P18267","P1859 Interruptor de freio Circ. Mensagem de erro do Contr Engine."}
,{"P18268","P1860 Kick down Mensagem de erro Mudar de Contr Engine."}
,{"P18269","P1861 Posição do acelerador (TP) Mensagem de erro do sensor de ECM"}
,{"P18270","P186  Bus de dados Motor/cambio mensagem de falta de instr. painel de ECU"}
,{"P18271","P1863 Bus de dados Motor/cambio Mensagem Desaparecidas de São Sensor Ângulo"}
,{"P18272","P1864 Bus de dados Motor/cambio mensagem de falta de ADR módulo de controle"}
,{"P18273","P1865 Bus de dados Motor/cambio mensagem de falta de eletrônicos centrais"}
,{"P18274","P1866 Bus de dados Motor/cambio mensagens Desaparecidas"}
};