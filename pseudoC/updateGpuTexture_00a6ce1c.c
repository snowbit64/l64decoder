// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateGpuTexture
// Entry Point: 00a6ce1c
// Size: 88 bytes
// Signature: undefined __thiscall updateGpuTexture(DensityAnimationMap * this, IRenderDevice * param_1)


/* DensityAnimationMap::updateGpuTexture(IRenderDevice*) */

void __thiscall
DensityAnimationMap::updateGpuTexture(DensityAnimationMap *this,IRenderDevice *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
  (**(code **)(*plVar2 + 0x120))(plVar2,1,this + 0x88,0,0,0,1);
  uVar1 = *(undefined8 *)(this + 0x80);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(this + 0x88);
  *(undefined8 *)(this + 0x88) = uVar1;
  return;
}


