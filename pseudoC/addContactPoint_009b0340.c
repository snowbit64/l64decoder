// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addContactPoint
// Entry Point: 009b0340
// Size: 228 bytes
// Signature: undefined __thiscall addContactPoint(WheelManifoldResult * this, btVector3 * param_1, btVector3 * param_2, float param_3)


/* Bt2WheelConvexCollisionAlgorithm::WheelManifoldResult::addContactPoint(btVector3 const&,
   btVector3 const&, float) */

void __thiscall
Bt2WheelConvexCollisionAlgorithm::WheelManifoldResult::addContactPoint
          (WheelManifoldResult *this,btVector3 *param_1,btVector3 *param_2,float param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 8);
  lVar4 = *(long *)(*(long *)(this + 0x10) + 8);
  fVar6 = *(float *)(lVar4 + 0x58);
  *(float *)(lVar3 + 0x31c) = fVar6;
  if (param_3 <= fVar6) {
    uStack_58 = *(undefined8 *)(param_1 + 8);
    uStack_60 = *(undefined8 *)param_1;
    uStack_68 = *(undefined8 *)(param_2 + 8);
    local_70 = *(undefined8 *)param_2;
    plVar2 = *(long **)(this + 0x38);
    plVar2[1] = lVar3;
    lVar3 = 0x18;
    if (this[0x74] != (WheelManifoldResult)0x0) {
      lVar3 = 0x10;
    }
    uVar5 = *(undefined8 *)((long)plVar2 + lVar3);
    *(undefined8 *)((long)plVar2 + lVar3) = *(undefined8 *)(this + 0x18);
    lVar3 = *(long *)(this + 8);
    *(float *)(lVar3 + 0x31c) = fVar6 + fVar6;
    *(float *)(lVar3 + 800) = fVar6;
    (**(code **)(*plVar2 + 0x20))(plVar2,&uStack_60,&local_70);
    *(undefined4 *)(*(long *)(this + 8) + 0x31c) = *(undefined4 *)(lVar4 + 0x58);
    lVar3 = 0x18;
    if (this[0x74] != (WheelManifoldResult)0x0) {
      lVar3 = 0x10;
    }
    *(undefined8 *)(*(long *)(this + 0x38) + lVar3) = uVar5;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


