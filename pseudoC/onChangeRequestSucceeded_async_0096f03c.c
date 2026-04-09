// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onChangeRequestSucceeded_async
// Entry Point: 0096f03c
// Size: 228 bytes
// Signature: undefined __thiscall onChangeRequestSucceeded_async(CommonPipelineData * this, ulonglong param_1, int param_2, int param_3, Status param_4)


/* TextureStreamingManager::CommonPipelineData::onChangeRequestSucceeded_async(unsigned long long,
   int, int, TextureStreamingManager::Status) */

void __thiscall
TextureStreamingManager::CommonPipelineData::onChangeRequestSucceeded_async
          (CommonPipelineData *this,ulonglong param_1,int param_2,int param_3,Status param_4)

{
  long lVar1;
  pair pVar2;
  ulonglong local_60 [2];
  ulonglong *local_50;
  long local_48;
  ulong uVar3;
  
  local_50 = local_60;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60[0] = param_1;
  pVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::StreamingDesc>>>
          ::
          __emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long_const&>,std::__ndk1::tuple<>>
                    ((ulonglong *)(this + 0x10),(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_00519ddc,(tuple *)&local_50);
  uVar3 = (ulong)pVar2;
  *(int *)(uVar3 + 0xb0) = *(int *)(uVar3 + 0xb0) + param_3;
  *(int *)(uVar3 + 0xb4) = *(int *)(uVar3 + 0xb4) - param_3;
  DAT_0210ee68 = *(long *)(this + 8) + (long)param_2;
  *(long *)(this + 8) = DAT_0210ee68;
  tryChangeTextureStatus_any(this,local_60[0],param_4,0);
  Mutex::enterCriticalSection();
  *(int *)(this + 0xb0) = *(int *)(this + 0xb0) + -1;
                    /* try { // try from 0096f0ec to 0096f0f3 has its CatchHandler @ 0096f120 */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


