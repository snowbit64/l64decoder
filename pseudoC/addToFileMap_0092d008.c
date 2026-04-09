// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addToFileMap
// Entry Point: 0092d008
// Size: 788 bytes
// Signature: undefined __cdecl addToFileMap(map * param_1, Texture * param_2, COLOR_PROFILE param_3, bool param_4, uint * param_5)


/* WARNING: Type propagation algorithm not settling */
/* SceneSave::addToFileMap(std::__ndk1::map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, SceneSave::SerializeFile,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, SceneSave::SerializeFile> >
   >&, Texture*, SceneSave::SerializeFile::COLOR_PROFILE, bool, unsigned int&) */

void SceneSave::addToFileMap
               (map *param_1,Texture *param_2,COLOR_PROFILE param_3,bool param_4,uint *param_5)

{
  Texture *__s;
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  __tree_iterator _Var6;
  size_t __n;
  __tree_node_base **pp_Var7;
  undefined8 *puVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 local_118;
  size_t local_110;
  void *local_108;
  __tree_end_node *local_100;
  uint local_f8;
  undefined4 uStack_f4;
  ulong local_f0;
  undefined8 uStack_e8;
  void *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined6 uStack_d0;
  undefined2 uStack_ca;
  undefined4 uStack_c8;
  undefined uStack_c4;
  undefined uStack_c3;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  undefined8 local_88;
  undefined6 uStack_80;
  undefined2 uStack_7a;
  undefined6 uStack_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  __s = param_2 + 0x31;
  if (((byte)param_2[0x30] & 1) != 0) {
    __s = *(Texture **)(param_2 + 0x40);
  }
  __n = strlen((char *)__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pvVar9 = (void *)((ulong)&local_118 | 1);
    local_118 = CONCAT71(local_118._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_0092d0f0;
  }
  else {
    uVar10 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar9 = operator_new(uVar10);
    local_118 = uVar10 | 1;
    local_110 = __n;
    local_108 = pvVar9;
  }
  memcpy(pvVar9,__s,__n);
LAB_0092d0f0:
  *(undefined *)((long)pvVar9 + __n) = 0;
                    /* try { // try from 0092d0f4 to 0092d0ff has its CatchHandler @ 0092d354 */
  _Var6 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                      *)param_1,(basic_string *)&local_118);
  if (param_1 + 8 == (map *)(ulong)_Var6) {
    uVar1 = *param_5;
    uStack_e8 = 0;
    local_e0 = (void *)0x0;
    local_f0 = 0;
    uStack_c8 = 0;
    if (((uint)(param_3 != 1) == (*(ushort *)(param_2 + 0x48) & 2) >> 1) &&
       (uStack_c8 = 1, (*(ushort *)(param_2 + 0x48) & 2) == 0)) {
      uStack_c8 = 2;
    }
                    /* try { // try from 0092d164 to 0092d16b has its CatchHandler @ 0092d324 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_f0);
    local_d8 = 0;
    uStack_d0 = SUB86(param_2,0);
    uStack_ca = (undefined2)((ulong)param_2 >> 0x30);
    uStack_c3 = 0;
    uStack_f4 = 1;
                    /* try { // try from 0092d188 to 0092d197 has its CatchHandler @ 0092d31c */
    local_f8 = uVar1;
    uStack_c4 = param_4;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_c0);
    local_90 = local_e0;
    uStack_98 = uStack_e8;
    local_a0 = local_f0;
    local_a8 = CONCAT44(uStack_f4,local_f8);
    local_f0 = 0;
    uStack_e8 = 0;
    local_88 = CONCAT44(uStack_d4,local_d8);
    local_e0 = (void *)0x0;
    uStack_80 = uStack_d0;
    uStack_7a = uStack_ca;
    uStack_78 = (undefined6)
                (CONCAT17(uStack_c3,CONCAT16(uStack_c4,CONCAT42(uStack_c8,uStack_ca))) >> 0x10);
                    /* try { // try from 0092d1d0 to 0092d263 has its CatchHandler @ 0092d334 */
    pp_Var7 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                          *)param_1,&local_100,(basic_string *)&local_c0);
    if (*pp_Var7 == (__tree_node_base *)0x0) {
      puVar8 = (undefined8 *)operator_new(0x70);
      uVar5 = uStack_98;
      uVar4 = local_a0;
      pvVar9 = local_b0;
      uVar3 = uStack_b8;
      uVar10 = local_c0;
      *puVar8 = 0;
      puVar8[1] = 0;
      uStack_b8 = 0;
      local_b0 = (void *)0x0;
      local_c0 = 0;
      puVar8[5] = uVar3;
      puVar8[4] = uVar10;
      puVar8[6] = pvVar9;
      puVar8[7] = local_a8;
      local_a0 = 0;
      uStack_98 = 0;
      puVar8[9] = uVar5;
      puVar8[8] = uVar4;
      puVar8[10] = local_90;
      local_90 = (void *)0x0;
      *(ulong *)((long)puVar8 + 0x66) = CONCAT62(uStack_78,uStack_7a);
      puVar8[0xc] = CONCAT26(uStack_7a,uStack_80);
      puVar8[0xb] = local_88;
      puVar8[2] = local_100;
      *pp_Var7 = (__tree_node_base *)puVar8;
      if (**(long **)param_1 != 0) {
        *(long *)param_1 = **(long **)param_1;
        puVar8 = (undefined8 *)*pp_Var7;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(param_1 + 8),(__tree_node_base *)puVar8);
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_f0 & 1) != 0) {
      operator_delete(local_e0);
    }
  }
  else {
    param_5 = (uint *)((map *)(ulong)_Var6 + 0x3c);
  }
  *param_5 = *param_5 + 1;
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


