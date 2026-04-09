// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processTextureUsageContributions_async
// Entry Point: 00968fd8
// Size: 672 bytes
// Signature: undefined processTextureUsageContributions_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::processTextureUsageContributions_async() */

void TextureStreamingManager::processTextureUsageContributions_async(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long in_x0;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  long **pplVar8;
  long *plVar9;
  void *pvVar10;
  void *pvVar11;
  void **ppvVar12;
  undefined2 uVar13;
  float fVar14;
  undefined8 uVar15;
  void *local_88;
  void *local_80;
  void *local_78;
  void *pvStack_70;
  void *pvStack_68;
  void *pvStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (((DAT_02110190 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_02110190), iVar4 != 0)) {
    DAT_02110170 = 0;
    DAT_02110168 = 0;
    DAT_02110180 = 0;
    DAT_02110178 = (void **)0x0;
    DAT_02110188 = 0x3f800000;
    __cxa_atexit(FUN_00964dc0,&DAT_02110168,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_02110190);
  }
  Mutex::enterCriticalSection();
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>>
  ::swap((__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>>
          *)&DAT_02110168,(__hash_table *)(in_x0 + 0x110));
                    /* try { // try from 00969030 to 00969037 has its CatchHandler @ 00969278 */
  Mutex::leaveCriticalSection();
  if (DAT_02110178 != (void **)0x0) {
    ppvVar12 = DAT_02110178;
    do {
      local_88 = ppvVar12[2];
      pvVar6 = *(void **)(in_x0 + 0x158);
      if (pvVar6 != (void *)0x0) {
        uVar15 = NEON_cnt(pvVar6,1);
        uVar13 = NEON_uaddlv(uVar15,1);
        uVar7 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar13) & 0xffffffff;
        if (uVar7 < 2) {
          pvVar10 = (void *)((long)pvVar6 - 1U & (ulong)local_88);
        }
        else {
          pvVar10 = local_88;
          if (pvVar6 <= local_88) {
            uVar1 = 0;
            if (pvVar6 != (void *)0x0) {
              uVar1 = (ulong)local_88 / (ulong)pvVar6;
            }
            pvVar10 = (void *)((long)local_88 - uVar1 * (long)pvVar6);
          }
        }
        pplVar8 = *(long ***)(*(long *)(in_x0 + 0x150) + (long)pvVar10 * 8);
        if ((pplVar8 != (long **)0x0) && (plVar9 = *pplVar8, plVar9 != (long *)0x0)) {
          do {
            pvVar11 = (void *)plVar9[1];
            if (pvVar11 == local_88) {
              if ((void *)plVar9[2] == local_88) {
                if ((void *)plVar9[6] <= ppvVar12[6]) {
                  if ((void *)plVar9[6] < ppvVar12[6]) {
                    pvVar11 = ppvVar12[3];
                    pvVar10 = ppvVar12[6];
                    pvVar6 = ppvVar12[5];
                    plVar9[4] = (long)ppvVar12[4];
                    plVar9[3] = (long)pvVar11;
                    plVar9[6] = (long)pvVar10;
                    plVar9[5] = (long)pvVar6;
                  }
                  else {
                    *(int *)(plVar9 + 4) = *(int *)(plVar9 + 4) + *(int *)(ppvVar12 + 4);
                    fVar14 = *(float *)((long)ppvVar12 + 0x24);
                    if (*(float *)((long)ppvVar12 + 0x24) <= *(float *)((long)plVar9 + 0x24)) {
                      fVar14 = *(float *)((long)plVar9 + 0x24);
                    }
                    *(float *)((long)plVar9 + 0x24) = fVar14;
                    fVar14 = *(float *)(ppvVar12 + 5);
                    if (*(float *)(plVar9 + 5) <= *(float *)(ppvVar12 + 5)) {
                      fVar14 = *(float *)(plVar9 + 5);
                    }
                    *(float *)(plVar9 + 5) = fVar14;
                  }
                }
                goto LAB_00969124;
              }
            }
            else {
              if (uVar7 < 2) {
                pvVar11 = (void *)((ulong)pvVar11 & (long)pvVar6 - 1U);
              }
              else if (pvVar6 <= pvVar11) {
                uVar1 = 0;
                if (pvVar6 != (void *)0x0) {
                  uVar1 = (ulong)pvVar11 / (ulong)pvVar6;
                }
                pvVar11 = (void *)((long)pvVar11 - uVar1 * (long)pvVar6);
              }
              if (pvVar11 != pvVar10) break;
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
      pvStack_70 = ppvVar12[4];
      local_78 = ppvVar12[3];
      pvStack_60 = ppvVar12[6];
      pvStack_68 = ppvVar12[5];
      local_80 = local_88;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>>
      ::
      __emplace_unique_key_args<unsigned_long_long,std::__ndk1::pair<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>
                ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>>
                  *)(long *)(in_x0 + 0x150),(ulonglong *)&local_80,(pair *)&local_80);
LAB_00969124:
      std::__ndk1::
      __hash_table<unsigned_long_long,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
      ::__erase_unique<unsigned_long_long>
                ((__hash_table<unsigned_long_long,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                  *)(in_x0 + 0x1c8),(ulonglong *)&local_88);
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>>>
      ::__erase_unique<unsigned_long_long>
                ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>>>
                  *)(in_x0 + 0x1f0),(ulonglong *)&local_88);
      ppvVar12 = (void **)*ppvVar12;
    } while (ppvVar12 != (void **)0x0);
  }
  lVar3 = DAT_02110170;
  ppvVar12 = DAT_02110178;
  if (DAT_02110180 != 0) {
    while (DAT_02110170 = lVar3, ppvVar12 != (void **)0x0) {
      pvVar6 = *ppvVar12;
      operator_delete(ppvVar12);
      lVar3 = DAT_02110170;
      ppvVar12 = (void **)pvVar6;
    }
    DAT_02110178 = (void **)0x0;
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(DAT_02110168 + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar3 != lVar5);
    }
    DAT_02110180 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


