// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: split
// Entry Point: 00b6fa90
// Size: 504 bytes
// Signature: undefined __thiscall split(Brep * this, Split * param_1, uint param_2, BrepPlane * param_3)


/* Brep::split(Brep::Split*, unsigned int, BrepPlane const&) const */

void __thiscall Brep::split(Brep *this,Split *param_1,uint param_2,BrepPlane *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ushort uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  
  fVar28 = *(float *)(param_3 + 0x10);
  lVar12 = 0;
  lVar10 = *(long *)(this + 0x2f68);
  iVar7 = 0;
  lVar11 = *(long *)(this + 0x2f50);
  lVar20 = *(long *)(this + 0x2ef0);
  uVar24 = *(undefined4 *)param_3;
  fVar25 = *(float *)(param_3 + 4);
  uVar26 = *(undefined4 *)(param_3 + 8);
  fVar27 = *(float *)(param_3 + 0xc);
  uVar19 = (ulong)*(ushort *)
                   (lVar11 + (ulong)*(ushort *)(lVar10 + (ulong)(param_2 << 2 | 3) * 8) * 0xc);
  puVar1 = (undefined4 *)(lVar20 + uVar19 * 0x10);
  uVar4 = param_2 << 2 | 1;
  lVar13 = (ulong)uVar4 << 3;
  uVar21 = NEON_fmadd(uVar24,*puVar1,fVar25 * (float)puVar1[1]);
  fVar22 = (float)NEON_fmadd(uVar26,puVar1[2],uVar21);
  fVar22 = fVar22 + fVar27;
  uVar14 = (uint)(fVar28 < fVar22);
  if (fVar22 < -fVar28) {
    uVar14 = 0xffffffff;
  }
  do {
    uVar17 = *(ushort *)(lVar11 + (ulong)*(ushort *)(lVar10 + lVar13) * 0xc);
    uVar16 = (ulong)uVar17;
    puVar2 = (undefined8 *)(lVar20 + uVar16 * 0x10);
    uVar21 = NEON_fmadd(uVar24,*(undefined4 *)puVar2,fVar25 * *(float *)((long)puVar2 + 4));
    fVar23 = (float)NEON_fmadd(uVar26,*(undefined4 *)(puVar2 + 1),uVar21);
    fVar23 = fVar23 + fVar27;
    uVar9 = (uint)(fVar28 < fVar23);
    if (fVar23 < -fVar28) {
      uVar9 = 0xffffffff;
    }
    uVar15 = (uint)uVar17;
    if ((int)(uVar9 * uVar14) < 0) {
      uVar14 = (uint)uVar17;
      uVar18 = (uint)uVar19;
      fVar27 = fVar22;
      fVar25 = fVar23;
      if (uVar18 <= uVar14) {
        fVar27 = fVar23;
        fVar25 = fVar22;
      }
      uVar5 = uVar18;
      if (uVar14 <= uVar18) {
        uVar5 = (uint)uVar17;
      }
      uVar6 = uVar18;
      if (uVar18 <= uVar14) {
        uVar6 = (uint)uVar17;
      }
      puVar2 = (undefined8 *)(lVar20 + (ulong)(ushort)uVar5 * 0x10);
      fVar25 = fVar25 / (fVar25 - fVar27);
      if (fVar25 <= 0.0) {
        uVar8 = *puVar2;
        fVar22 = *(float *)(lVar20 + (ulong)uVar5 * 0x10 + 8);
      }
      else {
        puVar3 = (undefined8 *)(lVar20 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar3;
        if (1.0 <= fVar25) {
          fVar22 = *(float *)(puVar3 + 1);
        }
        else {
          uVar8 = *puVar2;
          fVar22 = *(float *)(lVar20 + (ulong)uVar5 * 0x10 + 8);
          fVar27 = (float)uVar8;
          fVar28 = (float)((ulong)uVar8 >> 0x20);
          uVar8 = CONCAT44(fVar28 + (*(float *)((long)puVar3 + 4) - fVar28) * fVar25,
                           fVar27 + (*(float *)puVar3 - fVar27) * fVar25);
          fVar22 = fVar22 + fVar25 * (*(float *)(puVar3 + 1) - fVar22);
        }
      }
      uVar17 = 0xffff;
      fVar27 = 1.0 - fVar25;
      if (uVar18 <= uVar15) {
        fVar27 = fVar25;
      }
      *(undefined8 *)(param_1 + (long)iVar7 * 0x18) = uVar8;
      *(float *)((long)(param_1 + (long)iVar7 * 0x18) + 8) = fVar22;
LAB_00b6fc38:
      *(float *)(param_1 + (long)iVar7 * 0x18 + 0xc) = fVar27;
      *(uint *)(param_1 + (long)iVar7 * 0x18 + 0x10) = uVar4 + (int)lVar12;
      *(ushort *)(param_1 + (long)iVar7 * 0x18 + 0x14) = uVar17;
      iVar7 = iVar7 + 1;
    }
    else if (uVar9 == 0) {
      fVar27 = 1.0;
      uVar8 = *puVar2;
      *(undefined4 *)((long)(param_1 + (long)iVar7 * 0x18) + 8) = *(undefined4 *)(puVar2 + 1);
      *(undefined8 *)(param_1 + (long)iVar7 * 0x18) = uVar8;
      goto LAB_00b6fc38;
    }
    if (lVar12 == 2) {
      return;
    }
    uVar24 = *(undefined4 *)param_3;
    fVar25 = *(float *)(param_3 + 4);
    uVar26 = *(undefined4 *)(param_3 + 8);
    fVar27 = *(float *)(param_3 + 0xc);
    lVar10 = *(long *)(this + 0x2f68);
    lVar13 = lVar13 + 8;
    lVar11 = *(long *)(this + 0x2f50);
    lVar12 = lVar12 + 1;
    lVar20 = *(long *)(this + 0x2ef0);
    fVar28 = *(float *)(param_3 + 0x10);
    uVar19 = uVar16;
    fVar22 = fVar23;
    uVar14 = uVar9;
  } while( true );
}


