// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addToFileMap
// Entry Point: 0092cdd4
// Size: 520 bytes
// Signature: undefined __cdecl addToFileMap(map * param_1, basic_string * param_2, TYPE param_3, bool param_4, uint * param_5)


/* WARNING: Type propagation algorithm not settling */
/* SceneSave::addToFileMap(std::__ndk1::map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, SceneSave::SerializeFile,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, SceneSave::SerializeFile> >
   >&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   > const&, SceneSave::SerializeFile::TYPE, bool, unsigned int&) */

void SceneSave::addToFileMap
               (map *param_1,basic_string *param_2,TYPE param_3,bool param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  __tree_iterator _Var8;
  __tree_node_base **pp_Var9;
  undefined8 *puVar10;
  __tree_end_node *local_f8;
  uint local_f0;
  undefined4 uStack_ec;
  ulong local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  TYPE local_d0;
  undefined4 uStack_cc;
  undefined6 uStack_c8;
  undefined2 uStack_c2;
  undefined4 uStack_c0;
  undefined uStack_bc;
  undefined uStack_bb;
  ulong local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined8 uStack_90;
  void *local_88;
  undefined8 local_80;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  _Var8 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                      *)param_1,param_2);
  if (param_1 + 8 == (map *)(ulong)_Var8) {
    uVar1 = *param_5;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_e8);
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_c2 = 0;
    uStack_bb = 0;
    uStack_ec = 1;
                    /* try { // try from 0092ce64 to 0092ce73 has its CatchHandler @ 0092cfdc */
    local_f0 = uVar1;
    local_d0 = param_3;
    uStack_bc = param_4;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_b8);
    local_88 = local_d8;
    uStack_90 = uStack_e0;
    local_98 = local_e8;
    local_a0 = CONCAT44(uStack_ec,local_f0);
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = (void *)0x0;
    local_80 = CONCAT44(uStack_cc,local_d0);
    uStack_78 = uStack_c8;
    uStack_72 = uStack_c2;
    uStack_70 = (undefined6)
                (CONCAT17(uStack_bb,CONCAT16(uStack_bc,CONCAT42(uStack_c0,uStack_c2))) >> 0x10);
                    /* try { // try from 0092cea8 to 0092cf2b has its CatchHandler @ 0092cfe4 */
    pp_Var9 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                          *)param_1,&local_f8,(basic_string *)&local_b8);
    if (*pp_Var9 == (__tree_node_base *)0x0) {
      puVar10 = (undefined8 *)operator_new(0x70);
      uVar7 = uStack_90;
      uVar6 = local_98;
      pvVar5 = local_a8;
      uVar4 = uStack_b0;
      uVar3 = local_b8;
      *puVar10 = 0;
      puVar10[1] = 0;
      uStack_b0 = 0;
      local_a8 = (void *)0x0;
      local_b8 = 0;
      puVar10[5] = uVar4;
      puVar10[4] = uVar3;
      puVar10[6] = pvVar5;
      puVar10[7] = local_a0;
      local_98 = 0;
      uStack_90 = 0;
      puVar10[9] = uVar7;
      puVar10[8] = uVar6;
      puVar10[10] = local_88;
      local_88 = (void *)0x0;
      *(ulong *)((long)puVar10 + 0x66) = CONCAT62(uStack_70,uStack_72);
      puVar10[0xc] = CONCAT26(uStack_72,uStack_78);
      puVar10[0xb] = local_80;
      puVar10[2] = local_f8;
      *pp_Var9 = (__tree_node_base *)puVar10;
      if (**(long **)param_1 != 0) {
        *(long *)param_1 = **(long **)param_1;
        puVar10 = (undefined8 *)*pp_Var9;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(param_1 + 8),(__tree_node_base *)puVar10);
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
    if ((local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
  }
  else {
    param_5 = (uint *)((map *)(ulong)_Var8 + 0x3c);
  }
  *param_5 = *param_5 + 1;
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


