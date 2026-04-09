// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOrInitSolverBody
// Entry Point: 00f2e5a8
// Size: 708 bytes
// Signature: undefined __thiscall getOrInitSolverBody(btSequentialImpulseConstraintSolver * this, btCollisionObject * param_1, float param_2)


/* btSequentialImpulseConstraintSolver::getOrInitSolverBody(btCollisionObject&, float) */

int __thiscall
btSequentialImpulseConstraintSolver::getOrInitSolverBody
          (btSequentialImpulseConstraintSolver *this,btCollisionObject *param_1,float param_2)

{
  btCollisionObject *pbVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  iVar6 = *(int *)(param_1 + 0xe8);
  if (iVar6 < 0) {
    pbVar1 = (btCollisionObject *)0x0;
    if ((*(uint *)(param_1 + 0x100) & 2) != 0) {
      pbVar1 = param_1;
    }
    if (((*(uint *)(param_1 + 0x100) >> 1 & 1) == 0) ||
       ((*(float *)(pbVar1 + 0x19c) == 0.0 && (((byte)pbVar1[0xe0] >> 1 & 1) == 0)))) {
      iVar6 = *(int *)(this + 300);
      if (iVar6 < 0) {
        local_50 = 0;
        *(undefined4 *)(this + 300) = *(undefined4 *)(this + 0xc);
        uStack_68 = 0;
        local_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_108 = 0;
        local_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_128 = 0;
        local_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_138 = 0;
        local_140 = 0;
        puVar4 = (undefined4 *)
                 btAlignedObjectArray<btSolverBody>::expand
                           ((btAlignedObjectArray<btSolverBody> *)(this + 8),
                            (btSolverBody *)&local_140);
        *(undefined8 *)(puVar4 + 3) = 0;
        *(undefined8 *)(puVar4 + 1) = 0;
        *(undefined8 *)(puVar4 + 6) = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        *puVar4 = 0x3f800000;
        puVar4[5] = 0x3f800000;
        puVar4[10] = 0x3f800000;
        *(undefined8 *)(puVar4 + 0x12) = 0;
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(undefined8 *)(puVar4 + 0x16) = 0;
        *(undefined8 *)(puVar4 + 0x14) = 0;
        *(undefined8 *)(puVar4 + 0x26) = 0;
        *(undefined8 *)(puVar4 + 0x24) = 0;
        *(undefined8 *)(puVar4 + 0x2a) = 0;
        *(undefined8 *)(puVar4 + 0x28) = 0;
        *(undefined8 *)(puVar4 + 0xd) = 0;
        *(undefined8 *)(puVar4 + 0xb) = 0;
        puVar4[0xf] = 0;
        *(undefined8 *)(puVar4 + 0x3c) = 0;
        *(undefined8 *)(puVar4 + 0x20) = 0;
        *(undefined8 *)(puVar4 + 0x22) = 0;
        *(undefined8 *)(puVar4 + 0x1a) = 0x3f800000;
        *(undefined8 *)(puVar4 + 0x18) = 0x3f8000003f800000;
        *(undefined8 *)(puVar4 + 0x1e) = 0x3f800000;
        *(undefined8 *)(puVar4 + 0x1c) = 0x3f8000003f800000;
        *(undefined8 *)(puVar4 + 0x36) = 0;
        *(undefined8 *)(puVar4 + 0x34) = 0;
        *(undefined8 *)(puVar4 + 0x3a) = 0;
        *(undefined8 *)(puVar4 + 0x38) = 0;
        *(undefined8 *)(puVar4 + 0x2e) = 0;
        *(undefined8 *)(puVar4 + 0x2c) = 0;
        *(undefined8 *)(puVar4 + 0x32) = 0;
        *(undefined8 *)(puVar4 + 0x30) = 0;
        iVar6 = *(int *)(this + 300);
      }
    }
    else {
      iVar6 = *(int *)(this + 0xc);
      local_50 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_88 = 0;
      local_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_138 = 0;
      local_140 = 0;
      puVar5 = (undefined8 *)
               btAlignedObjectArray<btSolverBody>::expand
                         ((btAlignedObjectArray<btSolverBody> *)(this + 8),
                          (btSolverBody *)&local_140);
      uVar2 = *(uint *)(param_1 + 0x100);
      pbVar1 = (btCollisionObject *)0x0;
      if ((uVar2 & 2) != 0) {
        pbVar1 = param_1;
      }
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
      puVar5[0x13] = 0;
      puVar5[0x12] = 0;
      puVar5[0x15] = 0;
      puVar5[0x14] = 0;
      if ((uVar2 >> 1 & 1) == 0) {
        *(undefined8 *)((long)puVar5 + 0xc) = 0;
        *(undefined8 *)((long)puVar5 + 4) = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        *(undefined4 *)puVar5 = 0x3f800000;
        *(undefined4 *)((long)puVar5 + 0x14) = 0x3f800000;
        *(undefined4 *)(puVar5 + 5) = 0x3f800000;
        *(undefined8 *)((long)puVar5 + 0x34) = 0;
        *(undefined8 *)((long)puVar5 + 0x2c) = 0;
        *(undefined4 *)((long)puVar5 + 0x3c) = 0;
        puVar5[0x1e] = 0;
        puVar5[0x10] = 0;
        puVar5[0x11] = 0;
        puVar5[0xd] = 0x3f800000;
        puVar5[0xc] = 0x3f8000003f800000;
        puVar5[0xf] = 0x3f800000;
        puVar5[0xe] = 0x3f8000003f800000;
        puVar5[0x17] = 0;
        puVar5[0x16] = 0;
        puVar5[0x19] = 0;
        puVar5[0x18] = 0;
        puVar5[0x1b] = 0;
        puVar5[0x1a] = 0;
        *(undefined8 *)((long)puVar5 + 0xe4) = 0;
        *(undefined8 *)((long)puVar5 + 0xdc) = 0;
      }
      else {
        uVar9 = *(undefined8 *)(pbVar1 + 8);
        puVar5[1] = *(undefined8 *)(pbVar1 + 0x10);
        *puVar5 = uVar9;
        uVar9 = *(undefined8 *)(pbVar1 + 0x18);
        puVar5[3] = *(undefined8 *)(pbVar1 + 0x20);
        puVar5[2] = uVar9;
        uVar9 = *(undefined8 *)(pbVar1 + 0x28);
        puVar5[5] = *(undefined8 *)(pbVar1 + 0x30);
        puVar5[4] = uVar9;
        uVar9 = *(undefined8 *)(pbVar1 + 0x38);
        puVar5[7] = *(undefined8 *)(pbVar1 + 0x40);
        puVar5[6] = uVar9;
        fVar7 = *(float *)(pbVar1 + 0x19c);
        uVar9 = *(undefined8 *)(pbVar1 + 0x1a0);
        fVar10 = *(float *)(pbVar1 + 0x1a8);
        *(undefined4 *)((long)puVar5 + 0x8c) = 0;
        puVar5[0x1e] = pbVar1;
        puVar5[0x10] = CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar7,(float)uVar9 * fVar7);
        *(float *)(puVar5 + 0x11) = fVar10 * fVar7;
        uVar9 = *(undefined8 *)(pbVar1 + 0x278);
        puVar5[0xd] = *(undefined8 *)(pbVar1 + 0x280);
        puVar5[0xc] = uVar9;
        uVar9 = *(undefined8 *)(pbVar1 + 0x1a0);
        puVar5[0xf] = *(undefined8 *)(pbVar1 + 0x1a8);
        puVar5[0xe] = uVar9;
        uVar9 = *(undefined8 *)(pbVar1 + 0x17c);
        puVar5[0x17] = *(undefined8 *)(pbVar1 + 0x184);
        puVar5[0x16] = uVar9;
        uVar9 = *(undefined8 *)(pbVar1 + 0x18c);
        puVar5[0x19] = *(undefined8 *)(pbVar1 + 0x194);
        puVar5[0x18] = uVar9;
        fVar7 = *(float *)(pbVar1 + 0x19c);
        uVar9 = *(undefined8 *)(pbVar1 + 0x1e0);
        fVar10 = *(float *)(pbVar1 + 0x1e8);
        *(undefined4 *)((long)puVar5 + 0xdc) = 0;
        fVar7 = fVar7 * param_2;
        puVar5[0x1a] = CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar7,(float)uVar9 * fVar7);
        *(float *)(puVar5 + 0x1b) = fVar7 * fVar10;
        fVar7 = *(float *)(pbVar1 + 0x1f0);
        fVar11 = *(float *)(pbVar1 + 500);
        fVar12 = *(float *)(pbVar1 + 0x1f8);
        uVar8 = NEON_fmadd(*(undefined4 *)(pbVar1 + 0x164),fVar11,*(float *)(pbVar1 + 0x154) * fVar7
                          );
        fVar10 = (float)NEON_fmadd(*(undefined4 *)(pbVar1 + 0x174),fVar12,uVar8);
        puVar5[0x1c] = CONCAT44(((float)((ulong)*(undefined8 *)(pbVar1 + 0x14c) >> 0x20) * fVar7 +
                                 (float)((ulong)*(undefined8 *)(pbVar1 + 0x15c) >> 0x20) * fVar11 +
                                (float)((ulong)*(undefined8 *)(pbVar1 + 0x16c) >> 0x20) * fVar12) *
                                param_2,((float)*(undefined8 *)(pbVar1 + 0x14c) * fVar7 +
                                         (float)*(undefined8 *)(pbVar1 + 0x15c) * fVar11 +
                                        (float)*(undefined8 *)(pbVar1 + 0x16c) * fVar12) * param_2);
        *(float *)(puVar5 + 0x1d) = fVar10 * param_2;
      }
      *(undefined4 *)((long)puVar5 + 0xec) = 0;
      *(int *)(param_1 + 0xe8) = iVar6;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


