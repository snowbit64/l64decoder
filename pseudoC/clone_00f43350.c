// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00f43350
// Size: 956 bytes
// Signature: undefined __thiscall clone(btDbvt * this, btDbvt * param_1, IClone * param_2)


/* btDbvt::clone(btDbvt&, btDbvt::IClone*) const */

void __thiscall btDbvt::clone(btDbvt *this,btDbvt *param_1,IClone *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (*(long *)param_1 != 0) {
    FUN_00f41318(param_1);
  }
  if (*(long *)(param_1 + 8) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if ((*(long *)(param_1 + 0x30) != 0) && (param_1[0x38] != (btDbvt)0x0)) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  lVar9 = *(long *)this;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x38] = (btDbvt)0x1;
  if (lVar9 == 0) {
    return;
  }
  uVar13 = (ulong)*(uint *)(this + 0x14);
  if ((int)*(uint *)(this + 0x14) < 1) {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    plVar5 = (long *)(*(code *)PTR_FUN_01048e38)(0x10,0x10);
    uVar13 = 1;
  }
  else {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    plVar5 = (long *)(*(code *)PTR_FUN_01048e38)(uVar13 << 4,0x10);
    lVar9 = *(long *)this;
  }
  uVar15 = 1;
  *plVar5 = lVar9;
  plVar5[1] = 0;
  do {
    while( true ) {
      uVar14 = (uint)uVar15;
      uVar4 = uVar14 - 1;
      puVar10 = *(undefined8 **)(param_1 + 8);
      puVar2 = (undefined8 *)plVar5[(ulong)uVar4 * 2];
      lVar9 = (plVar5 + (ulong)uVar4 * 2)[1];
      uVar11 = puVar2[5];
      if (puVar10 == (undefined8 *)0x0) {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        puVar10 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0x38,0x10);
        puVar10[6] = 0;
        puVar10[1] = 0;
        *puVar10 = 0;
        puVar10[3] = 0;
        puVar10[2] = 0;
        puVar10[5] = 0;
        puVar10[4] = 0;
      }
      else {
        *(undefined8 *)(param_1 + 8) = 0;
      }
      puVar10[4] = lVar9;
      puVar10[5] = uVar11;
      puVar10[6] = 0;
      uVar11 = *puVar2;
      uVar18 = puVar2[3];
      uVar17 = puVar2[2];
      puVar1 = (undefined8 *)param_1;
      if (lVar9 != 0) {
        puVar1 = (undefined8 *)(lVar9 + (ulong)(uVar4 & 1) * 8 + 0x28);
      }
      puVar10[1] = puVar2[1];
      *puVar10 = uVar11;
      puVar10[3] = uVar18;
      puVar10[2] = uVar17;
      *puVar1 = puVar10;
      if (puVar2[6] == 0) break;
      lVar9 = puVar2[5];
      uVar12 = (uint)uVar13;
      if (uVar4 == uVar12) {
        uVar3 = uVar12 << 1;
        if (uVar12 == 0) {
          uVar3 = 1;
        }
        if ((int)uVar14 <= (int)uVar3) {
          if (uVar3 == 0) {
            plVar6 = (long *)0x0;
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            plVar6 = (long *)(*(code *)PTR_FUN_01048e38)
                                       (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 |
                                        (ulong)uVar3 << 4,0x10);
          }
          plVar7 = plVar6;
          plVar8 = plVar5;
          if (1 < uVar14) {
            do {
              lVar16 = *plVar8;
              uVar13 = uVar13 - 1;
              plVar7[1] = plVar8[1];
              *plVar7 = lVar16;
              plVar7 = plVar7 + 2;
              plVar8 = plVar8 + 2;
            } while (uVar13 != 0);
          }
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)(plVar5);
          plVar5 = plVar6;
          uVar13 = (ulong)uVar3;
        }
      }
      plVar5[(ulong)uVar4 * 2] = lVar9;
      (plVar5 + (ulong)uVar4 * 2)[1] = (long)puVar10;
      lVar9 = puVar2[6];
      if (uVar14 == (uint)uVar13) {
        uVar4 = uVar14 << 1;
        if (uVar14 == 0) {
          uVar4 = 1;
        }
        uVar13 = uVar15;
        if ((int)uVar14 < (int)uVar4) {
          if (uVar4 == 0) {
            plVar6 = (long *)0x0;
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            plVar6 = (long *)(*(code *)PTR_FUN_01048e38)
                                       (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 |
                                        (ulong)uVar4 << 4,0x10);
          }
          plVar7 = plVar6;
          plVar8 = plVar5;
          if (0 < (int)uVar14) {
            do {
              lVar16 = *plVar8;
              uVar15 = uVar15 - 1;
              plVar7[1] = plVar8[1];
              *plVar7 = lVar16;
              plVar7 = plVar7 + 2;
              plVar8 = plVar8 + 2;
            } while (uVar15 != 0);
          }
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)(plVar5);
          plVar5 = plVar6;
          uVar13 = (ulong)uVar4;
        }
      }
      uVar15 = (ulong)(uVar14 + 1);
      plVar5[(long)(int)uVar14 * 2] = lVar9;
      (plVar5 + (long)(int)uVar14 * 2)[1] = (long)puVar10;
      if ((int)(uVar14 + 1) < 1) goto LAB_00f436cc;
    }
    (**(code **)(*(long *)param_2 + 0x10))(param_2,puVar10);
    uVar15 = (ulong)uVar4;
  } while (0 < (int)uVar4);
LAB_00f436cc:
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f43708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)(plVar5);
  return;
}


