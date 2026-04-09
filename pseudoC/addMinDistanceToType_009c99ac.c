// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addMinDistanceToType
// Entry Point: 009c99ac
// Size: 308 bytes
// Signature: undefined __thiscall addMinDistanceToType(DistanceMatrixType * this, basic_string * param_1, int param_2)


/* ProceduralPlacementDistanceMatrix::DistanceMatrixType::addMinDistanceToType(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, int) */

void __thiscall
ProceduralPlacementDistanceMatrix::DistanceMatrixType::addMinDistanceToType
          (DistanceMatrixType *this,basic_string *param_1,int param_2)

{
  long **this_00;
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  __tree_iterator _Var5;
  __tree_node_base **pp_Var6;
  undefined8 *puVar7;
  __tree_end_node *local_70;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  int local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  this_00 = (long **)(this + 0x18);
  local_48 = *(long *)(lVar1 + 0x28);
  _Var5 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
                      *)this_00,param_1);
  if (this + 0x20 == (DistanceMatrixType *)(ulong)_Var5) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_68);
                    /* try { // try from 009c9a04 to 009c9a77 has its CatchHandler @ 009c9ae0 */
    local_50 = param_2;
    pp_Var6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
                          *)this_00,&local_70,(basic_string *)&local_68);
    if (*pp_Var6 == (__tree_node_base *)0x0) {
      puVar7 = (undefined8 *)operator_new(0x40);
      pvVar4 = local_58;
      uVar3 = uStack_60;
      uVar2 = local_68;
      *puVar7 = 0;
      puVar7[1] = 0;
      uStack_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      puVar7[6] = pvVar4;
      puVar7[5] = uVar3;
      puVar7[4] = uVar2;
      *(int *)(puVar7 + 7) = local_50;
      puVar7[2] = local_70;
      *pp_Var6 = (__tree_node_base *)puVar7;
      if ((long *)**this_00 != (long *)0x0) {
        *this_00 = (long *)**this_00;
        puVar7 = (undefined8 *)*pp_Var6;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x20),(__tree_node_base *)puVar7);
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if (*(float *)(this + 0x30) < (float)param_2) {
      *(float *)(this + 0x30) = (float)param_2;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


