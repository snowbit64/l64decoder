// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IR_Struct
// Entry Point: 00c51400
// Size: 152 bytes
// Signature: undefined __thiscall IR_Struct(IR_Struct * this, IR_Struct * param_1)


/* IR_Struct::IR_Struct(IR_Struct const&) */

ulong __thiscall IR_Struct::IR_Struct(IR_Struct *this,IR_Struct *param_1)

{
  type tVar1;
  ulong uVar2;
  
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(IR_Struct **)(this + 0x58) = this + 0x60;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x40) = 0;
                    /* try { // try from 00c5144c to 00c5146f has its CatchHandler @ 00c51498 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)this,
            (basic_string *)param_1);
  uVar2 = std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(this + 0x18),(basic_string *)(param_1 + 0x18));
  if (this != param_1) {
    tVar1 = std::__ndk1::vector<IR_StructField,std::__ndk1::allocator<IR_StructField>>::
            assign<IR_StructField*>
                      ((vector<IR_StructField,std::__ndk1::allocator<IR_StructField>> *)
                       (this + 0x30),*(IR_StructField **)(param_1 + 0x30),
                       *(IR_StructField **)(param_1 + 0x38));
    uVar2 = (ulong)tVar1;
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined2 *)(this + 0x50) = *(undefined2 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x52) = *(undefined4 *)(param_1 + 0x52);
  return uVar2;
}


