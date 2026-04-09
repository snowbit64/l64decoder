// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFilterParameter
// Entry Point: 00e3caf8
// Size: 180 bytes
// Signature: undefined __thiscall getFilterParameter(Soloud * this, uint param_1, uint param_2, uint param_3)


/* SoLoud::Soloud::getFilterParameter(unsigned int, unsigned int, unsigned int) */

undefined4 __thiscall
SoLoud::Soloud::getFilterParameter(Soloud *this,uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  
  if (7 < param_2) {
    return 0x3f800000;
  }
  if (param_1 == 0) {
    lockAudioMutex();
    plVar2 = *(long **)(this + (ulong)param_2 * 8 + 0x2158);
    if (plVar2 == (long *)0x0) {
      uVar3 = 0x3f800000;
      goto LAB_00e3cb8c;
    }
  }
  else {
    iVar1 = getVoiceFromHandle(this,param_1);
    if (iVar1 == -1) {
      return 0x3f800000;
    }
    lockAudioMutex();
    uVar3 = 0x3f800000;
    if ((*(long *)(this + (long)iVar1 * 8 + 0xa0) == 0) ||
       (plVar2 = *(long **)(*(long *)(this + (long)iVar1 * 8 + 0xa0) + (ulong)param_2 * 8 + 0x188),
       uVar3 = 0x3f800000, plVar2 == (long *)0x0)) goto LAB_00e3cb8c;
  }
  uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_3);
LAB_00e3cb8c:
  unlockAudioMutex();
  return uVar3;
}


