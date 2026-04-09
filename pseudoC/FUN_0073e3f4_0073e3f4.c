// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0073e3f4
// Entry Point: 0073e3f4
// Size: 512 bytes
// Signature: undefined FUN_0073e3f4(void)


/* WARNING: Removing unreachable block (ram,0x0073e5ec) */

void FUN_0073e3f4(float param_1,float param_2,float param_3,float param_4,Vector2 *param_5)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Vector2 **local_d0;
  float *pfStack_c8;
  float *local_c0;
  undefined8 *puStack_b8;
  Vector2 *local_b0;
  float local_a8;
  float fStack_a4;
  undefined8 local_a0;
  float local_98 [8];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_a0 = 0;
  local_b0 = param_5;
  local_a8 = param_4;
  fStack_a4 = param_3;
  uVar3 = solveCoordOnQuadraticBezier(local_98 + 6,local_98 + 4,param_5,1,param_3,param_1,param_2);
  uVar4 = solveCoordOnQuadraticBezier(local_98 + 2,local_98,param_5,1,param_4,param_1,param_2);
  local_d0 = &local_b0;
  pfStack_c8 = &fStack_a4;
  local_c0 = &local_a8;
  puStack_b8 = &local_a0;
  if ((uVar3 | uVar4) != 0) {
    bVar2 = uVar3 != 0;
    uVar5 = 0;
    uVar6 = 0;
    do {
      if ((uVar5 == uVar4) ||
         ((bVar2 && (local_98[(long)(int)uVar6 + 6] < local_98[(long)(int)uVar5 + 2])))) {
        fVar8 = local_98[(long)(int)uVar6 + 6];
        if (local_98[(long)(int)uVar6 + 4] <= 0.0) {
          FUN_0073f79c(param_1,fVar8,&local_d0);
          uVar6 = uVar6 + 1;
        }
        else {
          uVar6 = uVar6 + 1;
          param_1 = fVar8;
          fVar8 = param_2;
        }
      }
      else {
        fVar9 = local_98[(long)(int)uVar5 + 2];
        fVar7 = fVar9;
        fVar8 = param_2;
        if (0.0 <= local_98[(int)uVar5]) {
          FUN_0073f79c(param_1,fVar9,&local_d0);
          fVar7 = param_1;
          fVar8 = fVar9;
        }
        uVar5 = uVar5 + 1;
        param_1 = fVar7;
      }
      bVar2 = uVar6 != uVar3;
    } while ((bVar2) || (uVar5 != uVar4));
    bVar2 = fVar8 != param_2;
    param_2 = fVar8;
    if (bVar2) goto LAB_0073e5a4;
  }
  FUN_0073f79c(param_1,param_2,&local_d0);
LAB_0073e5a4:
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_a0);
}


