// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveConnectingQuadraticBezierSpline
// Entry Point: 00742e30
// Size: 468 bytes
// Signature: undefined __cdecl solveConnectingQuadraticBezierSpline(Vector2 * param_1, bool * param_2, Vector2 * param_3, Vector2 * param_4, Vector2 * param_5, Vector2 * param_6, bool param_7, float param_8)


/* WARNING: Removing unreachable block (ram,0x00742e78) */
/* solveConnectingQuadraticBezierSpline(Vector2*, bool&, Vector2 const&, Vector2 const&, Vector2
   const&, Vector2 const&, bool, float) */

void solveConnectingQuadraticBezierSpline
               (Vector2 *param_1,bool *param_2,Vector2 *param_3,Vector2 *param_4,Vector2 *param_5,
               Vector2 *param_6,bool param_7,float param_8)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool abStack_cc [4];
  float local_c8;
  float fStack_c4;
  undefined4 local_c0;
  float fStack_bc;
  Vector2 aVStack_b8 [32];
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  fVar4 = (float)NEON_fmadd(*(float *)(param_5 + 4) - *(float *)(param_3 + 4),
                            *(float *)(param_5 + 4) - *(float *)(param_3 + 4),
                            (*(float *)param_5 - *(float *)param_3) *
                            (*(float *)param_5 - *(float *)param_3));
  fVar5 = 3.0;
  fVar4 = SQRT(fVar4) / 3.0;
  if (fVar4 < 10.0) {
    do {
      solveConnectingCubicBezier(aVStack_b8,param_3,param_4,param_5,param_6,fVar4);
      local_c0 = pointOnCubicBezier(0.5,aVStack_b8);
      fStack_bc = fVar5;
      local_c8 = (float)tangentCubicBezier(0.5,aVStack_b8);
      fVar7 = (float)NEON_fmadd(local_c8,local_c8,fVar5 * fVar5);
      fVar6 = 1.0;
      if (1e-06 < fVar7) {
        fVar6 = 1.0 / SQRT(fVar7);
      }
      local_c8 = local_c8 * fVar6;
      fVar5 = fVar5 * fVar6;
      fStack_c4 = fVar5;
      iVar2 = solveConnectingQuadraticBezier
                        (param_1,param_2,param_3,param_4,(Vector2 *)&local_c0,(Vector2 *)&local_c8,
                         param_7,param_8);
      if ((iVar2 == 3) &&
         (iVar2 = solveConnectingQuadraticBezier
                            (param_1 + 0x10,abStack_cc,(Vector2 *)&local_c0,(Vector2 *)&local_c8,
                             param_5,param_6,param_7,param_8), iVar2 == 3)) {
        uVar3 = 5;
        goto LAB_00742fc4;
      }
      fVar4 = fVar4 * 1.25;
    } while (fVar4 < 10.0);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
  }
LAB_00742fc4:
  if (*(long *)(lVar1 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


