// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeChildShape
// Entry Point: 00f5fd84
// Size: 144 bytes
// Signature: undefined __thiscall removeChildShape(btCompoundShape * this, btCollisionShape * param_1)


/* btCompoundShape::removeChildShape(btCollisionShape*) */

void __thiscall btCompoundShape::removeChildShape(btCompoundShape *this,btCollisionShape *param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(uint *)(this + 0x24);
  *(int *)(this + 0x68) = *(int *)(this + 0x68) + 1;
  if (0 < (int)*(uint *)(this + 0x24)) {
    do {
      if (*(btCollisionShape **)(*(long *)(this + 0x30) + (uVar2 - 1 & 0xffffffff) * 0x58 + 0x40) ==
          param_1) {
        removeChildShapeByIndex(this,(int)uVar2 + -1);
      }
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00f5fe10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x88))(this);
  return;
}


