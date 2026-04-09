// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: touchCancelled
// Entry Point: 00b23090
// Size: 112 bytes
// Signature: undefined __thiscall touchCancelled(InputDeviceBase * this, uint param_1)


/* InputDeviceBase::touchCancelled(unsigned int) */

void __thiscall InputDeviceBase::touchCancelled(InputDeviceBase *this,uint param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(this + 8);
  if (*(long *)(this + 0x10) != lVar2) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(lVar2 + uVar3 * 8);
      (**(code **)(*plVar1 + 0x20))(0xbf800000,0xbf800000,plVar1,0,1,param_1);
      lVar2 = *(long *)(this + 8);
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(*(long *)(this + 0x10) - lVar2 >> 3));
  }
  return;
}


