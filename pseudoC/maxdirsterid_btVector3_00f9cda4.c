// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: maxdirsterid<btVector3>
// Entry Point: 00f9cda4
// Size: 980 bytes
// Signature: int __cdecl maxdirsterid<btVector3>(btVector3 * param_1, int param_2, btVector3 * param_3, btAlignedObjectArray * param_4)


/* int maxdirsterid<btVector3>(btVector3 const*, int, btVector3 const&, btAlignedObjectArray<int>&)
    */

int maxdirsterid<btVector3>
              (btVector3 *param_1,int param_2,btVector3 *param_3,btAlignedObjectArray *param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  
  uVar12 = (ulong)(uint)param_2;
  puVar2 = (undefined4 *)(param_1 + 8);
  do {
    fVar28 = *(float *)param_3;
    fVar29 = *(float *)(param_3 + 4);
    lVar13 = *(long *)(param_4 + 0x10);
    fVar30 = *(float *)(param_3 + 8);
    if (param_2 < 1) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar5 = 0;
      uVar11 = 0xffffffff;
      puVar7 = puVar2;
      do {
        if (*(int *)(lVar13 + uVar5 * 4) != 0) {
          if ((int)uVar11 != -1) {
            pfVar1 = (float *)(param_1 + (long)(int)uVar11 * 0x10);
            uVar14 = NEON_fmadd(puVar7[-1],fVar29,(float)puVar7[-2] * fVar28);
            uVar17 = NEON_fmadd(pfVar1[1],fVar29,*pfVar1 * fVar28);
            fVar15 = (float)NEON_fmadd(*puVar7,fVar30,uVar14);
            fVar18 = (float)NEON_fmadd(pfVar1[2],fVar30,uVar17);
            if (fVar15 <= fVar18) goto LAB_00f9ce1c;
          }
          uVar11 = uVar5 & 0xffffffff;
        }
LAB_00f9ce1c:
        uVar10 = (uint)uVar11;
        uVar5 = uVar5 + 1;
        puVar7 = puVar7 + 4;
      } while (uVar12 != uVar5);
    }
    if (*(int *)(lVar13 + (long)(int)uVar10 * 4) == 3) {
      return uVar10;
    }
    fVar15 = (float)NEON_fmadd(fVar29,fVar29,fVar28 * fVar28);
    fVar18 = (float)NEON_fmadd(fVar30,fVar30,fVar28 * fVar28);
    if (SQRT(fVar15) <= SQRT(fVar18)) {
      fVar18 = 1.0 / SQRT(fVar18);
      fVar15 = 0.0;
      fVar31 = fVar18 * -fVar30;
      fVar18 = fVar18 * fVar28;
    }
    else {
      fVar15 = 1.0 / SQRT(fVar15);
      fVar18 = 0.0;
      fVar31 = fVar15 * fVar29;
      fVar15 = fVar15 * -fVar28;
    }
    uVar21 = NEON_fnmsub(fVar15,fVar30,fVar18 * fVar29);
    uVar14 = NEON_fnmsub(fVar18,fVar28,fVar31 * fVar30);
    uVar17 = NEON_fnmsub(fVar31,fVar29,fVar15 * fVar28);
    uVar5 = 0xffffffff;
    uVar8 = 0;
    do {
      fVar27 = (float)uVar8;
      sincosf(fVar27 * 0.01745329,&fStack_a4,&local_a8);
      if (param_2 < 1) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar6 = 0;
        uVar11 = 0xffffffff;
        uVar19 = NEON_fmadd(local_a8,uVar21,fStack_a4 * fVar31);
        uVar20 = NEON_fmadd(local_a8,uVar14,fStack_a4 * fVar15);
        uVar22 = NEON_fmadd(local_a8,uVar17,fStack_a4 * fVar18);
        fVar16 = (float)NEON_fmadd(uVar19,0x3ccccccd,fVar28);
        uVar19 = NEON_fmadd(uVar20,0x3ccccccd,fVar29);
        uVar20 = NEON_fmadd(uVar22,0x3ccccccd,fVar30);
        puVar7 = puVar2;
        do {
          if (*(int *)(lVar13 + uVar6 * 4) != 0) {
            if ((int)uVar11 != -1) {
              pfVar1 = (float *)(param_1 + (long)(int)uVar11 * 0x10);
              uVar22 = NEON_fmadd(puVar7[-1],uVar19,(float)puVar7[-2] * fVar16);
              uVar24 = NEON_fmadd(pfVar1[1],uVar19,*pfVar1 * fVar16);
              fVar23 = (float)NEON_fmadd(*puVar7,uVar20,uVar22);
              fVar25 = (float)NEON_fmadd(pfVar1[2],uVar20,uVar24);
              if (fVar23 <= fVar25) goto LAB_00f9cf88;
            }
            uVar11 = uVar6 & 0xffffffff;
          }
LAB_00f9cf88:
          uVar6 = uVar6 + 1;
          puVar7 = puVar7 + 4;
        } while (uVar12 != uVar6);
      }
      uVar9 = (uint)uVar5;
      if ((uVar9 == uVar10) && (uVar4 = uVar10, (uint)uVar11 == uVar10)) {
LAB_00f9d134:
        *(undefined4 *)(lVar13 + (long)(int)uVar10 * 4) = 3;
        return uVar4;
      }
      if ((uVar9 != 0xffffffff) && (uVar9 != (uint)uVar11)) {
        for (fVar16 = fVar27 + -40.0; fVar16 <= fVar27; fVar16 = fVar16 + 5.0) {
          sincosf(fVar16 * 0.01745329,&fStack_ac,&local_b0);
          uVar9 = (uint)uVar5;
          if (param_2 < 1) {
            uVar5 = 0xffffffff;
            uVar4 = 0xffffffff;
            if ((uVar9 & uVar10) == 0xffffffff) goto LAB_00f9d134;
          }
          else {
            uVar6 = 0;
            uVar19 = NEON_fmadd(local_b0,uVar21,fStack_ac * fVar31);
            uVar20 = NEON_fmadd(local_b0,uVar14,fStack_ac * fVar15);
            uVar22 = NEON_fmadd(local_b0,uVar17,fStack_ac * fVar18);
            uVar5 = 0xffffffff;
            fVar23 = (float)NEON_fmadd(uVar19,0x3ccccccd,fVar28);
            uVar19 = NEON_fmadd(uVar20,0x3ccccccd,fVar29);
            uVar20 = NEON_fmadd(uVar22,0x3ccccccd,fVar30);
            puVar7 = puVar2;
            do {
              if (*(int *)(lVar13 + uVar6 * 4) != 0) {
                if ((int)uVar5 != -1) {
                  pfVar1 = (float *)(param_1 + (long)(int)uVar5 * 0x10);
                  uVar22 = NEON_fmadd(puVar7[-1],uVar19,(float)puVar7[-2] * fVar23);
                  uVar24 = NEON_fmadd(pfVar1[1],uVar19,*pfVar1 * fVar23);
                  fVar25 = (float)NEON_fmadd(*puVar7,uVar20,uVar22);
                  fVar26 = (float)NEON_fmadd(pfVar1[2],uVar20,uVar24);
                  if (fVar25 <= fVar26) goto LAB_00f9d0b0;
                }
                uVar5 = uVar6 & 0xffffffff;
              }
LAB_00f9d0b0:
              uVar6 = uVar6 + 1;
              puVar7 = puVar7 + 4;
            } while (uVar12 != uVar6);
            if ((uVar9 == uVar10) && (uVar4 = uVar10, (uint)uVar5 == uVar10)) goto LAB_00f9d134;
          }
        }
      }
      bVar3 = uVar8 < 0x13c;
      uVar5 = uVar11;
      uVar8 = uVar8 + 0x2d;
    } while (bVar3);
    *(undefined4 *)(lVar13 + (long)(int)uVar10 * 4) = 0;
  } while( true );
}


