// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIndexSimplexNoiseMask
// Entry Point: 009c52c4
// Size: 352 bytes
// Signature: undefined __thiscall getIndexSimplexNoiseMask(ProceduralPlacementCacheManager * this, uint param_1, uint param_2)


/* ProceduralPlacementCacheManager::getIndexSimplexNoiseMask(unsigned int, unsigned int) */

ProceduralPlacementIndexSimplexNoiseMask * __thiscall
ProceduralPlacementCacheManager::getIndexSimplexNoiseMask
          (ProceduralPlacementCacheManager *this,uint param_1,uint param_2)

{
  long **this_00;
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  __tree_iterator _Var5;
  __tree_node_base **pp_Var6;
  undefined8 *puVar7;
  ProceduralPlacementIndexSimplexNoiseMask *this_01;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  ProceduralPlacementIndexSimplexNoiseMask *local_70;
  byte local_68;
  void *local_58;
  __tree_end_node *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ProceduralPlacementIndexSimplexNoiseMask::getIndexSimplexNoiseMaskSignature(param_1,param_2);
  this_00 = (long **)(this + 0x120);
                    /* try { // try from 009c5308 to 009c532f has its CatchHandler @ 009c5464 */
  _Var5 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>>>
                      *)this_00,(basic_string *)&local_68);
  if (this + 0x128 == (ProceduralPlacementCacheManager *)(ulong)_Var5) {
    this_01 = (ProceduralPlacementIndexSimplexNoiseMask *)operator_new(0x2d8);
                    /* try { // try from 009c5334 to 009c533f has its CatchHandler @ 009c5428 */
    ProceduralPlacementIndexSimplexNoiseMask::ProceduralPlacementIndexSimplexNoiseMask
              (this_01,param_1,param_2);
                    /* try { // try from 009c5340 to 009c534b has its CatchHandler @ 009c5424 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_88);
                    /* try { // try from 009c5350 to 009c53c3 has its CatchHandler @ 009c5434 */
    local_70 = this_01;
    pp_Var6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementIndexSimplexNoiseMask*>>>
                          *)this_00,&local_50,(basic_string *)&local_88);
    if (*pp_Var6 == (__tree_node_base *)0x0) {
      puVar7 = (undefined8 *)operator_new(0x40);
      pvVar4 = local_78;
      uVar3 = uStack_80;
      uVar2 = local_88;
      *puVar7 = 0;
      puVar7[1] = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
      puVar7[6] = pvVar4;
      puVar7[7] = local_70;
      puVar7[5] = uVar3;
      puVar7[4] = uVar2;
      puVar7[2] = local_50;
      *pp_Var6 = (__tree_node_base *)puVar7;
      if ((long *)**this_00 != (long *)0x0) {
        *this_00 = (long *)**this_00;
        puVar7 = (undefined8 *)*pp_Var6;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x128),(__tree_node_base *)puVar7);
      *(long *)(this + 0x130) = *(long *)(this + 0x130) + 1;
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
  }
  else {
    this_01 = *(ProceduralPlacementIndexSimplexNoiseMask **)
               ((ProceduralPlacementCacheManager *)(ulong)_Var5 + 0x38);
  }
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_01;
}


