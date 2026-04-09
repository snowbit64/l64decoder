// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: registryPipeline_processUnregisteredTextures_async
// Entry Point: 00969770
// Size: 668 bytes
// Signature: undefined registryPipeline_processUnregisteredTextures_async(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::registryPipeline_processUnregisteredTextures_async() */

void TextureStreamingManager::registryPipeline_processUnregisteredTextures_async(void)

{
  uint uVar1;
  uint uVar2;
  size_t __n;
  long lVar3;
  void *pvVar4;
  int iVar5;
  long in_x0;
  ulong uVar6;
  ulong uVar7;
  ulonglong *__dest;
  long *plVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  ulonglong local_98;
  void *local_90;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>>>
  *p_Stack_88;
  char local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_90 = (void *)(in_x0 + 0x380);
  local_78 = *(long *)(lVar3 + 0x28);
  p_Stack_88 = (__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>>>
                *)(in_x0 + 0x3a8);
  local_80 = '\0';
  Mutex::enterCriticalSection();
                    /* try { // try from 009697cc to 009697cf has its CatchHandler @ 00969a10 */
  std::__ndk1::vector<unsigned_long_long,std::__ndk1::allocator<unsigned_long_long>>::
  insert<std::__ndk1::__wrap_iter<unsigned_long_long*>>
            ((vector<unsigned_long_long,std::__ndk1::allocator<unsigned_long_long>> *)
             (in_x0 + 0x3c0),(__wrap_iter)*(undefined8 *)(in_x0 + 0x3c8),
             (__wrap_iter)*(undefined8 *)(in_x0 + 0x3a8),(__wrap_iter)*(undefined8 *)(in_x0 + 0x3b0)
            );
  *(undefined8 *)(in_x0 + 0x3b0) = *(undefined8 *)(in_x0 + 0x3a8);
                    /* try { // try from 009697dc to 009697e3 has its CatchHandler @ 00969a0c */
  Mutex::leaveCriticalSection();
  __dest = *(ulonglong **)(in_x0 + 0x3c0);
  if (__dest != *(ulonglong **)(in_x0 + 0x3c8)) {
    do {
      while( true ) {
        local_98 = *__dest;
        iVar5 = CommonPipelineData::getTextureStatus_async
                          ((CommonPipelineData *)(in_x0 + 0x218),local_98);
        if (iVar5 != 0) break;
        _DAT_0210ee18 = CONCAT44((int)((ulong)_DAT_0210ee18 >> 0x20) + 1,(int)_DAT_0210ee18 + -1);
        uVar6 = *(ulong *)(in_x0 + 0x230);
        uVar10 = NEON_cnt(uVar6,1);
        uVar9 = NEON_uaddlv(uVar10,1);
        if ((uint)CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) < 2) {
          uVar7 = uVar6 - 1 & local_98;
        }
        else {
          uVar7 = local_98;
          if (uVar6 <= local_98) {
            uVar7 = 0;
            if (uVar6 != 0) {
              uVar7 = local_98 / uVar6;
            }
            uVar7 = local_98 - uVar7 * uVar6;
          }
        }
        plVar8 = *(long **)(*(long *)(in_x0 + 0x228) + uVar7 * 8);
        do {
          do {
            plVar8 = (long *)*plVar8;
          } while (plVar8[1] != local_98);
        } while (plVar8[2] != local_98);
        uVar2 = *(int *)((long)plVar8 + 0x3c) - 1;
        uVar1 = 0;
        if (uVar2 <= *(uint *)(plVar8 + 0x16)) {
          uVar1 = *(uint *)(plVar8 + 0x16) - uVar2;
        }
        uVar6 = computeMipRangeSize((StreamingDesc *)(plVar8 + 3),-uVar1);
        DAT_0210ee68 = *(long *)(in_x0 + 0x220) - (uVar6 & 0xffffffff);
        *(long *)(in_x0 + 0x220) = DAT_0210ee68;
        DAT_0210ee64 = DAT_0210ee64 - uVar1;
        logFeedback("[RegistryPipeline] 4: finish unregister texture async [id: %llu]: -%u mips (-%u B)"
                    ,local_98,(ulong)uVar1);
        if ((void *)plVar8[9] != (void *)0x0) {
          operator_delete__((void *)plVar8[9]);
        }
        plVar8[9] = 0;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>>>
        ::remove((__hash_const_iterator)(long *)(in_x0 + 0x228));
        pvVar4 = local_90;
        local_90 = (void *)0x0;
        if (pvVar4 != (void *)0x0) {
          if ((local_80 != '\0') && ((*(byte *)((long)pvVar4 + 0x18) & 1) != 0)) {
            operator_delete(*(void **)((long)pvVar4 + 0x28));
          }
          operator_delete(pvVar4);
        }
        std::__ndk1::
        __hash_table<unsigned_long_long,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
        ::__erase_unique<unsigned_long_long>
                  ((__hash_table<unsigned_long_long,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                    *)(in_x0 + 0x1c8),&local_98);
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>>>
        ::__erase_unique<unsigned_long_long>
                  ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>>>
                    *)(in_x0 + 0x1f0),&local_98);
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>>
        ::__erase_unique<unsigned_long_long>
                  ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>>
                    *)(in_x0 + 0x150),&local_98);
        local_80 = '\0';
        local_90 = (void *)(in_x0 + 0x250);
        p_Stack_88 = (__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>>>
                      *)(in_x0 + 0x278);
        Mutex::enterCriticalSection();
                    /* try { // try from 00969990 to 0096999b has its CatchHandler @ 00969a24 */
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>>>
        ::__erase_unique<unsigned_long_long>
                  ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>>>
                    *)(in_x0 + 0x278),&local_98);
                    /* try { // try from 0096999c to 009699a3 has its CatchHandler @ 00969a38 */
        Mutex::leaveCriticalSection();
        __n = *(long *)(in_x0 + 0x3c8) - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        *(ulonglong **)(in_x0 + 0x3c8) = (ulonglong *)((long)__dest + __n);
        if (__dest == (ulonglong *)((long)__dest + __n)) goto LAB_009699d0;
      }
      __dest = __dest + 1;
    } while (__dest != *(ulonglong **)(in_x0 + 0x3c8));
  }
LAB_009699d0:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


