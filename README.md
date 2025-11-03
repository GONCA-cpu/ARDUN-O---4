Türkçe
Proje Başlığı

Basit LED Geçiş Deseni — Arduino

Kısa Açıklama

Bu proje, Arduino üzerinde 5 adet LED'i (pin 8–12) basit bir açık/kapalı geçiş paterniyle yakıp söndürür. Kod açıklamaları Türkçe olarak eklenmiştir; yeni başlayanlar için uygun basit bir örnektir.

Donanım Gereksinimleri

1 × Arduino (Uno, Nano veya benzeri)

5 × LED

5 × 400Ω direnç

Breadboard ve jumper kablolar

Bağlantı (Wiring)

Her LED için:

Arduino pin 8 → (220Ω direnç) → LED anodu (uzun bacak)

LED katodu (kısa bacak) → GND

Aynı şekilde pin 9, 10, 11, 12 için LED ve dirençleri bağlayın.

Not: LED'leri ters bağlamamaya dikkat edin; direnç seri olarak LED ile pin arasına gelmelidir.



Nasıl Çalışır

İlk adımda pin 9 ve 11 HIGH (yani LED'ler yanar) olarak ayarlanır; pin 8,10,12 LOW olur.

400 ms beklenir.

Sonra 9 ve 11 kapatılır; 8,10,12 açılır.

500 ms beklenir.

loop() tekrarlanarak sürekli bir geçiş efekti oluşturulur.

Özelleştirme / İyileştirme Önerileri

beklemeSuresi değişkeni tanımlanmış fakat kullanılmıyor; gecikme sürelerini bu değişkene bağlayarak kolayca değiştirme yapabilirsiniz:

int beklemeSuresi = 500;
// ...
delay(beklemeSuresi);


Farklı kombinasyonlar, PWM (analogWrite) kullanarak parlaklık efektleri veya daha karmaşık diziler eklenebilir.

Daha güvenli sürümler için her LED için ayrı direnç kullanın (zaten önerildi).

Sorun Giderme

LED hiç yanmıyorsa: bağlantıları, LED yönünü ve toprak (GND) bağlantısını kontrol edin.

Yanıp sönme çok hızlı veya çok yavaşsa: delay() sürelerini ayarlayın.

Çok parlak veya çok sönükse: direnç değerini kontrol edin (220Ω genelde uygundur).

Lisans

MIT © (İlgili isim veya kuruluşu buraya ekleyin)

English
Project Title

Simple LED Switching Pattern — Arduino

Short Description

This project toggles 5 LEDs (pins 8–12) on an Arduino in a simple on/off switching pattern. Comments are included in Turkish in the original code; it's a beginner-friendly example.

Hardware Requirements

1 × Arduino (Uno, Nano, etc.)

5 × LEDs

5 × 220Ω resistors

Breadboard and jumper wires

Wiring

For each LED:

Arduino pin 8 → (220Ω resistor) → LED anode (long leg)

LED cathode (short leg) → GND

Repeat the same for pins 9, 10, 11, 12.

Note: Make sure resistors are in series with LEDs and LEDs are oriented correctly.

