// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRotation
// Entry Point: 00f2ef0c
// Size: 388 bytes
// Signature: undefined __thiscall getRotation(btMatrix3x3 * this, btQuaternion * param_1)


/* btMatrix3x3::getRotation(btQuaternion&) const */

void __thiscall btMatrix3x3::getRotation(btMatrix3x3 *this,btQuaternion *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_28 [4];
  long local_18;
  
  lVar5 = tpidr_el0;
  local_18 = *(long *)(lVar5 + 0x28);
  fVar12 = *(float *)this;
  fVar13 = *(float *)(this + 0x14);
  fVar14 = *(float *)(this + 0x28);
  fVar15 = fVar13 + fVar12 + fVar14;
  if (fVar15 <= 0.0) {
    uVar6 = 2;
    if (fVar14 <= fVar13) {
      uVar6 = 1;
    }
    if (fVar13 <= fVar12) {
      uVar6 = (uint)(fVar12 < fVar14) << 1;
    }
    lVar9 = (ulong)uVar6 * 4;
    uVar3 = uVar6 + (uVar6 * 0xab + 0xab >> 9) * -3 + 1;
    uVar4 = uVar6 + (uVar6 * 0xab + 0x156 >> 9) * -3 + 2;
    uVar7 = (ulong)uVar3 & 0xff;
    uVar10 = (ulong)uVar4 & 0xff;
    lVar8 = uVar7 * 4;
    lVar11 = uVar10 * 4;
    bVar1 = (byte)uVar3;
    bVar2 = (byte)uVar4;
    fVar14 = *(float *)(this + lVar9 + (ulong)bVar1 * 0x10);
    fVar15 = *(float *)(this + lVar9 + (ulong)bVar2 * 0x10);
    fVar16 = *(float *)(this + lVar8 + (ulong)uVar6 * 0x10);
    fVar18 = *(float *)(this + lVar11 + (ulong)uVar6 * 0x10);
    fVar17 = *(float *)(this + lVar8 + (ulong)bVar2 * 0x10);
    fVar19 = *(float *)(this + lVar11 + (ulong)bVar1 * 0x10);
    fVar12 = SQRT((*(float *)(this + lVar9 + (ulong)uVar6 * 0x10) + 1.0) -
                  (*(float *)(this + lVar8 + (ulong)bVar1 * 0x10) +
                  *(float *)(this + lVar11 + (ulong)bVar2 * 0x10)));
    fVar13 = 0.5 / fVar12;
    local_28[uVar6] = fVar12 * 0.5;
    local_28[uVar7] = (fVar16 + fVar14) * fVar13;
    local_28[uVar10] = (fVar18 + fVar15) * fVar13;
    fVar13 = (fVar17 - fVar19) * fVar13;
  }
  else {
    fVar13 = SQRT(fVar15 + 1.0);
    fVar12 = 0.5 / fVar13;
    fVar13 = fVar13 * 0.5;
    local_28[0] = (*(float *)(this + 0x24) - *(float *)(this + 0x18)) * fVar12;
    local_28[1] = (*(float *)(this + 8) - *(float *)(this + 0x20)) * fVar12;
    local_28[2] = (*(float *)(this + 0x10) - *(float *)(this + 4)) * fVar12;
  }
  *(float *)param_1 = local_28[0];
  *(float *)(param_1 + 4) = local_28[1];
  *(float *)(param_1 + 8) = local_28[2];
  *(float *)(param_1 + 0xc) = fVar13;
  if (*(long *)(lVar5 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


