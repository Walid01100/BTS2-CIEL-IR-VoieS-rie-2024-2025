int key = 6;
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    char readChar = 0; // caractère à lire
   
    int buff = Serial.available();

    while(buff > 0) // tant qu'il reste des caractères dans le buffer
    {
        readChar = Serial.read(); // lecture du caractère
      if (readChar >= 117)
      {
        readChar = readChar - 26;
      }
        readChar = readChar + key;
        Serial.print(readChar);// envoi du caractère
        buff = Serial.available(); // mise à jour du nombre de caratères restant
    }
}

//code de la prof 
void chiffrement(String message)
{
  for (int i = 0; i<message.length(); i++)
  {
    message[i] = message[i] + key;
  }
  serial println(message);
}

