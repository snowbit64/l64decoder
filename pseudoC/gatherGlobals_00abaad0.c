// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: gatherGlobals
// Entry Point: 00abaad0
// Size: 856 bytes
// Signature: undefined __thiscall gatherGlobals(VulkanProgramObject * this, vector * param_1, map * param_2, VulkanShaderObject * param_3, SHADER_STAGE param_4)


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* VulkanProgramObject::gatherGlobals(std::__ndk1::vector<VulkanProgramObject::GlobalVarInfo,
   std::__ndk1::allocator<VulkanProgramObject::GlobalVarInfo> >&,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, unsigned int> > >&,
   VulkanShaderObject*, IProgramObject::SHADER_STAGE) */

void __thiscall
VulkanProgramObject::gatherGlobals
          (VulkanProgramObject *this,vector *param_1,map *param_2,VulkanShaderObject *param_3,
          SHADER_STAGE param_4)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  __tree_iterator _Var5;
  __tree_node_base **pp_Var6;
  undefined8 *puVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  ushort local_d8;
  void *local_c8;
  __tree_end_node *local_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  uint local_a0;
  undefined4 local_98 [2];
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar12 = *(long *)(param_3 + 0x18);
  lVar9 = *(long *)(param_3 + 0x20);
  uVar11 = (lVar9 - lVar12 >> 3) * -0x3333333333333333;
  if ((int)uVar11 != 0) {
    uVar15 = 0;
    lVar16 = 0x20;
    do {
      uVar10 = (lVar9 - lVar12 >> 3) * -0x3333333333333333;
      if (uVar10 < uVar15 || uVar10 - uVar15 == 0) {
        local_d8 = 0;
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)&local_d8);
      }
                    /* try { // try from 00abab80 to 00abab8b has its CatchHandler @ 00abae9c */
      _Var5 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
              ::
              find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                          *)param_2,(basic_string *)&local_d8);
      if (param_2 + 8 == (map *)(ulong)_Var5) {
        local_90 = 0;
        uStack_88 = 0;
        local_80 = (void *)0x0;
        uVar10 = (*(long *)(param_3 + 0x20) - *(long *)(param_3 + 0x18) >> 3) * -0x3333333333333333;
        if (uVar10 < uVar15 || uVar10 - uVar15 == 0) {
          local_b8 = local_b8 & 0xffffffffffff0000;
          local_98[0] = 4;
        }
        else {
          local_98[0] = *(undefined4 *)(*(long *)(param_3 + 0x18) + lVar16 + -0x20);
                    /* try { // try from 00ababd0 to 00ababd7 has its CatchHandler @ 00abae2c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)&local_b8);
          if ((local_90 & 1) != 0) {
            operator_delete(local_80);
          }
        }
        puVar1 = *(undefined4 **)(param_1 + 8);
        uStack_88 = uStack_b0;
        local_90 = local_b8;
        local_80 = local_a8;
        local_78 = 0xffffffffffffffff;
        local_70 = 0xffffffff;
        if (puVar1 == *(undefined4 **)(param_1 + 0x10)) {
                    /* try { // try from 00abac58 to 00abac63 has its CatchHandler @ 00abae28 */
          std::__ndk1::
          vector<VulkanProgramObject::GlobalVarInfo,std::__ndk1::allocator<VulkanProgramObject::GlobalVarInfo>>
          ::__push_back_slow_path<VulkanProgramObject::GlobalVarInfo_const&>
                    ((vector<VulkanProgramObject::GlobalVarInfo,std::__ndk1::allocator<VulkanProgramObject::GlobalVarInfo>>
                      *)param_1,(GlobalVarInfo *)local_98);
          puVar14 = *(undefined4 **)(param_1 + 8);
        }
        else {
          *puVar1 = local_98[0];
                    /* try { // try from 00abac30 to 00abac37 has its CatchHandler @ 00abae30 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(puVar1 + 2);
          puVar14 = puVar1 + 0xc;
          puVar1[10] = local_70;
          *(undefined8 *)(puVar1 + 8) = local_78;
          *(undefined4 **)(param_1 + 8) = puVar14;
        }
        lVar12 = *(long *)param_1;
                    /* try { // try from 00abac6c to 00abac77 has its CatchHandler @ 00abae44 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string *)&local_b8);
        uVar13 = (int)((ulong)((long)puVar14 - lVar12) >> 4) * -0x55555555 - 1;
                    /* try { // try from 00abac94 to 00abad8b has its CatchHandler @ 00abae64 */
        local_a0 = uVar13;
        pp_Var6 = std::__ndk1::
                  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                  ::
                  __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                              *)param_2,&local_c0,(basic_string *)&local_b8);
        if (*pp_Var6 == (__tree_node_base *)0x0) {
          puVar7 = (undefined8 *)operator_new(0x40);
          pvVar4 = local_a8;
          uVar3 = uStack_b0;
          uVar10 = local_b8;
          *puVar7 = 0;
          puVar7[1] = 0;
          uStack_b0 = 0;
          local_a8 = (void *)0x0;
          local_b8 = 0;
          puVar7[6] = pvVar4;
          puVar7[5] = uVar3;
          puVar7[4] = uVar10;
          *(uint *)(puVar7 + 7) = local_a0;
          puVar7[2] = local_c0;
          *pp_Var6 = (__tree_node_base *)puVar7;
          if (**(long **)param_2 != 0) {
            *(long *)param_2 = **(long **)param_2;
            puVar7 = (undefined8 *)*pp_Var6;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(param_2 + 8),(__tree_node_base *)puVar7);
          *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
        }
        if ((local_b8 & 1) != 0) {
          operator_delete(local_a8);
        }
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
      }
      else {
        uVar13 = *(uint *)((map *)(ulong)_Var5 + 0x38);
      }
      uVar10 = (*(long *)(param_3 + 0x20) - *(long *)(param_3 + 0x18) >> 3) * -0x3333333333333333;
      if (uVar10 < uVar15 || uVar10 - uVar15 == 0) {
        uVar8 = 0xffffffff;
        if (param_4 == 2) goto LAB_00abad28;
LAB_00abacf4:
        if (param_4 == 1) {
          *(undefined4 *)(*(long *)param_1 + (ulong)uVar13 * 0x30 + 0x24) = uVar8;
        }
        else if (param_4 == 0) {
          *(undefined4 *)(*(long *)param_1 + (ulong)uVar13 * 0x30 + 0x20) = uVar8;
        }
      }
      else {
        uVar8 = *(undefined4 *)(*(long *)(param_3 + 0x18) + lVar16);
        if (param_4 != 2) goto LAB_00abacf4;
LAB_00abad28:
        *(undefined4 *)(*(long *)param_1 + (ulong)uVar13 * 0x30 + 0x28) = uVar8;
      }
      if ((local_d8 & 1) != 0) {
        operator_delete(local_c8);
      }
      if ((uVar11 & 0xffffffff) - 1 == uVar15) break;
      lVar12 = *(long *)(param_3 + 0x18);
      lVar9 = *(long *)(param_3 + 0x20);
      lVar16 = lVar16 + 0x28;
      uVar15 = uVar15 + 1;
    } while( true );
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


