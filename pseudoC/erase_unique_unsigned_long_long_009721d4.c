// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __erase_unique<unsigned_long_long>
// Entry Point: 009721d4
// Size: 268 bytes
// Signature: ulong __thiscall __erase_unique<unsigned_long_long>(__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>>> * this, ulonglong * param_1)


/* unsigned long std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long long,
   unsigned long long>, std::__ndk1::__unordered_map_hasher<unsigned long long,
   std::__ndk1::__hash_value_type<unsigned long long, unsigned long long>,
   std::__ndk1::hash<unsigned long long>, true>, std::__ndk1::__unordered_map_equal<unsigned long
   long, std::__ndk1::__hash_value_type<unsigned long long, unsigned long long>,
   std::__ndk1::equal_to<unsigned long long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long long, unsigned long long> >
   >::__erase_unique<unsigned long long>(unsigned long long const&) */

ulong __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>>>
::__erase_unique<unsigned_long_long>
          (__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,unsigned_long_long>>>
           *this,ulonglong *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long **pplVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  void *local_40;
  ulong uVar12;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  uVar5 = *(ulong *)(this + 8);
  if (uVar5 != 0) {
    uVar6 = *param_1;
    uVar11 = NEON_cnt(uVar5,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar12 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10);
    if ((uVar12 & 0xffffffff) < 2) {
      uVar7 = uVar5 - 1 & uVar6;
    }
    else {
      uVar7 = uVar6;
      if (uVar5 <= uVar6) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        uVar7 = uVar6 - uVar7 * uVar5;
      }
    }
    pplVar8 = *(long ***)(*(long *)this + uVar7 * 8);
    if ((pplVar8 != (long **)0x0) && (plVar3 = *pplVar8, plVar3 != (long *)0x0)) {
      do {
        uVar9 = plVar3[1];
        if (uVar9 == uVar6) {
          if (plVar3[2] == uVar6) {
            remove((__hash_const_iterator)this);
            if (local_40 != (void *)0x0) {
              operator_delete(local_40);
            }
            uVar5 = 1;
            goto LAB_0097229c;
          }
        }
        else {
          if ((uVar12 & 0xffffffff) < 2) {
            uVar9 = uVar9 & uVar5 - 1;
          }
          else if (uVar5 <= uVar9) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar9 / uVar5;
            }
            uVar9 = uVar9 - uVar1 * uVar5;
          }
          if (uVar9 != uVar7) break;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
  }
  uVar5 = 0;
LAB_0097229c:
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


