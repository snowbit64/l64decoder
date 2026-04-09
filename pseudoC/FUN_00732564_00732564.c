// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00732564
// Entry Point: 00732564
// Size: 888 bytes
// Signature: undefined FUN_00732564(void)


void FUN_00732564(float param_1,float param_2,long *param_3,float *param_4,RoadSegment *param_5,
                 uint param_6,float *param_7,float *param_8)

{
  long lVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float afStack_78 [4];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_84 = *param_7;
  local_88 = param_7[1];
  fVar6 = *param_8;
  local_80 = local_88;
  local_7c = local_84;
  if (local_84 <= fVar6) {
    if (local_84 < fVar6) {
      pfVar2 = &local_84;
      goto LAB_007325dc;
    }
  }
  else {
    pfVar2 = &local_7c;
LAB_007325dc:
    *pfVar2 = fVar6;
  }
  fVar6 = param_8[1];
  if (local_88 <= fVar6) {
    if (local_88 < fVar6) {
      pfVar2 = &local_88;
      goto LAB_007325fc;
    }
  }
  else {
    pfVar2 = &local_80;
LAB_007325fc:
    *pfVar2 = fVar6;
  }
  fVar6 = *param_4;
  if (fVar6 <= local_7c) {
    fVar8 = param_4[2];
    if (((local_84 <= fVar8) && (param_4[1] <= local_80)) && (local_88 <= param_4[3])) {
      uVar7 = *(undefined4 *)*param_3;
      fVar8 = (float)((undefined4 *)*param_3)[1];
      fVar6 = (float)NEON_fmadd(uVar7,param_7[2],fVar8 * param_7[3]);
      if ((0.7071068 <= fVar6) ||
         (fVar8 = (float)NEON_fmadd(uVar7,param_8[2],fVar8 * param_8[3]), 0.7071068 <= fVar8)) {
        fVar6 = (float)RoadSegment::computeClosestPoint2D
                                 (param_5,afStack_78,param_6,param_1,param_2,0.1,
                                  (Vector2 *)param_3[1]);
        if (16.0 < fVar6) goto LAB_0073270c;
        if ((*(float *)param_3[2] <= *(float *)(param_5 + 8)) &&
           (*(float *)param_3[3] <= *(float *)(param_5 + 0xc))) {
          fVar8 = *(float *)param_3[5] / *(float *)(param_5 + 0x10);
          if (fVar6 <= 1.0) {
            fVar6 = 1.0;
          }
          if (fVar8 <= 1.0) {
            fVar8 = 1.0;
          }
          if (fVar6 * fVar8 <= 16.0) {
            uVar5 = (uint)((fVar6 * fVar8 + -1.0) / 0.05905512);
            if (uVar5 < *(byte *)param_3[6]) {
              *(byte *)param_3[6] = (byte)uVar5;
            }
          }
          goto LAB_0073270c;
        }
        if ((4.0 < fVar6) || (piVar3 = (int *)param_3[4], 0 < *piVar3)) goto LAB_0073270c;
        iVar4 = 1;
      }
      else {
        if (((-0.7071068 < fVar6) && (-0.7071068 < fVar8)) ||
           (fVar6 = (float)RoadSegment::computeClosestPoint2D
                                     (param_5,afStack_78,param_6,param_1,param_2,0.1,
                                      (Vector2 *)param_3[1]), 4.0 < fVar6)) goto LAB_0073270c;
        piVar3 = (int *)param_3[4];
        iVar4 = 2;
      }
      *piVar3 = iVar4;
      goto LAB_0073270c;
    }
  }
  else {
    fVar8 = param_4[2];
  }
  if (fVar6 < local_7c) {
    fVar6 = local_7c;
  }
  if (local_84 < fVar8) {
    fVar8 = local_84;
  }
  if (fVar6 <= fVar8) {
    fVar6 = param_4[1];
    if (param_4[1] < local_80) {
      fVar6 = local_80;
    }
    fVar8 = param_4[3];
    if (local_88 < param_4[3]) {
      fVar8 = local_88;
    }
    if ((0.02 <= param_2 - param_1) && (fVar6 <= fVar8)) {
      fVar6 = (param_1 + param_2) * 0.5;
      RoadSegment::getPositionAndDirection((uint)param_5,fVar6,(PlanarPose *)(ulong)param_6);
      FUN_00732564(param_1,fVar6,param_3,param_4,param_5,param_6,param_7,afStack_78);
      FUN_00732564(fVar6,param_2,param_3,param_4,param_5,param_6,afStack_78,param_8);
    }
  }
LAB_0073270c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


