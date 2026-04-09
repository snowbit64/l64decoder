// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f4b628
// Entry Point: 00f4b628
// Size: 420 bytes
// Signature: undefined FUN_00f4b628(void)


undefined8 FUN_00f4b628(long param_1,long param_2)

{
  float *pfVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined4 local_a0;
  int iStack_9c;
  undefined **local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  long local_78;
  int local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  float local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_b0 = *(undefined8 *)(param_1 + 8);
  iStack_9c = *(int *)(param_2 + 0x28);
  puVar3 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x30) + (long)iStack_9c * 0x58);
  pfVar1 = *(float **)(param_1 + 0x18);
  fVar4 = *pfVar1;
  fVar5 = pfVar1[1];
  fVar14 = *(float *)(puVar3 + 1);
  fVar18 = pfVar1[4];
  fVar19 = pfVar1[5];
  fVar22 = pfVar1[8];
  fVar25 = pfVar1[9];
  fVar8 = (float)*puVar3;
  fVar9 = (float)((ulong)*puVar3 >> 0x20);
  uVar16 = *(undefined4 *)(puVar3 + 3);
  fVar10 = (float)puVar3[2];
  fVar11 = (float)((ulong)puVar3[2] >> 0x20);
  uVar6 = NEON_fmadd(uVar16,fVar5,fVar14 * fVar4);
  fVar7 = pfVar1[2];
  fVar23 = (float)puVar3[6];
  fVar24 = (float)((ulong)puVar3[6] >> 0x20);
  uVar17 = *(undefined4 *)(puVar3 + 5);
  uVar20 = NEON_fmadd(fVar19,uVar16,fVar18 * fVar14);
  fVar21 = pfVar1[6];
  uVar15 = NEON_rev64(CONCAT44(fVar24 * fVar5,fVar23 * fVar18),4);
  fVar12 = (float)puVar3[4];
  fVar13 = (float)((ulong)puVar3[4] >> 0x20);
  local_60 = NEON_fmadd(uVar17,fVar7,uVar6);
  fVar26 = pfVar1[10];
  fVar27 = *(float *)(puVar3 + 7);
  uStack_b8 = puVar3[8];
  uVar6 = NEON_fmadd(fVar25,uVar16,fVar22 * fVar14);
  local_30 = (float)NEON_fmadd(fVar27,fVar26,fVar22 * fVar23 + fVar25 * fVar24);
  local_c0 = 0;
  puStack_a8 = &local_68;
  local_68 = CONCAT44(fVar9 * fVar4 + fVar11 * fVar5 + fVar13 * fVar7,
                      fVar8 * fVar4 + fVar10 * fVar5 + fVar12 * fVar7);
  local_50 = NEON_fmadd(fVar21,uVar17,uVar20);
  local_48 = CONCAT44(fVar9 * fVar22 + fVar11 * fVar25 + fVar13 * fVar26,
                      fVar8 * fVar22 + fVar10 * fVar25 + fVar12 * fVar26);
  local_78 = *(long *)(param_1 + 0x30);
  local_40 = NEON_fmadd(fVar26,uVar17,uVar6);
  local_30 = local_30 + pfVar1[0xe];
  local_5c = 0;
  local_4c = 0;
  local_3c = 0;
  local_58 = CONCAT44(fVar9 * fVar18 + fVar11 * fVar19 + fVar13 * fVar21,
                      fVar8 * fVar18 + fVar10 * fVar19 + fVar12 * fVar21);
  local_2c = 0;
  local_88 = 0;
  local_80 = 0xffff0001;
  local_38 = CONCAT44((float)((ulong)uVar15 >> 0x20) + fVar19 * fVar24 + fVar21 * fVar27 +
                      (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20),
                      (float)uVar15 + fVar4 * fVar23 + fVar7 * fVar27 +
                      (float)*(undefined8 *)(pfVar1 + 0xc));
  local_90 = *(undefined4 *)(local_78 + 8);
  local_a0 = 0xffffffff;
  local_7c = *(undefined4 *)(local_78 + 0x1c);
  local_98 = &PTR__RayResultCallback_010195f8;
  local_70 = iStack_9c;
  btCollisionWorld::rayTestSingleInternal
            (*(btTransform **)(param_1 + 0x20),*(btTransform **)(param_1 + 0x28),
             (btCollisionObjectWrapper *)&local_c0,(RayResultCallback *)&local_98);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


