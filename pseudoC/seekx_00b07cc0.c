// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: seekx
// Entry Point: 00b07cc0
// Size: 136 bytes
// Signature: undefined __thiscall seekx(VorbisFileWrap * this, longlong param_1, int param_2)


/* AudioLoaderOGG::VorbisFileWrap::seekx(long long, int) */

int __thiscall
AudioLoaderOGG::VorbisFileWrap::seekx(VorbisFileWrap *this,longlong param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(this + 0x10);
  if (plVar2 == (long *)0x0) {
    return -1;
  }
  if (param_2 != 0) {
    if (param_2 == 1) {
      param_1 = *(long *)(this + 8) + param_1;
    }
    else {
      if (param_2 != 2) {
        param_1 = *(longlong *)(this + 8);
        goto LAB_00b07d24;
      }
      lVar3 = (**(code **)(*plVar2 + 0x48))();
      param_1 = lVar3 - param_1;
      plVar2 = *(long **)(this + 0x10);
    }
  }
  *(longlong *)(this + 8) = param_1;
LAB_00b07d24:
  uVar1 = (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return (uVar1 & 1) - 1;
}


