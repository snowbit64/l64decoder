// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildTexturesMapVs
// Entry Point: 00958ea8
// Size: 1048 bytes
// Signature: undefined buildTexturesMapVs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MaterialShader::buildTexturesMapVs() */

void MaterialShader::buildTexturesMapVs(void)

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
  undefined6 uStack_57;
  undefined uStack_51;
  undefined uStack_50;
  undefined6 uStack_4f;
  undefined uStack_49;
  undefined uStack_48;
  undefined uStack_47;
  undefined uStack_46;
  undefined uStack_45;
  uint uStack_44;
  __tree_end_node *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = 0x26;
  in_x8[1] = (long *)0x0;
  *in_x8 = (long *)(in_x8 + 1);
  in_x8[2] = (long *)0x0;
  uStack_47 = 0x4d;
  uStack_46 = 0x61;
  uStack_45 = 0x70;
  uStack_44 = uStack_44 & 0xffffff00;
  uStack_4f = 0x6974616d696e;
  uStack_49 = 0x6f;
  uStack_48 = 0x6e;
  uStack_57 = 0x6761696c6f66;
  uStack_51 = 0x65;
  uStack_50 = 0x41;
                    /* try { // try from 00958f04 to 00958f27 has its CatchHandler @ 009592d0 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>>>
                        *)in_x8,&local_40,(basic_string *)&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT44(uStack_44,CONCAT13(uStack_45,CONCAT12(uStack_46,CONCAT11(uStack_47,uStack_48)))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,CONCAT61(uStack_4f,uStack_50));
    uVar2 = CONCAT17(uStack_51,CONCAT61(uStack_57,local_58));
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    local_58 = 0;
    uStack_57 = 0;
    uStack_51 = 0;
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
    operator_delete((void *)CONCAT44(uStack_44,
                                     CONCAT13(uStack_45,
                                              CONCAT12(uStack_46,CONCAT11(uStack_47,uStack_48)))));
  }
  uStack_44 = uStack_44 & 0xffffff00;
  local_58 = 0x26;
  uStack_47 = 0x66;
  uStack_46 = 0x65;
  uStack_45 = 0x72;
  uStack_4f = 0x426572757478;
  uStack_49 = 0x75;
  uStack_48 = 0x66;
  uStack_57 = 0x786574726576;
  uStack_51 = 0x54;
  uStack_50 = 0x65;
                    /* try { // try from 00958fc4 to 00958fe7 has its CatchHandler @ 009592cc */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>>>
                        *)in_x8,&local_40,(basic_string *)&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT44(uStack_44,CONCAT13(uStack_45,CONCAT12(uStack_46,CONCAT11(uStack_47,uStack_48)))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,CONCAT61(uStack_4f,uStack_50));
    uVar2 = CONCAT17(uStack_51,CONCAT61(uStack_57,local_58));
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    local_58 = 0;
    uStack_57 = 0;
    uStack_51 = 0;
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
    operator_delete((void *)CONCAT44(uStack_44,
                                     CONCAT13(uStack_45,
                                              CONCAT12(uStack_46,CONCAT11(uStack_47,uStack_48)))));
  }
  uStack_45 = 0;
  local_58 = 0x24;
  uStack_47 = 0x65;
  uStack_46 = 0x72;
  uStack_4f = 0x754261746144;
  uStack_49 = 0x66;
  uStack_48 = 0x66;
  uStack_57 = 0x6e6174736e69;
  uStack_51 = 99;
  uStack_50 = 0x65;
                    /* try { // try from 00959084 to 009590a7 has its CatchHandler @ 009592c8 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>>>
                        *)in_x8,&local_40,(basic_string *)&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT44(uStack_44,CONCAT13(uStack_45,CONCAT12(uStack_46,CONCAT11(uStack_47,uStack_48)))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,CONCAT61(uStack_4f,uStack_50));
    uVar2 = CONCAT17(uStack_51,CONCAT61(uStack_57,local_58));
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    local_58 = 0;
    uStack_57 = 0;
    uStack_51 = 0;
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
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_44,
                                     CONCAT13(uStack_45,
                                              CONCAT12(uStack_46,CONCAT11(uStack_47,uStack_48)))));
  }
  uStack_49 = 0;
  local_58 = 0x1c;
  uStack_57 = 0x6e6174736e69;
  uStack_51 = 99;
  uStack_50 = 0x65;
  uStack_4f = 0x6d6165727453;
                    /* try { // try from 00959144 to 00959167 has its CatchHandler @ 009592c4 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>>>
                        *)in_x8,&local_40,(basic_string *)&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT44(uStack_44,CONCAT13(uStack_45,CONCAT12(uStack_46,CONCAT11(uStack_47,uStack_48)))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,CONCAT61(uStack_4f,uStack_50));
    uVar2 = CONCAT17(uStack_51,CONCAT61(uStack_57,local_58));
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    local_58 = 0;
    uStack_57 = 0;
    uStack_51 = 0;
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
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_44,
                                     CONCAT13(uStack_45,
                                              CONCAT12(uStack_46,CONCAT11(uStack_47,uStack_48)))));
  }
  uStack_47 = 0;
  local_58 = 0x20;
  uStack_4f = 0x6574656d6172;
  uStack_49 = 0x72;
  uStack_48 = 0x73;
  uStack_57 = 0x7463656a626f;
  uStack_51 = 0x50;
  uStack_50 = 0x61;
                    /* try { // try from 009591fc to 0095921f has its CatchHandler @ 009592c0 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>>>
                        *)in_x8,&local_40,(basic_string *)&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT44(uStack_44,CONCAT13(uStack_45,CONCAT12(uStack_46,CONCAT11(uStack_47,uStack_48)))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,CONCAT61(uStack_4f,uStack_50));
    uVar2 = CONCAT17(uStack_51,CONCAT61(uStack_57,local_58));
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    local_58 = 0;
    uStack_57 = 0;
    uStack_51 = 0;
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
  *(undefined4 *)(puVar7 + 7) = 4;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_44,
                                     CONCAT13(uStack_45,
                                              CONCAT12(uStack_46,CONCAT11(uStack_47,uStack_48)))));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


