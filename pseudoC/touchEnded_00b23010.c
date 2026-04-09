// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: touchEnded
// Entry Point: 00b23010
// Size: 128 bytes
// Signature: undefined __cdecl touchEnded(uint param_1, float param_2, float param_3, double param_4, bool param_5)


/* InputDeviceBase::touchEnded(unsigned int, float, float, double, bool) */

void InputDeviceBase::touchEnded
               (uint param_1,float param_2,float param_3,double param_4,bool param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = (ulong)param_1;
  lVar3 = *(long *)(uVar1 + 8);
  if (*(long *)(uVar1 + 0x10) != lVar3) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(lVar3 + uVar4 * 8);
      (**(code **)(*plVar2 + 0x20))(param_2,param_3,plVar2,0,1,param_5);
      lVar3 = *(long *)(uVar1 + 8);
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(*(long *)(uVar1 + 0x10) - lVar3 >> 3));
  }
  return;
}


