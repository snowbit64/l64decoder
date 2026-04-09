// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: PSolve_SContacts
// Entry Point: 00f88aa8
// Size: 436 bytes
// Signature: undefined __cdecl PSolve_SContacts(btSoftBody * param_1, float param_2, float param_3)


/* btSoftBody::PSolve_SContacts(btSoftBody*, float, float) */

ulong btSoftBody::PSolve_SContacts(btSoftBody *param_1,float param_2,float param_3)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 in_register_00005004;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  
  uVar11 = CONCAT44(in_register_00005004,param_2);
  uVar4 = (ulong)*(uint *)(param_1 + 0x434);
  if (0 < (int)*(uint *)(param_1 + 0x434)) {
    pfVar5 = (float *)(*(long *)(param_1 + 0x440) + 0x3c);
    do {
      lVar6 = *(long *)(pfVar5 + -0xd);
      fVar13 = pfVar5[-0xb];
      fVar17 = pfVar5[-10];
      fVar22 = pfVar5[-9];
      lVar2 = *(long *)(lVar6 + 0x10);
      lVar3 = *(long *)(lVar6 + 0x18);
      lVar6 = *(long *)(lVar6 + 0x20);
      lVar7 = *(long *)(pfVar5 + -0xf);
      fVar15 = (float)*(undefined8 *)(lVar2 + 0x10) * fVar13 +
               (float)*(undefined8 *)(lVar3 + 0x10) * fVar17 +
               (float)*(undefined8 *)(lVar6 + 0x10) * fVar22;
      fVar16 = (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20) * fVar13 +
               (float)((ulong)*(undefined8 *)(lVar3 + 0x10) >> 0x20) * fVar17 +
               (float)((ulong)*(undefined8 *)(lVar6 + 0x10) >> 0x20) * fVar22;
      uVar10 = NEON_fmadd(fVar17,*(undefined4 *)(lVar3 + 0x18),fVar13 * *(float *)(lVar2 + 0x18));
      fVar25 = (float)NEON_fmadd(fVar22,*(undefined4 *)(lVar6 + 0x18),uVar10);
      uVar12 = *(undefined8 *)(lVar7 + 0x10);
      fVar8 = (float)((ulong)uVar12 >> 0x20);
      uVar10 = NEON_fnmsub(*(undefined4 *)(lVar2 + 0x28),fVar13,fVar25);
      fVar14 = *(float *)(lVar7 + 0x18);
      fVar19 = -fVar15 + (float)*(undefined8 *)(lVar2 + 0x20) * fVar13 +
               (float)*(undefined8 *)(lVar3 + 0x20) * fVar17 +
               (float)*(undefined8 *)(lVar6 + 0x20) * fVar22 +
               ((float)uVar12 - (float)*(undefined8 *)(lVar7 + 0x20));
      fVar20 = -fVar16 + (float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20) * fVar13 +
               (float)((ulong)*(undefined8 *)(lVar3 + 0x20) >> 0x20) * fVar17 +
               (float)((ulong)*(undefined8 *)(lVar6 + 0x20) >> 0x20) * fVar22 +
               (fVar8 - (float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20));
      uVar10 = NEON_fmadd(*(undefined4 *)(lVar3 + 0x28),fVar17,uVar10);
      uVar18 = *(undefined8 *)(pfVar5 + -7);
      fVar22 = (float)NEON_fmadd(*(undefined4 *)(lVar6 + 0x28),fVar22,uVar10);
      fVar13 = (float)uVar18;
      fVar17 = (float)((ulong)uVar18 >> 0x20);
      fVar22 = fVar22 + (fVar14 - *(float *)(lVar7 + 0x28));
      fVar23 = pfVar5[-5];
      fVar24 = (float)NEON_fmadd(fVar23,fVar22,fVar13 * fVar19 + fVar17 * fVar20);
      if (fVar24 < 0.0) {
        uVar26 = NEON_ext(CONCAT44(fVar16,fVar15),uVar12,4,1);
        uVar18 = NEON_rev64(uVar18,4);
        fVar25 = (((float)uVar18 * (float)uVar26 + fVar15 * fVar13 + fVar25 * fVar23) -
                 ((float)((ulong)uVar18 >> 0x20) * (float)((ulong)uVar26 >> 0x20) + fVar8 * fVar17 +
                 fVar14 * fVar23)) + pfVar5[-3];
        fVar15 = fVar13 * fVar25;
        fVar16 = fVar17 * fVar25;
        fVar25 = fVar25 * fVar23;
      }
      else {
        fVar15 = 0.0;
        fVar16 = 0.0;
        fVar25 = 0.0;
      }
      uVar10 = NEON_fnmsub(fVar24,fVar23,fVar22);
      uVar4 = uVar4 - 1;
      fVar22 = pfVar5[-2];
      fVar23 = pfVar5[-1];
      uVar21 = NEON_fmadd(fVar22,uVar10,fVar25);
      fVar15 = fVar15 + (-fVar19 + fVar13 * fVar24) * fVar22;
      fVar16 = fVar16 + (-fVar20 + fVar17 * fVar24) * fVar22;
      uVar10 = NEON_fmadd(uVar21,fVar23,fVar14);
      *(undefined4 *)(lVar7 + 0x18) = uVar10;
      *(ulong *)(lVar7 + 0x10) = CONCAT44(fVar8 + fVar16 * fVar23,(float)uVar12 + fVar15 * fVar23);
      fVar8 = pfVar5[-0xb] * *pfVar5;
      uVar10 = NEON_fmsub(fVar8,uVar21,*(undefined4 *)(lVar2 + 0x18));
      *(ulong *)(lVar2 + 0x10) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20) - fVar16 * fVar8,
                    (float)*(undefined8 *)(lVar2 + 0x10) - fVar15 * fVar8);
      *(undefined4 *)(lVar2 + 0x18) = uVar10;
      fVar8 = pfVar5[-10] * *pfVar5;
      uVar10 = NEON_fmsub(fVar8,uVar21,*(undefined4 *)(lVar3 + 0x18));
      *(ulong *)(lVar3 + 0x10) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar3 + 0x10) >> 0x20) - fVar16 * fVar8,
                    (float)*(undefined8 *)(lVar3 + 0x10) - fVar15 * fVar8);
      *(undefined4 *)(lVar3 + 0x18) = uVar10;
      fVar8 = *pfVar5;
      pfVar1 = pfVar5 + -9;
      pfVar5 = pfVar5 + 0x10;
      fVar8 = *pfVar1 * fVar8;
      uVar9 = NEON_fmsub(fVar8,uVar21,*(undefined4 *)(lVar6 + 0x18));
      uVar11 = (ulong)uVar9;
      *(ulong *)(lVar6 + 0x10) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x10) >> 0x20) - fVar16 * fVar8,
                    (float)*(undefined8 *)(lVar6 + 0x10) - fVar15 * fVar8);
      *(uint *)(lVar6 + 0x18) = uVar9;
    } while (uVar4 != 0);
  }
  return uVar11;
}


