// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: registryPipeline_processRegisteredTextures_async
// Entry Point: 00969a3c
// Size: 592 bytes
// Signature: undefined registryPipeline_processRegisteredTextures_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::registryPipeline_processRegisteredTextures_async() */

void TextureStreamingManager::registryPipeline_processRegisteredTextures_async(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  void **ppvVar4;
  pair pVar5;
  long in_x0;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long local_b0 [2];
  long *local_a0;
  long *local_98;
  ulonglong *puStack_90;
  undefined local_88;
  long local_80;
  long *plStack_78;
  undefined local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_80 = in_x0 + 0x330;
  local_68 = *(long *)(lVar3 + 0x28);
  local_70 = 0;
  plStack_78 = (long *)(in_x0 + 0x358);
  Mutex::enterCriticalSection();
  plVar11 = *(long **)(in_x0 + 0x368);
  if (plVar11 != (long *)0x0) {
    do {
      local_b0[0] = plVar11[2];
                    /* try { // try from 00969ac4 to 00969b43 has its CatchHandler @ 00969cac */
      local_98 = local_b0;
      pVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>>>
              ::
              __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long_const&>,std::__ndk1::tuple<>>
                        ((ulonglong *)(in_x0 + 0x228),(piecewise_construct_t *)local_b0,
                         (tuple *)&DAT_00519ddc,(tuple *)&local_98);
      uVar7 = (ulong)pVar5;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (uVar7 + 0x18),(basic_string *)(plVar11 + 3));
      lVar8 = plVar11[6];
      *(long *)(uVar7 + 0x38) = plVar11[7];
      *(long *)(uVar7 + 0x30) = lVar8;
      lVar12 = plVar11[0xc];
      lVar9 = plVar11[0xf];
      lVar8 = plVar11[0xe];
      lVar16 = plVar11[9];
      lVar15 = plVar11[8];
      lVar14 = plVar11[0xb];
      lVar13 = plVar11[10];
      *(long *)(uVar7 + 0x68) = plVar11[0xd];
      *(long *)(uVar7 + 0x60) = lVar12;
      *(long *)(uVar7 + 0x78) = lVar9;
      *(long *)(uVar7 + 0x70) = lVar8;
      *(long *)(uVar7 + 0x48) = lVar16;
      *(long *)(uVar7 + 0x40) = lVar15;
      *(long *)(uVar7 + 0x58) = lVar14;
      *(long *)(uVar7 + 0x50) = lVar13;
      lVar13 = plVar11[0x12];
      lVar12 = plVar11[0x15];
      lVar9 = plVar11[0x14];
      lVar8 = plVar11[0x16];
      lVar15 = plVar11[0x11];
      lVar14 = plVar11[0x10];
      *(long *)(uVar7 + 0x98) = plVar11[0x13];
      *(long *)(uVar7 + 0x90) = lVar13;
      *(long *)(uVar7 + 0xa8) = lVar12;
      *(long *)(uVar7 + 0xa0) = lVar9;
      *(long *)(uVar7 + 0xb0) = lVar8;
      *(long *)(uVar7 + 0x88) = lVar15;
      *(long *)(uVar7 + 0x80) = lVar14;
      uVar6 = Watch::getCurrentTicks();
      local_98 = local_b0;
      pVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>>>
              ::
              __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long_const&>,std::__ndk1::tuple<>>
                        ((ulonglong *)(in_x0 + 0x1f0),(piecewise_construct_t *)local_b0,
                         (tuple *)&DAT_00519ddc,(tuple *)&local_98);
      *(undefined8 *)((ulong)pVar5 + 0x18) = uVar6;
      local_88 = 0;
      local_98 = (long *)(in_x0 + 0x250);
      puStack_90 = (ulonglong *)(in_x0 + 0x278);
                    /* try { // try from 00969b50 to 00969b57 has its CatchHandler @ 00969ca4 */
      Mutex::enterCriticalSection();
                    /* try { // try from 00969b5c to 00969b73 has its CatchHandler @ 00969c94 */
      local_a0 = local_b0;
      pVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::Status>>>
              ::
              __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long_const&>,std::__ndk1::tuple<>>
                        ((ulonglong *)(in_x0 + 0x278),(piecewise_construct_t *)local_b0,
                         (tuple *)&DAT_00519ddc,(tuple *)&local_a0);
      *(undefined4 *)((ulong)pVar5 + 0x18) = 0;
                    /* try { // try from 00969b78 to 00969b7f has its CatchHandler @ 00969c90 */
      Mutex::leaveCriticalSection();
      DAT_0210ee18 = DAT_0210ee18 + 1;
      uVar2 = *(int *)((long)plVar11 + 0x3c) - 1;
      uVar1 = 0;
      if (uVar2 <= *(uint *)(plVar11 + 0x16)) {
        uVar1 = *(uint *)(plVar11 + 0x16) - uVar2;
      }
                    /* try { // try from 00969ba4 to 00969bdf has its CatchHandler @ 00969ca8 */
      uVar7 = computeMipRangeSize((StreamingDesc *)(plVar11 + 3),-uVar1);
      DAT_0210ee68 = *(long *)(in_x0 + 0x220) + (uVar7 & 0xffffffff);
      *(long *)(in_x0 + 0x220) = DAT_0210ee68;
      DAT_0210ee64 = DAT_0210ee64 + uVar1;
      logFeedback("[RegistryPipeline] 2: finish register texture async [id: %llu]: +%u mips (+%u B)"
                  ,local_b0[0],(ulong)uVar1,uVar7 & 0xffffffff);
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0);
  }
  if (*(long *)(in_x0 + 0x370) != 0) {
    ppvVar4 = (void **)*(void **)(in_x0 + 0x368);
    while (ppvVar4 != (void **)0x0) {
      pvVar10 = *ppvVar4;
      if ((*(byte *)(ppvVar4 + 3) & 1) != 0) {
        operator_delete(ppvVar4[5]);
      }
      operator_delete(ppvVar4);
      ppvVar4 = (void **)pvVar10;
    }
    lVar8 = *(long *)(in_x0 + 0x360);
    *(undefined8 *)(in_x0 + 0x368) = 0;
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(*(long *)(in_x0 + 0x358) + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    *(undefined8 *)(in_x0 + 0x370) = 0;
  }
                    /* try { // try from 00969c28 to 00969c2b has its CatchHandler @ 00969c8c */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


