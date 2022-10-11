#define ledAbang 3
#define ledKuning 2
#define ledIjo 1

void setup()
{
    // put your setup code here, to run once:
    pinMode(ledAbang, OUTPUT);
    pinMode(ledKuning, OUTPUT);
    pinMode(ledIjo, OUTPUT);
}

void flipflop()
{
    digitalWrite(ledAbang, HIGH);
    digitalWrite(ledKuning, LOW);
    digitalWrite(ledIjo, LOW);
    delay(4000);
    digitalWrite(ledAbang, HIGH);
    digitalWrite(ledKuning, HIGH);
    digitalWrite(ledIjo, LOW);
    delay(1000);
    digitalWrite(ledAbang, LOW);
    digitalWrite(ledKuning, HIGH);
    digitalWrite(ledIjo, LOW);
    delay(3000);
    digitalWrite(ledAbang, LOW);
    digitalWrite(ledKuning, LOW);
    digitalWrite(ledIjo, HIGH);
    delay(4000);
}

void loop()
{
    // put your main code here, to run repeatedly:
    flipflop();
}
