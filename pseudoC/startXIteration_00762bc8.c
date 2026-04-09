// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startXIteration
// Entry Point: 00762bc8
// Size: 480 bytes
// Signature: undefined __thiscall startXIteration(ParallelogramHelper * this, uint param_1)


/* ParallelogramHelper::startXIteration(unsigned int) */

void __thiscall ParallelogramHelper::startXIteration(ParallelogramHelper *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar4 = (ulong)*(uint *)(this + 0x2c);
  fVar8 = (float)(ulong)param_1;
  if (*(float *)(this + uVar4 * 4 + 0x10) <= fVar8) {
    fVar11 = fVar8 - *(float *)(this + uVar4 * 4 + 0x10);
    fVar10 = *(float *)(this + 0x30);
    fVar7 = *(float *)(this + uVar4 * 4);
    fVar9 = *(float *)(this + (ulong)*(uint *)(this + 0x28) * 4);
    if (0.0 <= fVar10) {
      fVar10 = (float)NEON_fmadd(fVar11 - *(float *)(this + 0x3c),fVar10,fVar7);
      goto LAB_00762c7c;
    }
    fVar10 = (float)NEON_fmadd((fVar11 - *(float *)(this + 0x38)) + 1.0,fVar10,fVar7);
LAB_00762c5c:
    fVar11 = fVar9;
    if (fVar9 <= fVar10) {
      fVar11 = fVar10;
    }
    fVar9 = fVar7;
    if (fVar11 <= fVar7) {
      fVar9 = fVar11;
    }
  }
  else {
    fVar10 = *(float *)(this + 0x34);
    fVar7 = *(float *)(this + uVar4 * 4);
    fVar11 = fVar8 - *(float *)((long)(this + (ulong)*(uint *)(this + 0x20) * 4) + 0x10);
    fVar9 = *(float *)(this + (ulong)*(uint *)(this + 0x20) * 4);
    if (0.0 <= fVar10) {
      fVar10 = (float)NEON_fmadd(fVar11 - *(float *)(this + 0x3c),fVar10,fVar9);
      goto LAB_00762c5c;
    }
    fVar10 = (float)NEON_fmadd((fVar11 - *(float *)(this + 0x38)) + 1.0,fVar10,fVar9);
LAB_00762c7c:
    if (fVar7 <= fVar10) {
      fVar7 = fVar10;
    }
    if (fVar7 <= fVar9) {
      fVar9 = fVar7;
    }
  }
  uVar4 = (ulong)*(uint *)(this + 0x24);
  if (*(float *)(this + uVar4 * 4 + 0x10) <= fVar8) {
    fVar8 = fVar8 - *(float *)(this + uVar4 * 4 + 0x10);
    fVar11 = *(float *)(this + 0x34);
    fVar10 = *(float *)(this + uVar4 * 4);
    fVar7 = *(float *)(this + (ulong)*(uint *)(this + 0x28) * 4);
    if (0.0 <= fVar11) {
      fVar8 = (float)NEON_fmadd((fVar8 - *(float *)(this + 0x38)) + 1.0,fVar11,fVar10);
      if (fVar10 <= fVar8) {
        fVar10 = fVar8;
      }
      if (fVar10 <= fVar7) {
        fVar7 = fVar10;
      }
      goto LAB_00762d64;
    }
    fVar11 = (float)NEON_fmadd(fVar8 - *(float *)(this + 0x3c),fVar11,fVar10);
    fVar8 = fVar7;
    if (fVar7 <= fVar11) {
      fVar8 = fVar11;
    }
  }
  else {
    fVar11 = *(float *)(this + 0x30);
    fVar10 = *(float *)(this + uVar4 * 4);
    fVar8 = fVar8 - *(float *)((long)(this + (ulong)*(uint *)(this + 0x20) * 4) + 0x10);
    fVar7 = *(float *)(this + (ulong)*(uint *)(this + 0x20) * 4);
    if (fVar11 < 0.0) {
      fVar8 = (float)NEON_fmadd(fVar8 - *(float *)(this + 0x3c),fVar11,fVar7);
      if (fVar10 <= fVar8) {
        fVar10 = fVar8;
      }
      if (fVar10 <= fVar7) {
        fVar7 = fVar10;
      }
      goto LAB_00762d64;
    }
    fVar11 = (float)NEON_fmadd((fVar8 - *(float *)(this + 0x38)) + 1.0,fVar11,fVar7);
    fVar8 = fVar7;
    if (fVar7 <= fVar11) {
      fVar8 = fVar11;
    }
  }
  fVar7 = fVar10;
  if (fVar8 <= fVar10) {
    fVar7 = fVar8;
  }
LAB_00762d64:
  uVar3 = *(uint *)(this + 0x40);
  uVar5 = (uint)(fVar9 + *(float *)(this + 0x38));
  iVar6 = (int)(fVar7 + *(float *)(this + 0x3c));
  uVar1 = uVar3;
  if (uVar5 <= uVar3) {
    uVar1 = uVar5;
  }
  uVar2 = 0;
  if (-1 < (int)uVar5) {
    uVar2 = uVar1;
  }
  if (iVar6 + 1U <= uVar3) {
    uVar3 = iVar6 + 1;
  }
  if (iVar6 == -2 || iVar6 + 2 < 0 != SCARRY4(iVar6,2)) {
    uVar3 = 0;
  }
  *(uint *)(this + 0x58) = uVar2;
  *(uint *)(this + 0x5c) = uVar3;
  return;
}


