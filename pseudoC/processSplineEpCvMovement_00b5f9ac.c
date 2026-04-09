// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processSplineEpCvMovement
// Entry Point: 00b5f9ac
// Size: 536 bytes
// Signature: undefined __cdecl processSplineEpCvMovement(Spline * param_1, uint param_2, bool param_3, Vector3 * param_4)


/* SplineUtil::processSplineEpCvMovement(Spline*, unsigned int, bool, Vector3 const&) */

void SplineUtil::processSplineEpCvMovement
               (Spline *param_1,uint param_2,bool param_3,Vector3 *param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FORM FVar7;
  float *__s;
  float *__s_00;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  Vector3 aVStack_88 [16];
  undefined8 local_78;
  float local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = Spline::getNumOfCV();
  if ((param_3) &&
     ((((param_2 != 0 && (iVar5 = Spline::getNumOfCV(), iVar5 - 1U != param_2)) ||
       (*(int *)(param_1 + 0x30) != 1)) || (iVar5 = Spline::getForm(), iVar5 != 0)))) {
    if ((*(int *)(param_1 + 0x30) == 1) &&
       (uVar6 = CubicSpline::getNumEditPoints(), param_2 < uVar6)) {
      uVar3 = uVar6 * 3;
      uVar8 = (ulong)uVar3 << 2;
      if (uVar3 == 0) {
        __s = (float *)0x0;
      }
      else {
        __s = (float *)operator_new(uVar8);
        memset(__s,0,uVar8);
      }
      uVar10 = 0;
      uVar9 = 0;
      do {
                    /* try { // try from 00b5facc to 00b5fadf has its CatchHandler @ 00b5fbf4 */
        CubicSpline::getEditPointPositionAndDirection
                  ((CubicSpline *)param_1,(uint)uVar9,(Vector3 *)&local_78,aVStack_88);
        uVar1 = uVar10 & 0xffffffff;
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 + 3;
        *(undefined8 *)(__s + uVar1) = local_78;
        *(float *)((long)(__s + uVar1) + 8) = local_70;
      } while (uVar6 != uVar9);
      fVar11 = *(float *)(param_4 + 8);
      *(undefined8 *)(__s + param_2 * 3) = *(undefined8 *)param_4;
      *(float *)((long)(__s + param_2 * 3) + 8) = fVar11;
      if (uVar3 == 0) {
        __s_00 = (float *)0x0;
      }
      else {
                    /* try { // try from 00b5fb24 to 00b5fb2b has its CatchHandler @ 00b5fbc4 */
        __s_00 = (float *)operator_new(uVar8);
        memset(__s_00,0,uVar8);
      }
                    /* try { // try from 00b5fb44 to 00b5fb5f has its CatchHandler @ 00b5fbcc */
      FVar7 = Spline::getForm();
      recomputeCubicSplineControlPoints(uVar6,__s,__s_00,FVar7);
      if (uVar4 != 0) {
        uVar6 = 0;
        uVar8 = 0;
        do {
                    /* try { // try from 00b5fb78 to 00b5fb83 has its CatchHandler @ 00b5fbd0 */
          Spline::setCV(param_1,uVar6,__s_00 + (uVar8 & 0xffffffff));
          uVar8 = uVar8 + 3;
          uVar6 = uVar6 + 1;
        } while ((ulong)uVar4 + (ulong)uVar4 * 2 != uVar8);
      }
                    /* try { // try from 00b5fb9c to 00b5fba3 has its CatchHandler @ 00b5fbcc */
      (**(code **)(*(long *)param_1 + 0x40))(param_1);
      if (__s_00 != (float *)0x0) {
        operator_delete(__s_00);
      }
      if (__s != (float *)0x0) {
        operator_delete(__s);
      }
    }
  }
  else {
    Spline::setCV(param_1,param_2,(float *)param_4);
    (**(code **)(*(long *)param_1 + 0x40))(param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


