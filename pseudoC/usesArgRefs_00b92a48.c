// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: usesArgRefs
// Entry Point: 00b92a48
// Size: 276 bytes
// Signature: undefined __thiscall usesArgRefs(Preprocessor * this, Macro * param_1)


/* Preprocessor::usesArgRefs(Preprocessor::Macro const*) */

undefined8 __thiscall Preprocessor::usesArgRefs(Preprocessor *this,Macro *param_1)

{
  ulong uVar1;
  Macro *pMVar2;
  Macro MVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  ulong uVar8;
  Macro *pMVar9;
  uint uVar10;
  
  sVar6 = strlen(*(char **)(*(long *)(this + 0x30) + 0x28));
  pMVar9 = param_1 + 0x18;
  MVar3 = *pMVar9;
  uVar8 = (ulong)(byte)MVar3;
  bVar4 = ((byte)MVar3 & 1) == 0;
  uVar7 = (ulong)((byte)MVar3 >> 1);
  if (!bVar4) {
    uVar7 = *(ulong *)(param_1 + 0x20);
  }
  if (uVar7 != 0) {
    uVar7 = 0;
    uVar10 = 0;
    do {
      pMVar2 = param_1 + 0x19;
      if (!bVar4) {
        pMVar2 = *(Macro **)(param_1 + 0x28);
      }
      if (pMVar2[uVar7] == *(Macro *)(*(long *)(this + 0x30) + 0x30)) {
        uVar10 = uVar10 + 1;
      }
      else {
        iVar5 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                compare((ulong)pMVar9,uVar7,(char *)(sVar6 & 0xffffffff));
        if (iVar5 == 0) {
          uVar8 = (ulong)(byte)param_1[0x18];
          pMVar2 = param_1 + 0x19;
          if (((byte)param_1[0x18] & 1) != 0) {
            pMVar2 = *(Macro **)(param_1 + 0x28);
          }
          if ((byte)pMVar2[uVar10 + (int)sVar6] - 0x31 < 9) {
            return 1;
          }
        }
        else {
          uVar8 = (ulong)(byte)*pMVar9;
        }
      }
      uVar10 = uVar10 + 1;
      uVar7 = (ulong)uVar10;
      bVar4 = (uVar8 & 1) == 0;
      uVar1 = uVar8 >> 1;
      if (!bVar4) {
        uVar1 = *(ulong *)(param_1 + 0x20);
      }
    } while (uVar7 < uVar1);
  }
  return 0;
}


