// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: read
// Entry Point: 00b07bd4
// Size: 100 bytes
// Signature: undefined __thiscall read(VorbisFileWrap * this, void * param_1, ulong param_2, ulong param_3)


/* AudioLoaderOGG::VorbisFileWrap::read(void*, unsigned long, unsigned long) */

long * __thiscall
AudioLoaderOGG::VorbisFileWrap::read(VorbisFileWrap *this,void *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  
  plVar3 = (long *)0x0;
  if (((param_2 != 0) && (param_3 != 0)) &&
     (plVar3 = *(long **)(this + 0x10), plVar3 != (long *)0x0)) {
    uVar4 = (uint)param_2;
    uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,param_1,(int)param_3 * uVar4);
    if ((int)uVar2 < 0) {
      plVar3 = (long *)0x0;
    }
    else {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar2 / uVar4;
      }
      plVar3 = (long *)(ulong)uVar1;
      *(ulong *)(this + 8) = *(long *)(this + 8) + (ulong)uVar2;
    }
  }
  return plVar3;
}


