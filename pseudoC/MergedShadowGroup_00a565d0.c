// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MergedShadowGroup
// Entry Point: 00a565d0
// Size: 64 bytes
// Signature: undefined __thiscall ~MergedShadowGroup(MergedShadowGroup * this)


/* LightSource::MergedShadowGroup::~MergedShadowGroup() */

void __thiscall LightSource::MergedShadowGroup::~MergedShadowGroup(MergedShadowGroup *this)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar1 = *(long **)this;
  if ((int)((ulong)(*(long *)(this + 8) - (long)plVar1) >> 3) == 0) {
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
  else {
    uVar2 = (ulong)(*(long *)(this + 8) - (long)plVar1) >> 3 & 0xffffffff;
    plVar3 = plVar1;
    do {
      uVar2 = uVar2 - 1;
      *(undefined8 *)(*plVar3 + 0x158) = 0;
      plVar3 = plVar3 + 1;
    } while (uVar2 != 0);
  }
  *(long **)(this + 8) = plVar1;
  operator_delete(plVar1);
  return;
}


