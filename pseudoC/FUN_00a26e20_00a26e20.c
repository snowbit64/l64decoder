// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00a26e20
// Entry Point: 00a26e20
// Size: 692 bytes
// Signature: undefined FUN_00a26e20(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined param_9, undefined8 param_10)


void FUN_00a26e20(reverse_iterator param_1,long param_2,reverse_iterator param_3,long param_4,
                 __less *param_5,long param_6,undefined param_7,long param_8,undefined8 param_9,
                 long param_10,undefined8 param_11)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  uVar3 = std::__ndk1::
          __sort4<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
                    (param_1,(reverse_iterator)param_2,param_3,(reverse_iterator)param_4,param_5,
                     (char)param_6,param_7,(char)param_8,param_11);
  if (*(float *)(param_10 + -0x34) < *(float *)(param_8 + -0x34)) {
    uVar5 = *(undefined8 *)(param_8 + -8);
    uVar7 = *(undefined8 *)(param_8 + -0x10);
    uVar6 = *(undefined8 *)(param_8 + -0x18);
    *(undefined8 *)(param_8 + -0x10) = 0;
    *(undefined8 *)(param_8 + -8) = 0;
    *(undefined8 *)(param_8 + -0x18) = 0;
    uVar1 = *(undefined4 *)(param_8 + -0x20);
    uVar9 = *(undefined8 *)(param_10 + -0x48);
    uVar8 = *(undefined8 *)(param_10 + -0x50);
    uVar11 = *(undefined8 *)(param_10 + -0x38);
    uVar10 = *(undefined8 *)(param_10 + -0x40);
    uVar13 = *(undefined8 *)(param_10 + -0x28);
    uVar12 = *(undefined8 *)(param_10 + -0x30);
    uVar15 = *(undefined8 *)(param_8 + -0x38);
    uVar14 = *(undefined8 *)(param_8 + -0x40);
    uVar17 = *(undefined8 *)(param_8 + -0x28);
    uVar16 = *(undefined8 *)(param_8 + -0x30);
    *(undefined4 *)(param_8 + -0x20) = *(undefined4 *)(param_10 + -0x20);
    *(undefined8 *)(param_8 + -0x38) = uVar11;
    *(undefined8 *)(param_8 + -0x40) = uVar10;
    *(undefined8 *)(param_8 + -0x28) = uVar13;
    *(undefined8 *)(param_8 + -0x30) = uVar12;
    uVar13 = *(undefined8 *)(param_8 + -0x58);
    uVar12 = *(undefined8 *)(param_8 + -0x60);
    uVar11 = *(undefined8 *)(param_8 + -0x48);
    uVar10 = *(undefined8 *)(param_8 + -0x50);
    *(undefined8 *)(param_8 + -0x48) = uVar9;
    *(undefined8 *)(param_8 + -0x50) = uVar8;
    uVar8 = *(undefined8 *)(param_10 + -0x60);
    *(undefined8 *)(param_8 + -0x58) = *(undefined8 *)(param_10 + -0x58);
    *(undefined8 *)(param_8 + -0x60) = uVar8;
    uVar8 = *(undefined8 *)(param_10 + -0x10);
    *(undefined8 *)(param_8 + -0x18) = *(undefined8 *)(param_10 + -0x18);
    *(undefined8 *)(param_8 + -0x10) = uVar8;
    *(undefined8 *)(param_8 + -8) = *(undefined8 *)(param_10 + -8);
    *(undefined8 *)(param_10 + -0x38) = uVar15;
    *(undefined8 *)(param_10 + -0x40) = uVar14;
    *(undefined8 *)(param_10 + -0x28) = uVar17;
    *(undefined8 *)(param_10 + -0x30) = uVar16;
    *(undefined4 *)(param_10 + -0x20) = uVar1;
    *(undefined8 *)(param_10 + -0x10) = uVar7;
    *(undefined8 *)(param_10 + -0x18) = uVar6;
    *(undefined8 *)(param_10 + -8) = uVar5;
    *(undefined8 *)(param_10 + -0x58) = uVar13;
    *(undefined8 *)(param_10 + -0x60) = uVar12;
    *(undefined8 *)(param_10 + -0x48) = uVar11;
    *(undefined8 *)(param_10 + -0x50) = uVar10;
    if (*(float *)(param_6 + -0x34) <= *(float *)(param_8 + -0x34)) {
      uVar3 = uVar3 + 1;
    }
    else {
      uVar5 = *(undefined8 *)(param_6 + -8);
      uVar7 = *(undefined8 *)(param_6 + -0x10);
      uVar6 = *(undefined8 *)(param_6 + -0x18);
      *(undefined8 *)(param_6 + -0x10) = 0;
      *(undefined8 *)(param_6 + -8) = 0;
      *(undefined8 *)(param_6 + -0x18) = 0;
      uVar1 = *(undefined4 *)(param_6 + -0x20);
      uVar9 = *(undefined8 *)(param_8 + -0x48);
      uVar8 = *(undefined8 *)(param_8 + -0x50);
      uVar11 = *(undefined8 *)(param_8 + -0x38);
      uVar10 = *(undefined8 *)(param_8 + -0x40);
      uVar13 = *(undefined8 *)(param_8 + -0x28);
      uVar12 = *(undefined8 *)(param_8 + -0x30);
      uVar15 = *(undefined8 *)(param_6 + -0x38);
      uVar14 = *(undefined8 *)(param_6 + -0x40);
      uVar17 = *(undefined8 *)(param_6 + -0x28);
      uVar16 = *(undefined8 *)(param_6 + -0x30);
      *(undefined4 *)(param_6 + -0x20) = *(undefined4 *)(param_8 + -0x20);
      *(undefined8 *)(param_6 + -0x38) = uVar11;
      *(undefined8 *)(param_6 + -0x40) = uVar10;
      *(undefined8 *)(param_6 + -0x28) = uVar13;
      *(undefined8 *)(param_6 + -0x30) = uVar12;
      uVar13 = *(undefined8 *)(param_6 + -0x58);
      uVar12 = *(undefined8 *)(param_6 + -0x60);
      uVar11 = *(undefined8 *)(param_6 + -0x48);
      uVar10 = *(undefined8 *)(param_6 + -0x50);
      *(undefined8 *)(param_6 + -0x48) = uVar9;
      *(undefined8 *)(param_6 + -0x50) = uVar8;
      uVar8 = *(undefined8 *)(param_8 + -0x60);
      *(undefined8 *)(param_6 + -0x58) = *(undefined8 *)(param_8 + -0x58);
      *(undefined8 *)(param_6 + -0x60) = uVar8;
      uVar8 = *(undefined8 *)(param_8 + -0x10);
      *(undefined8 *)(param_6 + -0x18) = *(undefined8 *)(param_8 + -0x18);
      *(undefined8 *)(param_6 + -0x10) = uVar8;
      *(undefined8 *)(param_6 + -8) = *(undefined8 *)(param_8 + -8);
      *(undefined8 *)(param_8 + -0x38) = uVar15;
      *(undefined8 *)(param_8 + -0x40) = uVar14;
      *(undefined8 *)(param_8 + -0x28) = uVar17;
      *(undefined8 *)(param_8 + -0x30) = uVar16;
      *(undefined4 *)(param_8 + -0x20) = uVar1;
      *(undefined8 *)(param_8 + -0x58) = uVar13;
      *(undefined8 *)(param_8 + -0x60) = uVar12;
      *(undefined8 *)(param_8 + -0x48) = uVar11;
      *(undefined8 *)(param_8 + -0x50) = uVar10;
      *(undefined8 *)(param_8 + -0x10) = uVar7;
      *(undefined8 *)(param_8 + -0x18) = uVar6;
      *(undefined8 *)(param_8 + -8) = uVar5;
      if (*(float *)(param_4 + -0x34) <= *(float *)(param_6 + -0x34)) {
        uVar3 = uVar3 + 2;
      }
      else {
        uVar5 = *(undefined8 *)(param_4 + -8);
        uVar7 = *(undefined8 *)(param_4 + -0x10);
        uVar6 = *(undefined8 *)(param_4 + -0x18);
        *(undefined8 *)(param_4 + -0x10) = 0;
        *(undefined8 *)(param_4 + -8) = 0;
        *(undefined8 *)(param_4 + -0x18) = 0;
        uVar1 = *(undefined4 *)(param_4 + -0x20);
        uVar9 = *(undefined8 *)(param_6 + -0x48);
        uVar8 = *(undefined8 *)(param_6 + -0x50);
        uVar11 = *(undefined8 *)(param_6 + -0x38);
        uVar10 = *(undefined8 *)(param_6 + -0x40);
        uVar13 = *(undefined8 *)(param_6 + -0x28);
        uVar12 = *(undefined8 *)(param_6 + -0x30);
        uVar15 = *(undefined8 *)(param_4 + -0x38);
        uVar14 = *(undefined8 *)(param_4 + -0x40);
        uVar17 = *(undefined8 *)(param_4 + -0x28);
        uVar16 = *(undefined8 *)(param_4 + -0x30);
        *(undefined4 *)(param_4 + -0x20) = *(undefined4 *)(param_6 + -0x20);
        *(undefined8 *)(param_4 + -0x38) = uVar11;
        *(undefined8 *)(param_4 + -0x40) = uVar10;
        *(undefined8 *)(param_4 + -0x28) = uVar13;
        *(undefined8 *)(param_4 + -0x30) = uVar12;
        uVar13 = *(undefined8 *)(param_4 + -0x58);
        uVar12 = *(undefined8 *)(param_4 + -0x60);
        uVar11 = *(undefined8 *)(param_4 + -0x48);
        uVar10 = *(undefined8 *)(param_4 + -0x50);
        *(undefined8 *)(param_4 + -0x48) = uVar9;
        *(undefined8 *)(param_4 + -0x50) = uVar8;
        uVar8 = *(undefined8 *)(param_6 + -0x60);
        *(undefined8 *)(param_4 + -0x58) = *(undefined8 *)(param_6 + -0x58);
        *(undefined8 *)(param_4 + -0x60) = uVar8;
        uVar8 = *(undefined8 *)(param_6 + -0x10);
        *(undefined8 *)(param_4 + -0x18) = *(undefined8 *)(param_6 + -0x18);
        *(undefined8 *)(param_4 + -0x10) = uVar8;
        *(undefined8 *)(param_4 + -8) = *(undefined8 *)(param_6 + -8);
        *(undefined8 *)(param_6 + -0x38) = uVar15;
        *(undefined8 *)(param_6 + -0x40) = uVar14;
        *(undefined8 *)(param_6 + -0x28) = uVar17;
        *(undefined8 *)(param_6 + -0x30) = uVar16;
        *(undefined4 *)(param_6 + -0x20) = uVar1;
        *(undefined8 *)(param_6 + -0x58) = uVar13;
        *(undefined8 *)(param_6 + -0x60) = uVar12;
        *(undefined8 *)(param_6 + -0x48) = uVar11;
        *(undefined8 *)(param_6 + -0x50) = uVar10;
        *(undefined8 *)(param_6 + -0x10) = uVar7;
        *(undefined8 *)(param_6 + -0x18) = uVar6;
        *(undefined8 *)(param_6 + -8) = uVar5;
        if (*(float *)(param_2 + -0x34) <= *(float *)(param_4 + -0x34)) {
          uVar3 = uVar3 + 3;
        }
        else {
          uVar5 = *(undefined8 *)(param_2 + -8);
          uVar7 = *(undefined8 *)(param_2 + -0x10);
          uVar6 = *(undefined8 *)(param_2 + -0x18);
          *(undefined8 *)(param_2 + -0x10) = 0;
          *(undefined8 *)(param_2 + -8) = 0;
          *(undefined8 *)(param_2 + -0x18) = 0;
          uVar1 = *(undefined4 *)(param_2 + -0x20);
          uVar9 = *(undefined8 *)(param_4 + -0x48);
          uVar8 = *(undefined8 *)(param_4 + -0x50);
          uVar11 = *(undefined8 *)(param_4 + -0x38);
          uVar10 = *(undefined8 *)(param_4 + -0x40);
          uVar3 = uVar3 + 4;
          uVar13 = *(undefined8 *)(param_4 + -0x28);
          uVar12 = *(undefined8 *)(param_4 + -0x30);
          uVar15 = *(undefined8 *)(param_2 + -0x38);
          uVar14 = *(undefined8 *)(param_2 + -0x40);
          uVar17 = *(undefined8 *)(param_2 + -0x28);
          uVar16 = *(undefined8 *)(param_2 + -0x30);
          *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_4 + -0x20);
          *(undefined8 *)(param_2 + -0x38) = uVar11;
          *(undefined8 *)(param_2 + -0x40) = uVar10;
          *(undefined8 *)(param_2 + -0x28) = uVar13;
          *(undefined8 *)(param_2 + -0x30) = uVar12;
          uVar13 = *(undefined8 *)(param_2 + -0x58);
          uVar12 = *(undefined8 *)(param_2 + -0x60);
          uVar11 = *(undefined8 *)(param_2 + -0x48);
          uVar10 = *(undefined8 *)(param_2 + -0x50);
          *(undefined8 *)(param_2 + -0x48) = uVar9;
          *(undefined8 *)(param_2 + -0x50) = uVar8;
          uVar8 = *(undefined8 *)(param_4 + -0x60);
          *(undefined8 *)(param_2 + -0x58) = *(undefined8 *)(param_4 + -0x58);
          *(undefined8 *)(param_2 + -0x60) = uVar8;
          uVar8 = *(undefined8 *)(param_4 + -0x10);
          *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_4 + -0x18);
          *(undefined8 *)(param_2 + -0x10) = uVar8;
          *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_4 + -8);
          *(undefined8 *)(param_4 + -0x38) = uVar15;
          *(undefined8 *)(param_4 + -0x40) = uVar14;
          *(undefined8 *)(param_4 + -0x28) = uVar17;
          *(undefined8 *)(param_4 + -0x30) = uVar16;
          *(undefined4 *)(param_4 + -0x20) = uVar1;
          *(undefined8 *)(param_4 + -0x58) = uVar13;
          *(undefined8 *)(param_4 + -0x60) = uVar12;
          *(undefined8 *)(param_4 + -0x48) = uVar11;
          *(undefined8 *)(param_4 + -0x50) = uVar10;
          *(undefined8 *)(param_4 + -0x10) = uVar7;
          *(undefined8 *)(param_4 + -0x18) = uVar6;
          *(undefined8 *)(param_4 + -8) = uVar5;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


