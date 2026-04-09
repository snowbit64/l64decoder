// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert<std::__ndk1::__tree_const_iterator<unsigned_char,std::__ndk1::__tree_node<unsigned_char,void*>*,long>>
// Entry Point: 00b1906c
// Size: 332 bytes
// Signature: void __thiscall insert<std::__ndk1::__tree_const_iterator<unsigned_char,std::__ndk1::__tree_node<unsigned_char,void*>*,long>>(set<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>> * this, __tree_const_iterator param_1, __tree_const_iterator param_2)


/* void std::__ndk1::set<unsigned char, std::__ndk1::less<unsigned char>,
   std::__ndk1::allocator<unsigned char> >::insert<std::__ndk1::__tree_const_iterator<unsigned char,
   std::__ndk1::__tree_node<unsigned char, void*>*, long>
   >(std::__ndk1::__tree_const_iterator<unsigned char, std::__ndk1::__tree_node<unsigned char,
   void*>*, long>, std::__ndk1::__tree_const_iterator<unsigned char,
   std::__ndk1::__tree_node<unsigned char, void*>*, long>) */

void __thiscall
std::__ndk1::
set<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>::
insert<std::__ndk1::__tree_const_iterator<unsigned_char,std::__ndk1::__tree_node<unsigned_char,void*>*,long>>
          (set<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
           *this,__tree_const_iterator param_1,__tree_const_iterator param_2)

{
  uchar uVar1;
  long lVar2;
  __tree_node_base **pp_Var3;
  undefined8 *puVar4;
  ulong **ppuVar5;
  ulong **ppuVar6;
  ulong *puVar7;
  ulong **ppuVar8;
  __tree_node_base *p_Stack_68;
  __tree_end_node *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((ulong **)(ulong)param_1 != (ulong **)(ulong)param_2) {
    ppuVar8 = (ulong **)(ulong)param_1;
    do {
      pp_Var3 = __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                ::__find_equal<unsigned_char>
                          ((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
                            *)this,(int)this + 8,&local_60,&p_Stack_68,
                           (uchar *)((long)ppuVar8 + 0x19U));
      if (*pp_Var3 == (__tree_node_base *)0x0) {
        puVar4 = (undefined8 *)operator_new(0x20);
        uVar1 = *(uchar *)((long)ppuVar8 + 0x19U);
        *puVar4 = 0;
        puVar4[1] = 0;
        *(uchar *)((long)puVar4 + 0x19) = uVar1;
        puVar4[2] = local_60;
        *pp_Var3 = (__tree_node_base *)puVar4;
        if (**(long **)this != 0) {
          *(long *)this = **(long **)this;
          puVar4 = (undefined8 *)*pp_Var3;
        }
        __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar4);
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
        ppuVar5 = (ulong **)ppuVar8[1];
        if ((ulong **)ppuVar8[1] == (ulong **)0x0) goto LAB_00b19158;
LAB_00b19148:
        do {
          ppuVar6 = ppuVar5;
          ppuVar5 = (ulong **)*ppuVar6;
        } while ((ulong **)*ppuVar6 != (ulong **)0x0);
      }
      else {
        ppuVar5 = (ulong **)ppuVar8[1];
        if ((ulong **)ppuVar8[1] != (ulong **)0x0) goto LAB_00b19148;
LAB_00b19158:
        ppuVar5 = ppuVar8 + 2;
        ppuVar6 = (ulong **)*ppuVar5;
        if ((ulong **)*ppuVar6 != ppuVar8) {
          do {
            puVar7 = *ppuVar5;
            ppuVar5 = (ulong **)(puVar7 + 2);
            ppuVar6 = (ulong **)*ppuVar5;
          } while (*ppuVar6 != puVar7);
        }
      }
      ppuVar8 = ppuVar6;
    } while (ppuVar6 != (ulong **)(ulong)param_2);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


