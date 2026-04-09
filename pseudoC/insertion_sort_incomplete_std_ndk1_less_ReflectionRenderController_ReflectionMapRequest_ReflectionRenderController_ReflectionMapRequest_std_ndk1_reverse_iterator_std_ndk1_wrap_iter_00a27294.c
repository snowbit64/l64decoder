// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_incomplete<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
// Entry Point: 00a27294
// Size: 848 bytes
// Signature: bool __cdecl __insertion_sort_incomplete<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>(reverse_iterator param_1, reverse_iterator param_2, __less * param_3)


/* bool 
   std::__ndk1::__insertion_sort_incomplete<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,
   ReflectionRenderController::ReflectionMapRequest>&,
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>
   > 
   >(std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>
   >, 
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>
   >, std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,
   ReflectionRenderController::ReflectionMapRequest>&) */

bool std::__ndk1::
     __insertion_sort_incomplete<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
               (reverse_iterator param_1,reverse_iterator param_2,__less *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 *in_x3;
  undefined8 in_x4;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  uVar7 = (ulong)param_2;
  lVar3 = tpidr_el0;
  uVar10 = ((long)(uVar7 - (long)in_x3) >> 5) * -0x5555555555555555;
  lVar11 = *(long *)(lVar3 + 0x28);
  if (5 < uVar10) {
    __sort3<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
              (param_1,param_2,(reverse_iterator)(__less *)(uVar7 - 0x60),(__less *)(uVar7 - 0x60));
    if ((undefined8 *)(uVar7 - 0x120) != in_x3) {
      lVar16 = 0;
      iVar17 = 0;
      puVar14 = (undefined8 *)(uVar7 - 0xc0);
      puVar15 = (undefined8 *)(uVar7 - 0x120);
      do {
        fVar19 = *(float *)((long)puVar15 + -0x34);
        puVar18 = puVar15 + -0xc;
        if (fVar19 < *(float *)((long)puVar14 + -0x34)) {
          uVar23 = puVar15[-0xb];
          uVar20 = *puVar18;
          uVar25 = puVar15[-10];
          uVar21 = puVar15[-3];
          uVar8 = puVar15[-2];
          uStack_98 = (undefined4)puVar15[-9];
          uVar27 = *(undefined8 *)((long)puVar15 + -0x3c);
          uVar26 = *(undefined8 *)((long)puVar15 + -0x44);
          puVar15[-3] = 0;
          puVar15[-2] = 0;
          uVar29 = puVar15[-5];
          uVar28 = puVar15[-6];
          uVar2 = *(undefined4 *)(puVar15 + -4);
          uVar13 = puVar15[-1];
          uStack_94 = (undefined4)uVar26;
          puVar15[-1] = 0;
          lVar4 = lVar16;
          do {
            lVar9 = lVar4;
            lVar1 = uVar7 + lVar9;
            *(undefined8 *)(lVar1 + -0x158) = *(undefined8 *)(lVar1 + -0xf8);
            *(undefined8 *)(lVar1 + -0x160) = *(undefined8 *)(lVar1 + -0x100);
            *(undefined8 *)(lVar1 + -0x148) = *(undefined8 *)(lVar1 + -0xe8);
            *(undefined8 *)(lVar1 + -0x150) = *(undefined8 *)(lVar1 + -0xf0);
            *(undefined8 *)(lVar1 + -0x178) = *(undefined8 *)(lVar1 + -0x118);
            *(undefined8 *)(lVar1 + -0x180) = *(undefined8 *)(lVar1 + -0x120);
            *(undefined8 *)(lVar1 + -0x168) = *(undefined8 *)(lVar1 + -0x108);
            *(undefined8 *)(lVar1 + -0x170) = *(undefined8 *)(lVar1 + -0x110);
            uVar24 = *(undefined8 *)(lVar1 + -0xd0);
            uVar22 = *(undefined8 *)(lVar1 + -0xd8);
            *(undefined8 *)(lVar1 + -0xd8) = 0;
            uVar12 = *(undefined8 *)(lVar1 + -200);
            *(undefined8 *)(lVar1 + -0xd0) = 0;
            *(undefined8 *)(lVar1 + -200) = 0;
            *(undefined4 *)(lVar1 + -0x140) = *(undefined4 *)(lVar1 + -0xe0);
            *(undefined8 *)(lVar1 + -0x130) = uVar24;
            *(undefined8 *)(lVar1 + -0x138) = uVar22;
            *(undefined8 *)(lVar1 + -0x128) = uVar12;
            uVar10 = uVar7;
            if (lVar9 == 0xc0) goto LAB_00a274e4;
            lVar4 = lVar9 + 0x60;
          } while (fVar19 < *(float *)(lVar1 + -0x94));
          uVar10 = (uVar7 + lVar9 + 0x60) - 0x120;
LAB_00a274e4:
          *(undefined8 *)(lVar1 + -0x118) = uVar23;
          *(undefined8 *)(lVar1 + -0x120) = uVar20;
          *(ulong *)(lVar1 + -0x108) = CONCAT44(uStack_94,uStack_98);
          *(undefined8 *)(lVar1 + -0x110) = uVar25;
          *(undefined8 *)(lVar1 + -0xfc) = uVar27;
          *(undefined8 *)(lVar1 + -0x104) = uVar26;
          *(float *)(uVar10 - 0x34) = fVar19;
          *(undefined8 *)(uVar10 - 0x28) = uVar29;
          *(undefined8 *)(uVar10 - 0x30) = uVar28;
          *(undefined4 *)(uVar10 - 0x20) = uVar2;
          pvVar6 = *(void **)(lVar1 + -0xd8);
          if (pvVar6 != (void *)0x0) {
            *(void **)(uVar10 - 0x10) = pvVar6;
            operator_delete(pvVar6);
            *(undefined8 *)(uVar7 + lVar9 + -0xd0) = 0;
            *(undefined8 *)(uVar7 + lVar9 + -200) = 0;
          }
          iVar17 = iVar17 + 1;
          *(undefined8 *)(lVar1 + -0xd8) = uVar21;
          *(undefined8 *)(uVar10 - 0x10) = uVar8;
          *(undefined8 *)(uVar10 - 8) = uVar13;
          if (iVar17 == 8) {
            bVar5 = puVar18 == in_x3;
            goto switchD_00a27308_caseD_0;
          }
        }
        lVar16 = lVar16 + -0x60;
        puVar14 = puVar15;
        puVar15 = puVar18;
      } while (puVar18 != in_x3);
      bVar5 = true;
      goto switchD_00a27308_caseD_0;
    }
    goto LAB_00a27594;
  }
  bVar5 = true;
  switch(uVar10) {
  case 2:
    if (*(float *)((long)in_x3 + 0x2c) < *(float *)(uVar7 - 0x34)) {
      uVar8 = *(undefined8 *)(uVar7 - 8);
      bVar5 = true;
      uVar20 = *(undefined8 *)(uVar7 - 0x10);
      uVar13 = *(undefined8 *)(uVar7 - 0x18);
      *(undefined8 *)(uVar7 - 0x10) = 0;
      *(undefined8 *)(uVar7 - 8) = 0;
      *(undefined8 *)(uVar7 - 0x18) = 0;
      uVar2 = *(undefined4 *)(uVar7 - 0x20);
      uVar23 = in_x3[3];
      uVar21 = in_x3[2];
      uVar26 = in_x3[5];
      uVar25 = in_x3[4];
      uVar28 = in_x3[7];
      uVar27 = in_x3[6];
      uVar12 = *(undefined8 *)(uVar7 - 0x38);
      uVar29 = *(undefined8 *)(uVar7 - 0x40);
      uVar24 = *(undefined8 *)(uVar7 - 0x28);
      uVar22 = *(undefined8 *)(uVar7 - 0x30);
      *(undefined4 *)(uVar7 - 0x20) = *(undefined4 *)(in_x3 + 8);
      *(undefined8 *)(uVar7 - 0x38) = uVar26;
      *(undefined8 *)(uVar7 - 0x40) = uVar25;
      *(undefined8 *)(uVar7 - 0x28) = uVar28;
      *(undefined8 *)(uVar7 - 0x30) = uVar27;
      uVar28 = *(undefined8 *)(uVar7 - 0x58);
      uVar27 = *(undefined8 *)(uVar7 - 0x60);
      uVar26 = *(undefined8 *)(uVar7 - 0x48);
      uVar25 = *(undefined8 *)(uVar7 - 0x50);
      *(undefined8 *)(uVar7 - 0x48) = uVar23;
      *(undefined8 *)(uVar7 - 0x50) = uVar21;
      uVar21 = *in_x3;
      *(undefined8 *)(uVar7 - 0x58) = in_x3[1];
      *(undefined8 *)(uVar7 - 0x60) = uVar21;
      uVar21 = in_x3[10];
      *(undefined8 *)(uVar7 - 0x18) = in_x3[9];
      *(undefined8 *)(uVar7 - 0x10) = uVar21;
      *(undefined8 *)(uVar7 - 8) = in_x3[0xb];
      in_x3[5] = uVar12;
      in_x3[4] = uVar29;
      in_x3[7] = uVar24;
      in_x3[6] = uVar22;
      *(undefined4 *)(in_x3 + 8) = uVar2;
      in_x3[10] = uVar20;
      in_x3[9] = uVar13;
      in_x3[0xb] = uVar8;
      in_x3[1] = uVar28;
      *in_x3 = uVar27;
      in_x3[3] = uVar26;
      in_x3[2] = uVar25;
      break;
    }
    goto LAB_00a27594;
  case 3:
    __sort3<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
              (param_1,param_2,(reverse_iterator)(__less *)(uVar7 - 0x60),(__less *)(uVar7 - 0x60));
    bVar5 = true;
    break;
  case 4:
    __sort4<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
              (param_1,param_2,param_2 - 0x60,param_2 - 0x60,(__less *)(uVar7 - 0xc0),
               (char)(__less *)(uVar7 - 0xc0),(char)param_3,(char)in_x3 + '`',in_x4);
LAB_00a27594:
    bVar5 = true;
    break;
  case 5:
    FUN_00a26e20(param_1,uVar7,uVar7 - 0x60,uVar7 - 0x60,uVar7 - 0xc0,uVar7 - 0xc0,uVar7 - 0x120,
                 uVar7 - 0x120,param_3,in_x3 + 0xc);
    bVar5 = true;
  }
switchD_00a27308_caseD_0:
  if (*(long *)(lVar3 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}


