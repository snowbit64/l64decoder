// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addChildShape
// Entry Point: 00f600c8
// Size: 460 bytes
// Signature: undefined __thiscall addChildShape(btCompoundShape * this, btTransform * param_1, btCollisionShape * param_2)


/* btCompoundShape::addChildShape(btTransform const&, btCollisionShape*) */

void __thiscall
btCompoundShape::addChildShape(btCompoundShape *this,btTransform *param_1,btCollisionShape *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  btCollisionShape *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = (undefined8 *)0x0;
  *(int *)(this + 0x68) = *(int *)(this + 0x68) + 1;
  uStack_98 = *(undefined8 *)(param_1 + 8);
  local_a0 = *(undefined8 *)param_1;
  uStack_88 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = *(undefined8 *)(param_1 + 0x10);
  local_58 = *(undefined4 *)(param_2 + 8);
  uStack_78 = *(undefined8 *)(param_1 + 0x28);
  local_80 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = *(undefined8 *)(param_1 + 0x30);
  local_60 = param_2;
  local_54 = (**(code **)(*(long *)param_2 + 0x60))(param_2);
  (**(code **)(*(long *)param_2 + 0x10))(param_2,param_1,&local_b0,&local_c0);
  if (local_b0 < *(float *)(this + 0x40)) {
    *(float *)(this + 0x40) = local_b0;
  }
  if (*(float *)(this + 0x50) < local_c0) {
    *(float *)(this + 0x50) = local_c0;
  }
  if (local_ac < *(float *)(this + 0x44)) {
    *(float *)(this + 0x44) = local_ac;
  }
  if (*(float *)(this + 0x54) < fStack_bc) {
    *(float *)(this + 0x54) = fStack_bc;
  }
  if (local_a8 < *(float *)(this + 0x48)) {
    *(float *)(this + 0x48) = local_a8;
  }
  if (*(float *)(this + 0x58) < fStack_b8) {
    *(float *)(this + 0x58) = fStack_b8;
  }
  puVar3 = *(undefined8 **)(this + 0x60);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)puVar3[1];
    iVar1 = *(int *)(this + 0x24);
    if (puVar4 == (undefined8 *)0x0) {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      puVar4 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x38,0x10);
      puVar4[6] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
    }
    else {
      puVar3[1] = 0;
    }
    puVar4[4] = 0;
    puVar4[5] = (long)iVar1;
    puVar4[6] = 0;
    puVar4[1] = CONCAT44(uStack_a4,local_a8);
    *puVar4 = CONCAT44(local_ac,local_b0);
    puVar4[3] = CONCAT44(uStack_b4,fStack_b8);
    puVar4[2] = CONCAT44(fStack_bc,local_c0);
    FUN_00f42680(puVar3,*puVar3,puVar4);
    *(int *)((long)puVar3 + 0x14) = *(int *)((long)puVar3 + 0x14) + 1;
    local_50 = puVar4;
  }
  btAlignedObjectArray<btCompoundShapeChild>::push_back
            ((btAlignedObjectArray<btCompoundShapeChild> *)(this + 0x20),
             (btCompoundShapeChild *)&local_a0);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


