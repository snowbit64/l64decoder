// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGroupImpl
// Entry Point: 00a4f26c
// Size: 140 bytes
// Signature: undefined __thiscall setGroupImpl(AudioSourceSample * this, uint param_1)


/* AudioSourceSample::setGroupImpl(unsigned int) */

void __thiscall AudioSourceSample::setGroupImpl(AudioSourceSample *this,uint param_1)

{
  AudioSourceSample *pAVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = *(uint *)(this + 0xb0);
  if (uVar3 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      pAVar1 = this + 0xb4;
      if (1 < uVar3) {
        pAVar1 = *(AudioSourceSample **)(this + 0xf0);
      }
      plVar2 = *(long **)(pAVar1 + lVar4 + 0x30);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x98))(plVar2,param_1);
        uVar3 = *(uint *)(this + 0xb0);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x38;
    } while (uVar5 < uVar3);
  }
  return;
}


