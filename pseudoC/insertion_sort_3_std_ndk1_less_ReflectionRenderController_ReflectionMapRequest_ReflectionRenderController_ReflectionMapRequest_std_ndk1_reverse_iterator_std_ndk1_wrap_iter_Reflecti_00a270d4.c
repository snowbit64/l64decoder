// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __insertion_sort_3<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
// Entry Point: 00a270d4
// Size: 448 bytes
// Signature: void __thiscall __insertion_sort_3<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>(__ndk1 * this, reverse_iterator param_1, reverse_iterator param_2, __less * param_3)


/* void 
   std::__ndk1::__insertion_sort_3<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,
   ReflectionRenderController::ReflectionMapRequest>&,
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>
   > 
   >(std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>
   >, 
   std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>
   >, std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,
   ReflectionRenderController::ReflectionMapRequest>&) */

void __thiscall
std::__ndk1::
__insertion_sort_3<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
          (__ndk1 *this,reverse_iterator param_1,reverse_iterator param_2,__less *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 uStack_88;
  undefined4 local_84;
  
  uVar8 = (ulong)param_1;
  lVar5 = tpidr_el0;
  lVar9 = *(long *)(lVar5 + 0x28);
  __sort3<std::__ndk1::__less<ReflectionRenderController::ReflectionMapRequest,ReflectionRenderController::ReflectionMapRequest>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<ReflectionRenderController::ReflectionMapRequest*>>>
            ((reverse_iterator)this,param_1,(reverse_iterator)(__less *)(uVar8 - 0x60),
             (__less *)(uVar8 - 0x60));
  if ((undefined8 *)(uVar8 - 0x120) != (undefined8 *)param_3) {
    lVar15 = 0;
    puVar13 = (undefined8 *)(uVar8 - 0xc0);
    puVar14 = (undefined8 *)(uVar8 - 0x120);
    do {
      fVar18 = *(float *)((long)puVar14 + -0x34);
      puVar16 = puVar14 + -0xc;
      if (fVar18 < *(float *)((long)puVar13 + -0x34)) {
        uVar21 = puVar14[-0xb];
        uVar19 = *puVar16;
        uVar23 = puVar14[-10];
        uVar2 = puVar14[-3];
        uVar3 = puVar14[-2];
        uStack_88 = (undefined4)puVar14[-9];
        uVar25 = *(undefined8 *)((long)puVar14 + -0x3c);
        uVar24 = *(undefined8 *)((long)puVar14 + -0x44);
        puVar14[-3] = 0;
        puVar14[-2] = 0;
        uVar27 = puVar14[-5];
        uVar26 = puVar14[-6];
        uVar4 = *(undefined4 *)(puVar14 + -4);
        uVar17 = puVar14[-1];
        local_84 = (undefined4)uVar24;
        puVar14[-1] = 0;
        lVar6 = lVar15;
        do {
          lVar10 = lVar6;
          lVar1 = uVar8 + lVar10;
          *(undefined8 *)(lVar1 + -0x158) = *(undefined8 *)(lVar1 + -0xf8);
          *(undefined8 *)(lVar1 + -0x160) = *(undefined8 *)(lVar1 + -0x100);
          *(undefined8 *)(lVar1 + -0x148) = *(undefined8 *)(lVar1 + -0xe8);
          *(undefined8 *)(lVar1 + -0x150) = *(undefined8 *)(lVar1 + -0xf0);
          *(undefined8 *)(lVar1 + -0x178) = *(undefined8 *)(lVar1 + -0x118);
          *(undefined8 *)(lVar1 + -0x180) = *(undefined8 *)(lVar1 + -0x120);
          *(undefined8 *)(lVar1 + -0x168) = *(undefined8 *)(lVar1 + -0x108);
          *(undefined8 *)(lVar1 + -0x170) = *(undefined8 *)(lVar1 + -0x110);
          uVar22 = *(undefined8 *)(lVar1 + -0xd0);
          uVar20 = *(undefined8 *)(lVar1 + -0xd8);
          *(undefined8 *)(lVar1 + -0xd8) = 0;
          uVar11 = *(undefined8 *)(lVar1 + -200);
          *(undefined8 *)(lVar1 + -0xd0) = 0;
          *(undefined8 *)(lVar1 + -200) = 0;
          *(undefined4 *)(lVar1 + -0x140) = *(undefined4 *)(lVar1 + -0xe0);
          *(undefined8 *)(lVar1 + -0x130) = uVar22;
          *(undefined8 *)(lVar1 + -0x138) = uVar20;
          *(undefined8 *)(lVar1 + -0x128) = uVar11;
          uVar12 = uVar8;
          if (lVar10 == 0xc0) goto LAB_00a27218;
          lVar6 = lVar10 + 0x60;
        } while (fVar18 < *(float *)(lVar1 + -0x94));
        uVar12 = (uVar8 + lVar10 + 0x60) - 0x120;
LAB_00a27218:
        *(undefined8 *)(lVar1 + -0x118) = uVar21;
        *(undefined8 *)(lVar1 + -0x120) = uVar19;
        *(ulong *)(lVar1 + -0x108) = CONCAT44(local_84,uStack_88);
        *(undefined8 *)(lVar1 + -0x110) = uVar23;
        *(undefined8 *)(lVar1 + -0xfc) = uVar25;
        *(undefined8 *)(lVar1 + -0x104) = uVar24;
        *(float *)(uVar12 - 0x34) = fVar18;
        *(undefined8 *)(uVar12 - 0x28) = uVar27;
        *(undefined8 *)(uVar12 - 0x30) = uVar26;
        *(undefined4 *)(uVar12 - 0x20) = uVar4;
        pvVar7 = *(void **)(lVar1 + -0xd8);
        if (pvVar7 != (void *)0x0) {
          *(void **)(uVar12 - 0x10) = pvVar7;
          operator_delete(pvVar7);
          *(undefined8 *)(uVar8 + lVar10 + -0xd0) = 0;
          *(undefined8 *)(uVar8 + lVar10 + -200) = 0;
        }
        *(undefined8 *)(lVar1 + -0xd8) = uVar2;
        *(undefined8 *)(uVar12 - 0x10) = uVar3;
        *(undefined8 *)(uVar12 - 8) = uVar17;
      }
      lVar15 = lVar15 + -0x60;
      puVar13 = puVar14;
      puVar14 = puVar16;
    } while (puVar16 != (undefined8 *)param_3);
  }
  if (*(long *)(lVar5 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


