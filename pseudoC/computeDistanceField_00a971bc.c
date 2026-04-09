// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeDistanceField
// Entry Point: 00a971bc
// Size: 384 bytes
// Signature: undefined __cdecl computeDistanceField(float * param_1, uint param_2, uint param_3, float * param_4, uint param_5)


/* ImageUtil::computeDistanceField(float const*, unsigned int, unsigned int, float*, unsigned int)
    */

void ImageUtil::computeDistanceField
               (float *param_1,uint param_2,uint param_3,float *param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar3 = param_5 * 2 + param_2;
  uVar4 = param_5 * 2 + param_3;
  uVar17 = (ulong)param_2;
  memset(param_4,0,(ulong)(uVar3 * uVar4) << 2);
  if (param_3 != 0) {
    uVar7 = param_5 + param_5 * uVar3;
    uVar11 = 0;
    uVar12 = 0;
    uVar14 = uVar17 & 0xfffffff8;
    uVar5 = uVar7;
    do {
      if (param_2 != 0) {
        if (param_2 < 8) {
LAB_00a972b4:
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          uVar6 = uVar7 + uVar3 * uVar12;
          uVar8 = uVar12 * param_2;
          uVar13 = (uint)(uVar17 - 1);
          if (((CARRY4(uVar6,uVar13) == false) && (uVar17 - 1 >> 0x20 == 0)) &&
             (CARRY4(uVar8,uVar13) == false)) {
            uVar16 = uVar14;
            uVar13 = uVar11;
            uVar9 = uVar5;
            if ((param_4 + uVar6 < param_1 + uVar17 + uVar8) &&
               (param_1 + uVar8 < param_4 + uVar17 + uVar6)) goto LAB_00a972b4;
            do {
              puVar1 = (undefined8 *)(param_1 + uVar13);
              puVar2 = (undefined8 *)(param_4 + uVar9);
              uVar16 = uVar16 - 8;
              uVar18 = *puVar1;
              uVar20 = puVar1[3];
              uVar19 = puVar1[2];
              puVar2[1] = puVar1[1];
              *puVar2 = uVar18;
              puVar2[3] = uVar20;
              puVar2[2] = uVar19;
              uVar13 = uVar13 + 8;
              uVar9 = uVar9 + 8;
            } while (uVar16 != 0);
            uVar16 = uVar14;
            if (uVar14 == uVar17) goto LAB_00a97238;
          }
        }
        lVar10 = uVar17 - uVar16;
        do {
          iVar15 = (int)uVar16;
          lVar10 = lVar10 + -1;
          uVar16 = (ulong)(iVar15 + 1);
          param_4[uVar5 + iVar15] = param_1[uVar11 + iVar15];
        } while (lVar10 != 0);
      }
LAB_00a97238:
      uVar12 = uVar12 + 1;
      uVar11 = uVar11 + param_2;
      uVar5 = uVar5 + uVar3;
    } while (uVar12 != param_3);
  }
  computeDistanceField(uVar3,uVar4,param_4);
  return;
}


