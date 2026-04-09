// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProcessChildShape
// Entry Point: 00f4e20c
// Size: 824 bytes
// Signature: undefined __thiscall ProcessChildShape(btCompoundLeafCallback * this, btCollisionShape * param_1, int param_2)


/* btCompoundLeafCallback::ProcessChildShape(btCollisionShape const*, int) */

void __thiscall
btCompoundLeafCallback::ProcessChildShape
          (btCompoundLeafCallback *this,btCollisionShape *param_1,int param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  float *pfVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  long local_f0;
  btCollisionShape *pbStack_e8;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  undefined4 local_d0;
  int iStack_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  float local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)(this + 8);
  lVar11 = *(long *)(lVar6 + 8);
  if (gCompoundChildShapePairCallback != (code *)0x0) {
    uVar4 = (*gCompoundChildShapePairCallback)(*(undefined8 *)(this + 0x10),lVar6,param_2);
    if ((uVar4 & 1) == 0) {
      bVar3 = true;
      goto LAB_00f4e518;
    }
    lVar6 = *(long *)(this + 8);
  }
  pfVar7 = *(float **)(lVar6 + 0x18);
  puVar9 = (undefined8 *)(*(long *)(lVar11 + 0x30) + (long)param_2 * 0x58);
  fVar14 = *pfVar7;
  fVar17 = pfVar7[1];
  fVar24 = pfVar7[4];
  fVar26 = pfVar7[5];
  fVar29 = pfVar7[8];
  fVar33 = pfVar7[9];
  fVar23 = *(float *)(puVar9 + 1);
  fVar21 = (float)*puVar9;
  fVar22 = (float)((ulong)*puVar9 >> 0x20);
  uVar34 = *(undefined4 *)(puVar9 + 3);
  fVar30 = (float)puVar9[6];
  fVar15 = (float)puVar9[2];
  fVar16 = (float)((ulong)puVar9[2] >> 0x20);
  fVar13 = pfVar7[2];
  fVar31 = (float)((ulong)puVar9[6] >> 0x20);
  uVar18 = NEON_fmadd(uVar34,fVar17,fVar23 * fVar14);
  fVar35 = pfVar7[6];
  uVar32 = *(undefined4 *)(puVar9 + 5);
  uVar25 = NEON_rev64(CONCAT44(fVar31 * fVar17,fVar30 * fVar24),4);
  fVar19 = (float)puVar9[4];
  fVar20 = (float)((ulong)puVar9[4] >> 0x20);
  fVar36 = pfVar7[10];
  uVar27 = NEON_fmadd(fVar26,uVar34,fVar24 * fVar23);
  local_80 = NEON_fmadd(uVar32,fVar13,uVar18);
  fVar28 = *(float *)(puVar9 + 7);
  uVar18 = NEON_fmadd(fVar33,uVar34,fVar29 * fVar23);
  local_50 = (float)NEON_fmadd(fVar28,fVar36,fVar29 * fVar30 + fVar33 * fVar31);
  local_70 = NEON_fmadd(fVar35,uVar32,uVar27);
  local_68 = CONCAT44(fVar22 * fVar29 + fVar16 * fVar33 + fVar20 * fVar36,
                      fVar21 * fVar29 + fVar15 * fVar33 + fVar19 * fVar36);
  local_60 = NEON_fmadd(fVar36,uVar32,uVar18);
  local_50 = local_50 + pfVar7[0xe];
  local_6c = 0;
  local_5c = 0;
  local_58 = CONCAT44((float)((ulong)uVar25 >> 0x20) + fVar26 * fVar31 + fVar35 * fVar28 +
                      (float)((ulong)*(undefined8 *)(pfVar7 + 0xc) >> 0x20),
                      (float)uVar25 + fVar14 * fVar30 + fVar13 * fVar28 +
                      (float)*(undefined8 *)(pfVar7 + 0xc));
  local_78 = CONCAT44(fVar22 * fVar24 + fVar16 * fVar26 + fVar20 * fVar35,
                      fVar21 * fVar24 + fVar15 * fVar26 + fVar19 * fVar35);
  local_4c = 0;
  local_88 = CONCAT44(fVar22 * fVar14 + fVar16 * fVar17 + fVar20 * fVar13,
                      fVar21 * fVar14 + fVar15 * fVar17 + fVar19 * fVar13);
  local_7c = 0;
  (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_88,&local_98,&local_a8);
  plVar5 = *(long **)(*(long *)(this + 0x10) + 8);
  (**(code **)(*plVar5 + 0x10))
            (plVar5,*(undefined8 *)(*(long *)(this + 0x10) + 0x18),&local_b8,&local_c8);
  bVar2 = 0;
  if (local_98 <= local_c8) {
    if (local_b8 <= local_a8) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
  }
  if ((local_c0 < local_90) || (local_a0 < local_b0)) {
    bVar2 = 0;
  }
  if (local_94 <= local_c4) {
    if (!(bool)(bVar2 ^ 1 | local_a4 < local_b4)) {
      lVar6 = *(long *)(this + 8);
      puStack_d8 = &local_88;
      local_e0 = *(undefined8 *)(lVar6 + 0x10);
      lVar11 = (long)param_2;
      local_d0 = 0xffffffff;
      local_f0 = lVar6;
      pbStack_e8 = param_1;
      iStack_cc = param_2;
      if (*(long *)(*(long *)(this + 0x30) + lVar11 * 8) == 0) {
        uVar25 = (**(code **)(**(long **)(this + 0x18) + 0x10))
                           (*(long **)(this + 0x18),&local_f0,*(undefined8 *)(this + 0x10),
                            *(undefined8 *)(this + 0x38));
        *(undefined8 *)(*(long *)(this + 0x30) + lVar11 * 8) = uVar25;
        lVar6 = *(long *)(this + 8);
      }
      plVar5 = *(long **)(this + 0x28);
      plVar8 = plVar5 + 2;
      lVar12 = *plVar8;
      if (*(long *)(lVar12 + 0x10) == *(long *)(lVar6 + 0x10)) {
        lVar6 = 2;
      }
      else {
        lVar6 = 3;
        plVar8 = plVar5 + 3;
        lVar12 = *plVar8;
      }
      lVar10 = *plVar5;
      *plVar8 = (long)&local_f0;
      (**(code **)(lVar10 + lVar6 * 8))(plVar5,0xffffffff,param_2);
      plVar5 = *(long **)(*(long *)(this + 0x30) + lVar11 * 8);
      (**(code **)(*plVar5 + 0x10))
                (plVar5,&local_f0,*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x20),
                 *(undefined8 *)(this + 0x28));
      lVar6 = 0x10;
      if (*(long *)(*(long *)(*(long *)(this + 0x28) + 0x10) + 0x10) !=
          *(long *)(*(long *)(this + 8) + 0x10)) {
        lVar6 = 0x18;
      }
      *(long *)(*(long *)(this + 0x28) + lVar6) = lVar12;
    }
  }
  bVar3 = *(char *)(*(long *)(this + 0x28) + 0x30) != '\0';
LAB_00f4e518:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


