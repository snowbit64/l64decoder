// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeDuplicateVertices
// Entry Point: 00bacef4
// Size: 200 bytes
// Signature: undefined __cdecl removeDuplicateVertices(float * param_1, int param_2, int * param_3, float param_4)


/* Bt2PhysicsCookingUtil::removeDuplicateVertices(float*, int, int&, float) */

void Bt2PhysicsCookingUtil::removeDuplicateVertices
               (float *param_1,int param_2,int *param_3,float param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  
  *param_3 = 0;
  if (0 < param_2) {
    uVar3 = 0;
    uVar4 = 0;
    do {
      uVar2 = (int)uVar3 * 3;
      if ((int)uVar4 < 1) {
        fVar9 = param_1[uVar2];
        uVar6 = (ulong)(uVar2 + 1);
        uVar5 = (ulong)(uVar2 + 2);
      }
      else {
        uVar6 = (ulong)(uVar2 + 1);
        uVar5 = (ulong)(uVar2 + 2);
        fVar9 = param_1[uVar2];
        uVar7 = (ulong)uVar4;
        pfVar8 = param_1 + 2;
        do {
          uVar10 = NEON_fmadd(pfVar8[-2] - fVar9,pfVar8[-2] - fVar9,
                              (pfVar8[-1] - param_1[uVar6]) * (pfVar8[-1] - param_1[uVar6]));
          fVar11 = (float)NEON_fmadd(*pfVar8 - param_1[uVar5],*pfVar8 - param_1[uVar5],uVar10);
          if (fVar11 < param_4) goto LAB_00bacf4c;
          pfVar8 = pfVar8 + 3;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      lVar1 = (long)(int)uVar4 + (long)(int)uVar4 * 2;
      uVar4 = uVar4 + 1;
      *param_3 = uVar4;
      param_1[(int)lVar1] = fVar9;
      param_1[lVar1 + 1] = param_1[uVar6];
      (param_1 + (int)lVar1)[2] = param_1[uVar5];
LAB_00bacf4c:
      uVar3 = uVar3 + 1;
    } while (uVar3 != (uint)param_2);
  }
  return;
}


