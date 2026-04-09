// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeChar
// Entry Point: 006d5b20
// Size: 320 bytes
// Signature: undefined __thiscall removeChar(Console * this, bool param_1)


/* Console::removeChar(bool) */

void __thiscall Console::removeChar(Console *this,bool param_1)

{
  Console *pCVar1;
  Console *__dest;
  ulong uVar2;
  Console CVar3;
  size_t __n;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  Console *pCVar8;
  Console *pCVar9;
  
  pCVar9 = this + 0x80;
  CVar3 = *pCVar9;
  uVar4 = *(ulong *)(this + 0x88);
  bVar5 = (byte)CVar3 & 1;
  bVar6 = (byte)CVar3 >> 1;
  uVar2 = (ulong)bVar6;
  if (((byte)CVar3 & 1) != 0) {
    uVar2 = uVar4;
  }
  if (uVar2 != 0) {
    uVar7 = (ulong)*(uint *)(this + 0xe8);
    if (param_1) {
      if (uVar7 < uVar2) {
        pCVar8 = *(Console **)(this + 0x90);
        if (((byte)CVar3 & 1) == 0) {
          pCVar8 = this + 0x81;
        }
        __dest = pCVar8 + uVar7;
        pCVar1 = __dest + 1;
        if (pCVar1 != pCVar8 + uVar2) {
          CVar3 = *__dest;
          __n = (long)(pCVar8 + uVar2) - (long)pCVar1;
          if (__n != 0) {
            memmove(__dest,pCVar1,__n);
          }
          __dest[__n] = CVar3;
          uVar4 = *(ulong *)(this + 0x88);
          bVar5 = (byte)this[0x80] & 1;
          bVar6 = (byte)this[0x80] >> 1;
        }
        if (bVar5 != 0) {
          bVar6 = (byte)uVar4;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::resize((ulong)pCVar9,bVar6 - 1);
      }
    }
    else if (*(uint *)(this + 0xe8) != 0) {
      pCVar8 = *(Console **)(this + 0x90);
      if (((byte)CVar3 & 1) == 0) {
        pCVar8 = this + 0x81;
      }
      if (uVar2 != uVar7) {
        pCVar1 = pCVar8 + uVar7;
        pCVar8 = pCVar8 + (uVar2 - (long)pCVar1);
        CVar3 = pCVar1[-1];
        if (pCVar8 != (Console *)0x0) {
          memmove(pCVar1 + -1,pCVar1,(size_t)pCVar8);
        }
        (pCVar1 + -1)[(long)pCVar8] = CVar3;
        uVar4 = *(ulong *)(this + 0x88);
        bVar5 = (byte)this[0x80] & 1;
        bVar6 = (byte)this[0x80] >> 1;
      }
      if (bVar5 != 0) {
        bVar6 = (byte)uVar4;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      resize((ulong)pCVar9,bVar6 - 1);
      *(int *)(this + 0xe8) = *(int *)(this + 0xe8) + -1;
    }
  }
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0x108) = 0xffffffff;
  return;
}


