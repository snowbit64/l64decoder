// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getProjectObjectsMask
// Entry Point: 009c6054
// Size: 364 bytes
// Signature: undefined __thiscall getProjectObjectsMask(ProceduralPlacementCacheManager * this, set * param_1, float param_2)


/* ProceduralPlacementCacheManager::getProjectObjectsMask(std::__ndk1::set<TransformGroup*,
   std::__ndk1::less<TransformGroup*>, std::__ndk1::allocator<TransformGroup*> >&, float) */

ProceduralPlacementProjectObjectsMask * __thiscall
ProceduralPlacementCacheManager::getProjectObjectsMask
          (ProceduralPlacementCacheManager *this,set *param_1,float param_2)

{
  long **this_00;
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  __tree_iterator _Var5;
  __tree_node_base **pp_Var6;
  undefined8 *puVar7;
  ProceduralPlacementProjectObjectsMask *this_01;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  ProceduralPlacementProjectObjectsMask *local_70;
  byte local_68;
  void *local_58;
  __tree_end_node *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ProceduralPlacementProjectObjectsMask::getProjectObjectsMaskSignature
            ((ProceduralPlacementProjectObjectsMask *)param_1,param_1,param_2);
  this_00 = (long **)(this + 0x1d8);
                    /* try { // try from 009c6098 to 009c60bf has its CatchHandler @ 009c6200 */
  _Var5 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementProjectObjectsMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementProjectObjectsMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementProjectObjectsMask*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementProjectObjectsMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementProjectObjectsMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementProjectObjectsMask*>>>
                      *)this_00,(basic_string *)&local_68);
  if (this + 0x1e0 == (ProceduralPlacementCacheManager *)(ulong)_Var5) {
    this_01 = (ProceduralPlacementProjectObjectsMask *)operator_new(0xf8);
                    /* try { // try from 009c60c4 to 009c60cf has its CatchHandler @ 009c61c4 */
    ProceduralPlacementProjectObjectsMask::ProceduralPlacementProjectObjectsMask
              (this_01,param_1,param_2);
                    /* try { // try from 009c60d0 to 009c60db has its CatchHandler @ 009c61c0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_88);
                    /* try { // try from 009c60e0 to 009c60ef has its CatchHandler @ 009c61d0 */
    local_70 = this_01;
    pp_Var6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementProjectObjectsMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementProjectObjectsMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementProjectObjectsMask*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementProjectObjectsMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementProjectObjectsMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementProjectObjectsMask*>>>
                          *)this_00,&local_50,(basic_string *)&local_88);
    if (*pp_Var6 == (__tree_node_base *)0x0) {
                    /* try { // try from 009c6154 to 009c615f has its CatchHandler @ 009c61d0 */
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
                (*(__tree_node_base **)(this + 0x1e0),(__tree_node_base *)puVar7);
      *(long *)(this + 0x1e8) = *(long *)(this + 0x1e8) + 1;
    }
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
  }
  else {
    this_01 = *(ProceduralPlacementProjectObjectsMask **)
               ((ProceduralPlacementCacheManager *)(ulong)_Var5 + 0x38);
  }
                    /* try { // try from 009c610c to 009c6113 has its CatchHandler @ 009c6200 */
  ProceduralPlacementMask::updateDirtyRegion();
  if ((local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_01;
}


