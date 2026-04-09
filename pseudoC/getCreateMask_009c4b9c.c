// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCreateMask
// Entry Point: 009c4b9c
// Size: 380 bytes
// Signature: undefined __thiscall getCreateMask(ProceduralPlacementCacheManager * this, ProceduralPlacementMask * param_1, basic_string * param_2, ProceduralPlacementMask * param_3)


/* ProceduralPlacementCacheManager::getCreateMask(ProceduralPlacementMask*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, ProceduralPlacementMask*) */

ProceduralPlacementMask * __thiscall
ProceduralPlacementCacheManager::getCreateMask
          (ProceduralPlacementCacheManager *this,ProceduralPlacementMask *param_1,
          basic_string *param_2,ProceduralPlacementMask *param_3)

{
  long **this_00;
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  __tree_iterator _Var5;
  __tree_node_base **pp_Var6;
  undefined8 *puVar7;
  ProceduralPlacementMask *this_01;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  ProceduralPlacementMask *local_80;
  byte local_78;
  void *local_68;
  __tree_end_node *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  ProceduralPlacementMask::getCreateMaskSignature
            (param_1,(ProceduralPlacementMask *)param_2,(basic_string *)param_3,param_3);
  this_00 = (long **)(this + 0xc0);
                    /* try { // try from 009c4bec to 009c4c13 has its CatchHandler @ 009c4d58 */
  _Var5 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>>>
                      *)this_00,(basic_string *)&local_78);
  if (this + 200 == (ProceduralPlacementCacheManager *)(ulong)_Var5) {
    this_01 = (ProceduralPlacementMask *)operator_new(200);
                    /* try { // try from 009c4c18 to 009c4c27 has its CatchHandler @ 009c4d1c */
    ProceduralPlacementMask::ProceduralPlacementMask(this_01,param_1,param_2,param_3);
                    /* try { // try from 009c4c28 to 009c4c33 has its CatchHandler @ 009c4d18 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_98);
                    /* try { // try from 009c4c38 to 009c4c47 has its CatchHandler @ 009c4d28 */
    local_80 = this_01;
    pp_Var6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementMask*>>>
                          *)this_00,&local_60,(basic_string *)&local_98);
    if (*pp_Var6 == (__tree_node_base *)0x0) {
                    /* try { // try from 009c4cac to 009c4cb7 has its CatchHandler @ 009c4d28 */
      puVar7 = (undefined8 *)operator_new(0x40);
      pvVar4 = local_88;
      uVar3 = uStack_90;
      uVar2 = local_98;
      *puVar7 = 0;
      puVar7[1] = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = (void *)0x0;
      puVar7[6] = pvVar4;
      puVar7[7] = local_80;
      puVar7[5] = uVar3;
      puVar7[4] = uVar2;
      puVar7[2] = local_60;
      *pp_Var6 = (__tree_node_base *)puVar7;
      if ((long *)**this_00 != (long *)0x0) {
        *this_00 = (long *)**this_00;
        puVar7 = (undefined8 *)*pp_Var6;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 200),(__tree_node_base *)puVar7);
      *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 1;
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
  }
  else {
    this_01 = *(ProceduralPlacementMask **)((ProceduralPlacementCacheManager *)(ulong)_Var5 + 0x38);
  }
                    /* try { // try from 009c4c64 to 009c4c6b has its CatchHandler @ 009c4d58 */
  ProceduralPlacementMask::updateDirtyRegion();
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_01;
}


