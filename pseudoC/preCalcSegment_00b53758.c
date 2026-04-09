// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: preCalcSegment
// Entry Point: 00b53758
// Size: 400 bytes
// Signature: undefined __thiscall preCalcSegment(CubicSpline * this, uint param_1)


/* CubicSpline::preCalcSegment(unsigned int) */

float __thiscall CubicSpline::preCalcSegment(CubicSpline *this,uint param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  Vector3 aVStack_88 [16];
  float local_78;
  undefined8 local_74;
  long local_68;
  
  lVar6 = tpidr_el0;
  uVar7 = param_1 * 3;
  local_68 = *(long *)(lVar6 + 0x28);
  fVar17 = 0.0;
  lVar8 = *(long *)(this + 0x18);
  pfVar1 = (float *)(lVar8 + (ulong)uVar7 * 4);
  pfVar2 = (float *)(lVar8 + (ulong)(uVar7 + 3) * 4);
  pfVar3 = (float *)(lVar8 + (ulong)(uVar7 + 6) * 4);
  fVar10 = *pfVar1;
  fVar12 = *pfVar2;
  pfVar4 = (float *)(lVar8 + (ulong)(uVar7 + 9) * 4);
  uVar14 = *(undefined8 *)(pfVar1 + 1);
  uVar16 = *(undefined8 *)(pfVar2 + 1);
  fVar18 = *pfVar3;
  uVar13 = *(undefined8 *)(pfVar3 + 1);
  fVar11 = *pfVar4;
  uVar15 = *(undefined8 *)(pfVar4 + 1);
  *(undefined4 *)(*(long *)(this + 0x38) + (ulong)(param_1 * 0x21) * 4) = 0;
  uVar9 = 0;
  uVar13 = CONCAT44((float)((ulong)uVar14 >> 0x20) * 0.1666667 +
                    (float)((ulong)uVar16 >> 0x20) * 0.6666667 +
                    (float)((ulong)uVar13 >> 0x20) * 0.1666667 +
                    (float)((ulong)uVar15 >> 0x20) * 0.0,
                    (float)uVar14 * 0.1666667 + (float)uVar16 * 0.6666667 +
                    (float)uVar13 * 0.1666667 + (float)uVar15 * 0.0);
  fVar10 = fVar10 * 0.1666667 + fVar12 * 0.6666667 + fVar18 * 0.1666667 + fVar11 * 0.0;
  do {
    uVar5 = uVar9 + 1;
    evaluate(this,param_1,(float)(uVar5 & 0xffffffff) * 0.03125,(Vector3 *)&local_78,aVStack_88);
    fVar11 = (float)local_74 - (float)uVar13;
    fVar12 = (float)((ulong)local_74 >> 0x20) - (float)((ulong)uVar13 >> 0x20);
    fVar17 = fVar17 + SQRT((local_78 - fVar10) * (local_78 - fVar10) + fVar11 * fVar11 +
                           fVar12 * fVar12);
    *(float *)(*(long *)(this + 0x38) + (ulong)(param_1 * 0x21 + 1 + (int)uVar9) * 4) = fVar17;
    uVar9 = uVar5;
    uVar13 = local_74;
    fVar10 = local_78;
  } while (uVar5 != 0x20);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return fVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


