// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addEntity
// Entry Point: 00a77a5c
// Size: 124 bytes
// Signature: undefined __thiscall addEntity(EntityRegistryManager * this, Entity * param_1)


/* EntityRegistryManager::addEntity(Entity*) */

void __thiscall EntityRegistryManager::addEntity(EntityRegistryManager *this,Entity *param_1)

{
  long lVar1;
  ulong local_48;
  Entity *pEStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Mutex::enterCriticalSection();
  local_48 = (ulong)*(uint *)(param_1 + 0x18);
  pEStack_40 = param_1;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,Entity*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,Entity*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,Entity*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,Entity*>>>
  ::__emplace_unique_key_args<unsigned_int,std::__ndk1::pair<unsigned_int,Entity*>>
            ((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,Entity*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,Entity*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,Entity*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,Entity*>>>
              *)this,(uint *)&local_48,(pair *)&local_48);
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


