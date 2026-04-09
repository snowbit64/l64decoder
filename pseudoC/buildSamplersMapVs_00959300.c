// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildSamplersMapVs
// Entry Point: 00959300
// Size: 480 bytes
// Signature: undefined buildSamplersMapVs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MaterialShader::buildSamplersMapVs() */

void MaterialShader::buildSamplersMapVs(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  __tree_node_base **pp_Var5;
  undefined8 *puVar6;
  long **in_x8;
  undefined8 *puVar7;
  byte local_58;
  undefined7 uStack_57;
  undefined uStack_50;
  undefined7 uStack_4f;
  undefined4 uStack_48;
  undefined uStack_44;
  undefined uStack_43;
  undefined2 uStack_42;
  __tree_end_node *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = 0x28;
  in_x8[1] = (long *)0x0;
  *in_x8 = (long *)(in_x8 + 1);
  in_x8[2] = (long *)0x0;
  uStack_44 = 0x70;
  uStack_43 = 0;
  uStack_4f = 0x7261656e696c69;
  uStack_48 = 0x6d616c43;
  uStack_57 = 0x72656c706d6173;
  uStack_50 = 0x42;
                    /* try { // try from 0095935c to 0095937f has its CatchHandler @ 009594e4 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_SAMPLERS>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_SAMPLERS>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_SAMPLERS>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_SAMPLERS>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_SAMPLERS>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_SAMPLERS>>>
                        *)in_x8,&local_40,(basic_string *)&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT14(uStack_44,uStack_48)));
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT71(uStack_4f,uStack_50);
    uVar2 = CONCAT71(uStack_57,local_58);
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    local_58 = 0;
    uStack_57 = 0;
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
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT14(uStack_44,uStack_48))));
  }
  uStack_44 = 0;
  local_58 = 0x26;
  uStack_4f = 0x7261656e696c69;
  uStack_48 = 0x70617257;
  uStack_57 = 0x72656c706d6173;
  uStack_50 = 0x42;
                    /* try { // try from 0095941c to 0095943f has its CatchHandler @ 009594e0 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_SAMPLERS>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_SAMPLERS>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_SAMPLERS>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_SAMPLERS>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_SAMPLERS>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_SAMPLERS>>>
                        *)in_x8,&local_40,(basic_string *)&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT14(uStack_44,uStack_48)));
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT71(uStack_4f,uStack_50);
    uVar2 = CONCAT71(uStack_57,local_58);
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    local_58 = 0;
    uStack_57 = 0;
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
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_42,CONCAT15(uStack_43,CONCAT14(uStack_44,uStack_48))));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


