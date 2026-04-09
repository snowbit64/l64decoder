// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __set_symmetric_difference<std::__ndk1::__less<unsigned_long_long,unsigned_long_long>&,std::__ndk1::__tree_const_iterator<unsigned_long_long,std::__ndk1::__tree_node<unsigned_long_long,void*>*,long>,std::__ndk1::__tree_const_iterator<unsigned_long_long,std::__ndk1::__tree_node<unsigned_long_long,void*>*,long>,std::__ndk1::insert_iterator<std::__ndk1::set<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>>>
// Entry Point: 00d4c2e4
// Size: 664 bytes
// Signature: insert_iterator __cdecl __set_symmetric_difference<std::__ndk1::__less<unsigned_long_long,unsigned_long_long>&,std::__ndk1::__tree_const_iterator<unsigned_long_long,std::__ndk1::__tree_node<unsigned_long_long,void*>*,long>,std::__ndk1::__tree_const_iterator<unsigned_long_long,std::__ndk1::__tree_node<unsigned_long_long,void*>*,long>,std::__ndk1::insert_iterator<std::__ndk1::set<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>>>(__tree_const_iterator param_1, __tree_const_iterator param_2, __tree_const_iterator param_3, __tree_const_iterator param_4, insert_iterator param_5, __less * param_6)


/* std::__ndk1::insert_iterator<std::__ndk1::set<unsigned long long, std::__ndk1::less<unsigned long
   long>, std::__ndk1::allocator<unsigned long long> > >
   std::__ndk1::__set_symmetric_difference<std::__ndk1::__less<unsigned long long, unsigned long
   long>&, std::__ndk1::__tree_const_iterator<unsigned long long, std::__ndk1::__tree_node<unsigned
   long long, void*>*, long>, std::__ndk1::__tree_const_iterator<unsigned long long,
   std::__ndk1::__tree_node<unsigned long long, void*>*, long>,
   std::__ndk1::insert_iterator<std::__ndk1::set<unsigned long long, std::__ndk1::less<unsigned long
   long>, std::__ndk1::allocator<unsigned long long> > >
   >(std::__ndk1::__tree_const_iterator<unsigned long long, std::__ndk1::__tree_node<unsigned long
   long, void*>*, long>, std::__ndk1::__tree_const_iterator<unsigned long long,
   std::__ndk1::__tree_node<unsigned long long, void*>*, long>,
   std::__ndk1::__tree_const_iterator<unsigned long long, std::__ndk1::__tree_node<unsigned long
   long, void*>*, long>, std::__ndk1::__tree_const_iterator<unsigned long long,
   std::__ndk1::__tree_node<unsigned long long, void*>*, long>,
   std::__ndk1::insert_iterator<std::__ndk1::set<unsigned long long, std::__ndk1::less<unsigned long
   long>, std::__ndk1::allocator<unsigned long long> > >, std::__ndk1::__less<unsigned long long,
   unsigned long long>&) */

insert_iterator
std::__ndk1::
__set_symmetric_difference<std::__ndk1::__less<unsigned_long_long,unsigned_long_long>&,std::__ndk1::__tree_const_iterator<unsigned_long_long,std::__ndk1::__tree_node<unsigned_long_long,void*>*,long>,std::__ndk1::__tree_const_iterator<unsigned_long_long,std::__ndk1::__tree_node<unsigned_long_long,void*>*,long>,std::__ndk1::insert_iterator<std::__ndk1::set<unsigned_long_long,std::__ndk1::less<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>>>
          (__tree_const_iterator param_1,__tree_const_iterator param_2,__tree_const_iterator param_3
          ,__tree_const_iterator param_4,insert_iterator param_5,__less *param_6)

{
  long lVar1;
  bool bVar2;
  ulong **ppuVar3;
  ulong uVar4;
  ulong **ppuVar5;
  ulong *puVar6;
  ulong **ppuVar7;
  ulong **ppuVar8;
  ulong local_68;
  __less *p_Stack_60;
  ulong local_58;
  __less *p_Stack_50;
  long local_48;
  
  local_68 = (ulong)param_5;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ppuVar8 = (ulong **)(ulong)param_1;
  ppuVar7 = (ulong **)(ulong)param_3;
  p_Stack_60 = param_6;
  while (local_58 = local_68, p_Stack_50 = p_Stack_60, ppuVar8 != (ulong **)(ulong)param_2) {
    if (ppuVar7 == (ulong **)(ulong)param_4) goto LAB_00d4c47c;
    uVar4 = (ulong)ppuVar8[4];
    if (uVar4 < ppuVar7[4]) {
      FUN_00d4c57c(&local_68,ppuVar8 + 4);
      ppuVar3 = (ulong **)ppuVar8[1];
      if ((ulong **)ppuVar8[1] == (ulong **)0x0) {
        ppuVar3 = ppuVar8 + 2;
        bVar2 = (ulong **)**ppuVar3 != ppuVar8;
        ppuVar8 = (ulong **)*ppuVar3;
        if (bVar2) {
          do {
            puVar6 = *ppuVar3;
            ppuVar3 = (ulong **)(puVar6 + 2);
            ppuVar8 = (ulong **)*ppuVar3;
          } while (*ppuVar8 != puVar6);
        }
      }
      else {
        do {
          ppuVar8 = ppuVar3;
          ppuVar3 = (ulong **)*ppuVar8;
        } while ((ulong **)*ppuVar8 != (ulong **)0x0);
      }
    }
    else {
      if (ppuVar7[4] < uVar4) {
        FUN_00d4c57c(&local_68);
        ppuVar3 = (ulong **)ppuVar7[1];
        ppuVar5 = ppuVar8;
      }
      else {
        ppuVar3 = (ulong **)ppuVar8[1];
        if ((ulong **)ppuVar8[1] == (ulong **)0x0) {
          ppuVar3 = ppuVar8 + 2;
          ppuVar5 = (ulong **)*ppuVar3;
          if ((ulong **)*ppuVar5 == ppuVar8) {
            ppuVar3 = (ulong **)ppuVar7[1];
            goto joined_r0x00d4c428;
          }
          do {
            puVar6 = *ppuVar3;
            ppuVar3 = (ulong **)(puVar6 + 2);
            ppuVar5 = (ulong **)*ppuVar3;
          } while (*ppuVar5 != puVar6);
        }
        else {
          do {
            ppuVar5 = ppuVar3;
            ppuVar3 = (ulong **)*ppuVar5;
          } while ((ulong **)*ppuVar5 != (ulong **)0x0);
        }
        ppuVar3 = (ulong **)ppuVar7[1];
      }
joined_r0x00d4c428:
      ppuVar8 = ppuVar5;
      if (ppuVar3 == (ulong **)0x0) {
        ppuVar3 = ppuVar7 + 2;
        bVar2 = (ulong **)**ppuVar3 != ppuVar7;
        ppuVar7 = (ulong **)*ppuVar3;
        if (bVar2) {
          do {
            puVar6 = *ppuVar3;
            ppuVar3 = (ulong **)(puVar6 + 2);
            ppuVar7 = (ulong **)*ppuVar3;
          } while (*ppuVar7 != puVar6);
        }
      }
      else {
        do {
          ppuVar7 = ppuVar3;
          ppuVar3 = (ulong **)*ppuVar7;
        } while (ppuVar3 != (ulong **)0x0);
      }
    }
  }
  while (ppuVar7 != (ulong **)(ulong)param_4) {
    FUN_00d4c57c(&local_58,ppuVar7 + 4);
    ppuVar8 = (ulong **)ppuVar7[1];
    if ((ulong **)ppuVar7[1] == (ulong **)0x0) {
      ppuVar8 = ppuVar7 + 2;
      bVar2 = (ulong **)**ppuVar8 != ppuVar7;
      ppuVar7 = (ulong **)*ppuVar8;
      if (bVar2) {
        do {
          puVar6 = *ppuVar8;
          ppuVar8 = (ulong **)(puVar6 + 2);
          ppuVar7 = (ulong **)*ppuVar8;
        } while (*ppuVar7 != puVar6);
      }
    }
    else {
      do {
        ppuVar7 = ppuVar8;
        ppuVar8 = (ulong **)*ppuVar7;
      } while ((ulong **)*ppuVar7 != (ulong **)0x0);
    }
  }
LAB_00d4c548:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return (insert_iterator)local_58;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00d4c47c:
  do {
    FUN_00d4c57c(&local_58,ppuVar8 + 4);
    ppuVar7 = (ulong **)ppuVar8[1];
    if ((ulong **)ppuVar8[1] == (ulong **)0x0) {
      ppuVar7 = ppuVar8 + 2;
      ppuVar3 = (ulong **)*ppuVar7;
      if ((ulong **)*ppuVar3 != ppuVar8) {
        do {
          puVar6 = *ppuVar7;
          ppuVar7 = (ulong **)(puVar6 + 2);
          ppuVar3 = (ulong **)*ppuVar7;
        } while (*ppuVar3 != puVar6);
      }
    }
    else {
      do {
        ppuVar3 = ppuVar7;
        ppuVar7 = (ulong **)*ppuVar3;
      } while ((ulong **)*ppuVar3 != (ulong **)0x0);
    }
    ppuVar8 = ppuVar3;
  } while (ppuVar3 != (ulong **)(ulong)param_2);
  goto LAB_00d4c548;
}


