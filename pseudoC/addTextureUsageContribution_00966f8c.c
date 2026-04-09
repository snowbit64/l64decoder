// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTextureUsageContribution
// Entry Point: 00966f8c
// Size: 304 bytes
// Signature: undefined __thiscall addTextureUsageContribution(TextureStreamingManager * this, unordered_map * param_1, ulonglong param_2)


/* TextureStreamingManager::addTextureUsageContribution(std::__ndk1::unordered_map<Texture const*,
   TextureUsage, std::__ndk1::hash<Texture const*>, std::__ndk1::equal_to<Texture const*>,
   std::__ndk1::allocator<std::__ndk1::pair<Texture const* const, TextureUsage> > > const&, unsigned
   long long) */

void __thiscall
TextureStreamingManager::addTextureUsageContribution
          (TextureStreamingManager *this,unordered_map *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  pair pVar4;
  ulonglong *puVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  ulonglong local_b8;
  undefined8 uStack_b0;
  int local_a8;
  float local_a4;
  float fStack_a0;
  ulonglong local_98;
  TextureStreamingManager *local_90;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>>
  *p_Stack_88;
  undefined local_80;
  long local_78;
  ulong uVar5;
  
  lVar3 = tpidr_el0;
  local_90 = this + 0xe8;
  local_78 = *(long *)(lVar3 + 0x28);
  local_80 = 0;
  p_Stack_88 = (__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>>
                *)(this + 0x110);
  Mutex::enterCriticalSection();
  for (plVar7 = *(long **)(param_1 + 0x10); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    uVar1 = plVar7[3];
    fVar9 = *(float *)((long)plVar7 + 0x24);
    fVar8 = *(float *)(plVar7 + 5);
    iVar2 = *(int *)(plVar7 + 4);
    local_b8 = *(ulonglong *)(plVar7[2] + 0x70);
                    /* try { // try from 0096707c to 0096708b has its CatchHandler @ 009670c0 */
    puVar6 = &local_b8;
    uStack_b0 = uVar1;
    local_a8 = iVar2;
    local_a4 = fVar9;
    fStack_a0 = fVar8;
    local_98 = param_2;
    pVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>>
            ::
            __emplace_unique_key_args<unsigned_long_long,std::__ndk1::pair<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>
                      ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>>
                        *)(this + 0x110),puVar6,(pair *)&local_b8);
    uVar5 = (ulong)pVar4;
    if ((((ulong)puVar6 & 0xff) == 0) && (*(ulong *)(uVar5 + 0x30) <= param_2)) {
      if (*(ulong *)(uVar5 + 0x30) < param_2) {
        *(undefined8 *)(uVar5 + 0x18) = uVar1;
        *(int *)(uVar5 + 0x20) = iVar2;
        *(float *)(uVar5 + 0x24) = fVar9;
        *(float *)(uVar5 + 0x28) = fVar8;
        *(ulonglong *)(uVar5 + 0x30) = param_2;
      }
      else {
        if (fVar9 <= *(float *)(uVar5 + 0x24)) {
          fVar9 = *(float *)(uVar5 + 0x24);
        }
        *(int *)(uVar5 + 0x20) = *(int *)(uVar5 + 0x20) + iVar2;
        if (*(float *)(uVar5 + 0x28) <= fVar8) {
          fVar8 = *(float *)(uVar5 + 0x28);
        }
        *(float *)(uVar5 + 0x24) = fVar9;
        *(float *)(uVar5 + 0x28) = fVar8;
      }
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(ulonglong *)(this + 0x140) = param_2;
  }
                    /* try { // try from 00966ff4 to 00966ffb has its CatchHandler @ 009670bc */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


