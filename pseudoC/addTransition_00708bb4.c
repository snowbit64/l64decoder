// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTransition
// Entry Point: 00708bb4
// Size: 236 bytes
// Signature: undefined __thiscall addTransition(AnimalAnimationSystemSource * this, char * param_1, char * param_2, char * param_3, float param_4, float param_5, float param_6)


/* AnimalAnimationSystemSource::addTransition(char const*, char const*, char const*, float, float,
   float) */

uint __thiscall
AnimalAnimationSystemSource::addTransition
          (AnimalAnimationSystemSource *this,char *param_1,char *param_2,char *param_3,float param_4
          ,float param_5,float param_6)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  
  if (param_3 != (char *)0x0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + (ulong)*(uint *)(this + 0x1110) * 0x60 + 0x1148));
  }
  uVar1 = *(uint *)(this + 0x1110);
  *(undefined4 *)(this + (ulong)uVar1 * 0x60 + 0x1118 + 0x50) = 0xffffffff;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + (ulong)uVar1 * 0x60 + 0x1118));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + (ulong)*(uint *)(this + 0x1110) * 0x60 + 0x1130));
  uVar3 = StringUtil::hash(param_1);
  *(undefined4 *)(this + (ulong)*(uint *)(this + 0x1110) * 0x60 + 0x1160) = uVar3;
  uVar3 = StringUtil::hash(param_2);
  uVar1 = *(uint *)(this + 0x1110);
  lVar2 = (ulong)uVar1 * 0x60;
  *(uint *)(this + 0x1110) = uVar1 + 1;
  *(float *)(this + lVar2 + 0x116c) = param_4;
  *(float *)(this + lVar2 + 0x1170) = param_5;
  *(float *)(this + lVar2 + 0x1174) = param_6;
  *(undefined4 *)(this + lVar2 + 0x1164) = uVar3;
  return uVar1;
}


