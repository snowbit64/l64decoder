// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRaycastPhysicsMask
// Entry Point: 009c5c84
// Size: 396 bytes
// Signature: undefined __thiscall getRaycastPhysicsMask(ProceduralPlacementCacheManager * this, uint param_1, uint param_2, float param_3, uint param_4)


/* ProceduralPlacementCacheManager::getRaycastPhysicsMask(unsigned int, unsigned int, float,
   unsigned int) */

ProceduralPlacementRaycastPhysicsMask * __thiscall
ProceduralPlacementCacheManager::getRaycastPhysicsMask
          (ProceduralPlacementCacheManager *this,uint param_1,uint param_2,float param_3,
          uint param_4)

{
  long **this_00;
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  __tree_iterator _Var5;
  __tree_node_base **pp_Var6;
  undefined8 *puVar7;
  ProceduralPlacementRaycastPhysicsMask *this_01;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  ProceduralPlacementRaycastPhysicsMask *local_80;
  byte local_78;
  void *local_68;
  __tree_end_node *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  ProceduralPlacementRaycastPhysicsMask::getRaycastPhysicsMaskSignature
            (param_1,param_2,param_3,param_4);
  this_00 = (long **)(this + 0x1a8);
                    /* try { // try from 009c5cdc to 009c5d03 has its CatchHandler @ 009c5e50 */
  _Var5 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastPhysicsMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastPhysicsMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastPhysicsMask*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastPhysicsMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastPhysicsMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastPhysicsMask*>>>
                      *)this_00,(basic_string *)&local_78);
  if (this + 0x1b0 == (ProceduralPlacementCacheManager *)(ulong)_Var5) {
    this_01 = (ProceduralPlacementRaycastPhysicsMask *)operator_new(0xf8);
                    /* try { // try from 009c5d08 to 009c5d1b has its CatchHandler @ 009c5e14 */
    ProceduralPlacementRaycastPhysicsMask::ProceduralPlacementRaycastPhysicsMask
              (this_01,param_1,param_2,param_3,param_4);
                    /* try { // try from 009c5d1c to 009c5d27 has its CatchHandler @ 009c5e10 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_98);
                    /* try { // try from 009c5d2c to 009c5d3b has its CatchHandler @ 009c5e20 */
    local_80 = this_01;
    pp_Var6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastPhysicsMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastPhysicsMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastPhysicsMask*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastPhysicsMask*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastPhysicsMask*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ProceduralPlacementRaycastPhysicsMask*>>>
                          *)this_00,&local_60,(basic_string *)&local_98);
    if (*pp_Var6 == (__tree_node_base *)0x0) {
                    /* try { // try from 009c5da4 to 009c5daf has its CatchHandler @ 009c5e20 */
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
                (*(__tree_node_base **)(this + 0x1b0),(__tree_node_base *)puVar7);
      *(long *)(this + 0x1b8) = *(long *)(this + 0x1b8) + 1;
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
  }
  else {
    this_01 = *(ProceduralPlacementRaycastPhysicsMask **)
               ((ProceduralPlacementCacheManager *)(ulong)_Var5 + 0x38);
  }
                    /* try { // try from 009c5d58 to 009c5d5f has its CatchHandler @ 009c5e50 */
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


