// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort3<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
// Entry Point: 00a26900
// Size: 772 bytes
// Signature: uint __cdecl __sort3<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>(reverse_iterator param_1, reverse_iterator param_2, reverse_iterator param_3, __less * param_4)


/* unsigned int
   std::__ndk1::__sort3<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,
   ReflectionRenderController::ReflectionMapRequest>&,
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>
   > 
   >(std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>
   >, 
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>
   >, 
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>
   >, std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,
   ReflectionRenderController::ReflectionMapRequest>&) */

uint std::__ndk1::
     __sort3<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
               (reverse_iterator param_1,reverse_iterator param_2,reverse_iterator param_3,
               __less *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long in_x5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar5 = (ulong)param_2;
  lVar3 = tpidr_el0;
  puVar8 = (undefined8 *)(uVar5 - 0x60);
  lVar6 = *(long *)(lVar3 + 0x28);
  puVar7 = (undefined8 *)(param_4 + -0x60);
  fVar12 = *(float *)(param_4 + -0x34);
  if (*(float *)(uVar5 - 0x34) <= fVar12) {
    if (fVar12 <= *(float *)(in_x5 + -0x34)) {
      uVar4 = 0;
      goto LAB_00a26be4;
    }
    uVar11 = *(undefined8 *)(param_4 + -0x38);
    uVar13 = *(undefined8 *)(param_4 + -0x40);
    uVar15 = *(undefined8 *)(param_4 + -0x28);
    uVar14 = *(undefined8 *)(param_4 + -0x30);
    uVar1 = *(undefined4 *)(param_4 + -0x20);
    uVar19 = *(undefined8 *)(param_4 + -0x58);
    uVar18 = *puVar7;
    uVar17 = *(undefined8 *)(param_4 + -0x48);
    uVar16 = *(undefined8 *)(param_4 + -0x50);
    uVar10 = *(undefined8 *)(param_4 + -8);
    uVar21 = *(undefined8 *)(param_4 + -0x10);
    uVar20 = *(undefined8 *)(param_4 + -0x18);
    *(undefined8 *)(param_4 + -0x10) = 0;
    *(undefined8 *)(param_4 + -8) = 0;
    *(undefined8 *)(param_4 + -0x18) = 0;
    uVar26 = *(undefined8 *)(in_x5 + -0x40);
    uVar22 = *(undefined8 *)(in_x5 + -0x28);
    uVar23 = *(undefined8 *)(in_x5 + -0x30);
    uVar2 = *(undefined4 *)(in_x5 + -0x20);
    uVar25 = *(undefined8 *)(in_x5 + -0x48);
    uVar24 = *(undefined8 *)(in_x5 + -0x50);
    *(undefined8 *)(param_4 + -0x38) = *(undefined8 *)(in_x5 + -0x38);
    *(undefined8 *)(param_4 + -0x40) = uVar26;
    *(undefined8 *)(param_4 + -0x28) = uVar22;
    *(undefined8 *)(param_4 + -0x30) = uVar23;
    *(undefined4 *)(param_4 + -0x20) = uVar2;
    *(undefined8 *)(param_4 + -0x48) = uVar25;
    *(undefined8 *)(param_4 + -0x50) = uVar24;
    uVar23 = *(undefined8 *)(in_x5 + -0x60);
    *(undefined8 *)(param_4 + -0x58) = *(undefined8 *)(in_x5 + -0x58);
    *puVar7 = uVar23;
    uVar23 = *(undefined8 *)(in_x5 + -0x10);
    *(undefined8 *)(param_4 + -0x18) = *(undefined8 *)(in_x5 + -0x18);
    *(undefined8 *)(param_4 + -0x10) = uVar23;
    *(undefined8 *)(param_4 + -8) = *(undefined8 *)(in_x5 + -8);
    *(undefined8 *)(in_x5 + -0x38) = uVar11;
    *(undefined8 *)(in_x5 + -0x40) = uVar13;
    *(undefined8 *)(in_x5 + -0x28) = uVar15;
    *(undefined8 *)(in_x5 + -0x30) = uVar14;
    *(undefined4 *)(in_x5 + -0x20) = uVar1;
    *(undefined8 *)(in_x5 + -0x10) = uVar21;
    *(undefined8 *)(in_x5 + -0x18) = uVar20;
    *(undefined8 *)(in_x5 + -8) = uVar10;
    *(undefined8 *)(in_x5 + -0x58) = uVar19;
    *(undefined8 *)(in_x5 + -0x60) = uVar18;
    *(undefined8 *)(in_x5 + -0x48) = uVar17;
    *(undefined8 *)(in_x5 + -0x50) = uVar16;
    if (*(float *)(param_4 + -0x34) < *(float *)(uVar5 - 0x34)) {
      uVar11 = *(undefined8 *)(uVar5 - 0x38);
      uVar13 = *(undefined8 *)(uVar5 - 0x40);
      uVar15 = *(undefined8 *)(uVar5 - 0x28);
      uVar14 = *(undefined8 *)(uVar5 - 0x30);
      uVar4 = 2;
      uVar1 = *(undefined4 *)(uVar5 - 0x20);
      uVar19 = *(undefined8 *)(uVar5 - 0x58);
      uVar18 = *puVar8;
      uVar17 = *(undefined8 *)(uVar5 - 0x48);
      uVar16 = *(undefined8 *)(uVar5 - 0x50);
      uVar10 = *(undefined8 *)(uVar5 - 8);
      uVar21 = *(undefined8 *)(uVar5 - 0x10);
      uVar20 = *(undefined8 *)(uVar5 - 0x18);
      *(undefined8 *)(uVar5 - 0x10) = 0;
      *(undefined8 *)(uVar5 - 8) = 0;
      *(undefined8 *)(uVar5 - 0x18) = 0;
      uVar26 = *(undefined8 *)(param_4 + -0x40);
      uVar22 = *(undefined8 *)(param_4 + -0x28);
      uVar23 = *(undefined8 *)(param_4 + -0x30);
      uVar2 = *(undefined4 *)(param_4 + -0x20);
      uVar25 = *(undefined8 *)(param_4 + -0x48);
      uVar24 = *(undefined8 *)(param_4 + -0x50);
      *(undefined8 *)(uVar5 - 0x38) = *(undefined8 *)(param_4 + -0x38);
      *(undefined8 *)(uVar5 - 0x40) = uVar26;
      *(undefined8 *)(uVar5 - 0x28) = uVar22;
      *(undefined8 *)(uVar5 - 0x30) = uVar23;
      *(undefined4 *)(uVar5 - 0x20) = uVar2;
      *(undefined8 *)(uVar5 - 0x48) = uVar25;
      *(undefined8 *)(uVar5 - 0x50) = uVar24;
      uVar23 = *puVar7;
      *(undefined8 *)(uVar5 - 0x58) = *(undefined8 *)(param_4 + -0x58);
      *puVar8 = uVar23;
      uVar23 = *(undefined8 *)(param_4 + -0x10);
      *(undefined8 *)(uVar5 - 0x18) = *(undefined8 *)(param_4 + -0x18);
      *(undefined8 *)(uVar5 - 0x10) = uVar23;
      *(undefined8 *)(uVar5 - 8) = *(undefined8 *)(param_4 + -8);
      *(undefined8 *)(param_4 + -0x38) = uVar11;
      *(undefined8 *)(param_4 + -0x40) = uVar13;
      *(undefined8 *)(param_4 + -0x28) = uVar15;
      *(undefined8 *)(param_4 + -0x30) = uVar14;
      *(undefined4 *)(param_4 + -0x20) = uVar1;
      *(undefined8 *)(param_4 + -0x58) = uVar19;
      *puVar7 = uVar18;
      *(undefined8 *)(param_4 + -0x48) = uVar17;
      *(undefined8 *)(param_4 + -0x50) = uVar16;
      *(undefined8 *)(param_4 + -0x10) = uVar21;
      *(undefined8 *)(param_4 + -0x18) = uVar20;
      *(undefined8 *)(param_4 + -8) = uVar10;
      goto LAB_00a26be4;
    }
  }
  else {
    puVar9 = (undefined8 *)(in_x5 + -0x60);
    if (*(float *)(in_x5 + -0x34) < fVar12) {
      uVar11 = *(undefined8 *)(uVar5 - 0x38);
      uVar13 = *(undefined8 *)(uVar5 - 0x40);
      uVar15 = *(undefined8 *)(uVar5 - 0x28);
      uVar14 = *(undefined8 *)(uVar5 - 0x30);
      uVar4 = 1;
      uVar1 = *(undefined4 *)(uVar5 - 0x20);
      uVar19 = *(undefined8 *)(uVar5 - 0x58);
      uVar18 = *puVar8;
      uVar17 = *(undefined8 *)(uVar5 - 0x48);
      uVar16 = *(undefined8 *)(uVar5 - 0x50);
      uVar10 = *(undefined8 *)(uVar5 - 8);
      uVar21 = *(undefined8 *)(uVar5 - 0x10);
      uVar20 = *(undefined8 *)(uVar5 - 0x18);
      *(undefined8 *)(uVar5 - 0x10) = 0;
      *(undefined8 *)(uVar5 - 8) = 0;
      *(undefined8 *)(uVar5 - 0x18) = 0;
      uVar26 = *(undefined8 *)(in_x5 + -0x40);
      uVar22 = *(undefined8 *)(in_x5 + -0x28);
      uVar23 = *(undefined8 *)(in_x5 + -0x30);
      uVar2 = *(undefined4 *)(in_x5 + -0x20);
      uVar25 = *(undefined8 *)(in_x5 + -0x48);
      uVar24 = *(undefined8 *)(in_x5 + -0x50);
      *(undefined8 *)(uVar5 - 0x38) = *(undefined8 *)(in_x5 + -0x38);
      *(undefined8 *)(uVar5 - 0x40) = uVar26;
      *(undefined8 *)(uVar5 - 0x28) = uVar22;
      *(undefined8 *)(uVar5 - 0x30) = uVar23;
      *(undefined4 *)(uVar5 - 0x20) = uVar2;
      *(undefined8 *)(uVar5 - 0x48) = uVar25;
      *(undefined8 *)(uVar5 - 0x50) = uVar24;
      uVar23 = *puVar9;
      *(undefined8 *)(uVar5 - 0x58) = *(undefined8 *)(in_x5 + -0x58);
      *puVar8 = uVar23;
      uVar23 = *(undefined8 *)(in_x5 + -0x10);
      *(undefined8 *)(uVar5 - 0x18) = *(undefined8 *)(in_x5 + -0x18);
      *(undefined8 *)(uVar5 - 0x10) = uVar23;
      *(undefined8 *)(uVar5 - 8) = *(undefined8 *)(in_x5 + -8);
      *(undefined8 *)(in_x5 + -0x38) = uVar11;
      *(undefined8 *)(in_x5 + -0x40) = uVar13;
      *(undefined8 *)(in_x5 + -0x28) = uVar15;
      *(undefined8 *)(in_x5 + -0x30) = uVar14;
      *(undefined4 *)(in_x5 + -0x20) = uVar1;
      *(undefined8 *)(in_x5 + -0x58) = uVar19;
      *puVar9 = uVar18;
      *(undefined8 *)(in_x5 + -0x48) = uVar17;
      *(undefined8 *)(in_x5 + -0x50) = uVar16;
      *(undefined8 *)(in_x5 + -0x10) = uVar21;
      *(undefined8 *)(in_x5 + -0x18) = uVar20;
      *(undefined8 *)(in_x5 + -8) = uVar10;
      goto LAB_00a26be4;
    }
    uVar15 = *(undefined8 *)(uVar5 - 0x38);
    uVar14 = *(undefined8 *)(uVar5 - 0x40);
    uVar17 = *(undefined8 *)(uVar5 - 0x28);
    uVar16 = *(undefined8 *)(uVar5 - 0x30);
    uVar1 = *(undefined4 *)(uVar5 - 0x20);
    uVar21 = *(undefined8 *)(uVar5 - 0x58);
    uVar20 = *puVar8;
    uVar19 = *(undefined8 *)(uVar5 - 0x48);
    uVar18 = *(undefined8 *)(uVar5 - 0x50);
    uVar23 = *(undefined8 *)(uVar5 - 0x18);
    uVar10 = *(undefined8 *)(uVar5 - 0x10);
    *(undefined8 *)(uVar5 - 0x18) = 0;
    *(undefined8 *)(uVar5 - 0x10) = 0;
    uVar11 = *(undefined8 *)(uVar5 - 8);
    *(undefined8 *)(uVar5 - 8) = 0;
    uVar24 = *(undefined8 *)(param_4 + -0x40);
    uVar22 = *(undefined8 *)(param_4 + -0x28);
    uVar13 = *(undefined8 *)(param_4 + -0x30);
    uVar2 = *(undefined4 *)(param_4 + -0x20);
    uVar26 = *(undefined8 *)(param_4 + -0x48);
    uVar25 = *(undefined8 *)(param_4 + -0x50);
    *(undefined8 *)(uVar5 - 0x38) = *(undefined8 *)(param_4 + -0x38);
    *(undefined8 *)(uVar5 - 0x40) = uVar24;
    *(undefined8 *)(uVar5 - 0x28) = uVar22;
    *(undefined8 *)(uVar5 - 0x30) = uVar13;
    *(undefined4 *)(uVar5 - 0x20) = uVar2;
    *(undefined8 *)(uVar5 - 0x48) = uVar26;
    *(undefined8 *)(uVar5 - 0x50) = uVar25;
    uVar13 = *puVar7;
    *(undefined8 *)(uVar5 - 0x58) = *(undefined8 *)(param_4 + -0x58);
    *puVar8 = uVar13;
    puVar8 = (undefined8 *)(param_4 + -0x18);
    uVar13 = *(undefined8 *)(param_4 + -0x10);
    *(undefined8 *)(uVar5 - 0x18) = *puVar8;
    *(undefined8 *)(uVar5 - 0x10) = uVar13;
    *(undefined8 *)(uVar5 - 8) = *(undefined8 *)(param_4 + -8);
    *(undefined8 *)(param_4 + -0x38) = uVar15;
    *(undefined8 *)(param_4 + -0x40) = uVar14;
    *(undefined8 *)(param_4 + -0x28) = uVar17;
    *(undefined8 *)(param_4 + -0x30) = uVar16;
    *(undefined4 *)(param_4 + -0x20) = uVar1;
    *(undefined8 *)(param_4 + -0x58) = uVar21;
    *puVar7 = uVar20;
    *(undefined8 *)(param_4 + -0x48) = uVar19;
    *(undefined8 *)(param_4 + -0x50) = uVar18;
    *puVar8 = uVar23;
    *(undefined8 *)(param_4 + -0x10) = uVar10;
    *(undefined8 *)(param_4 + -8) = uVar11;
    if (*(float *)(in_x5 + -0x34) < *(float *)(param_4 + -0x34)) {
      uVar15 = *(undefined8 *)(param_4 + -0x38);
      uVar14 = *(undefined8 *)(param_4 + -0x40);
      uVar17 = *(undefined8 *)(param_4 + -0x28);
      uVar16 = *(undefined8 *)(param_4 + -0x30);
      uVar4 = 2;
      uVar1 = *(undefined4 *)(param_4 + -0x20);
      uVar21 = *(undefined8 *)(param_4 + -0x58);
      uVar20 = *puVar7;
      uVar19 = *(undefined8 *)(param_4 + -0x48);
      uVar18 = *(undefined8 *)(param_4 + -0x50);
      *(undefined8 *)(param_4 + -0x10) = 0;
      *(undefined8 *)(param_4 + -8) = 0;
      *puVar8 = 0;
      uVar13 = *puVar9;
      *(undefined8 *)(param_4 + -0x58) = *(undefined8 *)(in_x5 + -0x58);
      *puVar7 = uVar13;
      uVar26 = *(undefined8 *)(in_x5 + -0x40);
      uVar22 = *(undefined8 *)(in_x5 + -0x28);
      uVar13 = *(undefined8 *)(in_x5 + -0x30);
      uVar25 = *(undefined8 *)(in_x5 + -0x48);
      uVar24 = *(undefined8 *)(in_x5 + -0x50);
      uVar2 = *(undefined4 *)(in_x5 + -0x20);
      *(undefined8 *)(param_4 + -0x38) = *(undefined8 *)(in_x5 + -0x38);
      *(undefined8 *)(param_4 + -0x40) = uVar26;
      *(undefined8 *)(param_4 + -0x28) = uVar22;
      *(undefined8 *)(param_4 + -0x30) = uVar13;
      *(undefined8 *)(param_4 + -0x48) = uVar25;
      *(undefined8 *)(param_4 + -0x50) = uVar24;
      *(undefined4 *)(param_4 + -0x20) = uVar2;
      uVar13 = *(undefined8 *)(in_x5 + -0x10);
      *(undefined8 *)(param_4 + -0x18) = *(undefined8 *)(in_x5 + -0x18);
      *(undefined8 *)(param_4 + -0x10) = uVar13;
      *(undefined8 *)(param_4 + -8) = *(undefined8 *)(in_x5 + -8);
      *(undefined8 *)(in_x5 + -0x38) = uVar15;
      *(undefined8 *)(in_x5 + -0x40) = uVar14;
      *(undefined8 *)(in_x5 + -0x28) = uVar17;
      *(undefined8 *)(in_x5 + -0x30) = uVar16;
      *(undefined4 *)(in_x5 + -0x20) = uVar1;
      *(undefined8 *)(in_x5 + -0x58) = uVar21;
      *puVar9 = uVar20;
      *(undefined8 *)(in_x5 + -0x48) = uVar19;
      *(undefined8 *)(in_x5 + -0x50) = uVar18;
      *(undefined8 *)(in_x5 + -0x18) = uVar23;
      *(undefined8 *)(in_x5 + -0x10) = uVar10;
      *(undefined8 *)(in_x5 + -8) = uVar11;
      goto LAB_00a26be4;
    }
  }
  uVar4 = 1;
LAB_00a26be4:
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4,uVar5,param_3);
}


