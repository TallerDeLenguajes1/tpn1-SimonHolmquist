## 1)

### ¿Porqué es conveniente incluirlo?
- Para reducir el uso de espacio. 
- Para reducir el uso de ancho de banda.
- Para ignorar archivos que deberian ser privados.

 >Es recomendable ignorar archivos temporales, binarios o ejecutables, asi como herramientas o librerias externas.
    
### ¿Cuándo se debe hacer?
 - Lo ideal sería incluirlo desde un principio, cuando ya se tienen definidas la herramientas y lenguaje a utilizar.

### ¿Cómo usaría la página https://www.gitignore.io/?
* A través de la pagina:
  1. Se puede ingresar a la pagina
  2. Se ingresa el lenguaje o sistema operativo que vamos a utilizar
  3. Clic en create
  4. Se copia el texto y se pega en el archivo .gitignore

* A través de los templates en el [repositorio Git-Ignore](https://github.com/toptal/gitignore):
  1. Se busca el template correspondiente en la carpeta de templates
  2. Se copia el texto y se pega en el archivo .gitignore

### ¿Cómo configuraría el archivo .gitignore?
- Pasos a seguir:
  1. Creamos el archivo .gitignore.
  2. Editamos el archivo incluyendo las carpetas, archivos o extensiones a ignorar.
  3. Agregamos el mismo al repositorio.

## 2)
 * Si resolvió correctamente los puntos ii y iii notará que el resultado es el mismo. ¿a qué se debe? 
   * Esto se debe a que el puntero "guarda" la direccion de memoria de la variable. Y en el punto iii a través del operador ampersand (&), obtenemos y mostramos la dirección de memoria de la variable. Si está bien declarado el puntero, deberían ser iguales.
 * ¿Qué obtiene en el punto 4? ¿es igual a los anteriores? ¿por qué?
   * En el punto 4, obtenemos la dirección de memoria del puntero, la cual no es ni debe ser igual a los anteriores. Esto es porque el puntero es otra variable, por lo tanto tiene que tener una dirección de memoria distinta.