// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_009758e8
// Entry Point: 009758e8
// Size: 264 bytes
// Signature: undefined FUN_009758e8(void)


void FUN_009758e8(piecewise_construct_t *param_1,piecewise_construct_t *param_2)

{
  long lVar1;
  pair pVar2;
  int iVar3;
  ulong uVar4;
  piecewise_construct_t *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_02110160 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_02110160), iVar3 != 0)) {
                    /* try { // try from 009759b4 to 009759bf has its CatchHandler @ 009759f0 */
    TextureStreamingManager::TextureStreamingManager((TextureStreamingManager *)&DAT_0210f8a0);
    __cxa_atexit(TextureStreamingManager::~TextureStreamingManager,&DAT_0210f8a0,&PTR_LOOP_00fd8de0)
    ;
    __cxa_guard_release(&DAT_02110160);
  }
  local_50 = param_1;
  pVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>>>
          ::
          __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long_const&>,std::__ndk1::tuple<>>
                    ((ulonglong *)&DAT_0210fa90,param_1,(tuple *)&DAT_00519ddc,(tuple *)&local_50);
  uVar4 = *(ulong *)((ulong)pVar2 + 0x18);
  local_50 = param_2;
  pVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>>>
          ::
          __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long_const&>,std::__ndk1::tuple<>>
                    ((ulonglong *)&DAT_0210fa90,param_2,(tuple *)&DAT_00519ddc,(tuple *)&local_50);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4 < *(ulong *)((ulong)pVar2 + 0x18));
}


