// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00ab4544
// Size: 5056 bytes
// Signature: undefined __thiscall init(VulkanRenderDevice * this, bool param_1)


/* VulkanRenderDevice::init(bool) */

bool __thiscall VulkanRenderDevice::init(VulkanRenderDevice *this,bool param_1)

{
  VkInstance_T **ppVVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  VkDevice_T **ppVVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  int iVar15;
  ulong uVar16;
  char *pcVar17;
  ulong *puVar18;
  VkPhysicalDevice_T *pVVar19;
  void *pvVar20;
  VulkanMemoryAllocator *this_00;
  VulkanResourceAllocator *this_01;
  VulkanShaderCompilerDxc *this_02;
  VulkanShaderCreator *this_03;
  VulkanCommandBuffer *this_04;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong **ppuVar24;
  uint uVar25;
  ulong uVar26;
  undefined4 *puVar27;
  uint uVar28;
  int iVar29;
  uint uVar30;
  void *pvVar31;
  ulong uVar32;
  undefined8 *puVar33;
  int iVar34;
  byte *pbVar35;
  ulong *puVar36;
  void *pvVar37;
  uint *puVar38;
  long lVar39;
  undefined4 *puVar40;
  uint *puVar41;
  ulong extraout_x14;
  undefined8 extraout_x16;
  undefined8 uVar42;
  byte *pbVar43;
  ulong **ppuVar44;
  uint uVar45;
  size_t sVar46;
  ulong **ppuVar47;
  void **ppvVar48;
  byte **ppbVar49;
  byte **ppbVar50;
  uint uVar51;
  void **ppvVar52;
  uint uVar53;
  void *pvVar54;
  uint local_844;
  ulong local_840;
  void *local_820;
  void *local_818;
  uint local_804;
  undefined auStack_800 [4];
  uint local_7fc;
  undefined4 local_7f0;
  undefined4 uStack_7ec;
  ulong *local_7e8;
  undefined4 local_7e0;
  undefined4 uStack_7dc;
  void *local_7d8;
  undefined4 local_7d0;
  undefined8 local_7c8;
  undefined4 local_7c0;
  void *local_7b8;
  undefined8 *puStack_7b0;
  ulong local_7a8;
  undefined8 local_7a0;
  undefined8 local_798;
  ulong local_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  ulong local_760;
  undefined8 uStack_758;
  undefined8 local_750;
  ulong local_748;
  ulong local_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  void *local_720;
  void *local_718;
  long local_708 [3];
  void *local_6f0;
  void *local_6e8;
  undefined8 local_6e0;
  void *local_6d8;
  void *local_6d0;
  undefined8 local_6c8;
  void *local_6c0;
  void *local_6b8;
  undefined8 local_6b0;
  long local_6a8;
  long lStack_6a0;
  undefined8 local_698;
  void *local_690 [3];
  uint local_674;
  undefined4 local_670 [2];
  undefined8 local_668;
  undefined4 local_660;
  undefined4 *local_658;
  undefined4 local_650;
  undefined8 local_648;
  undefined4 local_640;
  void *local_638;
  undefined4 local_630 [2];
  undefined8 local_628;
  char *local_620;
  undefined4 local_618;
  char *local_610;
  undefined4 local_608;
  uint local_604;
  void *local_600;
  byte **local_5f8;
  byte **local_5f0;
  byte *local_5e8;
  byte *local_5e0;
  undefined8 local_5d8;
  uint local_5cc;
  undefined8 local_5c8;
  ulong *local_5c0;
  int local_5b8 [3];
  int local_5ac;
  int local_58c;
  int local_584;
  int local_56c;
  int local_568;
  int local_564;
  uint local_538;
  undefined4 local_2f8;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  long lStack_258;
  long local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  long lStack_238;
  undefined8 local_230;
  ulong uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  ulong local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  uint local_17c;
  byte local_170 [16];
  uint local_160 [60];
  long local_70;
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  *(undefined4 *)(this + 0x3b0) = 0xb;
  uVar16 = (**(code **)(*(long *)this + 0x170))();
  if (((uVar16 & 1) == 0) || (uVar16 = VulkanLoaderUtil::initialize(), (uVar16 & 1) == 0)) {
    bVar13 = false;
    goto LAB_00ab4628;
  }
  local_5cc = 0x400000;
  uVar30 = 0x400000;
  if ((vkEnumerateInstanceVersion != (code *)0x0) &&
     ((*vkEnumerateInstanceVersion)(&local_5cc), uVar30 = local_5cc, 0x401fff < local_5cc)) {
    uVar30 = 0x402000;
  }
  local_5cc = uVar30;
  puVar38 = (uint *)(this + 0x430);
  local_5e0 = (byte *)0x0;
  local_5e8 = (byte *)0x0;
  local_5d8 = 0;
                    /* try { // try from 00ab45e0 to 00ab4683 has its CatchHandler @ 00ab5ac4 */
  uVar16 = VulkanExtensionUtil::getInstanceExtensions(0xa1,puVar38,(vector *)&local_5e8,local_5cc);
  if ((uVar16 & 1) == 0) {
LAB_00ab4684:
    bVar13 = false;
  }
  else {
    uVar30 = *puVar38;
    if ((uVar30 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar15 != 0
         )) {
                    /* try { // try from 00ab586c to 00ab5877 has its CatchHandler @ 00ab5908 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: vulkan surface extension not found.\n");
      goto LAB_00ab4684;
    }
    if ((uVar30 >> 5 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar15 != 0
         )) {
                    /* try { // try from 00ab58b4 to 00ab58bf has its CatchHandler @ 00ab5904 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: vulkan surface extension for android not found.\n");
      goto LAB_00ab4684;
    }
    local_5f8 = (byte **)0x0;
    this[0x439] = (VulkanRenderDevice)((byte)(uVar30 >> 4) & 1);
    local_600 = (void *)0x0;
    local_5f0 = (byte **)0x0;
    if (local_5e0 == local_5e8) {
      ppbVar50 = (byte **)0x0;
    }
    else {
      uVar16 = 0;
      ppbVar49 = (byte **)0x0;
      do {
        pvVar54 = local_600;
        pbVar43 = local_5e8 + uVar16 * 0x18;
        pbVar35 = *(byte **)(pbVar43 + 0x10);
        if ((*pbVar43 & 1) == 0) {
          pbVar35 = pbVar43 + 1;
        }
        if (ppbVar49 < local_5f0) {
          ppbVar50 = ppbVar49 + 1;
          *ppbVar49 = pbVar35;
          local_5f8 = ppbVar50;
        }
        else {
          sVar46 = (long)ppbVar49 - (long)local_600;
          uVar21 = ((long)sVar46 >> 3) + 1;
          if (uVar21 >> 0x3d != 0) {
                    /* try { // try from 00ab5848 to 00ab585b has its CatchHandler @ 00ab5acc */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar23 = (long)local_5f0 - (long)local_600 >> 2;
          if (uVar21 <= uVar23) {
            uVar21 = uVar23;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)local_5f0 - (long)local_600)) {
            uVar21 = 0x1fffffffffffffff;
          }
          if (uVar21 == 0) {
            pvVar20 = (void *)0x0;
          }
          else {
            if (uVar21 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00ab4790 to 00ab4793 has its CatchHandler @ 00ab5ac0 */
            pvVar20 = operator_new(uVar21 << 3);
          }
          ppbVar49 = (byte **)((long)pvVar20 + ((long)sVar46 >> 3) * 8);
          ppbVar50 = ppbVar49 + 1;
          *ppbVar49 = pbVar35;
          if (0 < (long)sVar46) {
            memcpy(pvVar20,pvVar54,sVar46);
          }
          local_5f0 = (byte **)((long)pvVar20 + uVar21 * 8);
          local_600 = pvVar20;
          local_5f8 = ppbVar50;
          if (pvVar54 != (void *)0x0) {
            operator_delete(pvVar54);
          }
        }
        uVar16 = (ulong)((int)uVar16 + 1);
        uVar21 = ((long)local_5e0 - (long)local_5e8 >> 3) * -0x5555555555555555;
        ppbVar49 = ppbVar50;
      } while (uVar16 <= uVar21 && uVar21 - uVar16 != 0);
    }
    pvVar54 = local_600;
    local_630[0] = 0;
    ppVVar1 = (VkInstance_T **)(this + 0x10);
    local_628 = 0;
    local_620 = "Farming Simulator 23";
    local_610 = "GIANTS Engine";
    local_668 = 0;
    local_618 = 1;
    local_608 = 1;
    local_670[0] = 1;
    local_658 = local_630;
    local_604 = local_5cc;
    local_660 = 0;
    local_650 = 0;
    local_648 = 0;
    local_640 = (undefined4)((ulong)((long)ppbVar50 - (long)local_600) >> 3);
                    /* try { // try from 00ab4888 to 00ab48c7 has its CatchHandler @ 00ab5abc */
    local_638 = local_600;
    iVar15 = (*vkCreateInstance)(local_670,0,ppVVar1);
    if (iVar15 == 0) {
      VulkanLoaderUtil::setupInstanceFunctions(*ppVVar1);
      VulkanExtensionUtil::setupInstanceExtensions(*ppVVar1,puVar38,local_5cc);
      local_674 = 0;
                    /* try { // try from 00ab48dc to 00ab48fb has its CatchHandler @ 00ab5ab8 */
      iVar15 = (*vkEnumeratePhysicalDevices)(*ppVVar1,&local_674,0);
      if (iVar15 != 0) {
        pcVar17 = (char *)LogManager::getInstance();
        LogManager::errorf(pcVar17,"Error: failed to enumerate vulkan physical devices.\n");
        goto LAB_00ab48fc;
      }
      if (local_674 == 0) {
                    /* try { // try from 00ab494c to 00ab495b has its CatchHandler @ 00ab5ab8 */
        pcVar17 = (char *)LogManager::getInstance();
        LogManager::errorf(pcVar17,"Error: no vulkan physical device available.\n");
        goto LAB_00ab48fc;
      }
                    /* try { // try from 00ab4918 to 00ab491f has its CatchHandler @ 00ab59d8 */
      std::__ndk1::vector<VkPhysicalDevice_T*,std::__ndk1::allocator<VkPhysicalDevice_T*>>::vector
                ((vector<VkPhysicalDevice_T*,std::__ndk1::allocator<VkPhysicalDevice_T*>> *)
                 local_690,(ulong)local_674);
                    /* try { // try from 00ab492c to 00ab4947 has its CatchHandler @ 00ab59e4 */
      iVar15 = (*vkEnumeratePhysicalDevices)(*ppVVar1,&local_674,local_690[0]);
      if (iVar15 == 0) {
        if (local_674 == 0) {
LAB_00ab4c7c:
                    /* try { // try from 00ab4c7c to 00ab4c8b has its CatchHandler @ 00ab59d4 */
          pcVar17 = (char *)LogManager::getInstance();
          LogManager::errorf(pcVar17,"Error: no suitable vulkan physical device found.\n");
          goto LAB_00ab4c8c;
        }
        piVar2 = (int *)(this + 0x458);
        piVar3 = (int *)(this + 0x45c);
        bVar13 = false;
        uVar16 = 0;
        piVar4 = (int *)(this + 0x460);
        uVar30 = 0;
        local_844 = 0x400000;
        local_840 = 0xffffffff;
        do {
          local_790 = local_790 & 0xffffffff00000000;
                    /* try { // try from 00ab49e8 to 00ab49f3 has its CatchHandler @ 00ab5a98 */
          (*vkGetPhysicalDeviceQueueFamilyProperties)
                    (*(undefined8 *)((long)local_690[0] + uVar16 * 8),&local_790,0);
          if ((int)local_790 != 0) {
                    /* try { // try from 00ab49fc to 00ab4a03 has its CatchHandler @ 00ab59ec */
            std::__ndk1::
            vector<VkQueueFamilyProperties,std::__ndk1::allocator<VkQueueFamilyProperties>>::vector
                      ((vector<VkQueueFamilyProperties,std::__ndk1::allocator<VkQueueFamilyProperties>>
                        *)&local_7f0,local_790 & 0xffffffff);
                    /* try { // try from 00ab4a14 to 00ab4a1b has its CatchHandler @ 00ab59f0 */
            (*vkGetPhysicalDeviceQueueFamilyProperties)
                      (*(undefined8 *)((long)local_690[0] + uVar16 * 8),&local_790,
                       CONCAT44(uStack_7ec,local_7f0));
            puVar18 = (ulong *)CONCAT44(uStack_7ec,local_7f0);
            if ((int)local_790 == 0) {
LAB_00ab4c1c:
              if (puVar18 == (ulong *)0x0) goto LAB_00ab49c8;
            }
            else {
              uVar21 = 0;
              uVar28 = 0;
              uVar53 = 0xffffffff;
              uVar51 = 0xffffffff;
              uVar45 = 0xffffffff;
              puVar36 = puVar18;
              do {
                uVar8 = *(uint *)puVar36;
                uVar25 = (uint)uVar21;
                if ((uVar8 & 1) != 0) {
                  uVar45 = uVar25;
                }
                uVar6 = uVar25;
                if ((uVar8 & 2) != 0) {
                  uVar6 = uVar51;
                }
                if (((uint)((uVar8 & 4) == 0) | uVar8 & 1) == 0) {
                  uVar51 = uVar6;
                }
                if (uVar28 < (uVar8 & 1)) {
                  uVar28 = 1;
                  uVar53 = uVar25;
                }
                uVar21 = uVar21 + 1;
                puVar36 = puVar36 + 3;
              } while ((local_790 & 0xffffffff) != uVar21);
              if ((uVar45 != 0xffffffff) && (uVar53 != 0xffffffff)) {
                    /* try { // try from 00ab4aac to 00ab4ab3 has its CatchHandler @ 00ab59e0 */
                (*vkGetPhysicalDeviceProperties)
                          (*(undefined8 *)((long)local_690[0] + uVar16 * 8),&local_5c8);
                iVar15 = local_5b8[0];
                    /* try { // try from 00ab4acc to 00ab4ad3 has its CatchHandler @ 00ab59dc */
                (*vkGetPhysicalDeviceMemoryProperties)
                          (*(undefined8 *)((long)local_690[0] + uVar16 * 8),&local_280);
                uVar21 = (ulong)local_17c;
                if (local_17c == 0) {
                  uVar28 = 0;
                }
                else {
                  if (local_17c == 1) {
                    uVar26 = 0;
                    uVar28 = 0;
                  }
                  else {
                    uVar26 = uVar21 & 0xfffffffe;
                    iVar29 = 0;
                    iVar34 = 0;
                    uVar23 = uVar26;
                    puVar41 = local_160;
                    uVar32 = extraout_x14;
                    uVar42 = extraout_x16;
                    do {
                      uVar28 = (uint)uVar32;
                      if ((puVar41[-4] & 1) != 0) {
                        uVar28 = (uint)*(undefined8 *)(puVar41 + -6);
                      }
                      if ((*puVar41 & 1) != 0) {
                        uVar42 = *(undefined8 *)(puVar41 + -2);
                      }
                      uVar28 = -(puVar41[-4] & 1) & uVar28;
                      uVar32 = (ulong)uVar28;
                      iVar29 = iVar29 + uVar28;
                      iVar34 = iVar34 + (-(*puVar41 & 1) & (uint)uVar42);
                      puVar41 = puVar41 + 8;
                      uVar23 = uVar23 - 2;
                    } while (uVar23 != 0);
                    uVar28 = iVar34 + iVar29;
                    if (uVar26 == uVar21) goto LAB_00ab4b5c;
                  }
                  lVar22 = uVar21 - uVar26;
                  pbVar35 = local_170 + uVar26 * 0x10;
                  do {
                    if ((*pbVar35 & 1) != 0) {
                      uVar28 = uVar28 + *(int *)(pbVar35 + -8);
                    }
                    pbVar35 = pbVar35 + 0x10;
                    lVar22 = lVar22 + -1;
                  } while (lVar22 != 0);
                }
LAB_00ab4b5c:
                if ((bVar13) && ((iVar15 != 2 || (uVar28 <= uVar30)))) {
                  puVar18 = (ulong *)CONCAT44(uStack_7ec,local_7f0);
                }
                else {
                  *(uint *)(this + 0x458) = uVar45;
                  *(uint *)(this + 0x45c) = uVar51;
                  *(uint *)(this + 0x460) = uVar53;
                  memcpy(this + 0x38,&local_5c8,0x338);
                  puVar18 = (ulong *)CONCAT44(uStack_7ec,local_7f0);
                  *(undefined4 *)(this + 0x3a8) = local_2f8;
                  local_844 = (uint)local_5c8;
                  local_840 = uVar16 & 0xffffffff;
                  *(uint *)(this + 0x3ac) = *(uint *)(puVar18 + (ulong)uVar45 * 3 + 1);
                  uVar30 = uVar28;
                }
                bVar13 = (bool)(bVar13 | iVar15 == 2);
                goto LAB_00ab4c1c;
              }
            }
            local_7e8 = puVar18;
            operator_delete(puVar18);
          }
LAB_00ab49c8:
          uVar16 = uVar16 + 1;
        } while (uVar16 < local_674);
        if ((int)local_840 == -1) goto LAB_00ab4c7c;
        puVar41 = (uint *)(this + 0x434);
        pVVar19 = *(VkPhysicalDevice_T **)((long)local_690[0] + local_840 * 8);
        local_6a8 = 0;
        lStack_6a0 = 0;
        local_698 = 0;
        *(VkPhysicalDevice_T **)(this + 0x20) = pVVar19;
                    /* try { // try from 00ab4c48 to 00ab4c77 has its CatchHandler @ 00ab59bc */
        uVar16 = VulkanExtensionUtil::getDeviceExtensions
                           (pVVar19,0x1fff,puVar41,(vector *)&local_6a8,local_844);
        if ((uVar16 & 1) == 0) {
LAB_00ab4cc8:
          bVar13 = false;
        }
        else {
          uVar30 = *puVar41;
          if ((uVar30 & 1) == 0) {
            pcVar17 = (char *)LogManager::getInstance();
            LogManager::errorf(pcVar17,"Error: vulkan swap chain extension not found.\n");
            goto LAB_00ab4cc8;
          }
          if ((uVar30 >> 3 & 1) == 0) {
                    /* try { // try from 00ab4cb8 to 00ab4cc7 has its CatchHandler @ 00ab59bc */
            pcVar17 = (char *)LogManager::getInstance();
            LogManager::errorf(pcVar17,"Error: vulkan maintenance extension not found.\n");
            goto LAB_00ab4cc8;
          }
          if ((uVar30 >> 10 & 1) != 0) {
            this[0x43a] = (VulkanRenderDevice)0x1;
          }
          if ((~uVar30 & 0x300) == 0) {
            this[0x43d] = (VulkanRenderDevice)0x1;
          }
          local_6c0 = (void *)0x0;
          local_6b8 = (void *)0x0;
          local_6b0 = 0;
          if (lStack_6a0 != local_6a8) {
            uVar16 = 0;
            do {
              pbVar35 = (byte *)(local_6a8 + uVar16 * 0x18);
              local_5c8 = *(byte **)(pbVar35 + 0x10);
              if ((*pbVar35 & 1) == 0) {
                local_5c8 = pbVar35 + 1;
              }
                    /* try { // try from 00ab4d48 to 00ab4d53 has its CatchHandler @ 00ab59c4 */
              FUN_00ab5af0(&local_6c0,&local_5c8);
              uVar16 = (ulong)((int)uVar16 + 1);
              uVar21 = (lStack_6a0 - local_6a8 >> 3) * -0x5555555555555555;
            } while (uVar16 <= uVar21 && uVar21 - uVar16 != 0);
          }
          local_6d8 = (void *)0x0;
          local_6d0 = (void *)0x0;
          local_6c8 = 0;
          local_6f0 = (void *)0x0;
          local_6e8 = (void *)0x0;
          local_6e0 = 0;
                    /* try { // try from 00ab4d80 to 00ab4d8b has its CatchHandler @ 00ab59b4 */
          FUN_00ab5d4c(&local_6d8,piVar2);
          local_5c8._0_4_ = 1;
                    /* try { // try from 00ab4d94 to 00ab4d9f has its CatchHandler @ 00ab59a4 */
          FUN_00ab5e54(&local_6f0,&local_5c8);
          if (*piVar3 != -1) {
                    /* try { // try from 00ab4db0 to 00ab4dbb has its CatchHandler @ 00ab59b4 */
            FUN_00ab5d4c(&local_6d8,piVar3);
            local_5c8._0_4_ = 1;
                    /* try { // try from 00ab4dc4 to 00ab4dcf has its CatchHandler @ 00ab5988 */
            FUN_00ab5e54(&local_6f0,&local_5c8);
          }
          if (*piVar2 != *piVar4) {
                    /* try { // try from 00ab4de8 to 00ab4df3 has its CatchHandler @ 00ab59b4 */
            FUN_00ab5d4c(&local_6d8,piVar4);
            local_5c8._0_4_ = 1;
                    /* try { // try from 00ab4dfc to 00ab4e07 has its CatchHandler @ 00ab5980 */
            FUN_00ab5e54(&local_6f0,&local_5c8);
          }
                    /* try { // try from 00ab4e14 to 00ab4e1b has its CatchHandler @ 00ab599c */
          std::__ndk1::
          vector<std::__ndk1::vector<float,std::__ndk1::allocator<float>>,std::__ndk1::allocator<std::__ndk1::vector<float,std::__ndk1::allocator<float>>>>
          ::vector((vector<std::__ndk1::vector<float,std::__ndk1::allocator<float>>,std::__ndk1::allocator<std::__ndk1::vector<float,std::__ndk1::allocator<float>>>>
                    *)local_708,(long)local_6d0 - (long)local_6d8 >> 2);
                    /* try { // try from 00ab4e28 to 00ab4e2f has its CatchHandler @ 00ab5994 */
          std::__ndk1::
          vector<VkDeviceQueueCreateInfo,std::__ndk1::allocator<VkDeviceQueueCreateInfo>>::vector
                    ((vector<VkDeviceQueueCreateInfo,std::__ndk1::allocator<VkDeviceQueueCreateInfo>>
                      *)&local_720,(long)local_6d0 - (long)local_6d8 >> 2);
          if (local_6d0 != local_6d8) {
            uVar16 = 0;
            pvVar54 = local_6d0;
            pvVar20 = local_6f0;
            pvVar31 = local_6d8;
            pvVar37 = local_720;
            do {
              puVar40 = (undefined4 *)((long)pvVar37 + uVar16 * 0x28);
              lVar22 = uVar16 * 4;
              *puVar40 = 2;
              *(undefined8 *)(puVar40 + 2) = 0;
              puVar40[4] = 0;
              puVar40[5] = *(undefined4 *)((long)pvVar31 + lVar22);
              puVar40[6] = *(undefined4 *)((long)pvVar20 + lVar22);
              if (*(int *)((long)pvVar20 + lVar22) != 0) {
                uVar45 = 0;
                do {
                  ppvVar52 = (void **)(local_708[0] + uVar16 * 0x18);
                  ppvVar48 = ppvVar52 + 1;
                  puVar27 = (undefined4 *)*ppvVar48;
                  puVar40 = (undefined4 *)ppvVar52[2];
                  if (puVar27 < puVar40) {
                    *puVar27 = 0x3f800000;
                    *ppvVar48 = puVar27 + 1;
                  }
                  else {
                    pvVar54 = *ppvVar52;
                    sVar46 = (long)puVar27 - (long)pvVar54;
                    uVar21 = ((long)sVar46 >> 2) + 1;
                    if (uVar21 >> 0x3e != 0) {
                    /* try { // try from 00ab58ec to 00ab58ff has its CatchHandler @ 00ab5a24 */
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__vector_base_common<true>::__throw_length_error();
                    }
                    uVar23 = (long)puVar40 - (long)pvVar54;
                    uVar32 = (long)uVar23 >> 1;
                    if (uVar21 <= uVar32) {
                      uVar21 = uVar32;
                    }
                    if (0x7ffffffffffffffb < uVar23) {
                      uVar21 = 0x3fffffffffffffff;
                    }
                    if (uVar21 == 0) {
                      pvVar20 = (void *)0x0;
                    }
                    else {
                      if (uVar21 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_006d1f18(
                                    "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                    );
                      }
                    /* try { // try from 00ab4f50 to 00ab4f53 has its CatchHandler @ 00ab59e8 */
                      pvVar20 = operator_new(uVar21 << 2);
                    }
                    puVar40 = (undefined4 *)((long)pvVar20 + ((long)sVar46 >> 2) * 4);
                    *puVar40 = 0x3f800000;
                    if (0 < (long)sVar46) {
                      memcpy(pvVar20,pvVar54,sVar46);
                    }
                    *ppvVar48 = puVar40 + 1;
                    *ppvVar52 = pvVar20;
                    ppvVar52[2] = (void *)((long)pvVar20 + uVar21 * 4);
                    if (pvVar54 != (void *)0x0) {
                      operator_delete(pvVar54);
                    }
                  }
                  uVar45 = uVar45 + 1;
                  pvVar54 = local_6d0;
                  pvVar20 = local_6f0;
                  pvVar31 = local_6d8;
                  pvVar37 = local_720;
                } while (uVar45 < *(uint *)((long)local_6f0 + uVar16 * 4));
              }
              lVar39 = uVar16 * 0x18;
              lVar22 = uVar16 * 0x28;
              uVar16 = (ulong)((int)uVar16 + 1);
              *(undefined8 *)((long)pvVar37 + lVar22 + 0x20) =
                   *(undefined8 *)(local_708[0] + lVar39);
            } while (uVar16 < (ulong)((long)pvVar54 - (long)pvVar31 >> 2));
          }
          uVar45 = *puVar38;
          uStack_738 = 0;
          uStack_728 = 0;
          uStack_730 = 0;
          local_740 = 0x3b9c3930;
          if ((uVar45 >> 7 & 1) != 0) {
            memset(&local_5c8,0,0x348);
            local_5c8._0_4_ = 0x3b9bb079;
            if (0x400fff < local_844) {
              local_5c0 = &local_740;
            }
                    /* try { // try from 00ab5010 to 00ab5017 has its CatchHandler @ 00ab597c */
            (*vkGetPhysicalDeviceProperties2KHR)(*(undefined8 *)(this + 0x20),&local_5c8);
            uVar45 = *puVar38;
          }
          ppuVar47 = (ulong **)((ulong)&local_760 | 8);
          local_5c8 = (byte *)CONCAT44(local_5c8._4_4_,0x3b9bb078);
          local_5c0 = (ulong *)0x0;
          uStack_758 = 0;
          local_748 = 0;
          local_750 = 0;
          local_760 = 0x3b9e3cd3;
          uStack_788 = 0;
          local_778 = 0;
          uStack_780 = 0;
          uStack_770 = 0;
          local_7a0 = 0;
          local_790 = 0x3b9ebdb8;
          ppuVar44 = (ulong **)((ulong)&local_790 | 8);
          local_798 = 0;
          local_7a8 = 0x3b9c0a50;
          if ((uVar45 >> 7 & 1) == 0) {
                    /* try { // try from 00ab5094 to 00ab5097 has its CatchHandler @ 00ab5978 */
            (*vkGetPhysicalDeviceFeatures)(*(undefined8 *)(this + 0x20),local_5b8);
          }
          else {
            if ((uVar30 >> 7 & 1) == 0) {
              ppuVar24 = &local_5c0;
            }
            else {
              local_5c0 = &local_760;
              ppuVar24 = ppuVar47;
            }
            if ((uVar30 >> 0xb & 1) != 0) {
              *ppuVar24 = &local_790;
              ppuVar24 = ppuVar44;
            }
            if ((uVar30 >> 0xc & 1) != 0) {
              *ppuVar24 = &local_7a8;
            }
                    /* try { // try from 00ab50ec to 00ab50f3 has its CatchHandler @ 00ab5974 */
            (*vkGetPhysicalDeviceFeatures2KHR)(*(undefined8 *)(this + 0x20),&local_5c8);
          }
          if (local_58c == 0) {
            this[0x5d3] = (VulkanRenderDevice)0x0;
                    /* try { // try from 00ab5100 to 00ab5283 has its CatchHandler @ 00ab59ac */
            pcVar17 = (char *)LogManager::getInstance();
            LogManager::warnf(pcVar17,"Warning: device feature \'depthClamp\' not supported.\n");
          }
          this[0x670] = (VulkanRenderDevice)0x1;
          this[0x671] = (VulkanRenderDevice)(local_538 != 0);
          if (local_5ac == 0) {
            pcVar17 = (char *)LogManager::getInstance();
            LogManager::errorf(pcVar17,"Error: device feature \'independentBlend\' not supported.\n"
                              );
LAB_00ab52ac:
            bVar13 = false;
          }
          else {
            bVar13 = (char)uVar30 < '\0';
            uVar45 = (uint)((int)local_778 != 0) & uVar30 >> 0xb;
            this[0x43b] = (VulkanRenderDevice)(bVar13 && (int)local_750 != 0);
            this[0x43c] = SUB41(uVar45,0);
            if (local_568 == 0) {
                    /* try { // try from 00ab5288 to 00ab52ab has its CatchHandler @ 00ab5990 */
              pcVar17 = (char *)LogManager::getInstance();
              LogManager::errorf(pcVar17,
                                 "Error: device feature \'textureCompressionETC2\' not supported.\n"
                                );
              goto LAB_00ab52ac;
            }
            if (local_564 == 0) {
              pcVar17 = (char *)LogManager::getInstance();
              LogManager::errorf(pcVar17,
                                 "Error: device feature \'textureCompressionASTC_LDR\' not supported.\n"
                                );
              goto LAB_00ab52ac;
            }
            local_7e8 = (ulong *)0x0;
            uStack_1ac = 0;
            uStack_1b0 = 0;
            local_240 = 0;
            uStack_228 = (ulong)(byte)this[0x5d2];
            local_260 = 0;
            this[0x5d0] = (VulkanRenderDevice)(local_56c != 0);
            lStack_238 = (ulong)(local_56c != 0) << 0x20;
            lStack_258 = (ulong)(byte)this[0x5d3] << 0x20;
            uStack_1f8 = 0;
            local_200 = (ulong)local_538;
            this[0x5d1] = (VulkanRenderDevice)(local_584 != 0);
            uStack_248 = 0;
            local_250 = (ulong)(local_584 != 0) << 0x20;
            local_7f0 = 3;
            local_280 = 0;
            uStack_278 = 0x100000000;
            uStack_7dc = (undefined4)((ulong)((long)local_6d0 - (long)local_6d8) >> 2);
            local_7e0 = 0;
            uStack_1b8 = 0;
            local_1b4 = 0;
            uStack_1c0 = 0;
            uStack_1c8 = 0;
            local_1d0 = 0;
            uStack_1d8 = 0;
            local_1e0 = 0;
            uStack_1e8 = 0;
            local_1f0 = 0;
            uStack_208 = 0;
            local_210 = 0;
            uStack_218 = 0;
            local_220 = 0;
            uStack_268 = 0;
            local_270 = 0;
            local_7d8 = local_720;
            local_7d0 = local_650;
            puStack_7b0 = &local_280;
            local_7c0 = (undefined4)((ulong)((long)local_6b8 - (long)local_6c0) >> 3);
            local_230 = 0x100000001;
            local_7c8 = local_648;
            local_7b8 = local_6c0;
            if (bVar13 && (int)local_750 != 0) {
              uStack_758 = 0;
              local_748 = local_748 & 0xffffffff00000000;
              local_7e8 = &local_760;
              local_750 = 1;
            }
            else {
              ppuVar47 = &local_7e8;
            }
            if (uVar45 != 0) {
              *ppuVar44 = (ulong *)0x0;
              ppuVar44[1] = (ulong *)0x0;
              uStack_770 = 0;
              local_778 = 1;
              *ppuVar47 = &local_790;
              ppuVar47 = ppuVar44;
            }
            if (((uVar30 >> 0xc & 1) != 0) && ((int)local_798 != 0)) {
              local_7a0 = 0;
              local_798 = 1;
              *ppuVar47 = &local_7a8;
            }
            ppVVar5 = (VkDevice_T **)(this + 0x18);
                    /* try { // try from 00ab536c to 00ab54db has its CatchHandler @ 00ab59b0 */
            iVar15 = (*vkCreateDevice)(*(undefined8 *)(this + 0x20),&local_7f0,0,ppVVar5);
            bVar13 = iVar15 == 0;
            if (iVar15 == 0) {
              VulkanLoaderUtil::setupDeviceFunctions(*ppVVar5);
              VulkanExtensionUtil::setupDeviceExtensions(*ppVVar5,puVar41,local_844);
              (*vkGetDeviceQueue)(*(undefined8 *)(this + 0x18),*(undefined4 *)(this + 0x458),0,
                                  this + 0x440);
              if (*piVar4 == *piVar2) {
                *(undefined8 *)(this + 0x448) = *(undefined8 *)(this + 0x440);
              }
              else {
                (*vkGetDeviceQueue)(*(undefined8 *)(this + 0x18),*piVar4,0,this + 0x448);
              }
              if (*piVar3 != -1) {
                (*vkGetDeviceQueue)(*(undefined8 *)(this + 0x18),*piVar3,0,this + 0x450);
              }
              if (param_1) {
                pcVar17 = (char *)LogManager::getInstance();
                LogManager::infof(pcVar17,"Render System\n");
                pcVar17 = (char *)LogManager::getInstance();
                LogManager::infof(pcVar17,"  Driver: Vulkan\n");
                pcVar17 = (char *)LogManager::getInstance();
                LogManager::infof(pcVar17,"  Device: %s\n",this + 0x4c);
                pcVar17 = (char *)LogManager::getInstance();
                LogManager::infof(pcVar17,"  Vendor ID: %#04x\n",(ulong)*(uint *)(this + 0x40));
                pcVar17 = (char *)LogManager::getInstance();
                LogManager::infof(pcVar17,"  Device ID: %#04x\n",(ulong)*(uint *)(this + 0x44));
                pcVar17 = (char *)LogManager::getInstance();
                uVar30 = *(uint *)(this + 0x38);
                LogManager::infof(pcVar17,"  Api version: %u.%u.%u\n",uVar30 >> 0x16,
                                  (ulong)(uVar30 >> 0xc & 0x3ff),(ulong)(uVar30 & 0xfff));
                pcVar17 = (char *)LogManager::getInstance();
                uVar30 = *(uint *)(this + 0x3c);
                LogManager::infof(pcVar17,"  Driver version: %u.%u.%u\n",uVar30 >> 0x16,
                                  (ulong)(uVar30 >> 0xc & 0x3ff),(ulong)(uVar30 & 0xfff));
              }
              uVar14 = RenderDeviceInformation::getVendorFromPciId
                                 ((ushort)*(undefined4 *)(this + 0x40));
              *(VulkanRenderDevice **)(this + 0x618) = this + 0x4c;
              *(undefined2 *)(this + 0x62f) = 0x100;
              *(undefined4 *)(this + 0x60c) = uVar14;
              this[0x625] = this[0x5d2];
              this[0x627] = this[0x5d2];
              *(undefined4 *)(this + 0x628) = 0x1010101;
              *(undefined4 *)(this + 0x62b) = 0x1010101;
              this[0x608] = (VulkanRenderDevice)0x1;
              this[0x610] = (VulkanRenderDevice)0x1;
              *(undefined4 *)(this + 0x620) = 0x1010101;
              uVar30 = *(uint *)(this + 0x1d4);
              if (*(uint *)(this + 0x1c0) <= *(uint *)(this + 0x1d4)) {
                uVar30 = *(uint *)(this + 0x1c0);
              }
              this[0x624] = (VulkanRenderDevice)0x1;
              this[0x626] = (VulkanRenderDevice)0x1;
              *(uint *)(this + 0x638) = uVar30;
              *(undefined4 *)(this + 0x640) = *(undefined4 *)(this + 0x164);
              *(undefined4 *)(this + 0x650) = *(undefined4 *)(this + 0x164);
              *(int *)(this + 0x648) = (int)*(float *)(this + 0x270);
              this[0x631] = (VulkanRenderDevice)0x1;
              this[0x634] = (VulkanRenderDevice)0x1;
              *(undefined4 *)(this + 0x660) = *(undefined4 *)(this + 0x1e4);
              this[0x63c] = (VulkanRenderDevice)0x1;
              this[0x644] = (VulkanRenderDevice)0x1;
              this[0x64c] = (VulkanRenderDevice)0x1;
              this[0x654] = (VulkanRenderDevice)0x1;
              *(undefined4 *)(this + 0x658) = 1;
              *(undefined2 *)(this + 0x632) = 1;
              this[0x65c] = (VulkanRenderDevice)0x1;
              this[0x664] = (VulkanRenderDevice)0x1;
              *(undefined4 *)(this + 0x668) = *(undefined4 *)(this + 0x2e8);
              *(undefined2 *)(this + 0x672) = 1;
              *(undefined2 *)(this + 0x678) = 1;
              *(undefined4 *)(this + 0x674) = 0x1010101;
              this[0x67c] = (VulkanRenderDevice)0x1;
              *(undefined4 *)(this + 0x680) = 0;
              this[0x684] = (VulkanRenderDevice)0x1;
              *(undefined4 *)(this + 0x688) = 0;
              this[0x68c] = (VulkanRenderDevice)0x1;
              *(undefined4 *)(this + 0x690) = 0;
              this[0x694] = (VulkanRenderDevice)0x1;
              *(undefined4 *)(this + 0x698) = 0;
              this[0x69c] = (VulkanRenderDevice)0x1;
              pcVar11 = vkGetPhysicalDeviceFormatProperties;
              this[0x6a7] = (VulkanRenderDevice)((int)local_798 != 0);
              *(undefined4 *)(this + 0x6a0) = 0;
              this[0x6a6] = (VulkanRenderDevice)0x1;
                    /* try { // try from 00ab55e4 to 00ab561b has its CatchHandler @ 00ab5970 */
              (*pcVar11)(*(undefined8 *)(this + 0x20),0x7e,auStack_800);
              this[0x66c] = (VulkanRenderDevice)0x1;
              pcVar11 = vkGetPhysicalDeviceFormatProperties;
              this[0x66d] = (VulkanRenderDevice)(((local_7fc ^ 0xffffffff) & 0x1200) == 0);
              (*pcVar11)(*(undefined8 *)(this + 0x20),0x4c,auStack_800);
              this[0x66e] = (VulkanRenderDevice)0x1;
              this[0x66f] = (VulkanRenderDevice)((byte)local_7fc >> 1 & 1);
                    /* try { // try from 00ab5648 to 00ab5653 has its CatchHandler @ 00ab593c */
              if ((this[0x43b] != (VulkanRenderDevice)0x0) &&
                 (iVar15 = (*vkGetPhysicalDeviceFragmentShadingRatesKHR)
                                     (*(undefined8 *)(this + 0x20),&local_804,0), iVar15 == 0)) {
                    /* try { // try from 00ab565c to 00ab5663 has its CatchHandler @ 00ab5938 */
                std::__ndk1::
                vector<VkPhysicalDeviceFragmentShadingRateKHR,std::__ndk1::allocator<VkPhysicalDeviceFragmentShadingRateKHR>>
                ::vector((vector<VkPhysicalDeviceFragmentShadingRateKHR,std::__ndk1::allocator<VkPhysicalDeviceFragmentShadingRateKHR>>
                          *)&local_820,(ulong)local_804);
                uVar16 = (ulong)local_804;
                if (local_804 != 0) {
                  if (local_804 == 1) {
                    uVar23 = 0;
                  }
                  else {
                    uVar23 = uVar16 & 0xfffffffe;
                    puVar40 = (undefined4 *)((long)local_820 + 0x20);
                    uVar21 = uVar23;
                    do {
                      puVar40[-8] = 0x3b9e3cd4;
                      uVar21 = uVar21 - 2;
                      *puVar40 = 0x3b9e3cd4;
                      *(undefined8 *)(puVar40 + -6) = 0;
                      *(undefined8 *)(puVar40 + 2) = 0;
                      puVar40 = puVar40 + 0x10;
                    } while (uVar21 != 0);
                    if (uVar23 == uVar16) goto LAB_00ab56cc;
                  }
                  lVar22 = uVar16 - uVar23;
                  puVar33 = (undefined8 *)((long)local_820 + uVar23 * 0x20 + 8);
                  do {
                    lVar22 = lVar22 + -1;
                    *(undefined4 *)(puVar33 + -1) = 0x3b9e3cd4;
                    *puVar33 = 0;
                    puVar33 = puVar33 + 4;
                  } while (lVar22 != 0);
                }
LAB_00ab56cc:
                    /* try { // try from 00ab56d4 to 00ab56db has its CatchHandler @ 00ab591c */
                iVar15 = (*vkGetPhysicalDeviceFragmentShadingRatesKHR)
                                   (*(undefined8 *)(this + 0x20),&local_804);
                if ((iVar15 == 0) && (local_804 != 0)) {
                  uVar30 = 0;
                  puVar38 = (uint *)((long)local_820 + 0x18);
                  uVar16 = 1;
                  do {
                    uVar51 = puVar38[-2];
                    uVar45 = *puVar38;
                    if (puVar38[-1] <= *puVar38) {
                      uVar45 = puVar38[-1];
                    }
                    uVar14 = 3;
                    if (uVar45 < 2) {
                      uVar14 = 0;
                    }
                    uVar7 = 6;
                    if (uVar45 < 4) {
                      uVar7 = uVar14;
                    }
                    if (((uVar51 & 0x7c) != 0) && (uVar30 >> 2 == 0)) {
                      uVar30 = uVar30 | 4;
                      this[0x69c] = (VulkanRenderDevice)0x1;
                      *(undefined4 *)(this + 0x6a0) = uVar7;
                    }
                    if (((uVar51 >> 1 & 1) != 0) && ((uVar30 >> 1 & 1) == 0)) {
                      uVar30 = uVar30 | 2;
                      this[0x68c] = (VulkanRenderDevice)0x1;
                      *(undefined4 *)(this + 0x690) = uVar7;
                    }
                    if (((uVar51 & 1) != 0) && ((uVar30 & 1) == 0)) {
                      uVar30 = uVar30 | 1;
                      this[0x684] = (VulkanRenderDevice)0x1;
                      *(undefined4 *)(this + 0x688) = uVar7;
                      this[0x67c] = (VulkanRenderDevice)0x1;
                      *(undefined4 *)(this + 0x680) = uVar7;
                    }
                    if ((~uVar30 & 7) == 0) break;
                    bVar12 = uVar16 < local_804;
                    puVar38 = puVar38 + 8;
                    uVar16 = uVar16 + 1;
                  } while (bVar12);
                }
                else if (local_820 == (void *)0x0) goto LAB_00ab56f4;
                local_818 = local_820;
                operator_delete(local_820);
              }
LAB_00ab56f4:
              this[0x6b8] = (VulkanRenderDevice)0x1;
              *(undefined2 *)(this + 0x6b6) = 0x101;
              this[0x6b9] = this[0x43c];
                    /* try { // try from 00ab5708 to 00ab570f has its CatchHandler @ 00ab5970 */
              this_00 = (VulkanMemoryAllocator *)operator_new(0x280);
                    /* try { // try from 00ab5714 to 00ab571b has its CatchHandler @ 00ab595c */
              VulkanMemoryAllocator::VulkanMemoryAllocator(this_00,this);
              *(VulkanMemoryAllocator **)(this + 0x378) = this_00;
                    /* try { // try from 00ab5720 to 00ab5727 has its CatchHandler @ 00ab5970 */
              this_01 = (VulkanResourceAllocator *)operator_new(0xb00);
                    /* try { // try from 00ab572c to 00ab5733 has its CatchHandler @ 00ab5958 */
              VulkanResourceAllocator::VulkanResourceAllocator(this_01,this);
              *(VulkanResourceAllocator **)(this + 0x370) = this_01;
                    /* try { // try from 00ab5738 to 00ab573f has its CatchHandler @ 00ab596c */
              this_02 = (VulkanShaderCompilerDxc *)operator_new(0xb0);
                    /* try { // try from 00ab5744 to 00ab574f has its CatchHandler @ 00ab5954 */
              VulkanShaderCompilerDxc::VulkanShaderCompilerDxc(this_02,true,local_844);
              *(VulkanShaderCompilerDxc **)(this + 0x380) = this_02;
                    /* try { // try from 00ab5754 to 00ab575b has its CatchHandler @ 00ab596c */
              this_03 = (VulkanShaderCreator *)operator_new(0x10);
                    /* try { // try from 00ab5760 to 00ab5767 has its CatchHandler @ 00ab5944 */
              VulkanShaderCreator::VulkanShaderCreator(this_03,this);
              *(VulkanShaderCreator **)(this + 0x388) = this_03;
                    /* try { // try from 00ab576c to 00ab5773 has its CatchHandler @ 00ab596c */
              this_04 = (VulkanCommandBuffer *)operator_new(0xb68);
                    /* try { // try from 00ab5778 to 00ab5783 has its CatchHandler @ 00ab5940 */
              VulkanCommandBuffer::VulkanCommandBuffer(this_04,this,0);
              *(VulkanCommandBuffer **)(this + 0x390) = this_04;
                    /* try { // try from 00ab5788 to 00ab578f has its CatchHandler @ 00ab596c */
              createQueryPools();
              *(undefined4 *)(this + 0x3b0) = 0;
            }
            else {
              pcVar17 = (char *)LogManager::getInstance();
              LogManager::errorf(pcVar17,"Error: failed to create vulkan logical device.\n");
            }
          }
          if (local_720 != (void *)0x0) {
            local_718 = local_720;
            operator_delete(local_720);
          }
          FUN_00ab6318(local_708);
          if (local_6f0 != (void *)0x0) {
            local_6e8 = local_6f0;
            operator_delete(local_6f0);
          }
          if (local_6d8 != (void *)0x0) {
            local_6d0 = local_6d8;
            operator_delete(local_6d8);
          }
          if (local_6c0 != (void *)0x0) {
            local_6b8 = local_6c0;
            operator_delete(local_6c0);
          }
        }
        FUN_006d4660(&local_6a8);
      }
      else {
        pcVar17 = (char *)LogManager::getInstance();
        LogManager::errorf(pcVar17,"Error: failed to enumerate vulkan physical devices.\n");
LAB_00ab4c8c:
        bVar13 = false;
      }
      pvVar54 = local_600;
      if (local_690[0] != (void *)0x0) {
        operator_delete(local_690[0]);
        pvVar54 = local_600;
      }
    }
    else {
      pcVar17 = (char *)LogManager::getInstance();
      LogManager::errorf(pcVar17,"Error: failed to create vulkan instance.\n");
LAB_00ab48fc:
      bVar13 = false;
    }
    if (pvVar54 != (void *)0x0) {
      operator_delete(pvVar54);
    }
  }
  pbVar35 = local_5e8;
  pbVar43 = local_5e0;
  if (local_5e8 != (byte *)0x0) {
    while (pbVar10 = pbVar43, pbVar10 != pbVar35) {
      pbVar43 = pbVar10 + -0x18;
      if ((*pbVar43 & 1) != 0) {
        operator_delete(*(void **)(pbVar10 + -8));
      }
    }
    local_5e0 = pbVar35;
    operator_delete(local_5e8);
  }
LAB_00ab4628:
  if (*(long *)(lVar9 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar13;
}


