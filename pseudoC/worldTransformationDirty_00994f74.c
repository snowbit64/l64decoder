// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: worldTransformationDirty
// Entry Point: 00994f74
// Size: 164 bytes
// Signature: undefined __thiscall worldTransformationDirty(Bt2PhysicsRBObject * this, ScenegraphNode * param_1, uint param_2)


/* Bt2PhysicsRBObject::worldTransformationDirty(ScenegraphNode*, unsigned int) */

void __thiscall
Bt2PhysicsRBObject::worldTransformationDirty
          (Bt2PhysicsRBObject *this,ScenegraphNode *param_1,uint param_2)

{
  uint uVar1;
  Bt2PhysicsRBObject *pBVar2;
  byte *pbVar3;
  
  if ((*(Bt2ScenegraphPhysicsContext **)(this + 0x10) != (Bt2ScenegraphPhysicsContext *)0x0) &&
     ((param_2 != 1 || ((*(uint *)(this + 8) >> 8 & 1) != 0)))) {
    if ((*(uint *)(this + 8) & 0x600) == 0x400) {
      if (((*(long *)(this + 0x30) != 0) &&
          (pbVar3 = *(byte **)(*(long *)(this + 0x30) + 0x108), pbVar3 != (byte *)0x0)) &&
         ((*pbVar3 & 1) != 0)) {
        pBVar2 = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
        uVar1 = *(uint *)(pBVar2 + 0x20);
        *(uint *)(pBVar2 + 0x20) = uVar1 | 0x20000000;
        if (((uVar1 == 0) &&
            (*(Bt2ScenegraphPhysicsContext **)(pBVar2 + 0x10) != (Bt2ScenegraphPhysicsContext *)0x0)
            ) && (*(long *)(pBVar2 + 0x30) != 0)) {
          Bt2ScenegraphPhysicsContext::enqueueTransformationUpdate
                    (*(Bt2ScenegraphPhysicsContext **)(pBVar2 + 0x10),pBVar2);
          return;
        }
      }
    }
    else {
      uVar1 = *(uint *)(this + 0x20);
      *(uint *)(this + 0x20) = uVar1 | 0x10000000;
      if ((uVar1 == 0) && (*(long *)(this + 0x30) != 0)) {
        Bt2ScenegraphPhysicsContext::enqueueTransformationUpdate
                  (*(Bt2ScenegraphPhysicsContext **)(this + 0x10),this);
        return;
      }
    }
  }
  return;
}


