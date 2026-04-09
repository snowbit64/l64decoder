// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeEntity
// Entry Point: 00a77ad8
// Size: 300 bytes
// Signature: undefined __thiscall removeEntity(EntityRegistryManager * this, Entity * param_1)


/* EntityRegistryManager::removeEntity(Entity*) */

void __thiscall EntityRegistryManager::removeEntity(EntityRegistryManager *this,Entity *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long **pplVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_50;
  ulong uVar13;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  Mutex::enterCriticalSection();
  uVar6 = *(ulong *)(this + 8);
  if (uVar6 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar7 = (ulong)uVar1;
    uVar12 = NEON_cnt(uVar6,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar13 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11);
    if ((uVar13 & 0xffffffff) < 2) {
      uVar8 = (ulong)((int)uVar6 - 1U & uVar1);
    }
    else {
      uVar8 = uVar7;
      if (uVar6 <= uVar7) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar7 / uVar6;
        }
        uVar8 = uVar7 - uVar8 * uVar6;
      }
    }
    pplVar9 = *(long ***)(*(long *)this + uVar8 * 8);
    if ((pplVar9 != (long **)0x0) && (plVar4 = *pplVar9, plVar4 != (long *)0x0)) {
      do {
        uVar10 = plVar4[1];
        if (uVar10 == uVar7) {
          if (*(uint *)(plVar4 + 2) == uVar1) {
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<unsigned_int,Entity*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,Entity*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,Entity*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,Entity*>>>
            ::remove((__hash_const_iterator)this);
            if (local_50 != (void *)0x0) {
              operator_delete(local_50);
            }
            break;
          }
        }
        else {
          if ((uVar13 & 0xffffffff) < 2) {
            uVar10 = uVar10 & uVar6 - 1;
          }
          else if (uVar6 <= uVar10) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar10 / uVar6;
            }
            uVar10 = uVar10 - uVar2 * uVar6;
          }
          if (uVar10 != uVar8) break;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


