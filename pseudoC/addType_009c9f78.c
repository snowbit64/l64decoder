// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addType
// Entry Point: 009c9f78
// Size: 284 bytes
// Signature: undefined __cdecl addType(basic_string * param_1)


/* ProceduralPlacementDistanceMatrix::addType(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void ProceduralPlacementDistanceMatrix::addType(basic_string *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  basic_string *pbVar5;
  __tree_node_base **pp_Var6;
  undefined8 *puVar7;
  ulong local_60;
  undefined8 uStack_58;
  void *local_50;
  basic_string *local_48;
  __tree_end_node *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar5 = (basic_string *)operator_new(0x38);
                    /* try { // try from 009c9fac to 009c9fb3 has its CatchHandler @ 009ca094 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar5);
  *(undefined8 *)(pbVar5 + 10) = 0;
  pbVar5[0xc] = 0;
  *(undefined8 *)(pbVar5 + 8) = 0;
  *(basic_string **)(pbVar5 + 6) = pbVar5 + 8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)&local_60);
                    /* try { // try from 009c9fd8 to 009ca033 has its CatchHandler @ 009ca0a0 */
  local_48 = pbVar5;
  pp_Var6 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementDistanceMatrix::DistanceMatrixType*>>>
                        *)param_1,&local_40,(basic_string *)&local_60);
  if (*pp_Var6 == (__tree_node_base *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    pvVar4 = local_50;
    uVar3 = uStack_58;
    uVar2 = local_60;
    *puVar7 = 0;
    puVar7[1] = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = (void *)0x0;
    puVar7[6] = pvVar4;
    puVar7[7] = local_48;
    puVar7[5] = uVar3;
    puVar7[4] = uVar2;
    puVar7[2] = local_40;
    *pp_Var6 = (__tree_node_base *)puVar7;
    if (**(long **)param_1 != 0) {
      *(long *)param_1 = **(long **)param_1;
      puVar7 = (undefined8 *)*pp_Var6;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 2),(__tree_node_base *)puVar7);
    *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + 1;
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


