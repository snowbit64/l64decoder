// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Process
// Entry Point: 00f4f810
// Size: 1224 bytes
// Signature: undefined __thiscall Process(btCompoundCompoundLeafCallback * this, int param_1, int param_2)


/* btCompoundCompoundLeafCallback::Process(int, int) */

void __thiscall
btCompoundCompoundLeafCallback::Process
          (btCompoundCompoundLeafCallback *this,int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  float *pfVar11;
  long *plVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  long local_168;
  long *plStack_160;
  undefined8 local_158;
  undefined8 *puStack_150;
  undefined4 local_148;
  int iStack_144;
  long local_140;
  long *plStack_138;
  undefined8 local_130;
  undefined8 *puStack_128;
  undefined4 local_120;
  int iStack_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  float local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  float local_60;
  undefined4 local_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar5 = *(long *)(this + 0x10);
  lVar7 = *(long *)(this + 0x18);
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  pfVar11 = *(float **)(lVar5 + 0x18);
  fVar14 = *pfVar11;
  fVar15 = pfVar11[1];
  fVar18 = pfVar11[4];
  fVar20 = pfVar11[5];
  puVar8 = (undefined8 *)(*(long *)(*(long *)(lVar5 + 8) + 0x30) + (long)param_1 * 0x58);
  fVar17 = pfVar11[2];
  fVar25 = pfVar11[8];
  fVar26 = pfVar11[9];
  fVar21 = pfVar11[6];
  fVar30 = pfVar11[10];
  fVar24 = *(float *)(puVar8 + 1);
  fVar22 = (float)*puVar8;
  fVar23 = (float)((ulong)*puVar8 >> 0x20);
  uVar34 = *(undefined4 *)(puVar8 + 3);
  fVar31 = (float)puVar8[2];
  fVar32 = (float)((ulong)puVar8[2] >> 0x20);
  fVar28 = (float)puVar8[6];
  fVar29 = (float)((ulong)puVar8[6] >> 0x20);
  uVar16 = NEON_fmadd(uVar34,fVar15,fVar24 * fVar14);
  uVar27 = NEON_fmadd(fVar20,uVar34,fVar18 * fVar24);
  uVar34 = NEON_fmadd(fVar26,uVar34,fVar25 * fVar24);
  uVar35 = *(undefined4 *)(puVar8 + 5);
  uVar19 = NEON_rev64(CONCAT44(fVar29 * fVar15,fVar28 * fVar18),4);
  fVar24 = (float)puVar8[4];
  fVar33 = (float)((ulong)puVar8[4] >> 0x20);
  local_98 = CONCAT44(fVar23 * fVar14 + fVar32 * fVar15 + fVar33 * fVar17,
                      fVar22 * fVar14 + fVar31 * fVar15 + fVar24 * fVar17);
  local_90 = NEON_fmadd(uVar35,fVar17,uVar16);
  local_80 = NEON_fmadd(fVar21,uVar35,uVar27);
  fVar15 = *(float *)(puVar8 + 7);
  local_78 = CONCAT44(fVar23 * fVar25 + fVar32 * fVar26 + fVar33 * fVar30,
                      fVar22 * fVar25 + fVar31 * fVar26 + fVar24 * fVar30);
  plVar13 = (long *)puVar8[8];
  local_60 = (float)NEON_fmadd(fVar15,fVar30,fVar25 * fVar28 + fVar26 * fVar29);
  local_70 = NEON_fmadd(fVar30,uVar35,uVar34);
  plVar12 = *(long **)(*(long *)(*(long *)(lVar7 + 8) + 0x30) + (long)param_2 * 0x58 + 0x40);
  local_5c = 0;
  local_7c = 0;
  local_60 = local_60 + pfVar11[0xe];
  local_6c = 0;
  local_68 = CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar20 * fVar29 + fVar21 * fVar15 +
                      (float)((ulong)*(undefined8 *)(pfVar11 + 0xc) >> 0x20),
                      (float)uVar19 + fVar14 * fVar28 + fVar17 * fVar15 +
                      (float)*(undefined8 *)(pfVar11 + 0xc));
  local_8c = 0;
  pfVar11 = *(float **)(lVar7 + 0x18);
  puVar8 = (undefined8 *)(*(long *)(*(long *)(lVar7 + 8) + 0x30) + (long)param_2 * 0x58);
  local_88 = CONCAT44(fVar23 * fVar18 + fVar32 * fVar20 + fVar33 * fVar21,
                      fVar22 * fVar18 + fVar31 * fVar20 + fVar24 * fVar21);
  fVar14 = *pfVar11;
  fVar15 = pfVar11[1];
  fVar18 = pfVar11[4];
  fVar20 = pfVar11[5];
  fVar25 = pfVar11[8];
  fVar26 = pfVar11[9];
  fVar24 = *(float *)(puVar8 + 1);
  fVar22 = (float)*puVar8;
  fVar23 = (float)((ulong)*puVar8 >> 0x20);
  uVar27 = *(undefined4 *)(puVar8 + 3);
  fVar28 = (float)puVar8[6];
  fVar31 = (float)puVar8[2];
  fVar32 = (float)((ulong)puVar8[2] >> 0x20);
  fVar29 = (float)((ulong)puVar8[6] >> 0x20);
  uVar16 = NEON_fmadd(uVar27,fVar15,fVar24 * fVar14);
  fVar17 = pfVar11[2];
  fVar21 = pfVar11[6];
  uVar34 = NEON_fmadd(fVar20,uVar27,fVar18 * fVar24);
  uVar19 = NEON_rev64(CONCAT44(fVar29 * fVar15,fVar28 * fVar18),4);
  uVar35 = *(undefined4 *)(puVar8 + 5);
  fVar30 = pfVar11[10];
  fVar33 = (float)puVar8[4];
  fVar36 = (float)((ulong)puVar8[4] >> 0x20);
  local_d8 = CONCAT44(fVar23 * fVar14 + fVar32 * fVar15 + fVar36 * fVar17,
                      fVar22 * fVar14 + fVar31 * fVar15 + fVar33 * fVar17);
  uVar27 = NEON_fmadd(fVar26,uVar27,fVar25 * fVar24);
  local_d0 = NEON_fmadd(uVar35,fVar17,uVar16);
  fVar15 = *(float *)(puVar8 + 7);
  local_c0 = NEON_fmadd(fVar21,uVar35,uVar34);
  local_a0 = (float)NEON_fmadd(fVar15,fVar30,fVar25 * fVar28 + fVar26 * fVar29);
  local_b8 = CONCAT44(fVar23 * fVar25 + fVar32 * fVar26 + fVar36 * fVar30,
                      fVar22 * fVar25 + fVar31 * fVar26 + fVar33 * fVar30);
  local_b0 = NEON_fmadd(fVar30,uVar35,uVar27);
  local_cc = 0;
  local_a0 = local_a0 + pfVar11[0xe];
  local_bc = 0;
  local_ac = 0;
  local_c8 = CONCAT44(fVar23 * fVar18 + fVar32 * fVar20 + fVar36 * fVar21,
                      fVar22 * fVar18 + fVar31 * fVar20 + fVar33 * fVar21);
  local_a8 = CONCAT44((float)((ulong)uVar19 >> 0x20) + fVar20 * fVar29 + fVar21 * fVar15 +
                      (float)((ulong)*(undefined8 *)(pfVar11 + 0xc) >> 0x20),
                      (float)uVar19 + fVar14 * fVar28 + fVar17 * fVar15 +
                      (float)*(undefined8 *)(pfVar11 + 0xc));
  local_9c = 0;
  if ((gCompoundCompoundChildShapePairCallback == (code *)0x0) ||
     (uVar6 = (*gCompoundCompoundChildShapePairCallback)(lVar5,param_1,lVar7,param_2),
     (uVar6 & 1) != 0)) {
    (**(code **)(*plVar13 + 0x10))(plVar13,&local_98,&local_e8,&local_f8);
    (**(code **)(*plVar12 + 0x10))(plVar12,&local_d8,&local_108,&local_118);
    if ((local_118 < local_e8) || (local_f8 < local_108)) {
      bVar4 = 0;
    }
    else {
      bVar4 = 1;
    }
    if ((local_110 < local_e0) || (local_f0 < local_100)) {
      bVar4 = 0;
    }
    if ((local_e4 <= local_114) && (!(bool)(bVar4 ^ 1 | local_f4 < local_104))) {
      local_140 = *(long *)(this + 0x10);
      local_168 = *(long *)(this + 0x18);
      puStack_128 = &local_98;
      uVar2 = param_1 | param_2 << 0x10;
      local_130 = *(undefined8 *)(local_140 + 0x10);
      local_120 = 0xffffffff;
      uVar2 = uVar2 + (uVar2 << 0xf ^ 0xffffffff);
      local_158 = *(undefined8 *)(local_168 + 0x10);
      puStack_150 = &local_d8;
      uVar2 = (uVar2 ^ (int)uVar2 >> 10) * 9;
      lVar5 = *(long *)(this + 0x38);
      uVar2 = uVar2 ^ (int)uVar2 >> 6;
      local_148 = 0xffffffff;
      uVar2 = uVar2 + (uVar2 << 0xb ^ 0xffffffff);
      gFindSimplePairs = gFindSimplePairs + 1;
      uVar2 = *(int *)(lVar5 + 0x10) - 1U & (uVar2 ^ (int)uVar2 >> 0x10);
      plStack_160 = plVar12;
      iStack_144 = param_2;
      plStack_138 = plVar13;
      iStack_11c = param_1;
      if (((int)uVar2 < *(int *)(lVar5 + 0x2c)) &&
         (iVar10 = *(int *)(*(long *)(lVar5 + 0x38) + (long)(int)uVar2 * 4), iVar10 != -1)) {
        do {
          piVar1 = (int *)(*(long *)(lVar5 + 0x18) + (long)iVar10 * 0x10);
          if (*piVar1 == param_1 && piVar1[1] == param_2) {
            plVar12 = *(long **)(*(long *)(lVar5 + 0x18) + (long)iVar10 * 0x10 + 8);
            goto LAB_00f4fc38;
          }
          iVar10 = *(int *)(*(long *)(lVar5 + 0x58) + (long)iVar10 * 4);
        } while (iVar10 != -1);
      }
      plVar12 = (long *)(**(code **)(**(long **)(this + 0x20) + 0x10))
                                  (*(long **)(this + 0x20),&local_140,&local_168,
                                   *(undefined8 *)(this + 0x40));
      lVar5 = (**(code **)(**(long **)(this + 0x38) + 0x18))
                        (*(long **)(this + 0x38),param_1,param_2);
      *(long **)(lVar5 + 8) = plVar12;
LAB_00f4fc38:
      plVar13 = *(long **)(this + 0x30);
      lVar5 = plVar13[2];
      lVar7 = plVar13[3];
      plVar13[2] = (long)&local_140;
      plVar13[3] = (long)&local_168;
      (**(code **)(*plVar13 + 0x10))(plVar13,0xffffffff,param_1);
      (**(code **)(**(long **)(this + 0x30) + 0x18))(*(long **)(this + 0x30),0xffffffff,param_2);
      (**(code **)(*plVar12 + 0x10))
                (plVar12,&local_140,&local_168,*(undefined8 *)(this + 0x28),
                 *(undefined8 *)(this + 0x30));
      lVar9 = *(long *)(this + 0x30);
      *(long *)(lVar9 + 0x10) = lVar5;
      *(long *)(lVar9 + 0x18) = lVar7;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


