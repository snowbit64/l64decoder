// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createSwapChain
// Entry Point: 00ad4b7c
// Size: 1964 bytes
// Signature: undefined createSwapChain(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanRenderWindow::createSwapChain() */

undefined4 VulkanRenderWindow::createSwapChain(void)

{
  VkFormat VVar1;
  char cVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  long *in_x0;
  char *pcVar10;
  VkFormat VVar11;
  undefined4 uVar12;
  long lVar13;
  undefined4 uVar14;
  ulong uVar15;
  long local_190;
  long local_188;
  void *local_180;
  void *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  uint local_13c;
  undefined8 local_138;
  void *local_130;
  ulong local_128;
  long local_120;
  uint local_118;
  VkFormat VStack_114;
  int local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined8 local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  long local_d8;
  int local_d0;
  uint local_cc;
  int *local_c8;
  int *local_c0;
  undefined8 local_b8;
  uint local_ac;
  uint local_a8;
  uint uStack_a4;
  undefined4 local_80;
  uint uStack_7c;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  *(undefined4 *)(in_x0 + 5) = 0xffffffff;
  iVar5 = (*vkGetPhysicalDeviceSurfaceCapabilitiesKHR)
                    (*(undefined8 *)(in_x0[0x17] + 0x20),in_x0[0x18],&local_a8);
  if (iVar5 == 0) {
    *(undefined4 *)((long)in_x0 + 0x7c) = local_80;
    uVar12 = 0x7fffffff;
    if ((uStack_7c & 8) != 0) {
      uVar12 = 8;
    }
    if ((uStack_7c & 1) != 0) {
      uVar12 = 1;
    }
    iVar5 = (*vkGetPhysicalDeviceSurfaceFormatsKHR)
                      (*(undefined8 *)(in_x0[0x17] + 0x20),in_x0[0x18],&local_ac,0);
    if (iVar5 == 0) {
      if (local_ac != 0) {
        local_c8 = (int *)0x0;
        local_c0 = (int *)0x0;
        local_b8 = 0;
                    /* try { // try from 00ad4ca4 to 00ad4ceb has its CatchHandler @ 00ad53b0 */
        std::__ndk1::vector<VkSurfaceFormatKHR,std::__ndk1::allocator<VkSurfaceFormatKHR>>::__append
                  ((vector<VkSurfaceFormatKHR,std::__ndk1::allocator<VkSurfaceFormatKHR>> *)
                   &local_c8,(ulong)local_ac);
        iVar5 = (*vkGetPhysicalDeviceSurfaceFormatsKHR)
                          (*(undefined8 *)(in_x0[0x17] + 0x20),in_x0[0x18],&local_ac,local_c8);
        piVar4 = local_c8;
        if (iVar5 == 0) {
          cVar2 = *(char *)((long)in_x0 + 0x54);
          VVar11 = 0x2c;
          if (cVar2 != '\0') {
            VVar11 = 0x32;
          }
          lVar13 = (long)local_c0 - (long)local_c8;
          if (lVar13 == 0) {
LAB_00ad4db4:
                    /* try { // try from 00ad4db4 to 00ad4dc3 has its CatchHandler @ 00ad53ac */
            pcVar10 = (char *)LogManager::getInstance();
            LogManager::errorf(pcVar10,
                               "Error: failed to find a pixel format supporting presentation.\n");
            goto LAB_00ad50ac;
          }
          if ((lVar13 == 8) && (*local_c8 == 0)) {
            iVar5 = 0;
          }
          else {
            uVar15 = 0;
            uVar9 = 0xffffffff;
            iVar5 = 0;
            do {
              VVar1 = piVar4[uVar15 * 2];
              uVar6 = getFormatPriority(VVar1,false,cVar2 != '\0');
              if ((uVar6 != 0xffffffff) && ((uVar9 == 0xffffffff || (uVar9 < uVar6)))) {
                iVar5 = piVar4[uVar15 * 2 + 1];
                VVar11 = VVar1;
                uVar9 = uVar6;
              }
              uVar15 = (ulong)((int)uVar15 + 1);
            } while (uVar15 < (ulong)(lVar13 >> 3));
            if (uVar9 == 0xffffffff) goto LAB_00ad4db4;
          }
                    /* try { // try from 00ad4de0 to 00ad4deb has its CatchHandler @ 00ad53a0 */
          iVar7 = (*vkGetPhysicalDeviceSurfacePresentModesKHR)
                            (*(undefined8 *)(in_x0[0x17] + 0x20),in_x0[0x18],&local_cc,0);
          uVar14 = 2;
          uVar9 = 3;
          if ((iVar7 == 0) && (local_cc != 0)) {
            local_138 = (void *)0x0;
            local_130 = (void *)0x0;
            local_128 = 0;
                    /* try { // try from 00ad4e08 to 00ad4e27 has its CatchHandler @ 00ad5384 */
            std::__ndk1::vector<VkPresentModeKHR,std::__ndk1::allocator<VkPresentModeKHR>>::resize
                      ((vector<VkPresentModeKHR,std::__ndk1::allocator<VkPresentModeKHR>> *)
                       &local_138,(ulong)local_cc);
            iVar7 = (*vkGetPhysicalDeviceSurfacePresentModesKHR)
                              (*(undefined8 *)(in_x0[0x17] + 0x20),in_x0[0x18],&local_cc,local_138);
            if ((iVar7 == 0) &&
               ((*(char *)((long)in_x0 + 0x55) == '\0' && ((long)local_130 - (long)local_138 != 0)))
               ) {
              uVar15 = 0;
              do {
                if (*(int *)((long)local_138 + uVar15 * 4) == 0) {
                  uVar14 = 0;
                  uVar6 = 2;
                  goto LAB_00ad4e84;
                }
                uVar15 = (ulong)((int)uVar15 + 1);
              } while (uVar15 < (ulong)((long)local_130 - (long)local_138 >> 2));
              uVar14 = 2;
              uVar6 = 3;
            }
            else {
              uVar9 = 3;
              uVar14 = 2;
              uVar6 = 3;
              if (local_138 == (void *)0x0) goto LAB_00ad4e90;
            }
LAB_00ad4e84:
            uVar9 = uVar6;
            local_130 = local_138;
            operator_delete(local_138);
          }
LAB_00ad4e90:
                    /* try { // try from 00ad4ea8 to 00ad4eaf has its CatchHandler @ 00ad53a8 */
          iVar7 = (*vkGetPhysicalDeviceSurfaceSupportKHR)
                            (*(undefined8 *)(in_x0[0x17] + 0x20),
                             *(undefined4 *)(in_x0[0x17] + 0x460),in_x0[0x18],&local_d0);
          if ((iVar7 != 0) || (local_d0 == 0)) {
                    /* try { // try from 00ad4f3c to 00ad4f4b has its CatchHandler @ 00ad53a8 */
            pcVar10 = (char *)LogManager::getInstance();
            LogManager::errorf(pcVar10,"Error: failed to verify surface.\n");
            goto LAB_00ad50ac;
          }
          lVar13 = in_x0[6];
                    /* try { // try from 00ad4ecc to 00ad4ee7 has its CatchHandler @ 00ad5380 */
          uVar8 = (**(code **)(*in_x0 + 0xe8))();
          *(undefined4 *)((long)in_x0 + 0x6c) = uVar8;
          uVar8 = (**(code **)(*in_x0 + 0xf0))();
          *(undefined4 *)(in_x0 + 0xe) = uVar8;
                    /* try { // try from 00ad4ef4 to 00ad4efb has its CatchHandler @ 00ad5378 */
          uVar15 = (**(code **)(*in_x0 + 0xe0))();
          local_e8 = *(uint *)((long)in_x0 + 0x7c);
          local_100 = 0x10;
          if (*(char *)(in_x0 + 0x16) != '\0') {
            local_100 = 0x12;
          }
          uVar8 = *(undefined4 *)((long)in_x0 + 0x6c);
          local_108 = *(undefined4 *)(in_x0 + 0xe);
          if ((uVar15 & 1) == 0) {
            local_100 = 0x10;
          }
          *(undefined4 *)((long)in_x0 + 0x74) = uVar8;
          *(undefined4 *)(in_x0 + 0xf) = local_108;
          uStack_10c = uVar8;
          if ((local_e8 & 10) != 0) {
            *(undefined4 *)((long)in_x0 + 0x74) = local_108;
            *(undefined4 *)(in_x0 + 0xf) = uVar8;
            uStack_10c = local_108;
            local_108 = uVar8;
          }
          uVar8 = 0;
          local_120 = in_x0[0x18];
          local_130 = (void *)0x0;
          if (uVar9 <= uStack_a4) {
            uStack_a4 = uVar9;
          }
          local_118 = local_a8;
          if (local_a8 <= uVar9) {
            local_118 = uStack_a4;
          }
          local_128 = local_128 & 0xffffffff00000000;
          local_138 = (void *)CONCAT44(local_138._4_4_,0x3b9acde8);
          uStack_104 = 1;
          local_fc = 0;
          uStack_f8 = 0;
          local_f0 = 0;
          uStack_dc = 1;
          if ((local_e8 & 1) == 0) {
            if ((local_e8 >> 1 & 1) != 0) {
              uVar8 = 0x4096cbe4;
              goto LAB_00ad4fec;
            }
            if ((local_e8 >> 2 & 1) != 0) {
              uVar8 = 0x40490fdb;
              goto LAB_00ad4fec;
            }
            if ((local_e8 >> 3 & 1) != 0) {
              uVar8 = 0x3fc90fdb;
              goto LAB_00ad4fec;
            }
          }
          else {
LAB_00ad4fec:
            *(undefined4 *)((long)in_x0 + 0xb4) = uVar8;
          }
                    /* try { // try from 00ad5004 to 00ad502f has its CatchHandler @ 00ad53a4 */
          VStack_114 = VVar11;
          local_110 = iVar5;
          uStack_e4 = uVar12;
          local_e0 = uVar14;
          local_d8 = lVar13;
          uVar9 = (*vkCreateSwapchainKHR)
                            (*(undefined8 *)(in_x0[0x17] + 0x18),&local_138,0,in_x0 + 6);
          if (uVar9 != 0) {
            pcVar10 = (char *)LogManager::getInstance();
            LogManager::errorf(pcVar10,"Error: failed to create vulkan swap chain. Error code: %d\n"
                               ,(ulong)uVar9);
            goto LAB_00ad50ac;
          }
                    /* try { // try from 00ad504c to 00ad50ab has its CatchHandler @ 00ad537c */
          iVar5 = (*vkGetSwapchainImagesKHR)
                            (*(undefined8 *)(in_x0[0x17] + 0x18),in_x0[6],&local_13c,0);
          if ((iVar5 != 0) || (local_13c == 0)) {
            pcVar10 = (char *)LogManager::getInstance();
            LogManager::errorf(pcVar10,"Error: failed to retrieve vulkan swap chain images.\n");
            goto LAB_00ad50ac;
          }
          std::__ndk1::vector<VkImage_T*,std::__ndk1::allocator<VkImage_T*>>::resize
                    ((vector<VkImage_T*,std::__ndk1::allocator<VkImage_T*>> *)(in_x0 + 7),
                     (ulong)local_13c);
          iVar5 = (*vkGetSwapchainImagesKHR)
                            (*(undefined8 *)(in_x0[0x17] + 0x18),in_x0[6],&local_13c,in_x0[7]);
          if (iVar5 != 0) {
            pcVar10 = (char *)LogManager::getInstance();
            LogManager::errorf(pcVar10,"Error: failed to retrieve vulkan swap chain images.\n");
            goto LAB_00ad50ac;
          }
          *(VkFormat *)(in_x0 + 10) = VVar11;
          if (lVar13 != 0) {
            local_178 = (void *)0x0;
            local_170 = 0;
            local_180 = (void *)0x0;
            local_190._0_4_ = *(undefined4 *)(in_x0[0x17] + 0x3b4);
            local_188 = lVar13;
            if (&local_190 != in_x0) {
                    /* try { // try from 00ad50f4 to 00ad5103 has its CatchHandler @ 00ad5360 */
              std::__ndk1::vector<VkImageView_T*,std::__ndk1::allocator<VkImageView_T*>>::
              assign<VkImageView_T**>
                        ((vector<VkImageView_T*,std::__ndk1::allocator<VkImageView_T*>> *)&local_180
                         ,(VkImageView_T **)in_x0[2],(VkImageView_T **)in_x0[3]);
            }
            FUN_00ad5e60(in_x0 + 0x10,&local_190);
            if (local_180 != (void *)0x0) {
              local_178 = local_180;
              operator_delete(local_180);
            }
          }
                    /* try { // try from 00ad511c to 00ad511f has its CatchHandler @ 00ad537c */
          std::__ndk1::vector<VkImageView_T*,std::__ndk1::allocator<VkImageView_T*>>::resize
                    ((vector<VkImageView_T*,std::__ndk1::allocator<VkImageView_T*>> *)(in_x0 + 2),
                     (ulong)local_13c);
          if (local_13c != 0) {
            lVar13 = 0;
            uVar15 = 0;
            do {
              local_190._0_4_ = 0xf;
              local_188 = 0;
              local_180 = (void *)((ulong)local_180 & 0xffffffff00000000);
              local_178 = *(void **)(in_x0[7] + lVar13);
              local_168 = 0;
              uStack_160 = 0;
              local_170 = CONCAT44(*(undefined4 *)(in_x0 + 10),1);
              uStack_150 = 0xffffffff;
              local_158 = 1;
              local_148 = 0xffffffff;
                    /* try { // try from 00ad519c to 00ad51a7 has its CatchHandler @ 00ad5374 */
              iVar5 = (*vkCreateImageView)
                                (*(undefined8 *)(in_x0[0x17] + 0x18),&local_190,0,in_x0[2] + lVar13)
              ;
              if (iVar5 != 0) {
                    /* try { // try from 00ad51f0 to 00ad51ff has its CatchHandler @ 00ad535c */
                pcVar10 = (char *)LogManager::getInstance();
                LogManager::errorf(pcVar10,"Error: failed to create swap chain image views.\n");
                goto LAB_00ad50ac;
              }
              uVar15 = uVar15 + 1;
              lVar13 = lVar13 + 8;
            } while (uVar15 < local_13c);
          }
          *(undefined *)((long)in_x0 + 0x56) = 1;
                    /* try { // try from 00ad51c8 to 00ad51df has its CatchHandler @ 00ad537c */
          pcVar10 = (char *)LogManager::getInstance();
          LogManager::infof(pcVar10,"Successfully created swap chain with size %dx%d (%d buffers)\n"
                            ,(ulong)*(uint *)((long)in_x0 + 0x74),(ulong)*(uint *)(in_x0 + 0xf),
                            (ulong)local_118);
          uVar12 = 1;
        }
        else {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar5 != 0)) {
                    /* try { // try from 00ad52a4 to 00ad52af has its CatchHandler @ 00ad532c */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Error: failed to query vulkan surface formats.\n");
LAB_00ad50ac:
          uVar12 = 0;
        }
        if (local_c8 != (int *)0x0) {
          local_c0 = local_c8;
          operator_delete(local_c8);
        }
        goto LAB_00ad4c60;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 00ad52ec to 00ad52f7 has its CatchHandler @ 00ad5328 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar10 = "Error: failed to find a pixel format supporting presentation.\n";
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 00ad525c to 00ad5267 has its CatchHandler @ 00ad5340 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar10 = "Error: failed to query vulkan surface formats.\n";
    }
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00ad5214 to 00ad521f has its CatchHandler @ 00ad5344 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar10 = "Error: failed to query vulkan surface capabilities.\n";
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar10);
  uVar12 = 0;
LAB_00ad4c60:
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


