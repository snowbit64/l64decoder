// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fm_matrixToQuat
// Entry Point: 00eb3200
// Size: 424 bytes
// Signature: undefined __cdecl fm_matrixToQuat(float * param_1, float * param_2)


/* FLOAT_MATH::fm_matrixToQuat(float const*, float*) */

void FLOAT_MATH::fm_matrixToQuat(float *param_1,float *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_28;
  float local_20;
  float local_1c;
  long local_18;
  
  lVar4 = tpidr_el0;
  local_18 = *(long *)(lVar4 + 0x28);
  fVar6 = *param_1;
  fVar7 = param_1[5];
  fVar8 = fVar6 + fVar7 + param_1[10];
  if (fVar8 <= 0.0) {
    lVar1 = 0x14;
    if (fVar7 <= fVar6) {
      lVar1 = 0;
    }
    uVar5 = 2;
    if (param_1[10] <= *(float *)((long)param_1 + lVar1)) {
      uVar5 = (uint)(fVar6 < fVar7);
    }
    iVar2 = *(int *)(&DAT_005235f0 + (ulong)uVar5 * 4);
    iVar3 = *(int *)(&DAT_005235f0 + (long)iVar2 * 4);
    fVar11 = param_1[(int)(uVar5 | iVar2 << 2)];
    fVar9 = param_1[iVar2 * 4 + iVar3];
    fVar10 = param_1[iVar3 * 4 + iVar2];
    fVar13 = param_1[(int)(uVar5 | iVar3 << 2)];
    fVar8 = param_1[(int)(uVar5 * 4 + iVar2)];
    fVar12 = param_1[(int)(uVar5 * 4 + iVar3)];
    fVar7 = SQRT((param_1[uVar5 | uVar5 << 2] - (param_1[iVar2 * 5] + param_1[iVar3 * 5])) + 1.0);
    fVar6 = 0.5 / fVar7;
    if (fVar7 == 0.0) {
      fVar6 = fVar7;
    }
    *(float *)((long)&local_28 + (ulong)uVar5 * 4) = fVar7 * 0.5;
    local_1c = (fVar9 - fVar10) * fVar6;
    *(float *)((long)&local_28 + (long)iVar2 * 4) = fVar6 * (fVar8 + fVar11);
    *(float *)((long)&local_28 + (long)iVar3 * 4) = fVar6 * (fVar12 + fVar13);
    *(undefined8 *)param_2 = local_28;
    param_2[3] = local_1c;
  }
  else {
    fVar6 = SQRT(fVar8 + 1.0);
    param_2[3] = fVar6 * 0.5;
    fVar6 = 0.5 / fVar6;
    *param_2 = fVar6 * (param_1[6] - param_1[9]);
    param_2[1] = fVar6 * (param_1[8] - param_1[2]);
    local_20 = fVar6 * (param_1[1] - param_1[4]);
  }
  param_2[2] = local_20;
  if (*(long *)(lVar4 + 0x28) == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


