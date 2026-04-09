// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: submitSecondaryCommandBuffer
// Entry Point: 00965830
// Size: 1256 bytes
// Signature: undefined submitSecondaryCommandBuffer(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::submitSecondaryCommandBuffer() */

void TextureStreamingManager::submitSecondaryCommandBuffer(void)

{
  uint *puVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  long in_x0;
  long *plVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long **pplVar15;
  void *pvVar16;
  void **ppvVar17;
  void **ppvVar18;
  void **ppvVar19;
  void *pvVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  uint local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long **local_80;
  long **local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(char *)(in_x0 + 0x840) == '\0') goto LAB_00965ce4;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_90._0_4_ = 0;
  local_90._4_4_ = 0;
  uStack_a8._0_4_ = 0;
  uStack_a8._4_4_ = 0;
  local_b0 = 0;
  uStack_ac = 0;
                    /* try { // try from 00965878 to 0096587f has its CatchHandler @ 00965d3c */
  Mutex::enterCriticalSection();
  pvVar20 = *(void **)(in_x0 + 0x4f0);
  *(undefined8 *)(in_x0 + 0x4f0) = 0;
  ppvVar17 = *(void ***)(in_x0 + 0x4f8);
  *(undefined8 *)(in_x0 + 0x4f8) = 0;
  ppvVar19 = *(void ***)(in_x0 + 0x500);
  *(undefined8 *)(in_x0 + 0x500) = 0;
  uVar7 = *(undefined8 *)(in_x0 + 0x508);
  *(undefined8 *)(in_x0 + 0x508) = 0;
  uVar14 = *(ulong *)(in_x0 + 0x510);
  local_b0 = (uint)pvVar20;
  uStack_ac = (undefined4)((ulong)pvVar20 >> 0x20);
  uStack_a8._0_4_ = SUB84(ppvVar17,0);
  uStack_a8._4_4_ = (undefined4)((ulong)ppvVar17 >> 0x20);
  lVar21 = *(long *)(in_x0 + 0x518);
  *(undefined8 *)(in_x0 + 0x510) = 0;
  uStack_a0 = SUB84(ppvVar19,0);
  uStack_9c = (undefined4)((ulong)ppvVar19 >> 0x20);
  uStack_98 = (undefined4)uVar7;
  uStack_94 = (undefined4)((ulong)uVar7 >> 0x20);
  *(undefined8 *)(in_x0 + 0x518) = 0;
  local_90._0_4_ = (undefined4)uVar14;
  local_90._4_4_ = (undefined4)(uVar14 >> 0x20);
  uStack_88 = (undefined4)lVar21;
  uStack_84 = (undefined4)((ulong)lVar21 >> 0x20);
                    /* try { // try from 009658bc to 009658c3 has its CatchHandler @ 00965d38 */
  Mutex::leaveCriticalSection();
  if (lVar21 != 0) {
    lVar22 = lVar21 + -1;
    ppvVar18 = ppvVar17;
    do {
      lVar8 = *(long *)(in_x0 + 0x528);
      lVar10 = *(long *)(in_x0 + 0x530) - lVar8;
      pvVar16 = ppvVar18[uVar14 / 0x55];
      uVar2 = 0;
      if (lVar10 != 0) {
        uVar2 = (lVar10 >> 3) * 0x55 - 1;
      }
      uVar11 = *(long *)(in_x0 + 0x548) + *(long *)(in_x0 + 0x540);
      if (uVar2 == uVar11) {
                    /* try { // try from 0096593c to 00965943 has its CatchHandler @ 00965d54 */
        std::__ndk1::
        deque<TextureStreamingManager::UpgradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::UpgradePipeline::ReallocateRequest>>
        ::__add_back_capacity();
        lVar8 = *(long *)(in_x0 + 0x528);
        uVar11 = *(long *)(in_x0 + 0x540) + *(long *)(in_x0 + 0x548);
      }
      puVar12 = (undefined8 *)((long)pvVar16 + (uVar14 % 0x55) * 0x30);
      uVar24 = puVar12[2];
      uVar23 = puVar12[5];
      uVar7 = puVar12[4];
      puVar9 = (undefined8 *)(*(long *)(lVar8 + (uVar11 / 0x55) * 8) + (uVar11 % 0x55) * 0x30);
      uVar26 = puVar12[1];
      uVar25 = *puVar12;
      puVar9[3] = puVar12[3];
      puVar9[2] = uVar24;
      puVar9[5] = uVar23;
      puVar9[4] = uVar7;
      puVar9[1] = uVar26;
      *puVar9 = uVar25;
      local_90 = uVar14 + 1;
      *(long *)(in_x0 + 0x548) = *(long *)(in_x0 + 0x548) + 1;
      uStack_88 = (undefined4)lVar22;
      uStack_84 = (undefined4)((ulong)lVar22 >> 0x20);
      ppvVar17 = ppvVar18;
      if (0xa9 < local_90) {
        ppvVar17 = ppvVar18 + 1;
        operator_delete(*ppvVar18);
        local_90 = uVar14 - 0x54;
        uStack_a8 = ppvVar17;
      }
      lVar22 = lVar22 + -1;
      uVar14 = local_90;
      ppvVar18 = ppvVar17;
    } while (lVar22 != -1);
  }
  bVar4 = lVar21 != 0;
  if (0x10 < (ulong)((long)ppvVar19 - (long)ppvVar17)) {
    uVar14 = (long)ppvVar19 - (long)ppvVar17;
    ppvVar18 = ppvVar17;
    do {
      ppvVar17 = ppvVar18 + 1;
      operator_delete(*ppvVar18);
      uVar14 = uVar14 - 8;
      ppvVar18 = ppvVar17;
      uStack_a8 = ppvVar17;
    } while (0x10 < uVar14);
  }
  for (; ppvVar17 != ppvVar19; ppvVar17 = ppvVar17 + 1) {
    operator_delete(*ppvVar17);
  }
  if (pvVar20 != (void *)0x0) {
    operator_delete(pvVar20);
  }
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_90._0_4_ = 0;
  local_90._4_4_ = 0;
  uStack_a8._0_4_ = 0;
  uStack_a8._4_4_ = 0;
  local_b0 = 0;
  uStack_ac = 0;
                    /* try { // try from 00965a2c to 00965a33 has its CatchHandler @ 00965d34 */
  Mutex::enterCriticalSection();
  pvVar20 = *(void **)(in_x0 + 0x770);
  *(undefined8 *)(in_x0 + 0x770) = 0;
  ppvVar17 = *(void ***)(in_x0 + 0x778);
  *(undefined8 *)(in_x0 + 0x778) = 0;
  ppvVar19 = *(void ***)(in_x0 + 0x780);
  *(undefined8 *)(in_x0 + 0x780) = 0;
  uVar7 = *(undefined8 *)(in_x0 + 0x788);
  *(undefined8 *)(in_x0 + 0x788) = 0;
  uVar14 = *(ulong *)(in_x0 + 0x790);
  local_b0 = (uint)pvVar20;
  uStack_ac = (undefined4)((ulong)pvVar20 >> 0x20);
  uStack_a8._0_4_ = SUB84(ppvVar17,0);
  uStack_a8._4_4_ = (undefined4)((ulong)ppvVar17 >> 0x20);
  lVar21 = *(long *)(in_x0 + 0x798);
  *(undefined8 *)(in_x0 + 0x790) = 0;
  uStack_a0 = SUB84(ppvVar19,0);
  uStack_9c = (undefined4)((ulong)ppvVar19 >> 0x20);
  uStack_98 = (undefined4)uVar7;
  uStack_94 = (undefined4)((ulong)uVar7 >> 0x20);
  *(undefined8 *)(in_x0 + 0x798) = 0;
  local_90._0_4_ = (undefined4)uVar14;
  local_90._4_4_ = (undefined4)(uVar14 >> 0x20);
  uStack_88 = (undefined4)lVar21;
  uStack_84 = (undefined4)((ulong)lVar21 >> 0x20);
                    /* try { // try from 00965a70 to 00965a77 has its CatchHandler @ 00965d30 */
  Mutex::leaveCriticalSection();
  if (lVar21 != 0) {
    lVar21 = lVar21 + -1;
    ppvVar18 = ppvVar17;
    do {
      lVar10 = *(long *)(in_x0 + 0x7a8);
      lVar22 = *(long *)(in_x0 + 0x7b0) - lVar10;
      lVar8 = *(long *)((long)ppvVar18 + (uVar14 >> 4 & 0xffffffffffffff8));
      uVar2 = 0;
      if (lVar22 != 0) {
        uVar2 = lVar22 * 0x10 - 1;
      }
      uVar11 = *(long *)(in_x0 + 0x7c8) + *(long *)(in_x0 + 0x7c0);
      if (uVar2 == uVar11) {
                    /* try { // try from 00965ad0 to 00965ad7 has its CatchHandler @ 00965d40 */
        std::__ndk1::
        deque<TextureStreamingManager::DowngradePipeline::ReallocateRequest,std::__ndk1::allocator<TextureStreamingManager::DowngradePipeline::ReallocateRequest>>
        ::__add_back_capacity();
        lVar10 = *(long *)(in_x0 + 0x7a8);
        uVar11 = *(long *)(in_x0 + 0x7c0) + *(long *)(in_x0 + 0x7c8);
      }
      puVar9 = (undefined8 *)(lVar8 + (uVar14 & 0x7f) * 0x20);
      uVar24 = *puVar9;
      uVar23 = puVar9[3];
      uVar7 = puVar9[2];
      puVar12 = (undefined8 *)
                (*(long *)(lVar10 + (uVar11 >> 4 & 0xffffffffffffff8)) + (uVar11 & 0x7f) * 0x20);
      puVar12[1] = puVar9[1];
      *puVar12 = uVar24;
      puVar12[3] = uVar23;
      puVar12[2] = uVar7;
      local_90 = uVar14 + 1;
      *(long *)(in_x0 + 0x7c8) = *(long *)(in_x0 + 0x7c8) + 1;
      uStack_88 = (undefined4)lVar21;
      uStack_84 = (undefined4)((ulong)lVar21 >> 0x20);
      ppvVar17 = ppvVar18;
      if (0xff < local_90) {
        ppvVar17 = ppvVar18 + 1;
        operator_delete(*ppvVar18);
        local_90 = uVar14 - 0x7f;
        uStack_a8 = ppvVar17;
      }
      lVar21 = lVar21 + -1;
      ppvVar18 = ppvVar17;
      uVar14 = local_90;
    } while (lVar21 != -1);
    bVar4 = true;
  }
  if (0x10 < (ulong)((long)ppvVar19 - (long)ppvVar17)) {
    uVar14 = (long)ppvVar19 - (long)ppvVar17;
    ppvVar18 = ppvVar17;
    do {
      ppvVar17 = ppvVar18 + 1;
      operator_delete(*ppvVar18);
      uVar14 = uVar14 - 8;
      ppvVar18 = ppvVar17;
      uStack_a8 = ppvVar17;
    } while (0x10 < uVar14);
  }
  for (; ppvVar17 != ppvVar19; ppvVar17 = ppvVar17 + 1) {
    operator_delete(*ppvVar17);
  }
  if (pvVar20 != (void *)0x0) {
    operator_delete(pvVar20);
  }
  if (!bVar4) goto LAB_00965ce4;
  puVar1 = (uint *)(in_x0 + 0x878);
  local_b0 = 0;
  local_78 = (long **)0x0;
  uStack_70 = 0;
  local_80 = (long **)0x0;
                    /* try { // try from 00965bb0 to 00965bb7 has its CatchHandler @ 00965d2c */
  Mutex::enterCriticalSection();
  uVar6 = *puVar1;
  local_b0 = uVar6;
  if (uVar6 < 6) {
    if (uVar6 == 0) {
      *puVar1 = 0;
    }
    else {
      uStack_ac = (undefined4)*(undefined8 *)(in_x0 + 0x87c);
      uStack_a8._0_4_ = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x87c) >> 0x20);
      uStack_a8 = (void **)CONCAT44(uStack_a8._4_4_,(undefined4)uStack_a8);
      if (uVar6 != 1) {
        uStack_a8._4_4_ = (undefined4)*(undefined8 *)(in_x0 + 0x884);
        uStack_a0 = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x884) >> 0x20);
        uStack_a8 = (void **)CONCAT44(uStack_a8._4_4_,(undefined4)uStack_a8);
        if (uVar6 != 2) {
          uStack_9c = (undefined4)*(undefined8 *)(in_x0 + 0x88c);
          uStack_98 = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x88c) >> 0x20);
          uStack_a8 = (void **)CONCAT44(uStack_a8._4_4_,(undefined4)uStack_a8);
          if (uVar6 != 3) {
            uStack_94 = (undefined4)*(undefined8 *)(in_x0 + 0x894);
            local_90._0_4_ = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x894) >> 0x20);
            uStack_a8 = (void **)CONCAT44(uStack_a8._4_4_,(undefined4)uStack_a8);
            if (uVar6 != 4) {
              local_90._4_4_ = (undefined4)*(undefined8 *)(in_x0 + 0x89c);
              uStack_88 = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x89c) >> 0x20);
              uStack_a8 = (void **)CONCAT44(uStack_a8._4_4_,(undefined4)uStack_a8);
            }
          }
        }
      }
LAB_00965c40:
      *puVar1 = 0;
      if (5 < uVar6) goto LAB_00965c5c;
    }
  }
  else {
    if (&local_b0 != puVar1) {
                    /* try { // try from 00965c38 to 00965c3b has its CatchHandler @ 00965d18 */
      std::__ndk1::vector<ICommandList*,std::__ndk1::allocator<ICommandList*>>::
      assign<ICommandList**>
                ((vector<ICommandList*,std::__ndk1::allocator<ICommandList*>> *)&local_80,
                 *(ICommandList ***)(in_x0 + 0x8a8),*(ICommandList ***)(in_x0 + 0x8b0));
      uVar6 = *puVar1;
      goto LAB_00965c40;
    }
    *puVar1 = 0;
LAB_00965c5c:
    *(undefined8 *)(in_x0 + 0x8b0) = *(undefined8 *)(in_x0 + 0x8a8);
  }
                    /* try { // try from 00965c64 to 00965c6b has its CatchHandler @ 00965d28 */
  Mutex::leaveCriticalSection();
  pplVar15 = (long **)((ulong)&local_b0 | 4);
  if (5 < (ulong)local_b0) {
    pplVar15 = local_80;
  }
  if (local_b0 != 0) {
    lVar21 = (ulong)local_b0 << 3;
    do {
      plVar13 = *pplVar15;
                    /* try { // try from 00965ca0 to 00965cb7 has its CatchHandler @ 00965d68 */
      RenderDeviceManager::getInstance();
      plVar5 = (long *)RenderDeviceManager::getCurrentRenderDevice();
      (**(code **)(*plVar5 + 0xa0))(plVar5,plVar13);
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))(plVar13);
      }
      pplVar15 = pplVar15 + 1;
      lVar21 = lVar21 + -8;
    } while (lVar21 != 0);
  }
  local_b0 = 0;
  if (local_80 != (long **)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
LAB_00965ce4:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


