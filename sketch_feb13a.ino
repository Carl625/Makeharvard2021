String text;
int char_pos = 0;
int** buffer;

void init_buffer() {
  buffer = malloc(sizeof(int*) * 42);
  for (int c = 0; c < 42; c++) {
    buffer[c] = calloc(6, sizeof(int));  
  }
}

String get_text() {
  return "This is example text, how do you do my dudes";
}

int* char_to_braille(char c) {

  int* braille_char = calloc(6, sizeof(int));
  
  switch (c) {
    case 'a':
      braille_char[0] = 1;
      braille_char[1] = 0;
      braille_char[2] = 0;
      braille_char[3] = 0;
      braille_char[4] = 0;
      braille_char[5] = 0;
      break;
    case 'b':
      braille_char[0] = 1;
      braille_char[1] = 0;
      braille_char[2] = 1;
      braille_char[3] = 0;
      braille_char[4] = 0;
      braille_char[5] = 0;
      break;
    case 'c':
      braille_char[0] = 1;
      braille_char[1] = 1;
      braille_char[2] = 0;
      braille_char[3] = 0;
      braille_char[4] = 0;
      braille_char[5] = 0;
      break;
    case 'd':
      braille_char[0] = 1;
      braille_char[1] = 1;
      braille_char[2] = 0;
      braille_char[3] = 1;
      braille_char[4] = 0;
      braille_char[5] = 0;
      break;
    case 'e':
      braille_char[0] = 1;
      braille_char[1] = 0;
      braille_char[2] = 0;
      braille_char[3] = 1;
      braille_char[4] = 0;
      braille_char[5] = 0;
      break;
    case 'f':
      braille_char[0] = 1;
      braille_char[1] = 1;
      braille_char[2] = 1;
      braille_char[3] = 0;
      braille_char[4] = 0;
      braille_char[5] = 0;
      break;
    case 'g':
      braille_char[0] = 1;
      braille_char[1] = 1;
      braille_char[2] = 1;
      braille_char[3] = 1;
      braille_char[4] = 0;
      braille_char[5] = 0;
      break;
    case 'h':
      braille_char[0] = 1;
      braille_char[1] = 0;
      braille_char[2] = 1;
      braille_char[3] = 1;
      braille_char[4] = 0;
      braille_char[5] = 0;
      break;
    case 'i':
      braille_char[0] = 0;
      braille_char[1] = 1;
      braille_char[2] = 1;
      braille_char[3] = 0;
      braille_char[4] = 0;
      braille_char[5] = 0;
      break;
    case 'j':
      braille_char[0] = 0;
      braille_char[1] = 1;
      braille_char[2] = 1;
      braille_char[3] = 1;
      braille_char[4] = 0;
      braille_char[5] = 0;
      break;
    case 'k':
      braille_char[0] = 1;
      braille_char[1] = 0;
      braille_char[2] = 0;
      braille_char[3] = 0;
      braille_char[4] = 1;
      braille_char[5] = 0;
      break;
    case 'l':
      braille_char[0] = 1;
      braille_char[1] = 0;
      braille_char[2] = 1;
      braille_char[3] = 0;
      braille_char[4] = 1;
      braille_char[5] = 0;
      break;
    case 'm':
      braille_char[0] = 1;
      braille_char[1] = 1;
      braille_char[2] = 0;
      braille_char[3] = 0;
      braille_char[4] = 1;
      braille_char[5] = 0;
      break;
    case 'n':
      braille_char[0] = 1;
      braille_char[1] = 1;
      braille_char[2] = 0;
      braille_char[3] = 1;
      braille_char[4] = 1;
      braille_char[5] = 0;
      break;
    case 'o':
      braille_char[0] = 1;
      braille_char[1] = 0;
      braille_char[2] = 0;
      braille_char[3] = 1;
      braille_char[4] = 1;
      braille_char[5] = 0;
      break;
    case 'p':
      braille_char[0] = 1;
      braille_char[1] = 1;
      braille_char[2] = 1;
      braille_char[3] = 0;
      braille_char[4] = 1;
      braille_char[5] = 0;
      break;
    case 'q':
      braille_char[0] = 1;
      braille_char[1] = 1;
      braille_char[2] = 1;
      braille_char[3] = 1;
      braille_char[4] = 1;
      braille_char[5] = 0;
      break;
    case 'r':
      braille_char[0] = 1;
      braille_char[1] = 0;
      braille_char[2] = 1;
      braille_char[3] = 1;
      braille_char[4] = 1;
      braille_char[5] = 0;
      break;
    case 's':
      braille_char[0] = 0;
      braille_char[1] = 1;
      braille_char[2] = 1;
      braille_char[3] = 0;
      braille_char[4] = 1;
      braille_char[5] = 0;
      break;
    case 't':
      braille_char[0] = 0;
      braille_char[1] = 1;
      braille_char[2] = 1;
      braille_char[3] = 1;
      braille_char[4] = 1;
      braille_char[5] = 0;
      break;
    case 'u':
      braille_char[0] = 1;
      braille_char[1] = 0;
      braille_char[2] = 0;
      braille_char[3] = 0;
      braille_char[4] = 1;
      braille_char[5] = 1;
      break;
    case 'v':
      braille_char[0] = 1;
      braille_char[1] = 0;
      braille_char[2] = 1;
      braille_char[3] = 0;
      braille_char[4] = 1;
      braille_char[5] = 1;
      break;
    case 'w':
      braille_char[0] = 0;
      braille_char[1] = 1;
      braille_char[2] = 1;
      braille_char[3] = 1;
      braille_char[4] = 0;
      braille_char[5] = 1;
      break;
    case 'x':
      braille_char[0] = 1;
      braille_char[1] = 1;
      braille_char[2] = 0;
      braille_char[3] = 0;
      braille_char[4] = 1;
      braille_char[5] = 1;
      break;
    case 'y':
      braille_char[0] = 1;
      braille_char[1] = 1;
      braille_char[2] = 0;
      braille_char[3] = 1;
      braille_char[4] = 1;
      braille_char[5] = 1;
      break;
    case 'z':
      braille_char[0] = 1;
      braille_char[1] = 0;
      braille_char[2] = 0;
      braille_char[3] = 1;
      braille_char[4] = 1;
      braille_char[5] = 1;
      break;
   }

   return &braille_char;
}

void update_buffer() {
  for (int i = 0; i < 42; i++) {
    buffer[i] = char_to_braille(text[char_pos + i]);  
  }  
}

void update_screen() {
  for (int i = 0; i < (42 * 6); i++) {
    
    int up = buffer[(14 * (i / 84)) + ((i % 28) / 2)][(((i % 84) / 28) * 2) + (i % 2)];
    set_pin(i, up);
  }
}

void set_pin(int pin_id, int up) {
  analogWrite(26, 255 * (pin_id % 2));
  analogWrite(25, 255 * ((pin_id / 2) % 2));
  analogWrite(24, 255 * ((pin_id / 4) % 2));
  analogWrite(23, 255 * ((pin_id / 8) % 2));
  analogWrite(22, 255 * ((pin_id / 16) % 2));
  analogWrite(21, 255 * ((pin_id / 32) % 2));
  analogWrite(20, 255 * ((pin_id / 128) % 2));
  analogWrite(19, 255 * up)
}

void setup() {
  text = get_text();
  text.toLowerCase();

  init_buffer();
  update_screen();

  pinMode(26, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(22, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(20, OUTPUT);
  pinMode(19, OUTPUT);

  attachInterrupt(digitalPinToInterrupt(5), scroll_back, CHANGE);
  attachInterrupt(digitalPinToInterrupt(6), scroll_forward, CHANGE);
}

void loop() {
}

void scroll_forward() {
  if (text.indexOf(' ', char_pos) != -1 && text.indexOf(' ', char_pos) != (text.length() - 1)) {
    char_pos = text.indexOf(' ', char_pos);
    update_buffer();
    update_screen();
  }
}

void scroll_back() {
  if (text.lastIndexOf(' ', char_pos) != -1 && text.lastIndexOf(' ', char_pos) != 0) {
    char_pos = text.lastIndexOf(' ', char_pos);
    update_buffer();
    update_screen();
  }
}
