// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueEnableWakeUpReport
// Entry Point: 009ab930
// Size: 84 bytes
// Signature: undefined __thiscall enqueueEnableWakeUpReport(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, bool param_2)


/* Bt2ScenegraphPhysicsContext::enqueueEnableWakeUpReport(TransformGroup*, bool) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueEnableWakeUpReport
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,bool param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = RawTransformGroup::getPhysicsObject();
  if ((*(byte *)(lVar1 + 8) >> 3 & 1) != 0) {
    lVar1 = RawTransformGroup::getPhysicsObject();
    uVar2 = 0x80000;
    if (!param_2) {
      uVar2 = 0;
    }
    *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) & 0xfff7ffff | uVar2;
  }
  return;
}


