# Define la clase
En esta practica tu objetivo es definir una clase que represente 
a un cierto instrumento musical. Esta clase debe de cumplir las caracteristicas
que se presentan a continuación:

- La clase se debe de llamar "```MusicalInstrument```".
- La clase debe de almacenar 4 diferentes piezas de información:
  - El tipo del instrumento dentro de una propiedad llamada "```type```".
  - El color del instrumento en una propiedad llamada "```color```".
  - El dueño del instrumento dentro de una propiedad llamada "```owner```".
  - El precio del instrumento en una propiedad llamada "```price```". Asume que el 
  precio nunca va a contener valores decimales.
- La clase debe de tener un metodos:
   - Un metodo llamado "```makeNoise```". Este metodo debe de devolver una string 
   con un cierto sonido dependiendo del tipo de instrumento.
     - Si es un violin debe devolver "eeeee".
     - Si es un piano debe devolver "ooooo".
     - Si es una guitarra debe devolver "rrrrr".
     - Si es una bateria debe devolver "bdbdbd".
     - Cualquier otro tipo debe devolver una string vacia.
