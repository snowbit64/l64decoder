// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTransformGroup
// Entry Point: 0099d6b0
// Size: 140 bytes
// Signature: undefined __thiscall addTransformGroup(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1)


/* Bt2ScenegraphPhysicsContext::addTransformGroup(TransformGroup*) */

void __thiscall
Bt2ScenegraphPhysicsContext::addTransformGroup
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1)

{
  long lVar1;
  TransformGroup *pTVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = RawTransformGroup::getPhysicsObject();
  if ((*(byte *)(lVar1 + 8) & 1) == 0) {
    addSingleTransformGroup(this,param_1);
    lVar1 = *(long *)(param_1 + 0x28);
    lVar3 = *(long *)(param_1 + 0x30);
    if ((int)((ulong)(lVar3 - lVar1) >> 3) != 0) {
      uVar4 = 0;
      do {
        pTVar2 = *(TransformGroup **)(lVar1 + uVar4 * 8);
        if (((byte)pTVar2[0x10] >> 5 & 1) != 0) {
          addTransformGroup(this,pTVar2);
          lVar1 = *(long *)(param_1 + 0x28);
          lVar3 = *(long *)(param_1 + 0x30);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < ((ulong)(lVar3 - lVar1) >> 3 & 0xffffffff));
    }
  }
  return;
}


