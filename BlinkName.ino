String Name, Code;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  /* Name = Serial.readString(); */
  // can be used to make to take the input from user rather than hard coding it.

  Name = "Agrim";
  Name.toUpperCase();
  Morse_blinker(Name);

  if (Name != "")
    Serial.println(Name + " = " + Code);
  Code = "";
}

void Morse_blinker(String Name)
{
  for (int i = 0; i < Name.length(); i++)
  {
    switch (Name[i])
    {
      case 'A':
        dot();
        dash();
        break;

      case 'B':
        dash();
        dot();
        dot();
        dot();
        break;

      case 'C':
        dash();
        dot();
        dash();
        dot();
        break;

      case 'D':
        dash();
        dot();
        dot();
        break;

      case 'E':
        dot();
        break;

      case 'F':
        dot();
        dot();
        dash();
        dot();
        break;

      case 'G':
        dash();
        dash();
        dot();
        break;

      case 'H':
        dot();
        dot();
        dot();
        dot();
        break;

      case 'I':
        dot();
        dot();
        break;

      case 'J':
        dot();
        dash();
        dash();
        dash();
        break;

      case 'K':
        dash();
        dot();
        dash();
        break;

      case 'L':
        dot();
        dash();
        dot();
        dot();
        break;

      case 'M':
        dash();
        dash();
        break;

      case 'N':
        dot();
        dash();
        break;

      case 'O':
        dash();
        dash();
        dash();
        break;

      case 'P':
        dot();
        dash();
        dash();
        dot();
        break;

      case 'Q':
        dash();
        dash();
        dot();
        dash();
        break;

      case 'R':
        dot();
        dash();
        dot();
        break;

      case 'S':
        dot();
        dot();
        dot();
        break;

      case 'T':
        dash();
        break;

      case 'U':
        dot();
        dot();
        dash();
        break;

      case 'V':
        dot();
        dot();
        dot();
        dash();
        break;

      case 'W':
        dot();
        dash();
        dash();
        break;

      case 'X':
        dash();
        dot();
        dot();
        dash();
        break;

      case 'Y':
        dash();
        dot();
        dash();
        dash();
        break;

      case 'Z':
        dash();
        dash();
        dot();
        dot();
        break;

      default:
        break;
    }
    delay(900);
    Code += " ";
  }
}

void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
  Code += ".";
}

void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(900);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
  Code += "-";
}
