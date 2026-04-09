// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: switchToAnim
// Entry Point: 00899af4
// Size: 104 bytes
// Signature: undefined __thiscall switchToAnim(PedestrianAnimationBlender * this, basic_string * param_1, float param_2)


/* PedestrianAnimationBlender::switchToAnim(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, float) */

void __thiscall
PedestrianAnimationBlender::switchToAnim
          (PedestrianAnimationBlender *this,basic_string *param_1,float param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (*(CharacterSet **)(this + 0x58) != (CharacterSet *)0x0) {
    pcVar2 = *(char **)(param_1 + 4);
    if ((*(byte *)param_1 & 1) == 0) {
      pcVar2 = (char *)((long)param_1 + 1);
    }
    iVar1 = CharacterSet::getNamedClipIndex(*(CharacterSet **)(this + 0x58),pcVar2);
    if (iVar1 != -1) {
      switchToAnim(this,iVar1,param_2);
      return;
    }
  }
  return;
}


