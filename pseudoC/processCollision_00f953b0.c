// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processCollision
// Entry Point: 00f953b0
// Size: 616 bytes
// Signature: undefined __thiscall processCollision(btBoxBoxCollisionAlgorithm * this, btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* btBoxBoxCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
btBoxBoxCollisionAlgorithm::processCollision
          (btBoxBoxCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  btPersistentManifold *this_00;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  dContactGeom *in_stack_fffffffffffffe30;
  int in_stack_fffffffffffffe38;
  int iStack_188;
  float fStack_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  float local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  float local_e0;
  undefined4 local_dc;
  btVector3 abStack_d8 [16];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x18) != 0) {
    plVar7 = *(long **)(param_1 + 8);
    plVar6 = *(long **)(param_2 + 8);
    *(long *)(param_4 + 8) = *(long *)(this + 0x18);
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    local_100 = 0x5d5e0b6b;
    puVar4 = *(undefined8 **)(param_2 + 0x18);
    uStack_178 = puVar5[1];
    local_180 = *puVar5;
    local_168 = puVar5[3];
    local_170 = puVar5[2];
    uStack_158 = puVar5[5];
    local_160 = puVar5[4];
    uStack_148 = puVar5[7];
    uStack_150 = puVar5[6];
    uStack_138 = puVar4[1];
    local_140 = *puVar4;
    local_90 = (undefined4)uStack_178;
    uStack_128 = puVar4[3];
    local_130 = puVar4[2];
    local_80 = (undefined4)local_168;
    uStack_118 = puVar4[5];
    local_120 = puVar4[4];
    local_c0 = (undefined4)uStack_138;
    local_70 = (undefined4)uStack_158;
    uStack_108 = puVar4[7];
    local_110 = puVar4[6];
    local_b0 = (undefined4)uStack_128;
    local_a0 = (undefined4)uStack_118;
    uVar10 = *(undefined8 *)((long)plVar7 + 0x2c);
    fVar11 = *(float *)((long)plVar7 + 0x34);
    local_c8 = local_140;
    local_b8 = local_130;
    local_a8 = local_120;
    local_98 = local_180;
    local_88 = local_170;
    local_78 = local_160;
    fVar8 = (float)(**(code **)(*plVar7 + 0x60))(plVar7);
    fVar9 = (float)(**(code **)(*plVar7 + 0x60))(plVar7);
    local_e0 = (float)(**(code **)(*plVar7 + 0x60))(plVar7);
    local_e0 = local_e0 + fVar11;
    local_dc = 0;
    local_e0 = local_e0 + local_e0;
    fVar11 = *(float *)((long)plVar6 + 0x34);
    fVar8 = fVar8 + (float)uVar10;
    fVar9 = fVar9 + (float)((ulong)uVar10 >> 0x20);
    uVar10 = *(undefined8 *)((long)plVar6 + 0x2c);
    local_e8 = CONCAT44(fVar9 + fVar9,fVar8 + fVar8);
    fVar8 = (float)(**(code **)(*plVar6 + 0x60))(plVar6);
    fVar9 = (float)(**(code **)(*plVar6 + 0x60))(plVar6);
    local_f0 = (float)(**(code **)(*plVar6 + 0x60))(plVar6);
    local_f0 = local_f0 + fVar11;
    local_f0 = local_f0 + local_f0;
    local_ec = 0;
    fVar8 = fVar8 + (float)uVar10;
    fVar9 = fVar9 + (float)((ulong)uVar10 >> 0x20);
    local_f8 = CONCAT44(fVar9 + fVar9,fVar8 + fVar8);
    dBoxBox2((btVector3 *)&uStack_150,(float *)&local_98,(btVector3 *)&local_e8,
             (btVector3 *)&local_110,(float *)&local_c8,(btVector3 *)&local_f8,abStack_d8,
             &fStack_184,&iStack_188,4,in_stack_fffffffffffffe30,in_stack_fffffffffffffe38,
             (Result *)param_4);
    if ((this[0x10] != (btBoxBoxCollisionAlgorithm)0x0) &&
       (this_00 = *(btPersistentManifold **)(param_4 + 8), *(int *)(this_00 + 0x318) != 0)) {
      lVar1 = *(long *)(this_00 + 0x308);
      lVar3 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
      if (*(long *)(this_00 + 0x308) != *(long *)(*(long *)(param_4 + 0x10) + 0x10)) {
        lVar1 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
        lVar3 = *(long *)(*(long *)(param_4 + 0x10) + 0x10);
      }
      btPersistentManifold::refreshContactPoints
                (this_00,(btTransform *)(lVar1 + 8),(btTransform *)(lVar3 + 8));
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


