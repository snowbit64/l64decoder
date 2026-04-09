// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dct___un_3C_vyf_3E_uniuni
// Entry Point: 00e538a8
// Size: 1528 bytes
// Signature: undefined dct___un_3C_vyf_3E_uniuni(void)


float dct___un_3C_vyf_3E_uniuni
                (undefined param_1 [16],undefined8 *param_2,int param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar19;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar20;
  float fVar24;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar34;
  undefined8 uVar33;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar40;
  uint uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 local_70 [4];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  switch(param_4) {
  case 4:
    puVar1 = param_2 + (long)(param_3 * 3) * 2;
    puVar2 = param_2 + (long)param_3 * 2;
    puVar3 = param_2 + (long)(param_3 * 2) * 2;
    uVar41 = (uint)(param_1[0] & 1) + (uint)(param_1[4] & 2) +
             (uint)(param_1[8] & 4) + (uint)(param_1[12] & 8);
    fVar13 = (float)*param_2;
    fVar15 = (float)*puVar1;
    fVar29 = fVar13 + fVar15;
    fVar19 = (float)((ulong)*param_2 >> 0x20);
    fVar30 = (float)((ulong)*puVar1 >> 0x20);
    fVar31 = fVar19 + fVar30;
    fVar20 = (float)param_2[1];
    fVar16 = (float)puVar1[1];
    fVar32 = fVar20 + fVar16;
    fVar24 = (float)((ulong)param_2[1] >> 0x20);
    fVar14 = (float)((ulong)puVar1[1] >> 0x20);
    fVar34 = fVar24 + fVar14;
    fVar13 = fVar13 - fVar15;
    fVar19 = fVar19 - fVar30;
    fVar20 = fVar20 - fVar16;
    fVar24 = fVar24 - fVar14;
    fVar15 = (float)*puVar2;
    fVar35 = (float)*puVar3;
    fVar25 = fVar15 + fVar35;
    fVar30 = (float)((ulong)*puVar2 >> 0x20);
    fVar36 = (float)((ulong)*puVar3 >> 0x20);
    fVar26 = fVar30 + fVar36;
    fVar16 = (float)puVar2[1];
    fVar37 = (float)puVar3[1];
    fVar27 = fVar16 + fVar37;
    fVar14 = (float)((ulong)puVar2[1] >> 0x20);
    fVar40 = (float)((ulong)puVar3[1] >> 0x20);
    fVar28 = fVar14 + fVar40;
    fVar15 = fVar15 - fVar35;
    fVar30 = fVar30 - fVar36;
    fVar16 = fVar16 - fVar37;
    fVar14 = fVar14 - fVar40;
    fVar35 = (fVar31 + 0.0 + fVar26) * 0.5;
    fVar36 = (fVar32 + 0.0 + fVar27) * 0.5;
    fVar37 = (fVar34 + 0.0 + fVar28) * 0.5;
    if ((uVar41 & 1) == 0) {
      if ((uVar41 >> 1 & 1) != 0) {
        *(float *)((long)param_2 + 4) = fVar35;
      }
      if ((uVar41 >> 2 & 1) != 0) {
        *(float *)(param_2 + 1) = fVar36;
      }
      if ((uVar41 >> 3 & 1) != 0) {
        *(float *)((long)param_2 + 0xc) = fVar37;
      }
      if ((uVar41 >> 1 & 1) != 0) {
        *(float *)((long)puVar2 + 4) = (fVar19 * 0.9238795 + 0.0 + fVar30 * 0.3826834) * 0.7071068;
      }
      if ((uVar41 >> 2 & 1) != 0) {
        *(float *)(puVar2 + 1) = (fVar20 * 0.9238795 + 0.0 + fVar16 * 0.3826834) * 0.7071068;
      }
      if ((uVar41 >> 3 & 1) != 0) {
        *(float *)((long)puVar2 + 0xc) = (fVar24 * 0.9238795 + 0.0 + fVar14 * 0.3826834) * 0.7071068
        ;
      }
      if ((uVar41 >> 1 & 1) != 0) {
        *(float *)((long)puVar3 + 4) = (fVar31 * 0.7071068 + 0.0 + fVar26 * -0.7071068) * 0.7071068;
      }
      if ((uVar41 >> 2 & 1) != 0) {
        *(float *)(puVar3 + 1) = (fVar32 * 0.7071068 + 0.0 + fVar27 * -0.7071068) * 0.7071068;
      }
      if ((uVar41 >> 3 & 1) != 0) {
        *(float *)((long)puVar3 + 0xc) =
             (fVar34 * 0.7071068 + 0.0 + fVar28 * -0.7071068) * 0.7071068;
      }
      fVar30 = fVar19 * 0.3826834 + 0.0 + fVar30 * -0.9238795;
      fVar16 = fVar20 * 0.3826834 + 0.0 + fVar16 * -0.9238795;
      fVar19 = fVar24 * 0.3826834 + 0.0 + fVar14 * -0.9238795;
      fVar14 = (fVar13 * 0.3826834 + 0.0 + fVar15 * -0.9238795) * 0.7071068;
    }
    else {
      *(float *)param_2 = (fVar29 + 0.0 + fVar25) * 0.5;
      if ((uVar41 >> 1 & 1) != 0) {
        *(float *)((long)param_2 + 4) = fVar35;
      }
      if ((uVar41 >> 2 & 1) != 0) {
        *(float *)(param_2 + 1) = fVar36;
      }
      if ((uVar41 >> 3 & 1) != 0) {
        *(float *)((long)param_2 + 0xc) = fVar37;
      }
      *(float *)puVar2 = (fVar13 * 0.9238795 + 0.0 + fVar15 * 0.3826834) * 0.7071068;
      if ((uVar41 >> 1 & 1) != 0) {
        *(float *)((long)puVar2 + 4) = (fVar19 * 0.9238795 + 0.0 + fVar30 * 0.3826834) * 0.7071068;
      }
      if ((uVar41 >> 2 & 1) != 0) {
        *(float *)(puVar2 + 1) = (fVar20 * 0.9238795 + 0.0 + fVar16 * 0.3826834) * 0.7071068;
      }
      if ((uVar41 >> 3 & 1) != 0) {
        *(float *)((long)puVar2 + 0xc) = (fVar24 * 0.9238795 + 0.0 + fVar14 * 0.3826834) * 0.7071068
        ;
      }
      *(float *)puVar3 = (fVar29 * 0.7071068 + 0.0 + fVar25 * -0.7071068) * 0.7071068;
      if ((uVar41 >> 1 & 1) != 0) {
        *(float *)((long)puVar3 + 4) = (fVar31 * 0.7071068 + 0.0 + fVar26 * -0.7071068) * 0.7071068;
      }
      if ((uVar41 >> 2 & 1) != 0) {
        *(float *)(puVar3 + 1) = (fVar32 * 0.7071068 + 0.0 + fVar27 * -0.7071068) * 0.7071068;
      }
      if ((uVar41 >> 3 & 1) != 0) {
        *(float *)((long)puVar3 + 0xc) =
             (fVar34 * 0.7071068 + 0.0 + fVar28 * -0.7071068) * 0.7071068;
      }
      fVar30 = fVar19 * 0.3826834 + 0.0 + fVar30 * -0.9238795;
      fVar16 = fVar20 * 0.3826834 + 0.0 + fVar16 * -0.9238795;
      fVar19 = fVar24 * 0.3826834 + 0.0 + fVar14 * -0.9238795;
      fVar14 = (fVar13 * 0.3826834 + 0.0 + fVar15 * -0.9238795) * 0.7071068;
      *(float *)puVar1 = fVar14;
    }
    if ((uVar41 >> 1 & 1) != 0) {
      *(float *)((long)puVar1 + 4) = fVar30 * 0.7071068;
    }
    if ((uVar41 >> 2 & 1) != 0) {
      *(float *)(puVar1 + 1) = fVar16 * 0.7071068;
    }
    if ((uVar41 >> 3 & 1) != 0) {
      *(float *)((long)puVar1 + 0xc) = fVar19 * 0.7071068;
      return fVar14;
    }
    break;
  case 5:
    fVar15 = (float)dct_n___un_3C_vyf_3E_uniuni(param_2,param_3,5);
    return fVar15;
  case 6:
    uVar33 = (param_2 + (long)(param_3 * 5) * 2)[1];
    uVar22 = param_2[(long)(param_3 * 5) * 2];
    uVar23 = (param_2 + (long)(param_3 * 4) * 2)[1];
    uVar18 = param_2[(long)(param_3 * 4) * 2];
    uVar21 = (param_2 + (long)param_3 * 2)[1];
    uVar17 = param_2[(long)param_3 * 2];
    uVar39 = (param_2 + (long)(param_3 * 2) * 2)[1];
    uVar38 = param_2[(long)(param_3 * 2) * 2];
    fVar13 = (float)*param_2;
    fVar25 = (float)uVar22;
    fVar19 = (float)((ulong)*param_2 >> 0x20);
    fVar26 = (float)((ulong)uVar22 >> 0x20);
    fVar20 = (float)param_2[1];
    fVar27 = (float)uVar33;
    fVar24 = (float)((ulong)param_2[1] >> 0x20);
    fVar28 = (float)((ulong)uVar33 >> 0x20);
    uVar33 = (param_2 + (long)(param_3 * 3) * 2)[1];
    uVar22 = param_2[(long)(param_3 * 3) * 2];
    fVar15 = (float)uVar17;
    fVar29 = (float)uVar18;
    fVar30 = (float)((ulong)uVar17 >> 0x20);
    fVar31 = (float)((ulong)uVar18 >> 0x20);
    fVar16 = (float)uVar21;
    fVar32 = (float)uVar23;
    fVar14 = (float)((ulong)uVar21 >> 0x20);
    fVar34 = (float)((ulong)uVar23 >> 0x20);
    uVar12 = (uint)(param_1[0] & 1) + (uint)(param_1[4] & 2) +
             (uint)(param_1[8] & 4) + (uint)(param_1[12] & 8);
    fVar35 = (float)uVar38;
    fVar42 = (float)uVar22;
    fVar36 = (float)((ulong)uVar38 >> 0x20);
    fVar43 = (float)((ulong)uVar22 >> 0x20);
    fVar37 = (float)uVar39;
    fVar44 = (float)uVar33;
    fVar40 = (float)((ulong)uVar39 >> 0x20);
    fVar45 = (float)((ulong)uVar33 >> 0x20);
    local_70[1] = CONCAT44(fVar24 + fVar28,fVar20 + fVar27);
    local_70[0] = CONCAT44(fVar19 + fVar26,fVar13 + fVar25);
    local_70[3] = CONCAT44(fVar14 + fVar34,fVar16 + fVar32);
    local_70[2] = CONCAT44(fVar30 + fVar31,fVar15 + fVar29);
    uStack_48 = CONCAT44(fVar40 + fVar45,fVar37 + fVar44);
    local_50 = CONCAT44(fVar36 + fVar43,fVar35 + fVar42);
    uStack_38 = CONCAT44(fVar24 - fVar28,fVar20 - fVar27);
    uStack_40 = CONCAT44(fVar19 - fVar26,fVar13 - fVar25);
    uStack_28 = CONCAT44(fVar14 - fVar34,fVar16 - fVar32);
    local_30 = CONCAT44(fVar30 - fVar31,fVar15 - fVar29);
    uStack_18 = CONCAT44(fVar40 - fVar45,fVar37 - fVar44);
    uStack_20 = CONCAT44(fVar36 - fVar43,fVar35 - fVar42);
    iVar8 = 0;
    uVar9 = 0;
    uVar41 = 0;
    uVar10 = 0;
    iVar11 = 0x18;
    iVar6 = 0x18;
    if ((uVar12 & 1) == 0) {
      do {
        uVar4 = iVar11 + (uVar9 / 0x18) * 0x18;
        if (uVar9 % 0x18 < 0xd) {
          uVar4 = uVar9 % 0x18;
        }
        uVar5 = 0xc - uVar4;
        if ((int)uVar4 < 7) {
          uVar5 = uVar4;
        }
        uVar7 = uVar10 & 1;
        fVar30 = (float)(&DAT_00563a50)[uVar10];
        fVar15 = -(float)(&DAT_00563a50)[(int)uVar5];
        if ((int)uVar4 < 7) {
          fVar15 = (float)(&DAT_00563a50)[(int)uVar5];
        }
        uVar21 = local_70[uVar7 * 6 + 1];
        uVar17 = local_70[uVar7 * 6 + 3];
        uVar4 = iVar6 + (uVar41 / 0x18) * 0x18;
        if (uVar41 % 0x18 < 0xd) {
          uVar4 = uVar41 % 0x18;
        }
        uVar5 = 0xc - uVar4;
        if ((int)uVar4 < 7) {
          uVar5 = uVar4;
        }
        fVar16 = -(float)(&DAT_00563a50)[(int)uVar5];
        if ((int)uVar4 < 7) {
          fVar16 = (float)(&DAT_00563a50)[(int)uVar5];
        }
        uVar22 = local_70[uVar7 * 6 + 5];
        fVar13 = (float)(&DAT_004c6928)[uVar10 != 0];
        fVar14 = ((float)local_70[uVar7 * 6] * fVar30 + 0.0 +
                  (float)local_70[uVar7 * 6 + 2] * fVar15 + (float)local_70[uVar7 * 6 + 4] * fVar16)
                 * fVar13;
        if ((uVar12 >> 1 & 1) != 0) {
          *(float *)((long)param_2 + (long)iVar8 * 0x10 + 4) =
               ((float)((ulong)local_70[uVar7 * 6] >> 0x20) * fVar30 + 0.0 +
                (float)((ulong)local_70[uVar7 * 6 + 2] >> 0x20) * fVar15 +
               (float)((ulong)local_70[uVar7 * 6 + 4] >> 0x20) * fVar16) * fVar13;
        }
        if ((uVar12 >> 2 & 1) != 0) {
          *(float *)(param_2 + (long)iVar8 * 2 + 1) =
               ((float)uVar21 * fVar30 + 0.0 + (float)uVar17 * fVar15 + (float)uVar22 * fVar16) *
               fVar13;
        }
        if ((uVar12 >> 3 & 1) != 0) {
          *(float *)((long)param_2 + (long)iVar8 * 0x10 + 0xc) =
               ((float)((ulong)uVar21 >> 0x20) * fVar30 + 0.0 +
                (float)((ulong)uVar17 >> 0x20) * fVar15 + (float)((ulong)uVar22 >> 0x20) * fVar16) *
               fVar13;
        }
        uVar10 = uVar10 + 1;
        uVar41 = uVar41 + 5;
        iVar6 = iVar6 + -5;
        uVar9 = uVar9 + 3;
        iVar11 = iVar11 + -3;
        iVar8 = iVar8 + param_3;
      } while (uVar10 != 6);
    }
    else {
      do {
        uVar4 = iVar11 + (uVar9 / 0x18) * 0x18;
        if (uVar9 % 0x18 < 0xd) {
          uVar4 = uVar9 % 0x18;
        }
        uVar5 = 0xc - uVar4;
        if ((int)uVar4 < 7) {
          uVar5 = uVar4;
        }
        uVar7 = uVar10 & 1;
        fVar30 = (float)(&DAT_00563a50)[uVar10];
        fVar15 = -(float)(&DAT_00563a50)[(int)uVar5];
        if ((int)uVar4 < 7) {
          fVar15 = (float)(&DAT_00563a50)[(int)uVar5];
        }
        uVar33 = local_70[uVar7 * 6 + 1];
        uVar22 = local_70[uVar7 * 6];
        uVar21 = local_70[uVar7 * 6 + 3];
        uVar17 = local_70[uVar7 * 6 + 2];
        uVar4 = iVar6 + (uVar41 / 0x18) * 0x18;
        if (uVar41 % 0x18 < 0xd) {
          uVar4 = uVar41 % 0x18;
        }
        uVar5 = 0xc - uVar4;
        if ((int)uVar4 < 7) {
          uVar5 = uVar4;
        }
        fVar16 = -(float)(&DAT_00563a50)[(int)uVar5];
        if ((int)uVar4 < 7) {
          fVar16 = (float)(&DAT_00563a50)[(int)uVar5];
        }
        uVar23 = local_70[uVar7 * 6 + 5];
        uVar18 = local_70[uVar7 * 6 + 4];
        fVar13 = (float)(&DAT_004c6928)[uVar10 != 0];
        fVar14 = ((float)uVar22 * fVar30 + 0.0 + (float)uVar17 * fVar15 + (float)uVar18 * fVar16) *
                 fVar13;
        puVar1 = param_2 + (long)iVar8 * 2;
        *(float *)puVar1 = fVar14;
        if ((uVar12 >> 1 & 1) != 0) {
          *(float *)((long)puVar1 + 4) =
               ((float)((ulong)uVar22 >> 0x20) * fVar30 + 0.0 +
                (float)((ulong)uVar17 >> 0x20) * fVar15 + (float)((ulong)uVar18 >> 0x20) * fVar16) *
               fVar13;
        }
        if ((uVar12 >> 2 & 1) != 0) {
          *(float *)(puVar1 + 1) =
               ((float)uVar33 * fVar30 + 0.0 + (float)uVar21 * fVar15 + (float)uVar23 * fVar16) *
               fVar13;
        }
        if ((uVar12 >> 3 & 1) != 0) {
          *(float *)((long)puVar1 + 0xc) =
               ((float)((ulong)uVar33 >> 0x20) * fVar30 + 0.0 +
                (float)((ulong)uVar21 >> 0x20) * fVar15 + (float)((ulong)uVar23 >> 0x20) * fVar16) *
               fVar13;
        }
        uVar10 = uVar10 + 1;
        uVar41 = uVar41 + 5;
        iVar6 = iVar6 + -5;
        uVar9 = uVar9 + 3;
        iVar11 = iVar11 + -3;
        iVar8 = iVar8 + param_3;
      } while (uVar10 != 6);
    }
    break;
  default:
    puts("src/kernel_astc.ispc:609:9: Assertion failed: false \n");
                    /* WARNING: Subroutine does not return */
    abort();
  case 8:
    fVar15 = (float)dct_n___un_3C_vyf_3E_uniuni(param_2,param_3,8);
    return fVar15;
  }
  return fVar14;
}


