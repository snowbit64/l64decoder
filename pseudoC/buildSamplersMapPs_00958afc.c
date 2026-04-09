// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildSamplersMapPs
// Entry Point: 00958afc
// Size: 872 bytes
// Signature: undefined buildSamplersMapPs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MaterialShader::buildSamplersMapPs() */

void MaterialShader::buildSamplersMapPs(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  __tree_node_base **pp_Var5;
  undefined8 *puVar6;
  long **in_x8;
  undefined8 *puVar7;
  byte local_60;
  undefined7 uStack_5f;
  undefined uStack_58;
  undefined7 uStack_57;
  undefined uStack_50;
  undefined uStack_4f;
  undefined2 uStack_4e;
  undefined uStack_4c;
  undefined uStack_4b;
  undefined2 uStack_4a;
  __tree_end_node *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60 = 0x28;
  in_x8[1] = (long *)0x0;
  *in_x8 = (long *)(in_x8 + 1);
  in_x8[2] = (long *)0x0;
  uStack_4f = 0x6c;
  uStack_4e = 0x6d61;
  uStack_4c = 0x70;
  uStack_4b = 0;
  uStack_57 = 0x7261656e696c69;
  uStack_50 = 0x43;
  uStack_5f = 0x72656c706d6173;
  uStack_58 = 0x42;
                    /* try { // try from 00958b58 to 00958b7b has its CatchHandler @ 00958e78 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>>>
                        *)in_x8,&local_40,(basic_string *)&local_60);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT26(uStack_4a,
                     CONCAT15(uStack_4b,
                              CONCAT14(uStack_4c,CONCAT22(uStack_4e,CONCAT11(uStack_4f,uStack_50))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT71(uStack_57,uStack_58);
    uVar2 = CONCAT71(uStack_5f,local_60);
    uStack_58 = 0;
    uStack_57 = 0;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    local_60 = 0;
    uStack_5f = 0;
    puVar7[6] = uVar4;
    puVar7[5] = uVar3;
    puVar7[4] = uVar2;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = local_40;
    *pp_Var5 = (__tree_node_base *)puVar7;
    puVar6 = puVar7;
    if (**in_x8 != 0) {
      *in_x8 = (long *)**in_x8;
      puVar6 = (undefined8 *)*pp_Var5;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)in_x8[1],(__tree_node_base *)puVar6);
    in_x8[2] = (long *)((long)in_x8[2] + 1);
  }
  *(undefined4 *)(puVar7 + 7) = 0;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,
                                     CONCAT15(uStack_4b,
                                              CONCAT14(uStack_4c,
                                                       CONCAT22(uStack_4e,
                                                                CONCAT11(uStack_4f,uStack_50))))));
  }
  uStack_4c = 0;
  local_60 = 0x26;
  uStack_4f = 0x72;
  uStack_4e = 0x7061;
  uStack_57 = 0x7261656e696c69;
  uStack_50 = 0x57;
  uStack_5f = 0x72656c706d6173;
  uStack_58 = 0x42;
                    /* try { // try from 00958c18 to 00958c3b has its CatchHandler @ 00958e74 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>>>
                        *)in_x8,&local_40,(basic_string *)&local_60);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT26(uStack_4a,
                     CONCAT15(uStack_4b,
                              CONCAT14(uStack_4c,CONCAT22(uStack_4e,CONCAT11(uStack_4f,uStack_50))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT71(uStack_57,uStack_58);
    uVar2 = CONCAT71(uStack_5f,local_60);
    uStack_58 = 0;
    uStack_57 = 0;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    local_60 = 0;
    uStack_5f = 0;
    puVar7[6] = uVar4;
    puVar7[5] = uVar3;
    puVar7[4] = uVar2;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = local_40;
    *pp_Var5 = (__tree_node_base *)puVar7;
    puVar6 = puVar7;
    if (**in_x8 != 0) {
      *in_x8 = (long *)**in_x8;
      puVar6 = (undefined8 *)*pp_Var5;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)in_x8[1],(__tree_node_base *)puVar6);
    in_x8[2] = (long *)((long)in_x8[2] + 1);
  }
  *(undefined4 *)(puVar7 + 7) = 1;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,
                                     CONCAT15(uStack_4b,
                                              CONCAT14(uStack_4c,
                                                       CONCAT22(uStack_4e,
                                                                CONCAT11(uStack_4f,uStack_50))))));
  }
                    /* try { // try from 00958cb4 to 00958cbb has its CatchHandler @ 00958e64 */
  puVar7 = (undefined8 *)operator_new(0x20);
  uStack_50 = SUB81(puVar7,0);
  uStack_4f = (undefined)((ulong)puVar7 >> 8);
  uStack_4e = (undefined2)((ulong)puVar7 >> 0x10);
  uStack_4c = (undefined)((ulong)puVar7 >> 0x20);
  uStack_4b = (undefined)((ulong)puVar7 >> 0x28);
  uStack_4a = (undefined2)((ulong)puVar7 >> 0x30);
  *(undefined *)((long)puVar7 + 0x17) = 0;
  uStack_58 = 0x17;
  uStack_57 = 0;
  local_60 = 0x21;
  uStack_5f = 0;
  puVar7[1] = 0x6c6169726574614d;
  *puVar7 = 0x647261646e617473;
  *(undefined8 *)((long)puVar7 + 0xf) = 0x72656c706d61536c;
                    /* try { // try from 00958ce8 to 00958d0b has its CatchHandler @ 00958e70 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>>>
                        *)in_x8,&local_40,(basic_string *)&local_60);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT26(uStack_4a,
                     CONCAT15(uStack_4b,
                              CONCAT14(uStack_4c,CONCAT22(uStack_4e,CONCAT11(uStack_4f,uStack_50))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT71(uStack_57,uStack_58);
    uVar2 = CONCAT71(uStack_5f,local_60);
    uStack_58 = 0;
    uStack_57 = 0;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    local_60 = 0;
    uStack_5f = 0;
    puVar7[6] = uVar4;
    puVar7[5] = uVar3;
    puVar7[4] = uVar2;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = local_40;
    *pp_Var5 = (__tree_node_base *)puVar7;
    puVar6 = puVar7;
    if (**in_x8 != 0) {
      *in_x8 = (long *)**in_x8;
      puVar6 = (undefined8 *)*pp_Var5;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)in_x8[1],(__tree_node_base *)puVar6);
    in_x8[2] = (long *)((long)in_x8[2] + 1);
  }
  *(undefined4 *)(puVar7 + 7) = 2;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,
                                     CONCAT15(uStack_4b,
                                              CONCAT14(uStack_4c,
                                                       CONCAT22(uStack_4e,
                                                                CONCAT11(uStack_4f,uStack_50))))));
  }
  uStack_4f = 0;
  local_60 = 0x20;
  uStack_57 = 0x6f64616853706d;
  uStack_50 = 0x77;
  uStack_5f = 0x72656c706d6173;
  uStack_58 = 0x43;
                    /* try { // try from 00958da0 to 00958dc3 has its CatchHandler @ 00958e6c */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>>>
                        *)in_x8,&local_40,(basic_string *)&local_60);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT26(uStack_4a,
                     CONCAT15(uStack_4b,
                              CONCAT14(uStack_4c,CONCAT22(uStack_4e,CONCAT11(uStack_4f,uStack_50))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT71(uStack_57,uStack_58);
    uVar2 = CONCAT71(uStack_5f,local_60);
    uStack_58 = 0;
    uStack_57 = 0;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    local_60 = 0;
    uStack_5f = 0;
    puVar7[6] = uVar4;
    puVar7[5] = uVar3;
    puVar7[4] = uVar2;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = local_40;
    *pp_Var5 = (__tree_node_base *)puVar7;
    puVar6 = puVar7;
    if (**in_x8 != 0) {
      *in_x8 = (long *)**in_x8;
      puVar6 = (undefined8 *)*pp_Var5;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)in_x8[1],(__tree_node_base *)puVar6);
    in_x8[2] = (long *)((long)in_x8[2] + 1);
  }
  *(undefined4 *)(puVar7 + 7) = 3;
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_4a,
                                     CONCAT15(uStack_4b,
                                              CONCAT14(uStack_4c,
                                                       CONCAT22(uStack_4e,
                                                                CONCAT11(uStack_4f,uStack_50))))));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


