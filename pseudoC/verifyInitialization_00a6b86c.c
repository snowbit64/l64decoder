// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: verifyInitialization
// Entry Point: 00a6b86c
// Size: 112 bytes
// Signature: undefined __thiscall verifyInitialization(DensityAnimationMap * this, IRenderDevice * param_1)


/* DensityAnimationMap::verifyInitialization(IRenderDevice*) */

bool __thiscall
DensityAnimationMap::verifyInitialization(DensityAnimationMap *this,IRenderDevice *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(this + 0x80);
  if (plVar1 == (long *)0x0) {
    if (this[0x78] == (DensityAnimationMap)0x0) {
      plVar1 = (long *)0x0;
    }
    else {
      uVar2 = allocateGpuResources(this,param_1);
      plVar1 = *(long **)(this + 0x80);
      if ((uVar2 & 1) == 0) {
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = (long *)0x0;
        *(undefined8 *)(this + 0x80) = 0;
        this[0x78] = (DensityAnimationMap)0x0;
      }
    }
  }
  return plVar1 != (long *)0x0;
}


