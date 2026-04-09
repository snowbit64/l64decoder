// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort4<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
// Entry Point: 00a26c04
// Size: 540 bytes
// Signature: uint __cdecl __sort4<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>(reverse_iterator param_1, reverse_iterator param_2, reverse_iterator param_3, reverse_iterator param_4, __less * param_5, undefined param_6, undefined param_7, undefined param_8, undefined8 param_9)


/* unsigned int
   std::__ndk1::__sort4<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,
   ReflectionRenderController::ReflectionMapRequest>&,
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>
   > 
   >(std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>
   >, 
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>
   >, 
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>
   >, 
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>
   >, std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,
   ReflectionRenderController::ReflectionMapRequest>&) */

uint std::__ndk1::
     __sort4<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
               (reverse_iterator param_1,reverse_iterator param_2,reverse_iterator param_3,
               reverse_iterator param_4,__less *param_5,byte param_6,undefined param_7,byte param_8,
               undefined8 param_9)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  __less *p_Var5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar7 = (ulong)param_8;
  uVar6 = (ulong)param_6;
  p_Var5 = (__less *)(ulong)param_4;
  uVar4 = (ulong)param_2;
  lVar2 = tpidr_el0;
  lVar8 = *(long *)(lVar2 + 0x28);
  uVar3 = __sort3<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
                    (param_1,param_2,param_3,p_Var5);
  if (*(float *)(uVar7 - 0x34) < *(float *)(uVar6 - 0x34)) {
    uVar9 = *(undefined8 *)(uVar6 - 8);
    uVar11 = *(undefined8 *)(uVar6 - 0x10);
    uVar10 = *(undefined8 *)(uVar6 - 0x18);
    *(undefined8 *)(uVar6 - 0x10) = 0;
    *(undefined8 *)(uVar6 - 8) = 0;
    *(undefined8 *)(uVar6 - 0x18) = 0;
    uVar1 = *(undefined4 *)(uVar6 - 0x20);
    uVar13 = *(undefined8 *)(uVar7 - 0x48);
    uVar12 = *(undefined8 *)(uVar7 - 0x50);
    uVar15 = *(undefined8 *)(uVar7 - 0x38);
    uVar14 = *(undefined8 *)(uVar7 - 0x40);
    uVar17 = *(undefined8 *)(uVar7 - 0x28);
    uVar16 = *(undefined8 *)(uVar7 - 0x30);
    uVar19 = *(undefined8 *)(uVar6 - 0x38);
    uVar18 = *(undefined8 *)(uVar6 - 0x40);
    uVar21 = *(undefined8 *)(uVar6 - 0x28);
    uVar20 = *(undefined8 *)(uVar6 - 0x30);
    *(undefined4 *)(uVar6 - 0x20) = *(undefined4 *)(uVar7 - 0x20);
    *(undefined8 *)(uVar6 - 0x38) = uVar15;
    *(undefined8 *)(uVar6 - 0x40) = uVar14;
    *(undefined8 *)(uVar6 - 0x28) = uVar17;
    *(undefined8 *)(uVar6 - 0x30) = uVar16;
    uVar17 = *(undefined8 *)(uVar6 - 0x58);
    uVar16 = *(undefined8 *)(uVar6 - 0x60);
    uVar15 = *(undefined8 *)(uVar6 - 0x48);
    uVar14 = *(undefined8 *)(uVar6 - 0x50);
    *(undefined8 *)(uVar6 - 0x48) = uVar13;
    *(undefined8 *)(uVar6 - 0x50) = uVar12;
    uVar12 = *(undefined8 *)(uVar7 - 0x60);
    *(undefined8 *)(uVar6 - 0x58) = *(undefined8 *)(uVar7 - 0x58);
    *(undefined8 *)(uVar6 - 0x60) = uVar12;
    uVar12 = *(undefined8 *)(uVar7 - 0x10);
    *(undefined8 *)(uVar6 - 0x18) = *(undefined8 *)(uVar7 - 0x18);
    *(undefined8 *)(uVar6 - 0x10) = uVar12;
    *(undefined8 *)(uVar6 - 8) = *(undefined8 *)(uVar7 - 8);
    *(undefined8 *)(uVar7 - 0x38) = uVar19;
    *(undefined8 *)(uVar7 - 0x40) = uVar18;
    *(undefined8 *)(uVar7 - 0x28) = uVar21;
    *(undefined8 *)(uVar7 - 0x30) = uVar20;
    *(undefined4 *)(uVar7 - 0x20) = uVar1;
    *(undefined8 *)(uVar7 - 0x10) = uVar11;
    *(undefined8 *)(uVar7 - 0x18) = uVar10;
    *(undefined8 *)(uVar7 - 8) = uVar9;
    *(undefined8 *)(uVar7 - 0x58) = uVar17;
    *(undefined8 *)(uVar7 - 0x60) = uVar16;
    *(undefined8 *)(uVar7 - 0x48) = uVar15;
    *(undefined8 *)(uVar7 - 0x50) = uVar14;
    if (*(float *)(p_Var5 + -0x34) <= *(float *)(uVar6 - 0x34)) {
      uVar3 = uVar3 + 1;
    }
    else {
      uVar9 = *(undefined8 *)(p_Var5 + -8);
      uVar11 = *(undefined8 *)(p_Var5 + -0x10);
      uVar10 = *(undefined8 *)(p_Var5 + -0x18);
      *(undefined8 *)(p_Var5 + -0x10) = 0;
      *(undefined8 *)(p_Var5 + -8) = 0;
      *(undefined8 *)(p_Var5 + -0x18) = 0;
      uVar1 = *(undefined4 *)(p_Var5 + -0x20);
      uVar13 = *(undefined8 *)(uVar6 - 0x48);
      uVar12 = *(undefined8 *)(uVar6 - 0x50);
      uVar15 = *(undefined8 *)(uVar6 - 0x38);
      uVar14 = *(undefined8 *)(uVar6 - 0x40);
      uVar17 = *(undefined8 *)(uVar6 - 0x28);
      uVar16 = *(undefined8 *)(uVar6 - 0x30);
      uVar19 = *(undefined8 *)(p_Var5 + -0x38);
      uVar18 = *(undefined8 *)(p_Var5 + -0x40);
      uVar21 = *(undefined8 *)(p_Var5 + -0x28);
      uVar20 = *(undefined8 *)(p_Var5 + -0x30);
      *(undefined4 *)(p_Var5 + -0x20) = *(undefined4 *)(uVar6 - 0x20);
      *(undefined8 *)(p_Var5 + -0x38) = uVar15;
      *(undefined8 *)(p_Var5 + -0x40) = uVar14;
      *(undefined8 *)(p_Var5 + -0x28) = uVar17;
      *(undefined8 *)(p_Var5 + -0x30) = uVar16;
      uVar17 = *(undefined8 *)(p_Var5 + -0x58);
      uVar16 = *(undefined8 *)(p_Var5 + -0x60);
      uVar15 = *(undefined8 *)(p_Var5 + -0x48);
      uVar14 = *(undefined8 *)(p_Var5 + -0x50);
      *(undefined8 *)(p_Var5 + -0x48) = uVar13;
      *(undefined8 *)(p_Var5 + -0x50) = uVar12;
      uVar12 = *(undefined8 *)(uVar6 - 0x60);
      *(undefined8 *)(p_Var5 + -0x58) = *(undefined8 *)(uVar6 - 0x58);
      *(undefined8 *)(p_Var5 + -0x60) = uVar12;
      uVar12 = *(undefined8 *)(uVar6 - 0x10);
      *(undefined8 *)(p_Var5 + -0x18) = *(undefined8 *)(uVar6 - 0x18);
      *(undefined8 *)(p_Var5 + -0x10) = uVar12;
      *(undefined8 *)(p_Var5 + -8) = *(undefined8 *)(uVar6 - 8);
      *(undefined8 *)(uVar6 - 0x38) = uVar19;
      *(undefined8 *)(uVar6 - 0x40) = uVar18;
      *(undefined8 *)(uVar6 - 0x28) = uVar21;
      *(undefined8 *)(uVar6 - 0x30) = uVar20;
      *(undefined4 *)(uVar6 - 0x20) = uVar1;
      *(undefined8 *)(uVar6 - 0x58) = uVar17;
      *(undefined8 *)(uVar6 - 0x60) = uVar16;
      *(undefined8 *)(uVar6 - 0x48) = uVar15;
      *(undefined8 *)(uVar6 - 0x50) = uVar14;
      *(undefined8 *)(uVar6 - 0x10) = uVar11;
      *(undefined8 *)(uVar6 - 0x18) = uVar10;
      *(undefined8 *)(uVar6 - 8) = uVar9;
      if (*(float *)(uVar4 - 0x34) <= *(float *)(p_Var5 + -0x34)) {
        uVar3 = uVar3 + 2;
      }
      else {
        uVar9 = *(undefined8 *)(uVar4 - 8);
        uVar11 = *(undefined8 *)(uVar4 - 0x10);
        uVar10 = *(undefined8 *)(uVar4 - 0x18);
        *(undefined8 *)(uVar4 - 0x10) = 0;
        *(undefined8 *)(uVar4 - 8) = 0;
        *(undefined8 *)(uVar4 - 0x18) = 0;
        uVar1 = *(undefined4 *)(uVar4 - 0x20);
        uVar13 = *(undefined8 *)(p_Var5 + -0x48);
        uVar12 = *(undefined8 *)(p_Var5 + -0x50);
        uVar15 = *(undefined8 *)(p_Var5 + -0x38);
        uVar14 = *(undefined8 *)(p_Var5 + -0x40);
        uVar3 = uVar3 + 3;
        uVar17 = *(undefined8 *)(p_Var5 + -0x28);
        uVar16 = *(undefined8 *)(p_Var5 + -0x30);
        uVar19 = *(undefined8 *)(uVar4 - 0x38);
        uVar18 = *(undefined8 *)(uVar4 - 0x40);
        uVar21 = *(undefined8 *)(uVar4 - 0x28);
        uVar20 = *(undefined8 *)(uVar4 - 0x30);
        *(undefined4 *)(uVar4 - 0x20) = *(undefined4 *)(p_Var5 + -0x20);
        *(undefined8 *)(uVar4 - 0x38) = uVar15;
        *(undefined8 *)(uVar4 - 0x40) = uVar14;
        *(undefined8 *)(uVar4 - 0x28) = uVar17;
        *(undefined8 *)(uVar4 - 0x30) = uVar16;
        uVar17 = *(undefined8 *)(uVar4 - 0x58);
        uVar16 = *(undefined8 *)(uVar4 - 0x60);
        uVar15 = *(undefined8 *)(uVar4 - 0x48);
        uVar14 = *(undefined8 *)(uVar4 - 0x50);
        *(undefined8 *)(uVar4 - 0x48) = uVar13;
        *(undefined8 *)(uVar4 - 0x50) = uVar12;
        uVar12 = *(undefined8 *)(p_Var5 + -0x60);
        *(undefined8 *)(uVar4 - 0x58) = *(undefined8 *)(p_Var5 + -0x58);
        *(undefined8 *)(uVar4 - 0x60) = uVar12;
        uVar12 = *(undefined8 *)(p_Var5 + -0x10);
        *(undefined8 *)(uVar4 - 0x18) = *(undefined8 *)(p_Var5 + -0x18);
        *(undefined8 *)(uVar4 - 0x10) = uVar12;
        *(undefined8 *)(uVar4 - 8) = *(undefined8 *)(p_Var5 + -8);
        *(undefined8 *)(p_Var5 + -0x38) = uVar19;
        *(undefined8 *)(p_Var5 + -0x40) = uVar18;
        *(undefined8 *)(p_Var5 + -0x28) = uVar21;
        *(undefined8 *)(p_Var5 + -0x30) = uVar20;
        *(undefined4 *)(p_Var5 + -0x20) = uVar1;
        *(undefined8 *)(p_Var5 + -0x58) = uVar17;
        *(undefined8 *)(p_Var5 + -0x60) = uVar16;
        *(undefined8 *)(p_Var5 + -0x48) = uVar15;
        *(undefined8 *)(p_Var5 + -0x50) = uVar14;
        *(undefined8 *)(p_Var5 + -0x10) = uVar11;
        *(undefined8 *)(p_Var5 + -0x18) = uVar10;
        *(undefined8 *)(p_Var5 + -8) = uVar9;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar8) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


