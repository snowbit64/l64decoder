// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeDuplicateVertices
// Entry Point: 00bae300
// Size: 152 bytes
// Signature: undefined __cdecl removeDuplicateVertices(btVector3 * param_1, int param_2, int * param_3, float param_4)


/* Bt2PhysicsCookingUtil::removeDuplicateVertices(btVector3*, int, int&, float) */

void Bt2PhysicsCookingUtil::removeDuplicateVertices
               (btVector3 *param_1,int param_2,int *param_3,float param_4)

{
  float *pfVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  *param_3 = 0;
  if (0 < param_2) {
    uVar3 = 0;
    uVar2 = 0;
    do {
      if (0 < (int)uVar3) {
        pfVar1 = (float *)(param_1 + uVar2 * 0x10);
        uVar4 = (ulong)uVar3;
        pfVar5 = (float *)(param_1 + 4);
        do {
          uVar7 = NEON_fmadd(pfVar5[-1] - *pfVar1,pfVar5[-1] - *pfVar1,
                             (*pfVar5 - pfVar1[1]) * (*pfVar5 - pfVar1[1]));
          fVar8 = (float)NEON_fmadd(pfVar5[1] - pfVar1[2],pfVar5[1] - pfVar1[2],uVar7);
          if (fVar8 < param_4) goto LAB_00bae334;
          pfVar5 = pfVar5 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      *param_3 = uVar3 + 1;
      uVar6 = *(undefined8 *)(param_1 + uVar2 * 0x10);
      *(undefined8 *)((long)(param_1 + (long)(int)uVar3 * 0x10) + 8) =
           *(undefined8 *)((long)(param_1 + uVar2 * 0x10) + 8);
      *(undefined8 *)(param_1 + (long)(int)uVar3 * 0x10) = uVar6;
      uVar3 = *param_3;
LAB_00bae334:
      uVar2 = uVar2 + 1;
    } while (uVar2 != (uint)param_2);
  }
  return;
}


