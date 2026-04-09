// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IR_Function
// Entry Point: 00c28608
// Size: 272 bytes
// Signature: undefined __thiscall IR_Function(IR_Function * this, IR_TypeSet * param_1, char * param_2, char * param_3, SHC_String * param_4)


/* IR_Function::IR_Function(IR_TypeSet*, char const*, char const*, SHC_String const*) */

void __thiscall
IR_Function::IR_Function
          (IR_Function *this,IR_TypeSet *param_1,char *param_2,char *param_3,SHC_String *param_4)

{
  long lVar1;
  undefined4 local_78 [2];
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
                    /* try { // try from 00c2867c to 00c28683 has its CatchHandler @ 00c28718 */
  IR_RegisterSet::IR_RegisterSet((IR_RegisterSet *)(this + 0x98));
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(IR_Function **)(this + 0xd8) = this + 0xe0;
                    /* try { // try from 00c286a4 to 00c286e3 has its CatchHandler @ 00c28720 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)this);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x18));
  *(SHC_String **)(this + 0x30) = param_4;
  *(IR_TypeSet **)(this + 0x38) = param_1;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  local_78[0] = 5;
  local_70 = 0;
  storeConst(this,(IR_Const *)local_78);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


