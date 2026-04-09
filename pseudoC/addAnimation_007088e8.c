// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addAnimation
// Entry Point: 007088e8
// Size: 204 bytes
// Signature: undefined __thiscall addAnimation(AnimalAnimationSystemSource * this, char * param_1, uint param_2, char * param_3, char * param_4, float param_5, float param_6, float param_7, float param_8)


/* AnimalAnimationSystemSource::addAnimation(char const*, unsigned int, char const*, char const*,
   float, float, float, float) */

void __thiscall
AnimalAnimationSystemSource::addAnimation
          (AnimalAnimationSystemSource *this,char *param_1,uint param_2,char *param_3,char *param_4,
          float param_5,float param_6,float param_7,float param_8)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = StringUtil::hash(param_1);
  uVar1 = *(uint *)(this + 0x308);
  *(undefined4 *)(this + (ulong)uVar1 * 0x70 + 0x310) = uVar2;
  *(uint *)(this + (ulong)uVar1 * 0x70 + 0x348) = param_2;
  *(undefined8 *)(this + (ulong)uVar1 * 0x70 + 0x34c) = 0xffffffffffffffff;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + (ulong)uVar1 * 0x70 + 0x318));
  if (param_4 != (char *)0x0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(this + (ulong)*(uint *)(this + 0x308) * 0x70 + 0x330));
  }
  uVar1 = *(uint *)(this + 0x308);
  *(uint *)(this + 0x308) = uVar1 + 1;
  *(float *)(this + (ulong)uVar1 * 0x70 + 0x35c) = param_7;
  *(float *)(this + (ulong)uVar1 * 0x70 + 0x360) = param_8;
  *(float *)(this + (ulong)uVar1 * 0x70 + 0x354) = param_5;
  *(float *)(this + (ulong)uVar1 * 0x70 + 0x358) = param_6;
  return;
}


