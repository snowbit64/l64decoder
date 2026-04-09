// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __sort<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
// Entry Point: 00a261f8
// Size: 1800 bytes
// Signature: void __cdecl __sort<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>(reverse_iterator param_1, reverse_iterator param_2, __less * param_3)


/* void std::__ndk1::__sort<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,
   ReflectionRenderController::ReflectionMapRequest>&,
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>
   > 
   >(std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>
   >, 
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>
   >, std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,
   ReflectionRenderController::ReflectionMapRequest>&) */

void std::__ndk1::
     __sort<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
               (reverse_iterator param_1,reverse_iterator param_2,__less *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  reverse_iterator rVar10;
  __less *this;
  undefined8 *puVar11;
  undefined8 *in_x3;
  undefined8 in_x4;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  reverse_iterator rVar9;
  
  puVar11 = (undefined8 *)(ulong)param_2;
  this = (__less *)(ulong)param_1;
  lVar5 = tpidr_el0;
  lVar12 = *(long *)(lVar5 + 0x28);
LAB_00a26244:
  puVar1 = in_x3 + 0xc;
  puVar20 = puVar11;
LAB_00a2624c:
  puVar11 = puVar20;
  uVar13 = ((long)puVar11 - (long)in_x3 >> 5) * -0x5555555555555555;
  rVar10 = (reverse_iterator)puVar11;
  switch(uVar13) {
  case 0:
  case 1:
    goto switchD_00a2678c_caseD_0;
  case 2:
    if (*(float *)((long)in_x3 + 0x2c) < *(float *)((long)puVar11 + -0x34)) {
      uVar25 = puVar11[-0xb];
      uVar22 = puVar11[-0xc];
      uVar29 = puVar11[-7];
      uVar28 = puVar11[-8];
      uVar26 = puVar11[-5];
      uVar18 = puVar11[-6];
      uVar4 = *(undefined4 *)(puVar11 + -4);
      uVar33 = puVar11[-9];
      uVar31 = puVar11[-10];
      uVar27 = puVar11[-2];
      uVar23 = puVar11[-3];
      puVar11[-3] = 0;
      puVar11[-2] = 0;
      uVar14 = puVar11[-1];
      puVar11[-1] = 0;
      uVar24 = *in_x3;
      puVar11[-0xb] = in_x3[1];
      puVar11[-0xc] = uVar24;
      uVar32 = in_x3[4];
      uVar30 = in_x3[7];
      uVar24 = in_x3[6];
      uVar3 = *(undefined4 *)(in_x3 + 8);
      uVar35 = in_x3[3];
      uVar34 = in_x3[2];
      puVar11[-7] = in_x3[5];
      puVar11[-8] = uVar32;
      puVar11[-5] = uVar30;
      puVar11[-6] = uVar24;
      *(undefined4 *)(puVar11 + -4) = uVar3;
      puVar11[-9] = uVar35;
      puVar11[-10] = uVar34;
      uVar24 = in_x3[10];
      puVar11[-3] = in_x3[9];
      puVar11[-2] = uVar24;
      puVar11[-1] = in_x3[0xb];
      in_x3[10] = uVar27;
      in_x3[9] = uVar23;
      in_x3[0xb] = uVar14;
      in_x3[1] = uVar25;
      *in_x3 = uVar22;
      in_x3[5] = uVar29;
      in_x3[4] = uVar28;
      in_x3[7] = uVar26;
      in_x3[6] = uVar18;
      *(undefined4 *)(in_x3 + 8) = uVar4;
      in_x3[3] = uVar33;
      in_x3[2] = uVar31;
    }
    goto switchD_00a2678c_caseD_0;
  case 3:
    __sort3<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
              (param_1,rVar10,(reverse_iterator)(puVar11 + -0xc),(__less *)(puVar11 + -0xc));
    goto switchD_00a2678c_caseD_0;
  case 4:
    __sort4<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
              (param_1,rVar10,rVar10 - 0x60,rVar10 - 0x60,(__less *)(puVar11 + -0x18),
               (char)(puVar11 + -0x18),(char)param_3,(char)in_x3 + '`',in_x4);
    goto switchD_00a2678c_caseD_0;
  case 5:
    FUN_00a26e20(this,puVar11,puVar11 + -0xc,puVar11 + -0xc,puVar11 + -0x18,puVar11 + -0x18,
                 puVar11 + -0x24,puVar11 + -0x24,param_3,in_x3 + 0xc);
    goto switchD_00a2678c_caseD_0;
  }
  if ((long)puVar11 - (long)in_x3 < 0x2a0) {
    __insertion_sort_3<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
              ((__ndk1 *)this,rVar10,(reverse_iterator)param_3,(__less *)in_x3);
    goto switchD_00a2678c_caseD_0;
  }
  puVar20 = puVar11 + (uVar13 >> 1) * -0xc;
  if (uVar13 < 1000) {
    uVar8 = __sort3<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
                      (param_1,rVar10,param_1,(__less *)puVar20);
  }
  else {
    uVar8 = FUN_00a26e20(this,puVar11,puVar11 + (uVar13 >> 2) * -0xc,puVar11 + (uVar13 >> 2) * -0xc,
                         this,puVar20,puVar20 + (uVar13 >> 2) * -0xc,puVar20 + (uVar13 >> 2) * -0xc,
                         param_3,puVar1);
  }
  fVar21 = *(float *)((long)puVar11 + -0x34);
  puVar19 = puVar11 + -0xc;
  puVar15 = in_x3;
  if (*(float *)((long)puVar20 + -0x34) <= fVar21) {
    do {
      puVar17 = puVar15;
      if (puVar17 + 0x18 == puVar11) {
        if (*(float *)((long)in_x3 + 0x2c) <= fVar21) goto LAB_00a265d0;
        goto LAB_00a26678;
      }
      puVar15 = puVar17 + 0xc;
    } while (*(float *)((long)puVar20 + -0x34) <= *(float *)((long)puVar17 + 0x8c));
    uVar25 = puVar11[-0xb];
    uVar22 = *puVar19;
    uVar8 = uVar8 + 1;
    uVar29 = puVar11[-7];
    uVar28 = puVar11[-8];
    uVar26 = puVar11[-5];
    uVar18 = puVar11[-6];
    uVar3 = *(undefined4 *)(puVar11 + -4);
    uVar33 = puVar11[-9];
    uVar31 = puVar11[-10];
    uVar27 = puVar11[-2];
    uVar23 = puVar11[-3];
    puVar11[-3] = 0;
    puVar11[-2] = 0;
    uVar14 = puVar11[-1];
    puVar11[-1] = 0;
    uVar24 = *puVar15;
    puVar11[-0xb] = puVar17[0xd];
    *puVar19 = uVar24;
    uVar32 = puVar17[0x10];
    uVar30 = puVar17[0x13];
    uVar24 = puVar17[0x12];
    uVar4 = *(undefined4 *)(puVar17 + 0x14);
    uVar35 = puVar17[0xf];
    uVar34 = puVar17[0xe];
    puVar11[-7] = puVar17[0x11];
    puVar11[-8] = uVar32;
    puVar11[-5] = uVar30;
    puVar11[-6] = uVar24;
    *(undefined4 *)(puVar11 + -4) = uVar4;
    puVar11[-9] = uVar35;
    puVar11[-10] = uVar34;
    uVar24 = puVar17[0x16];
    puVar11[-3] = puVar17[0x15];
    puVar11[-2] = uVar24;
    puVar11[-1] = puVar17[0x17];
    puVar17[0xd] = uVar25;
    *puVar15 = uVar22;
    puVar17[0x16] = uVar27;
    puVar17[0x15] = uVar23;
    puVar17[0x11] = uVar29;
    puVar17[0x10] = uVar28;
    puVar17[0x13] = uVar26;
    puVar17[0x12] = uVar18;
    *(undefined4 *)(puVar17 + 0x14) = uVar3;
    puVar15 = puVar17 + 0x18;
    puVar17[0xf] = uVar33;
    puVar17[0xe] = uVar31;
    puVar17[0x17] = uVar14;
    if (puVar15 < puVar19) goto LAB_00a263cc;
LAB_00a26308:
    if (puVar19 != puVar20) {
LAB_00a264a4:
      if (*(float *)((long)puVar20 - 0x34) < *(float *)((long)puVar19 + -0x34)) {
        uVar25 = puVar19[-0xb];
        uVar22 = puVar19[-0xc];
        uVar8 = uVar8 + 1;
        uVar29 = puVar19[-7];
        uVar28 = puVar19[-8];
        uVar26 = puVar19[-5];
        uVar18 = puVar19[-6];
        uVar3 = *(undefined4 *)(puVar19 + -4);
        uVar33 = puVar19[-9];
        uVar31 = puVar19[-10];
        uVar27 = puVar19[-2];
        uVar23 = puVar19[-3];
        puVar19[-3] = 0;
        puVar19[-2] = 0;
        uVar14 = puVar19[-1];
        puVar19[-1] = 0;
        uVar24 = puVar20[-0xc];
        puVar19[-0xb] = puVar20[-0xb];
        puVar19[-0xc] = uVar24;
        uVar32 = puVar20[-8];
        uVar30 = puVar20[-5];
        uVar24 = puVar20[-6];
        uVar4 = *(undefined4 *)(puVar20 + -4);
        uVar35 = puVar20[-9];
        uVar34 = puVar20[-10];
        puVar19[-7] = puVar20[-7];
        puVar19[-8] = uVar32;
        puVar19[-5] = uVar30;
        puVar19[-6] = uVar24;
        *(undefined4 *)(puVar19 + -4) = uVar4;
        puVar19[-9] = uVar35;
        puVar19[-10] = uVar34;
        uVar24 = puVar20[-2];
        puVar19[-3] = puVar20[-3];
        puVar19[-2] = uVar24;
        puVar19[-1] = puVar20[-1];
        puVar20[-0xb] = uVar25;
        puVar20[-0xc] = uVar22;
        puVar20[-2] = uVar27;
        puVar20[-3] = uVar23;
        puVar20[-7] = uVar29;
        puVar20[-8] = uVar28;
        puVar20[-5] = uVar26;
        puVar20[-6] = uVar18;
        *(undefined4 *)(puVar20 + -4) = uVar3;
        puVar20[-9] = uVar33;
        puVar20[-10] = uVar31;
        puVar20[-1] = uVar14;
      }
    }
  }
  else {
    puVar15 = puVar1;
    if (puVar19 <= puVar1) goto LAB_00a26308;
LAB_00a263cc:
    while( true ) {
      puVar19 = puVar19 + 0xc;
      do {
        puVar17 = puVar19;
        puVar19 = puVar17 + -0xc;
      } while (*(float *)((long)puVar17 + -0x94) < *(float *)((long)puVar20 - 0x34));
      do {
        puVar16 = puVar15;
        puVar15 = puVar16 + 0xc;
      } while (*(float *)((long)puVar20 - 0x34) <= *(float *)((long)puVar16 + 0x2c));
      if (puVar19 < puVar15) break;
      uVar14 = puVar17[-0x17];
      uVar24 = puVar17[-0x18];
      uVar8 = uVar8 + 1;
      puVar2 = puVar15;
      if (puVar19 != puVar20) {
        puVar2 = puVar20;
      }
      uVar29 = puVar17[-0x13];
      uVar28 = puVar17[-0x14];
      uVar26 = puVar17[-0x11];
      uVar23 = puVar17[-0x12];
      uVar3 = *(undefined4 *)(puVar17 + -0x10);
      uVar33 = puVar17[-0x15];
      uVar31 = puVar17[-0x16];
      uVar27 = puVar17[-0xe];
      uVar25 = puVar17[-0xf];
      puVar17[-0xf] = 0;
      puVar17[-0xe] = 0;
      uVar18 = puVar17[-0xd];
      puVar17[-0xd] = 0;
      uVar22 = *puVar16;
      puVar17[-0x17] = puVar16[1];
      puVar17[-0x18] = uVar22;
      uVar32 = puVar16[4];
      uVar30 = puVar16[7];
      uVar22 = puVar16[6];
      uVar4 = *(undefined4 *)(puVar16 + 8);
      uVar35 = puVar16[3];
      uVar34 = puVar16[2];
      puVar17[-0x13] = puVar16[5];
      puVar17[-0x14] = uVar32;
      puVar17[-0x11] = uVar30;
      puVar17[-0x12] = uVar22;
      *(undefined4 *)(puVar17 + -0x10) = uVar4;
      puVar17[-0x15] = uVar35;
      puVar17[-0x16] = uVar34;
      uVar22 = puVar16[10];
      puVar17[-0xf] = puVar16[9];
      puVar17[-0xe] = uVar22;
      puVar17[-0xd] = puVar16[0xb];
      puVar16[1] = uVar14;
      *puVar16 = uVar24;
      puVar16[10] = uVar27;
      puVar16[9] = uVar25;
      puVar16[5] = uVar29;
      puVar16[4] = uVar28;
      puVar16[7] = uVar26;
      puVar16[6] = uVar23;
      *(undefined4 *)(puVar16 + 8) = uVar3;
      puVar16[3] = uVar33;
      puVar16[2] = uVar31;
      puVar16[0xb] = uVar18;
      puVar19 = puVar17 + -0x18;
      puVar20 = puVar2;
    }
    if (puVar19 != puVar20) goto LAB_00a264a4;
  }
  if (uVar8 == 0) {
    bVar6 = __insertion_sort_incomplete<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
                      (param_1,rVar10,this);
    rVar9 = (reverse_iterator)(puVar19 + -0xc);
    bVar7 = __insertion_sort_incomplete<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
                      (rVar9,rVar9,param_3);
    if (bVar7) goto LAB_00a26768;
    puVar20 = puVar19 + -0xc;
    if (bVar6) goto LAB_00a2624c;
  }
  if (((long)puVar19 - (long)in_x3 >> 5) * -0x5555555555555555 <=
      ((long)puVar11 - (long)puVar19 >> 5) * -0x5555555555555555) {
    rVar10 = (int)puVar19 - 0x60;
    __sort<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
              (rVar10,rVar10,param_3);
    in_x3 = puVar19;
    param_3 = this;
    goto LAB_00a26244;
  }
  __sort<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
            (param_1,rVar10,this);
  puVar20 = puVar19 + -0xc;
  goto LAB_00a2624c;
  while (puVar19 = puVar20 + -0xc, *(float *)((long)puVar20 - 0x34) <= fVar21) {
LAB_00a265d0:
    puVar20 = puVar19;
    if (puVar20 == puVar1) goto switchD_00a2678c_caseD_0;
  }
  uVar25 = puVar20[-0xb];
  uVar22 = *puVar19;
  uVar29 = puVar20[-7];
  uVar28 = puVar20[-8];
  uVar26 = puVar20[-5];
  uVar18 = puVar20[-6];
  uVar3 = *(undefined4 *)(puVar20 + -4);
  uVar33 = puVar20[-9];
  uVar31 = puVar20[-10];
  uVar27 = puVar20[-2];
  uVar23 = puVar20[-3];
  puVar20[-3] = 0;
  puVar20[-2] = 0;
  uVar14 = puVar20[-1];
  puVar20[-1] = 0;
  uVar24 = *in_x3;
  puVar20[-0xb] = in_x3[1];
  *puVar19 = uVar24;
  uVar32 = in_x3[4];
  uVar30 = in_x3[7];
  uVar24 = in_x3[6];
  uVar4 = *(undefined4 *)(in_x3 + 8);
  uVar35 = in_x3[3];
  uVar34 = in_x3[2];
  puVar20[-7] = in_x3[5];
  puVar20[-8] = uVar32;
  puVar20[-5] = uVar30;
  puVar20[-6] = uVar24;
  *(undefined4 *)(puVar20 + -4) = uVar4;
  puVar20[-9] = uVar35;
  puVar20[-10] = uVar34;
  uVar24 = in_x3[10];
  puVar20[-3] = in_x3[9];
  puVar20[-2] = uVar24;
  puVar20[-1] = in_x3[0xb];
  in_x3[10] = uVar27;
  in_x3[9] = uVar23;
  in_x3[0xb] = uVar14;
  in_x3[1] = uVar25;
  *in_x3 = uVar22;
  in_x3[5] = uVar29;
  in_x3[4] = uVar28;
  in_x3[7] = uVar26;
  in_x3[6] = uVar18;
  *(undefined4 *)(in_x3 + 8) = uVar3;
  in_x3[3] = uVar33;
  in_x3[2] = uVar31;
LAB_00a26678:
  puVar15 = puVar1;
  if (puVar19 == puVar1) goto switchD_00a2678c_caseD_0;
  while( true ) {
    puVar20 = puVar19 + 0xc;
    do {
      puVar17 = puVar20;
      puVar20 = puVar17 + -0xc;
    } while (*(float *)((long)puVar17 + -0x94) <= *(float *)((long)puVar11 + -0x34));
    puVar19 = puVar17 + -0x18;
    do {
      puVar16 = puVar15;
      puVar15 = puVar16 + 0xc;
    } while (*(float *)((long)puVar11 + -0x34) < *(float *)((long)puVar16 + 0x2c));
    if (puVar20 <= puVar15) break;
    uVar25 = puVar17[-0x17];
    uVar22 = puVar17[-0x18];
    uVar29 = puVar17[-0x13];
    uVar28 = puVar17[-0x14];
    uVar26 = puVar17[-0x11];
    uVar18 = puVar17[-0x12];
    uVar3 = *(undefined4 *)(puVar17 + -0x10);
    uVar33 = puVar17[-0x15];
    uVar31 = puVar17[-0x16];
    uVar27 = puVar17[-0xe];
    uVar23 = puVar17[-0xf];
    puVar17[-0xf] = 0;
    puVar17[-0xe] = 0;
    uVar14 = puVar17[-0xd];
    puVar17[-0xd] = 0;
    uVar24 = *puVar16;
    puVar17[-0x17] = puVar16[1];
    puVar17[-0x18] = uVar24;
    uVar32 = puVar16[4];
    uVar30 = puVar16[7];
    uVar24 = puVar16[6];
    uVar4 = *(undefined4 *)(puVar16 + 8);
    uVar35 = puVar16[3];
    uVar34 = puVar16[2];
    puVar17[-0x13] = puVar16[5];
    puVar17[-0x14] = uVar32;
    puVar17[-0x11] = uVar30;
    puVar17[-0x12] = uVar24;
    *(undefined4 *)(puVar17 + -0x10) = uVar4;
    puVar17[-0x15] = uVar35;
    puVar17[-0x16] = uVar34;
    uVar24 = puVar16[10];
    puVar17[-0xf] = puVar16[9];
    puVar17[-0xe] = uVar24;
    puVar17[-0xd] = puVar16[0xb];
    puVar16[1] = uVar25;
    *puVar16 = uVar22;
    puVar16[10] = uVar27;
    puVar16[9] = uVar23;
    puVar16[5] = uVar29;
    puVar16[4] = uVar28;
    puVar16[7] = uVar26;
    puVar16[6] = uVar18;
    *(undefined4 *)(puVar16 + 8) = uVar3;
    puVar16[3] = uVar33;
    puVar16[2] = uVar31;
    puVar16[0xb] = uVar14;
  }
  goto LAB_00a2624c;
LAB_00a26768:
  in_x3 = puVar19;
  param_3 = this;
  if (bVar6) {
switchD_00a2678c_caseD_0:
    if (*(long *)(lVar5 + 0x28) == lVar12) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_00a26244;
}


