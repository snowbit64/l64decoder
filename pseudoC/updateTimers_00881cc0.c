// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateTimers
// Entry Point: 00881cc0
// Size: 284 bytes
// Signature: undefined __thiscall updateTimers(BehaviorContext * this, float param_1)


/* BehaviorContext::updateTimers(float) */

void __thiscall BehaviorContext::updateTimers(BehaviorContext *this,float param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined4 *puVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar3 = *(long *)(this + 0xd0);
  puVar12 = *(undefined4 **)(this + 0xd8);
  uVar9 = (uint)((ulong)((long)puVar12 - lVar3) >> 3);
  if (0 < (int)uVar9) {
    uVar11 = 0;
    uVar13 = (ulong)((long)puVar12 - lVar3) >> 3 & 0xffffffff;
    uVar10 = uVar9;
    do {
      uVar10 = uVar10 - 1;
      puVar14 = (undefined4 *)(lVar3 + (uVar13 - 1 & 0xffffffff) * 8);
      fVar15 = (float)puVar14[1];
      if (0.0 <= fVar15) {
        puVar14[1] = fVar15 - param_1;
      }
      else {
        puVar5 = puVar14 + 2;
        if (puVar5 != puVar12) {
          uVar2 = (long)puVar12 + (ulong)(~uVar11 + uVar9) * -8 + (-0x10 - lVar3);
          if (0x37 < uVar2) {
            uVar2 = (uVar2 >> 3) + 1;
            uVar6 = uVar2 & 0x3ffffffffffffff8;
            puVar7 = (undefined8 *)(lVar3 + 0x28 + (ulong)uVar10 * 8);
            puVar14 = puVar14 + uVar6 * 2;
            puVar5 = puVar5 + uVar6 * 2;
            uVar8 = ((long)puVar12 + (ulong)uVar10 * -8 + (-0x10 - lVar3) >> 3) + 1 &
                    0x3ffffffffffffff8;
            do {
              uVar17 = puVar7[-4];
              uVar18 = puVar7[-2];
              uVar8 = uVar8 - 8;
              puVar7[-4] = puVar7[-3];
              puVar7[-5] = uVar17;
              uVar17 = *puVar7;
              uVar19 = puVar7[2];
              puVar7[-2] = puVar7[-1];
              puVar7[-3] = uVar18;
              *puVar7 = puVar7[1];
              puVar7[-1] = uVar17;
              puVar7[2] = puVar7[3];
              puVar7[1] = uVar19;
              puVar7 = puVar7 + 8;
            } while (uVar8 != 0);
            if (uVar2 == uVar6) goto LAB_00881dcc;
          }
          do {
            uVar4 = *puVar5;
            uVar16 = puVar5[1];
            puVar5 = puVar5 + 2;
            *puVar14 = uVar4;
            puVar14[1] = uVar16;
            puVar14 = puVar14 + 2;
          } while (puVar5 != puVar12);
        }
LAB_00881dcc:
        puVar12 = puVar14;
        *(undefined4 **)(this + 0xd8) = puVar12;
      }
      uVar11 = uVar11 + 1;
      bVar1 = 1 < (long)uVar13;
      uVar13 = uVar13 - 1;
    } while (bVar1);
  }
  return;
}


