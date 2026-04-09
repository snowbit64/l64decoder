// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSimplexNoiseMask
// Entry Point: 009c5114
// Size: 340 bytes
// Signature: undefined __thiscall getSimplexNoiseMask(ProceduralPlacementCacheManager * this, uint param_1)


/* ProceduralPlacementCacheManager::getSimplexNoiseMask(unsigned int) */

ProceduralPlacementSimplexNoiseMask * __thiscall
ProceduralPlacementCacheManager::getSimplexNoiseMask
          (ProceduralPlacementCacheManager *this,uint param_1)

{
  long **this_00;
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  __tree_iterator _Var5;
  __tree_node_base **pp_Var6;
  undefined8 *puVar7;
  ProceduralPlacementSimplexNoiseMask *this_01;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  ProceduralPlacementSimplexNoiseMask *local_70;
  byte local_68;
  void *local_58;
  __tree_end_node *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ProceduralPlacementSimplexNoiseMask::getSimplexNoiseMaskSignature(param_1);
  this_00 = (long **)(this + 0x108);
                    /* try { // try from 009c5150 to 009c5177 has its CatchHandler @ 009c52a8 */
  _Var5 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSimplexNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSimplexNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSimplexNoiseMask*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSimplexNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSimplexNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSimplexNoiseMask*>>>
                      *)this_00,(basic_string *)&local_68);
  if (this + 0x110 == (ProceduralPlacementCacheManager *)(ulong)_Var5) {
    this_01 = (ProceduralPlacementSimplexNoiseMask *)operator_new(0x2d0);
                    /* try { // try from 009c517c to 009c5183 has its CatchHandler @ 009c526c */
    ProceduralPlacementSimplexNoiseMask::ProceduralPlacementSimplexNoiseMask(this_01,param_1);
                    /* try { // try from 009c5184 to 009c518f has its CatchHandler @ 009c5268 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_88);
                    /* try { // try from 009c5194 to 009c5207 has its CatchHandler @ 009c5278 */
    local_70 = this_01;
    pp_Var6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSimplexNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSimplexNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSimplexNoiseMask*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSimplexNoiseMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSimplexNoiseMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementSimplexNoiseMask*>>>
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
                (*(__tree_node_base **)(this + 0x110),(__tree_node_base *)puVar7);
      *(long *)(this + 0x118) = *(long *)(this + 0x118) + 1;
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
  }
  else {
    this_01 = *(ProceduralPlacementSimplexNoiseMask **)
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


