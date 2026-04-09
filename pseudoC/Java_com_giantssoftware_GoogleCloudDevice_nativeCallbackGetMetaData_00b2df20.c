// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Java_com_giantssoftware_GoogleCloudDevice_nativeCallbackGetMetaData
// Entry Point: 00b2df20
// Size: 1268 bytes
// Signature: undefined Java_com_giantssoftware_GoogleCloudDevice_nativeCallbackGetMetaData(void)


void Java_com_giantssoftware_GoogleCloudDevice_nativeCallbackGetMetaData
               (long *param_1,undefined8 param_2,long param_3,long param_4,long param_5,long param_6
               ,uint param_7,uint param_8)

{
  char *pcVar1;
  void *__dest;
  size_t __n;
  long lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  void *local_c8;
  void *local_c0;
  undefined8 local_b8;
  void *local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0)) {
                    /* try { // try from 00b2e3d8 to 00b2e3e3 has its CatchHandler @ 00b2e414 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    "nativeCallbackGetMetaData: sessionIndex=%d, cloudError=%u\n",(ulong)param_8,
                    (ulong)param_7);
  uVar4 = 0;
  bVar3 = true;
  local_80 = (void *)0x0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_98 = (void *)0x0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_b0 = (void *)0x0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_c8 = (void *)0x0;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  if ((((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) && (param_6 != 0)) {
                    /* try { // try from 00b2dfd4 to 00b2e0a3 has its CatchHandler @ 00b2e42c */
    uVar4 = (**(code **)(*param_1 + 0x558))(param_1,param_6);
    if (uVar4 == 0) {
      uVar4 = 0;
      bVar3 = true;
    }
    else {
      uVar9 = (ulong)uVar4;
      uVar8 = (long)local_78 - (long)local_80 >> 5;
      if (uVar8 < uVar9) {
        std::__ndk1::vector<ICloudDevice::MetaData,std::__ndk1::allocator<ICloudDevice::MetaData>>::
        __append((vector<ICloudDevice::MetaData,std::__ndk1::allocator<ICloudDevice::MetaData>> *)
                 &local_80,uVar9 - uVar8);
      }
      else if (uVar9 < uVar8) {
        local_78 = (void *)((long)local_80 + uVar9 * 0x20);
      }
      uVar8 = (long)local_90 - (long)local_98 >> 3;
      if (uVar8 < uVar9) {
        std::__ndk1::vector<_jstring*,std::__ndk1::allocator<_jstring*>>::__append
                  ((vector<_jstring*,std::__ndk1::allocator<_jstring*>> *)&local_98,uVar9 - uVar8);
      }
      else if (uVar9 < uVar8) {
        local_90 = (void *)((long)local_98 + uVar9 * 8);
      }
      uVar8 = (long)local_a8 - (long)local_b0 >> 3;
      if (uVar8 < uVar9) {
        std::__ndk1::vector<_jstring*,std::__ndk1::allocator<_jstring*>>::__append
                  ((vector<_jstring*,std::__ndk1::allocator<_jstring*>> *)&local_b0,uVar9 - uVar8);
      }
      else if (uVar9 < uVar8) {
        local_a8 = (void *)((long)local_b0 + uVar9 * 8);
      }
      uVar8 = (long)local_c0 - (long)local_c8 >> 3;
      if (uVar8 < uVar9) {
        std::__ndk1::vector<_jstring*,std::__ndk1::allocator<_jstring*>>::__append
                  ((vector<_jstring*,std::__ndk1::allocator<_jstring*>> *)&local_c8,uVar9 - uVar8);
      }
      else if (uVar9 < uVar8) {
        local_c0 = (void *)((long)local_c8 + uVar9 * 8);
      }
                    /* try { // try from 00b2e0c4 to 00b2e0d3 has its CatchHandler @ 00b2e428 */
      lVar6 = (**(code **)(*param_1 + 0x5b8))(param_1,param_6,0);
      uVar8 = 0;
      lVar10 = 0;
      do {
                    /* try { // try from 00b2e11c to 00b2e1fb has its CatchHandler @ 00b2e434 */
        uVar7 = (**(code **)(*param_1 + 0x568))(param_1,param_3,uVar8 & 0xffffffff);
        lVar11 = uVar8 * 8;
        *(undefined8 *)((long)local_98 + lVar11) = uVar7;
        if (*(long *)((long)local_98 + lVar11) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)(*param_1 + 0x548))(param_1,*(long *)((long)local_98 + lVar11),0);
        }
        *(undefined8 *)((long)local_80 + lVar10) = uVar7;
        uVar7 = (**(code **)(*param_1 + 0x568))(param_1,param_4,uVar8 & 0xffffffff);
        *(undefined8 *)((long)local_b0 + lVar11) = uVar7;
        if (*(long *)((long)local_b0 + lVar11) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)(*param_1 + 0x548))(param_1,*(long *)((long)local_b0 + lVar11),0);
        }
        *(undefined8 *)((long)local_80 + lVar10 + 8) = uVar7;
        uVar7 = (**(code **)(*param_1 + 0x568))(param_1,param_5,uVar8 & 0xffffffff);
        *(undefined8 *)((long)local_c8 + lVar11) = uVar7;
        if (*(long *)((long)local_c8 + lVar11) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)(*param_1 + 0x548))(param_1,*(long *)((long)local_c8 + lVar11),0);
        }
        *(undefined8 *)((long)local_80 + lVar10 + 0x10) = uVar7;
        pcVar1 = (char *)(lVar6 + uVar8);
        uVar8 = uVar8 + 1;
        *(bool *)((long)local_80 + lVar10 + 0x18) = *pcVar1 != '\0';
        lVar10 = lVar10 + 0x20;
      } while (uVar9 != uVar8);
                    /* try { // try from 00b2e208 to 00b2e21b has its CatchHandler @ 00b2e428 */
      (**(code **)(*param_1 + 0x5f8))(param_1,param_6,lVar6,0);
      bVar3 = false;
    }
  }
  lVar11 = s_pAndroidCloudDevice;
  lVar10 = *(long *)(s_pAndroidCloudDevice + 0x20);
  lVar6 = *(long *)(s_pAndroidCloudDevice + 0x28) - lVar10;
  if (lVar6 != 0) {
    uVar8 = 0;
    do {
      puVar12 = *(uint **)(lVar10 + uVar8 * 8);
      if (*puVar12 == param_8) {
        __dest = (void *)(lVar10 + uVar8 * 8);
        __n = *(long *)(s_pAndroidCloudDevice + 0x28) - (long)(void *)((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
        }
        *(size_t *)(lVar11 + 0x28) = (long)__dest + __n;
                    /* try { // try from 00b2e2a0 to 00b2e2ab has its CatchHandler @ 00b2e42c */
        (**(code **)(**(long **)(*(long *)(puVar12 + 2) + 0x18) + 0x10))
                  (*(long **)(*(long *)(puVar12 + 2) + 0x18),&local_80,param_7,
                   *(undefined8 *)(puVar12 + 4));
        operator_delete(puVar12);
        if (bVar3) goto LAB_00b2e358;
        goto LAB_00b2e2b8;
      }
      uVar8 = (ulong)((int)uVar8 + 1);
    } while (uVar8 < (ulong)(lVar6 >> 3));
  }
  if (!bVar3) {
LAB_00b2e2b8:
    if (uVar4 != 0) {
      lVar10 = 0;
      lVar6 = 8;
      do {
        if (*(long *)((long)local_98 + lVar10) != 0) {
                    /* try { // try from 00b2e300 to 00b2e353 has its CatchHandler @ 00b2e430 */
          (**(code **)(*param_1 + 0x550))
                    (param_1,*(long *)((long)local_98 + lVar10),
                     *(undefined8 *)((long)local_80 + lVar6 + -8));
        }
        if (*(long *)((long)local_b0 + lVar10) != 0) {
          (**(code **)(*param_1 + 0x550))
                    (param_1,*(long *)((long)local_b0 + lVar10),
                     *(undefined8 *)((long)local_80 + lVar6));
        }
        if (*(long *)((long)local_c8 + lVar10) != 0) {
          (**(code **)(*param_1 + 0x550))
                    (param_1,*(long *)((long)local_c8 + lVar10),
                     *(undefined8 *)((long)local_80 + lVar6 + 8));
        }
        lVar10 = lVar10 + 8;
        lVar6 = lVar6 + 0x20;
      } while ((ulong)uVar4 * 8 - lVar10 != 0);
    }
  }
LAB_00b2e358:
  if (local_c8 != (void *)0x0) {
    local_c0 = local_c8;
    operator_delete(local_c8);
  }
  if (local_b0 != (void *)0x0) {
    local_a8 = local_b0;
    operator_delete(local_b0);
  }
  if (local_98 != (void *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (local_80 != (void *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


