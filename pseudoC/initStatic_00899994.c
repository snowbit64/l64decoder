// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initStatic
// Entry Point: 00899994
// Size: 196 bytes
// Signature: undefined __thiscall initStatic(PedestrianAnimationBlender * this, basic_string * param_1, CharacterSet * param_2)


/* PedestrianAnimationBlender::initStatic(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, CharacterSet*) */

void __thiscall
PedestrianAnimationBlender::initStatic
          (PedestrianAnimationBlender *this,basic_string *param_1,CharacterSet *param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  *(undefined8 *)(this + 0xc) = 0;
  uVar3 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x11) = 0;
  uVar4 = *(ulong *)(param_2 + 0x54);
  uVar1 = *(uint *)(param_2 + 0x5c);
  *(undefined8 *)this = uVar3;
  *(undefined4 *)(this + 0x60) = 0x3f800000;
  *(undefined4 *)(this + 8) = 0x3f800000;
  this[0x75] = (PedestrianAnimationBlender)0x1;
  *(CharacterSet **)(this + 0x58) = param_2;
  *(ulong *)(param_2 + 0x54) = uVar4 | 0x400000004;
  *(uint *)(param_2 + 0x5c) = uVar1 | 4;
  CharacterSet::enable(param_2,0);
  CharacterSet::setBlendWeight(*(CharacterSet **)(this + 0x58),0,*(float *)(this + 0x60));
  CharacterSet::setSpeedScale(*(CharacterSet **)(this + 0x58),0,1.0);
  pcVar2 = *(char **)(param_1 + 4);
  if ((*(byte *)param_1 & 1) == 0) {
    pcVar2 = (char *)((long)param_1 + 1);
  }
  uVar1 = CharacterSet::getNamedClipIndex(*(CharacterSet **)(this + 0x58),pcVar2);
  if (uVar1 != 0xffffffff) {
    CharacterSet::assignClip(*(CharacterSet **)(this + 0x58),0,uVar1);
    return;
  }
  return;
}


