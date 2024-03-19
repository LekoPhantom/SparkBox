// Icon bitmap definitions - David Thompson 2021

#ifndef TWOCOLOUR
// Full-sized tuner version
#define tuner_width 128
#define tuner_height 64
const uint8_t tuner_bits[] =  {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x7F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 
  0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xC0, 0xFF, 0x60, 0x06, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x07, 0x60, 0x06, 0xE0, 0x1F, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x08, 0x60, 
  0x06, 0x10, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xC0, 0x0F, 0x00, 0x60, 0x06, 0x00, 0xF0, 0x03, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xF0, 0x03, 0x00, 0x60, 0x06, 0x00, 0xC0, 0x0F, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x60, 
  0x06, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x9F, 0x03, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF9, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x03, 0x07, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xC0, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x06, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8E, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 
  0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 
  0x00, 0x00, 0xE7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xE7, 0x00, 0x00, 0x00, 0x80, 0xC3, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x01, 0x00, 0x00, 0xC0, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0x00, 
  0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x70, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 
  0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1C, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x1C, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 
  0x00, 0x2C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x34, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 
  0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xC0, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x80, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 
  0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xE0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0xF0, 0x03, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x0F, 
  0x30, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xC0, 0x0C, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x18, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x0C, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x3F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x30, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x0E, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xC0, 0x03, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 
  0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x68, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 
  0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x38, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 
  0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x0C, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 
  0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x06, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 
  0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFF, };
#else
// Slim tuner version
#define tuner_width 128
#define tuner_height 48
const uint8_t tuner_bits[] = 

{
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x60, 
  0x06, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xF8, 0x03, 0x60, 0x06, 0xC0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xC0, 0x0F, 0x04, 0x60, 0x06, 0x20, 0xF0, 0x03, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x60, 
  0x06, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFC, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0xC3, 0x01, 0x00, 0x60, 0x06, 0x00, 0x80, 0xC3, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x81, 0x01, 0x00, 0x60, 
  0x06, 0x00, 0x80, 0x81, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 
  0x80, 0x01, 0x00, 0x60, 0x06, 0x00, 0x80, 0x01, 0x1E, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x27, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xE4, 0x01, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0x00, 0x00, 
  0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 
  0x00, 0x00, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xEE, 0x00, 0x00, 0x00, 0x80, 0xE3, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x01, 0x00, 0x00, 0xC0, 0xC1, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x83, 0x03, 0x00, 
  0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x06, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x38, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 
  0x00, 0x4C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x32, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x06, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 
  0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xC0, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x80, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 
  0xF0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xC0, 0x0F, 0x30, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 
  0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x0C, 0x38, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFE, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0F, 0xF0, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x03, 
  0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x0C, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xE0, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x0E, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x30, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0E, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1C, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 
  0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x70, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x68, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 
  0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 
  0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0xC0, 
  0x03, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0xC0, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 
  0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 
  0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0xF8, 0xFF, 
  };


/*{
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x70, 
  0x0E, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xF8, 0x0F, 0x70, 0x0E, 0xF0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xC0, 0x0F, 0x08, 0x70, 0x0E, 0x10, 0xF0, 0x03, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x01, 0x08, 0x70, 
  0x0E, 0x10, 0x80, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFC, 0x01, 0x10, 0x70, 0x0E, 0x08, 0x80, 0x3F, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x03, 0x03, 0x10, 0x70, 0x0E, 0x08, 0xC0, 0xC0, 
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x06, 0x10, 0x70, 
  0x0E, 0x08, 0x60, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 
  0x00, 0x06, 0x10, 0x70, 0x0E, 0x08, 0x60, 0x00, 0x1E, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x4E, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 
  0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x87, 0x00, 0x0C, 0x00, 0x00, 
  0x00, 0x00, 0x30, 0x00, 0xE1, 0x01, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x81, 
  0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x81, 0x03, 0x00, 0x00, 
  0x00, 0x00, 0x70, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x02, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 
  0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x38, 0x00, 0x00, 
  0x00, 0x00, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xEE, 0x00, 0x00, 0x00, 0x80, 0xE3, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xC7, 0x01, 0x00, 0x00, 0xC0, 0xC1, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x83, 0x03, 0x00, 
  0x00, 0x60, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xE0, 0x00, 0x06, 0x00, 0x00, 0x70, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x0E, 0x00, 0x00, 0x38, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 
  0x00, 0x2C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x34, 0x00, 0x00, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x06, 0x03, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x60, 0x00, 
  0x00, 0x03, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x30, 0xC0, 0x00, 0x80, 0x03, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xC0, 0x01, 0x80, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
  0xF0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xE0, 0x0F, 0x30, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 
  0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x0C, 0x38, 0xFC, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFE, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x1C, 
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0F, 0xF0, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x18, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x03, 
  0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x0C, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xE0, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 
  0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x0E, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x30, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0xFE, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1C, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 
  0x86, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x70, 0x00, 0x00, 
  0x00, 0x00, 0xF8, 0x61, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 
  0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x06, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0xC0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 
  0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0xC0, 
  0x03, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 
  0x00, 0x00, 0x00, 0xC0, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 
  0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 
  0x00, 0x80, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0xF8, 0xFF, 
  };*/
#endif
  
// bitmaps (Copych's add-on 2022)
#define s_bt_width  9
#define s_bt_height 16
const uint8_t s_bt_bits[] = {
 0x00,0xfe,0x00,0xfe,0x78,0xfe,0x04,0xfe,0x38,0xfe,0x40,0xfe,
 0x3c,0xfe,0x00,0xfe,0x10,0xfe,0x30,0xfe,0x58,0xfe,0x30,0xfe,
 0x58,0xfe,0x30,0xfe,0x10,0xfe,0x00,0xfe};

#define a_bt_width  9
#define a_bt_height 16
const uint8_t a_bt_bits[] = {
 0x00,0xfe,0x00,0xfe,0x10,0xfe,0x28,0xfe,0x44,0xfe,0x7c,0xfe,
 0x44,0xfe,0x00,0xfe,0x10,0xfe,0x30,0xfe,0x58,0xfe,0x30,0xfe,
 0x58,0xfe,0x30,0xfe,0x10,0xfe,0x00,0xfe};

#define wifi_width  9
#define wifi_height 16
const uint8_t wifi_bits[] = {
 0x00,0xfe,0x00,0xfe,0x44,0xfe,0x54,0xfe,0x54,0xfe,0x28,0xfe,
 0x28,0xfe,0x00,0xfe,0x00,0xfe,0x7c,0xfe,0x82,0xfe,0x38,0xfe,
 0x44,0xfe,0x10,0xfe,0x00,0xfe,0x00,0xfe};

#define comp_width 16
#define comp_height 16
// 'comp', 16x16px Image Copyright 2024 RSquared translated to bitstream using image to cpp... https://github.com/javl/image2cpp
const uint8_t comp_bits[] = {
  /**0x00, 0x00, 0x0e, 0x00, 0x02, 0x00, 0x01, 0x00, 0x21, 0x04, 0x21, 0x04, 0x6e, 0x06, 0x60, 0x06, 
	0xa0, 0x05, 0xa0, 0x75, 0x00, 0x50, 0x00, 0x10, 0x00, 0x70, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00
  */
  0x00, 0x00, 0x08, 0x00, 0x02, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x66, 0x04, 0x60, 0x06, 
	0xa0, 0x06, 0xa0, 0x05, 0x20, 0x7d, 0x00, 0x48, 0x00, 0x78, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00
};

#define dr_width  16
#define dr_height 16
const uint8_t dr_bits[] = {
 0x00,0x00,0x00,0x00,0x7c,0x00,0x88,0x00,0x88,0x00,0x88,0x00,
 0x88,0x00,0x88,0x00,0x88,0x00,0x7c,0x1a,0x00,0x26,0x00,0x02,
 0x00,0x02,0x00,0x02,0x00,0x00,0x00,0x00};

#define md_width  16
#define md_height 16
const uint8_t md_bits[] = {
 0x00,0x00,0x00,0x00,0x04,0x01,0x8c,0x01,0x54,0x01,0x24,0x01,
 0x04,0x21,0x04,0x21,0x04,0x21,0x00,0x3c,0x00,0x22,0x00,0x22,
 0x00,0x22,0x00,0x3c,0x00,0x00,0x00,0x00};

#define rv_width  16
#define rv_height 16
const uint8_t rv_bits[] = {
 0x00,0x00,0x00,0x00,0x7c,0x00,0x84,0x00,0x84,0x00,0x84,0x00,
 0x7c,0x00,0x24,0x00,0x44,0x00,0x84,0x22,0x00,0x22,0x00,0x22,
 0x00,0x14,0x00,0x08,0x00,0x00,0x00,0x00};

#define dy_width  16
#define dy_height 16
const uint8_t dy_bits[] = {
 0x00,0x00,0x00,0x00,0x7c,0x00,0x88,0x00,0x88,0x00,0x88,0x00,
 0x88,0x00,0x88,0x00,0x88,0x22,0x7c,0x22,0x00,0x22,0x00,0x3c,
 0x00,0x20,0x00,0x1c,0x00,0x00,0x00,0x00};

#define chrg_width  9
#define chrg_height 16
const uint8_t chrg_bits[] = {
 0x00,0xfe,0x00,0xfe,0x00,0xfe,0xf8,0xfe,0x78,0xfe,0x3c,0xfe,
 0x1c,0xfe,0x7e,0xfe,0x38,0xfe,0x18,0xfe,0x0c,0xfe,0x04,0xfe,
 0x02,0xfe,0x00,0xfe,0x00,0xfe,0x00,0xfe};
