// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processTriangle
// Entry Point: 00f4b95c
// Size: 640 bytes
// Signature: undefined __cdecl processTriangle(btVector3 * param_1, int param_2, int param_3)


/* DebugDrawcallback::processTriangle(btVector3*, int, int) */

undefined8 DebugDrawcallback::processTriangle(btVector3 *param_1,int param_2,int param_3)

{
  btVector3 *pbVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  undefined8 local_88;
  float local_80;
  undefined4 local_7c;
  undefined8 local_78;
  float local_70;
  undefined4 local_6c;
  undefined8 local_68;
  float local_60;
  undefined4 local_5c;
  long local_58;
  
  puVar4 = (undefined8 *)(ulong)(uint)param_2;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_5c = 0;
  fVar11 = *(float *)(param_1 + 0x38);
  fVar7 = *(float *)(param_1 + 0x3c);
  local_6c = 0;
  fVar5 = (float)*(undefined8 *)(param_1 + 0x30);
  fVar6 = *(float *)(param_1 + 0x40);
  fVar20 = *(float *)(param_1 + 0x48);
  fVar22 = *(float *)(param_1 + 0x4c);
  fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  fVar15 = (float)*(undefined8 *)(param_1 + 0x28);
  local_7c = 0;
  fVar12 = *(float *)(puVar4 + 2);
  fVar24 = *(float *)((long)puVar4 + 0x14);
  fVar19 = (float)*puVar4;
  fVar26 = (float)((ulong)*puVar4 >> 0x20);
  fVar9 = *(float *)(puVar4 + 1);
  fVar23 = *(float *)(puVar4 + 4);
  fVar25 = *(float *)((long)puVar4 + 0x24);
  local_8c = 0;
  fVar27 = (float)*(undefined8 *)(param_1 + 0x58);
  fVar29 = (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20);
  uVar14 = NEON_rev64(CONCAT44(fVar17 * fVar26,fVar11 * fVar19),4);
  fVar8 = *(float *)(puVar4 + 3);
  fVar16 = *(float *)(param_1 + 0x60);
  uVar13 = NEON_fmadd(fVar12,fVar20,fVar16);
  uVar21 = NEON_fmadd(fVar23,fVar20,fVar16);
  fVar28 = fVar27 + fVar15 * fVar12 + fVar17 * fVar24 + fVar5 * fVar8;
  fVar30 = fVar29 + fVar11 * fVar12 + fVar7 * fVar24 + fVar6 * fVar8;
  local_78 = CONCAT44(fVar30,fVar28);
  uVar10 = NEON_fmadd(fVar24,fVar22,uVar13);
  uVar21 = NEON_fmadd(fVar25,fVar22,uVar21);
  fVar24 = (float)uVar14 + fVar19 * fVar15 + fVar5 * fVar9 + fVar27;
  fVar18 = (float)((ulong)uVar14 >> 0x20) + fVar26 * fVar7 + fVar6 * fVar9 + fVar29;
  local_68 = CONCAT44(fVar18,fVar24);
  uVar13 = *(undefined4 *)(param_1 + 0x50);
  fVar12 = *(float *)(puVar4 + 5);
  fVar9 = (float)NEON_fmadd(uVar13,fVar9,fVar20 * fVar19 + fVar22 * fVar26);
  fVar19 = (float)NEON_fmadd(fVar8,uVar13,uVar10);
  fVar8 = (float)NEON_fmadd(fVar12,uVar13,uVar21);
  fVar26 = fVar27 + fVar15 * fVar23 + fVar17 * fVar25 + fVar5 * fVar12;
  fVar7 = fVar29 + fVar11 * fVar23 + fVar7 * fVar25 + fVar6 * fVar12;
  local_88 = CONCAT44(fVar7,fVar26);
  fVar9 = fVar9 + fVar16;
  fVar17 = (fVar9 + fVar19 + fVar8) * 0.3333333;
  fVar5 = (fVar24 + fVar28 + fVar26) * 0.3333333;
  fVar6 = (fVar18 + fVar30 + fVar7) * 0.3333333;
  local_98 = CONCAT44(fVar6,fVar5);
  local_90 = fVar17;
  local_80 = fVar8;
  local_70 = fVar19;
  local_60 = fVar9;
  uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x70))
                    (*(long **)(param_1 + 0x10),puVar4,param_3);
  if ((uVar3 >> 0xe & 1) != 0) {
    local_9c = 0;
    fVar11 = -((fVar26 - (float)local_68) * (fVar30 - fVar18)) +
             (fVar28 - (float)local_68) * (fVar7 - fVar18);
    fVar12 = -((fVar7 - fVar18) * (fVar19 - fVar9)) + (fVar8 - fVar9) * (fVar30 - fVar18);
    uVar10 = NEON_fnmsub(fVar26 - (float)local_68,fVar19 - fVar9,
                         (fVar8 - fVar9) * (fVar28 - (float)local_68));
    uVar13 = NEON_fmadd(fVar12,fVar12,fVar11 * fVar11);
    uStack_b8 = 0;
    local_c0 = 0x3f8000003f800000;
    fVar7 = (float)NEON_fmadd(uVar10,uVar10,uVar13);
    fVar7 = 1.0 / SQRT(fVar7);
    local_a8 = NEON_fmadd(fVar7,fVar12,fVar5);
    uStack_a4 = NEON_fmadd(fVar7,uVar10,fVar6);
    local_a0 = NEON_fmadd(fVar7,fVar11,fVar17);
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))
              (*(long **)(param_1 + 0x10),&local_98,&local_a8,&local_c0);
  }
  pbVar1 = param_1 + 0x18;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))
            (*(long **)(param_1 + 0x10),&local_68,&local_78,pbVar1);
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))
            (*(long **)(param_1 + 0x10),&local_78,&local_88,pbVar1);
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))
            (*(long **)(param_1 + 0x10),&local_88,&local_68,pbVar1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


