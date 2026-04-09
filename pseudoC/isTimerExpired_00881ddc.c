// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isTimerExpired
// Entry Point: 00881ddc
// Size: 232 bytes
// Signature: undefined __thiscall isTimerExpired(BehaviorContext * this, int param_1)


/* BehaviorContext::isTimerExpired(int) */

undefined8 __thiscall BehaviorContext::isTimerExpired(BehaviorContext *this,int param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar1 = *(long *)(this + 0xd0);
  piVar2 = *(int **)(this + 0xd8);
  if ((long)piVar2 - lVar1 != 0) {
    uVar7 = 0;
    do {
      piVar4 = (int *)(lVar1 + uVar7 * 8);
      if (*piVar4 == param_1) {
        if (0.0 <= (float)piVar4[1]) {
          return 0;
        }
        piVar5 = piVar4 + 2;
        if (piVar5 == piVar2) goto LAB_00881eac;
        uVar8 = (long)piVar2 + (-0x10 - (long)piVar4);
        if (uVar8 < 0x38) goto LAB_00881e8c;
        uVar8 = (uVar8 >> 3) + 1;
        puVar6 = (undefined8 *)(lVar1 + uVar7 * 8 + 0x28);
        uVar9 = uVar8 & 0x3ffffffffffffff8;
        piVar4 = piVar4 + uVar9 * 2;
        piVar5 = piVar5 + uVar9 * 2;
        uVar7 = uVar9;
        do {
          uVar11 = puVar6[-4];
          uVar12 = puVar6[-2];
          uVar7 = uVar7 - 8;
          puVar6[-4] = puVar6[-3];
          puVar6[-5] = uVar11;
          uVar11 = *puVar6;
          uVar13 = puVar6[2];
          puVar6[-2] = puVar6[-1];
          puVar6[-3] = uVar12;
          *puVar6 = puVar6[1];
          puVar6[-1] = uVar11;
          puVar6[2] = puVar6[3];
          puVar6[1] = uVar13;
          puVar6 = puVar6 + 8;
        } while (uVar7 != 0);
        if (uVar8 != uVar9) {
LAB_00881e8c:
          do {
            iVar3 = *piVar5;
            iVar10 = piVar5[1];
            piVar5 = piVar5 + 2;
            *piVar4 = iVar3;
            piVar4[1] = iVar10;
            piVar4 = piVar4 + 2;
          } while (piVar5 != piVar2);
        }
LAB_00881eac:
        *(int **)(this + 0xd8) = piVar4;
        return 1;
      }
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)((long)piVar2 - lVar1 >> 3));
  }
  return 1;
}


