// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSuccessorRoad
// Entry Point: 0071daf4
// Size: 584 bytes
// Signature: undefined __thiscall getSuccessorRoad(TrafficVehicle * this, Road * param_1)


/* TrafficVehicle::getSuccessorRoad(TrafficVehicle::Road*) */

undefined8 __thiscall TrafficVehicle::getSuccessorRoad(TrafficVehicle *this,Road *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  void *__s;
  void *__s_00;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar8 = *(uint *)(param_1 + 0x20);
  if (uVar8 == 0) {
    __s = (void *)0x0;
    __s_00 = (void *)0x0;
    iVar4 = -1;
LAB_0071dcec:
    lVar9 = *(long *)(param_1 + 0x28);
                    /* try { // try from 0071dcf0 to 0071dcf7 has its CatchHandler @ 0071dd48 */
    iVar4 = MathUtil::getRandomMinMax(0,iVar4);
    uVar6 = *(undefined8 *)(lVar9 + (long)iVar4 * 8);
    if (__s_00 == (void *)0x0) goto LAB_0071dd08;
  }
  else {
    if (uVar8 == 1) {
      return **(undefined8 **)(param_1 + 0x28);
    }
    uVar7 = (ulong)uVar8 << 2;
    __s = operator_new(uVar7);
    memset(__s,0,uVar7);
                    /* try { // try from 0071db68 to 0071db6f has its CatchHandler @ 0071dd40 */
    __s_00 = operator_new(uVar7);
    memset(__s_00,0,uVar7);
    fVar13 = 0.0;
    uVar7 = 0;
    uVar8 = 0;
    do {
                    /* try { // try from 0071dbd8 to 0071dbdb has its CatchHandler @ 0071dd5c */
      fVar11 = (float)Spline::getLength();
      lVar9 = *(long *)(*(long *)(param_1 + 0x28) + uVar7 * 8);
      if (10.0 < fVar11 && *(long *)(lVar9 + 0x10) == 0) {
        uVar1 = *(uint *)(lVar9 + 0x50);
        uVar2 = uVar1 - *(uint *)(lVar9 + 0x4c);
        if (*(uint *)(lVar9 + 0x4c) <= uVar1 && uVar2 != 0) {
          fVar14 = (float)(ulong)uVar2 / (float)(ulong)uVar1;
LAB_0071dc90:
          if (0.0 < fVar14) goto LAB_0071dba4;
        }
      }
      else {
        if (*(int *)(lVar9 + 0x20) != 0) {
          fVar14 = 0.0;
          uVar10 = 0;
          bVar3 = false;
          do {
                    /* try { // try from 0071dc30 to 0071dc33 has its CatchHandler @ 0071dd60 */
            fVar12 = (float)Spline::getLength();
            lVar5 = *(long *)(*(long *)(lVar9 + 0x28) + uVar10 * 8);
            if (10.0 < fVar11 + fVar12 && *(long *)(lVar5 + 0x10) == 0) {
              uVar1 = *(uint *)(lVar5 + 0x50);
              uVar2 = uVar1 - *(uint *)(lVar5 + 0x4c);
              if (*(uint *)(lVar5 + 0x4c) <= uVar1 && uVar2 != 0) {
                fVar14 = fVar14 + (float)(ulong)uVar2 / (float)(ulong)uVar1;
              }
              bVar3 = true;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(uint *)(lVar9 + 0x20));
          if (bVar3) goto LAB_0071dc90;
        }
        fVar14 = 0.2;
LAB_0071dba4:
        uVar10 = (ulong)uVar8;
        fVar13 = fVar13 + fVar14;
        uVar8 = uVar8 + 1;
        *(float *)((long)__s_00 + uVar10 * 4) = fVar13;
        *(int *)((long)__s + uVar10 * 4) = (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x20));
    if (uVar8 == 0) {
      iVar4 = *(uint *)(param_1 + 0x20) - 1;
      goto LAB_0071dcec;
    }
                    /* try { // try from 0071dca0 to 0071dca3 has its CatchHandler @ 0071dd3c */
    fVar11 = (float)MathUtil::getRandom();
    uVar7 = 0;
    do {
      uVar10 = uVar7;
      if (fVar11 <= *(float *)((long)__s_00 + uVar7 * 4) / fVar13) break;
      uVar7 = uVar7 + 1;
      uVar10 = (ulong)uVar8;
    } while (uVar8 != uVar7);
    uVar1 = uVar8 - 1;
    if ((uint)uVar10 <= uVar8 - 1) {
      uVar1 = (uint)uVar10;
    }
    uVar6 = *(undefined8 *)
             (*(long *)(param_1 + 0x28) + (ulong)*(uint *)((long)__s + (ulong)uVar1 * 4) * 8);
  }
  operator_delete(__s_00);
LAB_0071dd08:
  if (__s != (void *)0x0) {
    operator_delete(__s);
  }
  return uVar6;
}


