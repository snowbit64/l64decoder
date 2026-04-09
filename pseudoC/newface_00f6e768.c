// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newface
// Entry Point: 00f6e768
// Size: 656 bytes
// Signature: undefined __thiscall newface(EPA * this, sSV * param_1, sSV * param_2, sSV * param_3, bool param_4)


/* gjkepa2_impl::EPA::newface(gjkepa2_impl::GJK::sSV*, gjkepa2_impl::GJK::sSV*,
   gjkepa2_impl::GJK::sSV*, bool) */

undefined8 * __thiscall
gjkepa2_impl::EPA::newface(EPA *this,sSV *param_1,sSV *param_2,sSV *param_3,bool param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  puVar6 = *(undefined8 **)(this + 0x7070);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined4 *)this = 5;
  }
  else {
    if (puVar6[10] != 0) {
      *(undefined8 *)(puVar6[10] + 0x48) = puVar6[9];
    }
    piVar2 = (int *)(this + 0x7068);
    if (puVar6[9] != 0) {
      *(undefined8 *)(puVar6[9] + 0x50) = puVar6[10];
    }
    if (*(undefined8 **)(this + 0x7070) == puVar6) {
      *(undefined8 *)(this + 0x7070) = puVar6[10];
    }
    puVar6[9] = 0;
    iVar3 = *(int *)(this + 0x7078);
    puVar6[10] = *(undefined8 *)(this + 0x7060);
    *(int *)(this + 0x7078) = iVar3 + -1;
    if (*(long *)(this + 0x7060) != 0) {
      *(undefined8 **)(*(long *)(this + 0x7060) + 0x48) = puVar6;
    }
    fVar7 = *(float *)(param_1 + 0x14);
    fVar9 = *(float *)(param_1 + 0x18);
    fVar15 = *(float *)(param_2 + 0x14);
    fVar8 = *(float *)(param_2 + 0x18);
    fVar10 = *(float *)(param_3 + 0x14);
    fVar13 = *(float *)(param_3 + 0x18);
    fVar12 = *(float *)(param_1 + 0x10);
    *(undefined8 **)(this + 0x7060) = puVar6;
    fVar14 = *(float *)(param_2 + 0x10);
    *(sFace *)((long)puVar6 + 0x5b) = (sFace)0x0;
    fVar8 = fVar8 - fVar9;
    fVar10 = fVar10 - fVar7;
    fVar13 = fVar13 - fVar9;
    fVar14 = fVar14 - fVar12;
    fVar15 = fVar15 - fVar7;
    fVar12 = *(float *)(param_3 + 0x10) - fVar12;
    iVar3 = *piVar2;
    puVar6[3] = param_1;
    puVar6[4] = param_2;
    puVar6[5] = param_3;
    fVar9 = (float)NEON_fnmsub(fVar13,fVar15,fVar10 * fVar8);
    fVar8 = (float)NEON_fnmsub(fVar12,fVar8,fVar13 * fVar14);
    *piVar2 = iVar3 + 1;
    *(float *)((long)puVar6 + 0xc) = 0.0;
    fVar7 = (float)NEON_fnmsub(fVar10,fVar14,fVar12 * fVar15);
    *(float *)puVar6 = fVar9;
    *(float *)((long)puVar6 + 4) = fVar8;
    uVar11 = NEON_fmadd(fVar8,fVar8,fVar9 * fVar9);
    *(float *)(puVar6 + 1) = fVar7;
    fVar7 = (float)NEON_fmadd(fVar7,fVar7,uVar11);
    fVar7 = SQRT(fVar7);
    if (fVar7 <= 0.0001) {
      uVar11 = 2;
    }
    else {
      puVar1 = puVar6 + 2;
      uVar4 = getedgedist(this,(sFace *)puVar6,param_1,param_2,(float *)puVar1);
      if ((((uVar4 & 1) == 0) &&
          (uVar4 = getedgedist(this,(sFace *)puVar6,param_2,param_3,(float *)puVar1),
          (uVar4 & 1) == 0)) &&
         (uVar4 = getedgedist(this,(sFace *)puVar6,param_3,param_1,(float *)puVar1),
         (uVar4 & 1) == 0)) {
        uVar11 = NEON_fmadd(*(float *)((long)puVar6 + 4),*(undefined4 *)(param_1 + 0x14),
                            *(float *)puVar6 * *(float *)(param_1 + 0x10));
        fVar15 = (float)NEON_fmadd(*(float *)(puVar6 + 1),*(undefined4 *)(param_1 + 0x18),uVar11);
        *(float *)(puVar6 + 2) = fVar15 / fVar7;
      }
      fVar7 = 1.0 / fVar7;
      *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) * fVar7,(float)*puVar6 * fVar7);
      *(float *)(puVar6 + 1) = *(float *)(puVar6 + 1) * fVar7;
      if (param_4) {
        return puVar6;
      }
      if (-1e-05 <= *(float *)puVar1) {
        return puVar6;
      }
      uVar11 = 3;
    }
    lVar5 = puVar6[10];
    *(undefined4 *)this = uVar11;
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x48) = puVar6[9];
    }
    if (puVar6[9] != 0) {
      *(undefined8 *)(puVar6[9] + 0x50) = puVar6[10];
    }
    if (*(undefined8 **)(this + 0x7060) == puVar6) {
      *(undefined8 *)(this + 0x7060) = puVar6[10];
    }
    puVar6[9] = 0;
    iVar3 = *piVar2;
    puVar6[10] = *(undefined8 *)(this + 0x7070);
    *piVar2 = iVar3 + -1;
    if (*(long *)(this + 0x7070) != 0) {
      *(undefined8 **)(*(long *)(this + 0x7070) + 0x48) = puVar6;
    }
    *(undefined8 **)(this + 0x7070) = puVar6;
    *(int *)(this + 0x7078) = *(int *)(this + 0x7078) + 1;
  }
  return (undefined8 *)0x0;
}


