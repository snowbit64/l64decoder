// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IR_Struct
// Entry Point: 00c51320
// Size: 128 bytes
// Signature: undefined __thiscall IR_Struct(IR_Struct * this, char * param_1, IR_QualFlags param_2)


/* IR_Struct::IR_Struct(char const*, IR_QualFlags) */

void __thiscall IR_Struct::IR_Struct(IR_Struct *this,char *param_1,IR_QualFlags param_2)

{
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(IR_Struct **)(this + 0x58) = this + 0x60;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x40) = 0;
                    /* try { // try from 00c51368 to 00c51377 has its CatchHandler @ 00c513a0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)this);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x18));
  *(undefined8 *)(this + 0x4d) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  this[0x55] = (IR_Struct)(((byte)(param_2 >> 9) ^ 0xff) & 1);
  return;
}


