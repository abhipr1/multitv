README IP.TV Client 0.2.3 BETA - Linux
======================================

Executando o client IP.TV
-------------------------
Execute o arquivo "iptv_client", localizado no diret�rio para o qual a aplica��o foi extra�da.

Requisitos
----------
- Uma vers�o relativamente recente do Linux, com kernel vers�o 2.6.
- Um servidor X (XFree86/X.org).
- Uma placa de som que suporte ALSA.
- Uma placa de v�deo capaz de executar OpenGL com acelera��o por hardware, com um m�nimo de 16 MB de RAM de v�deo. � recomendado utilizar placas GeForce.

Al�m disso, � necess�rio ter os seguintes pacotes e suas depend�ncias instaladas no sistema para executar o programa:

- wxWidgets 2.8/GTK+ (libwxgtk2.8-0)
- libx264 (libx264-54)
- O codec de �udio Speex (libspeex1)
- Mesa OpenGL (libgl1-mesa-glx, libglu1-mesa)

� necess�rio tamb�m instalar a biblioteca ChartDirector, que n�o possui pacote nos reposit�rios oficiais do Ubuntu.

Para instalar a biblioteca Chart Director, siga os seguintes passos:

1. Fa�a o download da biblioteca no seguinte link: http://download2.advsofteng.com/chartdir_cpp_linux.tar.gz;
2. Extraia o arquivo para um diret�rio tempor�rio;
3. Copie todo o conte�do da pasta lib para o diret�rio /usr/local/lib. (sudo cp -a * /usr/local/lib);
4. Execute o seguinte comando: sudo ldconfig.

Observa��es
-----------
As depend�ncias dos pacotes acima podem ser resolvidas pelo gerenciador de pacotes.

Os nomes dos pacotes mencionados entre par�nteses referem-se a sistemas Debian/Ubuntu. Eles podem ser instalados com o seguinte comando:
"sudo apt-get install <pacote>", onde <pacote> deve ser substitu�do pelo nome do pacote que se deseja instalar.

Caso seja utilizada outra distribui��o de Linux (Slackware, Fedora etc.), adapte os nomes dos pacotes e utilize o gerenciador de pacotes apropriado.
