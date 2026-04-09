// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TextLine
// Entry Point: 00aefd6c
// Size: 300 bytes
// Signature: undefined __thiscall TextLine(TextLine * this, TextLine * param_1)


/* TextLine::TextLine(TextLine const&) */

void __thiscall TextLine::TextLine(TextLine *this,TextLine *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)this);
                    /* try { // try from 00aefda0 to 00aefda7 has its CatchHandler @ 00af0024 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x18));
                    /* try { // try from 00aefdb0 to 00aefdbb has its CatchHandler @ 00af001c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x30));
                    /* try { // try from 00aefdc4 to 00aefdcf has its CatchHandler @ 00af0014 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x48));
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(this + 0x68) = uVar2;
  *(undefined8 *)(this + 0x60) = uVar1;
                    /* try { // try from 00aefde8 to 00aefdf3 has its CatchHandler @ 00aeffac */
  std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::vector
            ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0x78),
             (vector *)(param_1 + 0x78));
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
                    /* try { // try from 00aefe04 to 00aefe0b has its CatchHandler @ 00aeff9c */
  std::__ndk1::vector<TextLine,std::__ndk1::allocator<TextLine>>::vector
            ((vector<TextLine,std::__ndk1::allocator<TextLine>> *)(this + 0x98),
             (vector *)(param_1 + 0x98));
                    /* try { // try from 00aefe14 to 00aefe1b has its CatchHandler @ 00aeff7c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xb0));
                    /* try { // try from 00aefe24 to 00aefe2b has its CatchHandler @ 00aeff64 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 200));
                    /* try { // try from 00aefe34 to 00aefe3b has its CatchHandler @ 00aeff44 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xe0));
                    /* try { // try from 00aefe44 to 00aefe4b has its CatchHandler @ 00aeff24 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0xf8));
                    /* try { // try from 00aefe54 to 00aefe5b has its CatchHandler @ 00aeff04 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x110));
                    /* try { // try from 00aefe64 to 00aefe6b has its CatchHandler @ 00aefee4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x128));
                    /* try { // try from 00aefe74 to 00aefe77 has its CatchHandler @ 00aefe98 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(this + 0x140));
  return;
}


