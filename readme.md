# Ejercicios básicos de C
## 42Barcelona Febrero 2023

He tenido la suerte de participar en la piscina de 42Barcelona y voy a subir aquí algunos ejercicios básicos aprendidos tanto de C como de gestion de archivos en Shell - Bash.

Me servirá para practicar con Git, GitHub y repasar lo aprendido estos días. Vamos allá!

 `ssh-keygen -t rsa -b 4096 -C "tu_email@ejemplo.com"`

 El comando ssh-keygen es una herramienta de línea de comando que se utiliza para generar pares de claves SSH (Secure Shell) para la autenticación remota.

 Los parámetros utilizados en este comando son los siguientes:

- `-t rsa:` especifica que se generará un par de claves RSA. RSA es un algoritmo de cifrado utilizado para crear claves de cifrado asimétricas.

- `-b 4096:` especifica la longitud de la clave, que en este caso es de 4096 bits. Una longitud de clave más larga proporciona una mayor seguridad, pero también requiere más tiempo para generar y utilizar la clave.

- `-C tu_email@ejemplo.com:` agrega un comentario a la clave, que en este caso es la dirección de correo electrónico asociada con la clave. El comentario es opcional, pero puede ser útil para identificar la clave si tienes varias claves ssh.

Pensé que añadiendo el repo remoto usando la clave ssh en vez de la url convencional igual me libraba de tokens que hay que estar copiando y pegando cada vez que quiere uno hacer un push, porque es lo que hacíamos en la piscina, usar claves ssh.

 Parece que si funciona,pero he tenido que añadir las claves generadas del comando anterior a un agente de claves ssh que parece que usa algunas variables de entorno para funcionar. El comando : `ssh -s` muestra dichas variables.

 El comando `eval "$(ssh -s)"` hace que el agente ssh evalue ese ouput y establezca las variables necesarias para interactuar con él, dovolviendo el identificador de proceso correspondiente (PID).

 Lo siguiente ha sido añadir la clave privada generada anteriormente al agente de claves ssh con el comando `ssh-add ~/sshkey`. Creo que de esa manera puedo interactuar con una dirección remota de forma fija estando en mi directorio local de Git sin necesidad de autenticarme cada vez.

 Ahora tocaba añadir el repositorio creado en GitHub como remoto. Antes que nada, ha sido necesario entrar en el apartado settings de mi perfil de GitHub para añadir también la clave SSH alli, luego he creado el repositorio.

 Pulsando el botón verde Code o en la pestaña SSH del repo, se copia la URL ssh.

 La clave pública está en mi perfil de GitHub, la privada incluída en mis variables de entorno ssh locales. He asignado mi repositorio remoto con el comando `git remote add origin [url ssh]/[nombre del repo].git`.
 Todo esto para poder hacer push sin contraseñas!

 Todavía no ha sido suficiente. En mi primer intento de push, he recibido las siguentes advertencias:

`/etc/ssh/ssh_config: line 51: Bad configuration option: permit`
`/etc/ssh/ssh_config: terminating, 1 bad configuration options`

`fatal: No se pudo leer del repositorio remoto.`

Eso de fatal no suena muy bien! Parece que una opción del fichero de configuración del agente de claves ssh impide que pueda hacer el push correctamente. Era la linea 51, que decía:

`Permit RootLogin yes`         

No estoy seguro, pero tal vez si hubiera estado logeado como root en el sistema si me hubiera dejado hacer el push, el caso es que he comentado la linea y santas pascuas. Lo he vuelto a intentar y por fin lo he conseguido.

Me ha dado un mensaje de advertencia igualmente que también me lo dió en alguna ocasión en la piscina, respecto de que la identidad de la ip del host name (repo de GitHub) no podía ser establecida o determinada, que si deseaba continuar. He dicho que yes.  

Añadiré en cada carpeta otro Readme explicando el ejercicio.
