// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildTexturesMapPs
// Entry Point: 00957e2c
// Size: 3144 bytes
// Signature: undefined buildTexturesMapPs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MaterialShader::buildTexturesMapPs() */

void MaterialShader::buildTexturesMapPs(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  __tree_node_base **pp_Var5;
  undefined8 *puVar6;
  long **in_x8;
  undefined8 *puVar7;
  uint local_58;
  undefined uStack_54;
  undefined uStack_53;
  undefined uStack_52;
  undefined uStack_51;
  undefined uStack_50;
  undefined uStack_4f;
  undefined uStack_4e;
  undefined uStack_4d;
  undefined uStack_4c;
  undefined uStack_4b;
  undefined uStack_4a;
  undefined uStack_49;
  undefined uStack_48;
  undefined uStack_47;
  undefined uStack_46;
  undefined uStack_45;
  undefined uStack_44;
  undefined uStack_43;
  undefined uStack_42;
  undefined uStack_41;
  __tree_end_node *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = 0x7361620e;
  in_x8[1] = (long *)0x0;
  *in_x8 = (long *)(in_x8 + 1);
  in_x8[2] = (long *)0x0;
  uStack_54 = 0x65;
  uStack_53 = 0x4d;
  uStack_52 = 0x61;
  uStack_51 = 0x70;
  uStack_50 = 0;
                    /* try { // try from 00957e84 to 00957ea7 has its CatchHandler @ 00958ab0 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
                        *)in_x8,&local_40,&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT17(uStack_41,
                     CONCAT16(uStack_42,
                              CONCAT15(uStack_43,
                                       CONCAT14(uStack_44,
                                                CONCAT13(uStack_45,
                                                         CONCAT12(uStack_46,
                                                                  CONCAT11(uStack_47,uStack_48))))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,
                     CONCAT16(uStack_4a,
                              CONCAT15(uStack_4b,
                                       CONCAT14(uStack_4c,
                                                CONCAT13(uStack_4d,
                                                         CONCAT12(uStack_4e,
                                                                  CONCAT11(uStack_4f,uStack_50))))))
                    );
    uVar2 = CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,local_58))))
    ;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    uStack_41 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
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
    operator_delete((void *)CONCAT17(uStack_41,
                                     CONCAT16(uStack_42,
                                              CONCAT15(uStack_43,
                                                       CONCAT14(uStack_44,
                                                                CONCAT13(uStack_45,
                                                                         CONCAT12(uStack_46,
                                                                                  CONCAT11(uStack_47
                                                  ,uStack_48))))))));
  }
  uStack_4f = 0x70;
  uStack_4e = 0;
  local_58 = 0x726f6e12;
  uStack_54 = 0x6d;
  uStack_53 = 0x61;
  uStack_52 = 0x6c;
  uStack_51 = 0x4d;
  uStack_50 = 0x61;
                    /* try { // try from 00957f3c to 00957f5f has its CatchHandler @ 00958aac */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
                        *)in_x8,&local_40,&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT17(uStack_41,
                     CONCAT16(uStack_42,
                              CONCAT15(uStack_43,
                                       CONCAT14(uStack_44,
                                                CONCAT13(uStack_45,
                                                         CONCAT12(uStack_46,
                                                                  CONCAT11(uStack_47,uStack_48))))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,
                     CONCAT16(uStack_4a,
                              CONCAT15(uStack_4b,
                                       CONCAT14(uStack_4c,
                                                CONCAT13(uStack_4d,
                                                         CONCAT12(uStack_4e,
                                                                  CONCAT11(uStack_4f,uStack_50))))))
                    );
    uVar2 = CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,local_58))))
    ;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    uStack_41 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
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
    operator_delete((void *)CONCAT17(uStack_41,
                                     CONCAT16(uStack_42,
                                              CONCAT15(uStack_43,
                                                       CONCAT14(uStack_44,
                                                                CONCAT13(uStack_45,
                                                                         CONCAT12(uStack_46,
                                                                                  CONCAT11(uStack_47
                                                  ,uStack_48))))))));
  }
  uStack_4f = 0;
  local_58 = 0x6f6c6710;
  uStack_54 = 0x73;
  uStack_53 = 0x73;
  uStack_52 = 0x4d;
  uStack_51 = 0x61;
  uStack_50 = 0x70;
                    /* try { // try from 00957ff8 to 0095801b has its CatchHandler @ 00958aa8 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
                        *)in_x8,&local_40,&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT17(uStack_41,
                     CONCAT16(uStack_42,
                              CONCAT15(uStack_43,
                                       CONCAT14(uStack_44,
                                                CONCAT13(uStack_45,
                                                         CONCAT12(uStack_46,
                                                                  CONCAT11(uStack_47,uStack_48))))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,
                     CONCAT16(uStack_4a,
                              CONCAT15(uStack_4b,
                                       CONCAT14(uStack_4c,
                                                CONCAT13(uStack_4d,
                                                         CONCAT12(uStack_4e,
                                                                  CONCAT11(uStack_4f,uStack_50))))))
                    );
    uVar2 = CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,local_58))))
    ;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    uStack_41 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
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
    operator_delete((void *)CONCAT17(uStack_41,
                                     CONCAT16(uStack_42,
                                              CONCAT15(uStack_43,
                                                       CONCAT14(uStack_44,
                                                                CONCAT13(uStack_45,
                                                                         CONCAT12(uStack_46,
                                                                                  CONCAT11(uStack_47
                                                  ,uStack_48))))))));
  }
  uStack_4c = 0;
  uStack_4f = 0x4d;
  uStack_4e = 0x61;
  uStack_4d = 0x70;
  local_58 = 0x696d6516;
  uStack_54 = 0x73;
  uStack_53 = 0x73;
  uStack_52 = 0x69;
  uStack_51 = 0x76;
  uStack_50 = 0x65;
                    /* try { // try from 009580bc to 009580df has its CatchHandler @ 00958aa4 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
                        *)in_x8,&local_40,&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT17(uStack_41,
                     CONCAT16(uStack_42,
                              CONCAT15(uStack_43,
                                       CONCAT14(uStack_44,
                                                CONCAT13(uStack_45,
                                                         CONCAT12(uStack_46,
                                                                  CONCAT11(uStack_47,uStack_48))))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,
                     CONCAT16(uStack_4a,
                              CONCAT15(uStack_4b,
                                       CONCAT14(uStack_4c,
                                                CONCAT13(uStack_4d,
                                                         CONCAT12(uStack_4e,
                                                                  CONCAT11(uStack_4f,uStack_50))))))
                    );
    uVar2 = CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,local_58))))
    ;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    uStack_41 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
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
    operator_delete((void *)CONCAT17(uStack_41,
                                     CONCAT16(uStack_42,
                                              CONCAT15(uStack_43,
                                                       CONCAT14(uStack_44,
                                                                CONCAT13(uStack_45,
                                                                         CONCAT12(uStack_46,
                                                                                  CONCAT11(uStack_47
                                                  ,uStack_48))))))));
  }
  uStack_4a = 0;
  local_58 = 0x6665721a;
  uStack_54 = 0x6c;
  uStack_53 = 0x65;
  uStack_52 = 99;
  uStack_51 = 0x74;
  uStack_50 = 0x69;
  uStack_4f = 0x6f;
  uStack_4e = 0x6e;
  uStack_4d = 0x4d;
  uStack_4c = 0x61;
  uStack_4b = 0x70;
                    /* try { // try from 0095817c to 0095819f has its CatchHandler @ 00958aa0 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
                        *)in_x8,&local_40,&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT17(uStack_41,
                     CONCAT16(uStack_42,
                              CONCAT15(uStack_43,
                                       CONCAT14(uStack_44,
                                                CONCAT13(uStack_45,
                                                         CONCAT12(uStack_46,
                                                                  CONCAT11(uStack_47,uStack_48))))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,
                     CONCAT16(uStack_4a,
                              CONCAT15(uStack_4b,
                                       CONCAT14(uStack_4c,
                                                CONCAT13(uStack_4d,
                                                         CONCAT12(uStack_4e,
                                                                  CONCAT11(uStack_4f,uStack_50))))))
                    );
    uVar2 = CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,local_58))))
    ;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    uStack_41 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
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
    operator_delete((void *)CONCAT17(uStack_41,
                                     CONCAT16(uStack_42,
                                              CONCAT15(uStack_43,
                                                       CONCAT14(uStack_44,
                                                                CONCAT13(uStack_45,
                                                                         CONCAT12(uStack_46,
                                                                                  CONCAT11(uStack_47
                                                  ,uStack_48))))))));
  }
  uStack_4a = 0;
  local_58 = 0x6665721a;
  uStack_54 = 0x72;
  uStack_53 = 0x61;
  uStack_52 = 99;
  uStack_51 = 0x74;
  uStack_50 = 0x69;
  uStack_4f = 0x6f;
  uStack_4e = 0x6e;
  uStack_4d = 0x4d;
  uStack_4c = 0x61;
  uStack_4b = 0x70;
                    /* try { // try from 0095823c to 0095825f has its CatchHandler @ 00958a9c */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
                        *)in_x8,&local_40,&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT17(uStack_41,
                     CONCAT16(uStack_42,
                              CONCAT15(uStack_43,
                                       CONCAT14(uStack_44,
                                                CONCAT13(uStack_45,
                                                         CONCAT12(uStack_46,
                                                                  CONCAT11(uStack_47,uStack_48))))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,
                     CONCAT16(uStack_4a,
                              CONCAT15(uStack_4b,
                                       CONCAT14(uStack_4c,
                                                CONCAT13(uStack_4d,
                                                         CONCAT12(uStack_4e,
                                                                  CONCAT11(uStack_4f,uStack_50))))))
                    );
    uVar2 = CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,local_58))))
    ;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    uStack_41 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
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
  *(undefined4 *)(puVar7 + 7) = 5;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,
                                     CONCAT16(uStack_42,
                                              CONCAT15(uStack_43,
                                                       CONCAT14(uStack_44,
                                                                CONCAT13(uStack_45,
                                                                         CONCAT12(uStack_46,
                                                                                  CONCAT11(uStack_47
                                                  ,uStack_48))))))));
  }
  uStack_51 = 0;
  local_58 = 0x766e650c;
  uStack_54 = 0x4d;
  uStack_53 = 0x61;
  uStack_52 = 0x70;
                    /* try { // try from 009582f8 to 0095831b has its CatchHandler @ 00958a98 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
                        *)in_x8,&local_40,&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT17(uStack_41,
                     CONCAT16(uStack_42,
                              CONCAT15(uStack_43,
                                       CONCAT14(uStack_44,
                                                CONCAT13(uStack_45,
                                                         CONCAT12(uStack_46,
                                                                  CONCAT11(uStack_47,uStack_48))))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,
                     CONCAT16(uStack_4a,
                              CONCAT15(uStack_4b,
                                       CONCAT14(uStack_4c,
                                                CONCAT13(uStack_4d,
                                                         CONCAT12(uStack_4e,
                                                                  CONCAT11(uStack_4f,uStack_50))))))
                    );
    uVar2 = CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,local_58))))
    ;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    uStack_41 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
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
  *(undefined4 *)(puVar7 + 7) = 6;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,
                                     CONCAT16(uStack_42,
                                              CONCAT15(uStack_43,
                                                       CONCAT14(uStack_44,
                                                                CONCAT13(uStack_45,
                                                                         CONCAT12(uStack_46,
                                                                                  CONCAT11(uStack_47
                                                  ,uStack_48))))))));
  }
  uStack_4a = 0;
  local_58 = 0x6563731a;
  uStack_54 = 0x6e;
  uStack_53 = 0x65;
  uStack_52 = 0x44;
  uStack_51 = 0x65;
  uStack_50 = 0x70;
  uStack_4f = 0x74;
  uStack_4e = 0x68;
  uStack_4d = 0x4d;
  uStack_4c = 0x61;
  uStack_4b = 0x70;
                    /* try { // try from 009583b8 to 009583db has its CatchHandler @ 00958a94 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
                        *)in_x8,&local_40,&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT17(uStack_41,
                     CONCAT16(uStack_42,
                              CONCAT15(uStack_43,
                                       CONCAT14(uStack_44,
                                                CONCAT13(uStack_45,
                                                         CONCAT12(uStack_46,
                                                                  CONCAT11(uStack_47,uStack_48))))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,
                     CONCAT16(uStack_4a,
                              CONCAT15(uStack_4b,
                                       CONCAT14(uStack_4c,
                                                CONCAT13(uStack_4d,
                                                         CONCAT12(uStack_4e,
                                                                  CONCAT11(uStack_4f,uStack_50))))))
                    );
    uVar2 = CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,local_58))))
    ;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    uStack_41 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
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
  *(undefined4 *)(puVar7 + 7) = 7;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,
                                     CONCAT16(uStack_42,
                                              CONCAT15(uStack_43,
                                                       CONCAT14(uStack_44,
                                                                CONCAT13(uStack_45,
                                                                         CONCAT12(uStack_46,
                                                                                  CONCAT11(uStack_47
                                                  ,uStack_48))))))));
  }
  uStack_49 = 0;
  local_58 = 0x7065641c;
  uStack_54 = 0x74;
  uStack_53 = 0x68;
  uStack_52 = 0x53;
  uStack_51 = 0x68;
  uStack_50 = 0x61;
  uStack_4f = 100;
  uStack_4e = 0x6f;
  uStack_4d = 0x77;
  uStack_4c = 0x4d;
  uStack_4b = 0x61;
  uStack_4a = 0x70;
                    /* try { // try from 00958478 to 0095849b has its CatchHandler @ 00958a90 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
                        *)in_x8,&local_40,&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT17(uStack_41,
                     CONCAT16(uStack_42,
                              CONCAT15(uStack_43,
                                       CONCAT14(uStack_44,
                                                CONCAT13(uStack_45,
                                                         CONCAT12(uStack_46,
                                                                  CONCAT11(uStack_47,uStack_48))))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,
                     CONCAT16(uStack_4a,
                              CONCAT15(uStack_4b,
                                       CONCAT14(uStack_4c,
                                                CONCAT13(uStack_4d,
                                                         CONCAT12(uStack_4e,
                                                                  CONCAT11(uStack_4f,uStack_50))))))
                    );
    uVar2 = CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,local_58))))
    ;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    uStack_41 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
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
  *(undefined4 *)(puVar7 + 7) = 8;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,
                                     CONCAT16(uStack_42,
                                              CONCAT15(uStack_43,
                                                       CONCAT14(uStack_44,
                                                                CONCAT13(uStack_45,
                                                                         CONCAT12(uStack_46,
                                                                                  CONCAT11(uStack_47
                                                  ,uStack_48))))))));
  }
  uStack_4f = 0x72;
  uStack_4e = 0x69;
  uStack_4d = 100;
  uStack_4c = 0x42;
  uStack_4b = 0x75;
  uStack_4a = 0x66;
  uStack_49 = 0x66;
  uStack_48 = 0x65;
  local_58 = 0x756c6322;
  uStack_54 = 0x73;
  uStack_53 = 0x74;
  uStack_52 = 0x65;
  uStack_51 = 0x72;
  uStack_50 = 0x47;
  uStack_47 = 0x72;
  uStack_46 = 0;
                    /* try { // try from 00958534 to 00958557 has its CatchHandler @ 00958a8c */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
                        *)in_x8,&local_40,&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT17(uStack_41,
                     CONCAT16(uStack_42,
                              CONCAT15(uStack_43,
                                       CONCAT14(uStack_44,
                                                CONCAT13(uStack_45,
                                                         CONCAT12(uStack_46,
                                                                  CONCAT11(uStack_47,uStack_48))))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,
                     CONCAT16(uStack_4a,
                              CONCAT15(uStack_4b,
                                       CONCAT14(uStack_4c,
                                                CONCAT13(uStack_4d,
                                                         CONCAT12(uStack_4e,
                                                                  CONCAT11(uStack_4f,uStack_50))))))
                    );
    uVar2 = CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,local_58))))
    ;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    uStack_41 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
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
  *(undefined4 *)(puVar7 + 7) = 9;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,
                                     CONCAT16(uStack_42,
                                              CONCAT15(uStack_43,
                                                       CONCAT14(uStack_44,
                                                                CONCAT13(uStack_45,
                                                                         CONCAT12(uStack_46,
                                                                                  CONCAT11(uStack_47
                                                  ,uStack_48))))))));
  }
  uStack_45 = 0;
  uStack_47 = 0x65;
  uStack_46 = 0x72;
  uStack_4f = 0x65;
  uStack_4e = 0x70;
  uStack_4d = 0x74;
  uStack_4c = 0x68;
  uStack_4b = 0x42;
  uStack_4a = 0x75;
  uStack_49 = 0x66;
  uStack_48 = 0x66;
  local_58 = 0x756c6324;
  uStack_54 = 0x73;
  uStack_53 = 0x74;
  uStack_52 = 0x65;
  uStack_51 = 0x72;
  uStack_50 = 0x44;
                    /* try { // try from 009585f4 to 00958617 has its CatchHandler @ 00958a88 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
                        *)in_x8,&local_40,&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT17(uStack_41,
                     CONCAT16(uStack_42,
                              CONCAT15(uStack_43,
                                       CONCAT14(uStack_44,
                                                CONCAT13(uStack_45,
                                                         CONCAT12(uStack_46,
                                                                  CONCAT11(uStack_47,uStack_48))))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,
                     CONCAT16(uStack_4a,
                              CONCAT15(uStack_4b,
                                       CONCAT14(uStack_4c,
                                                CONCAT13(uStack_4d,
                                                         CONCAT12(uStack_4e,
                                                                  CONCAT11(uStack_4f,uStack_50))))))
                    );
    uVar2 = CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,local_58))))
    ;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    uStack_41 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
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
  *(undefined4 *)(puVar7 + 7) = 10;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,
                                     CONCAT16(uStack_42,
                                              CONCAT15(uStack_43,
                                                       CONCAT14(uStack_44,
                                                                CONCAT13(uStack_45,
                                                                         CONCAT12(uStack_46,
                                                                                  CONCAT11(uStack_47
                                                  ,uStack_48))))))));
  }
  uStack_44 = 0;
  uStack_47 = 0x66;
  uStack_46 = 0x65;
  uStack_45 = 0x72;
  uStack_4f = 0x69;
  uStack_4e = 0x67;
  uStack_4d = 0x68;
  uStack_4c = 0x74;
  uStack_4b = 0x73;
  uStack_4a = 0x42;
  uStack_49 = 0x75;
  uStack_48 = 0x66;
  local_58 = 0x756c6326;
  uStack_54 = 0x73;
  uStack_53 = 0x74;
  uStack_52 = 0x65;
  uStack_51 = 0x72;
  uStack_50 = 0x4c;
                    /* try { // try from 009586b8 to 009586db has its CatchHandler @ 00958a84 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
                        *)in_x8,&local_40,&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT17(uStack_41,
                     CONCAT16(uStack_42,
                              CONCAT15(uStack_43,
                                       CONCAT14(uStack_44,
                                                CONCAT13(uStack_45,
                                                         CONCAT12(uStack_46,
                                                                  CONCAT11(uStack_47,uStack_48))))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,
                     CONCAT16(uStack_4a,
                              CONCAT15(uStack_4b,
                                       CONCAT14(uStack_4c,
                                                CONCAT13(uStack_4d,
                                                         CONCAT12(uStack_4e,
                                                                  CONCAT11(uStack_4f,uStack_50))))))
                    );
    uVar2 = CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,local_58))))
    ;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    uStack_41 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
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
  *(undefined4 *)(puVar7 + 7) = 0xb;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,
                                     CONCAT16(uStack_42,
                                              CONCAT15(uStack_43,
                                                       CONCAT14(uStack_44,
                                                                CONCAT13(uStack_45,
                                                                         CONCAT12(uStack_46,
                                                                                  CONCAT11(uStack_47
                                                  ,uStack_48))))))));
  }
  uStack_50 = 0;
  local_58 = 0x6173730e;
  uStack_54 = 0x6f;
  uStack_53 = 0x4d;
  uStack_52 = 0x61;
  uStack_51 = 0x70;
                    /* try { // try from 00958778 to 0095879b has its CatchHandler @ 00958a80 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
                        *)in_x8,&local_40,&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT17(uStack_41,
                     CONCAT16(uStack_42,
                              CONCAT15(uStack_43,
                                       CONCAT14(uStack_44,
                                                CONCAT13(uStack_45,
                                                         CONCAT12(uStack_46,
                                                                  CONCAT11(uStack_47,uStack_48))))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,
                     CONCAT16(uStack_4a,
                              CONCAT15(uStack_4b,
                                       CONCAT14(uStack_4c,
                                                CONCAT13(uStack_4d,
                                                         CONCAT12(uStack_4e,
                                                                  CONCAT11(uStack_4f,uStack_50))))))
                    );
    uVar2 = CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,local_58))))
    ;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    uStack_41 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
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
  *(undefined4 *)(puVar7 + 7) = 0xc;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,
                                     CONCAT16(uStack_42,
                                              CONCAT15(uStack_43,
                                                       CONCAT14(uStack_44,
                                                                CONCAT13(uStack_45,
                                                                         CONCAT12(uStack_46,
                                                                                  CONCAT11(uStack_47
                                                  ,uStack_48))))))));
  }
  uStack_48 = 0;
  local_58 = 0x706c611e;
  uStack_54 = 0x68;
  uStack_53 = 0x61;
  uStack_52 = 0x4d;
  uStack_51 = 0x61;
  uStack_50 = 0x73;
  uStack_4f = 0x6b;
  uStack_4e = 0x42;
  uStack_4d = 0x75;
  uStack_4c = 0x66;
  uStack_4b = 0x66;
  uStack_4a = 0x65;
  uStack_49 = 0x72;
                    /* try { // try from 00958838 to 0095885b has its CatchHandler @ 00958a7c */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
                        *)in_x8,&local_40,&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT17(uStack_41,
                     CONCAT16(uStack_42,
                              CONCAT15(uStack_43,
                                       CONCAT14(uStack_44,
                                                CONCAT13(uStack_45,
                                                         CONCAT12(uStack_46,
                                                                  CONCAT11(uStack_47,uStack_48))))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,
                     CONCAT16(uStack_4a,
                              CONCAT15(uStack_4b,
                                       CONCAT14(uStack_4c,
                                                CONCAT13(uStack_4d,
                                                         CONCAT12(uStack_4e,
                                                                  CONCAT11(uStack_4f,uStack_50))))))
                    );
    uVar2 = CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,local_58))))
    ;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    uStack_41 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
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
  *(undefined4 *)(puVar7 + 7) = 0xd;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,
                                     CONCAT16(uStack_42,
                                              CONCAT15(uStack_43,
                                                       CONCAT14(uStack_44,
                                                                CONCAT13(uStack_45,
                                                                         CONCAT12(uStack_46,
                                                                                  CONCAT11(uStack_47
                                                  ,uStack_48))))))));
  }
  uStack_42 = 0;
  uStack_4f = 0x44;
  uStack_4e = 0x65;
  uStack_4d = 0x6e;
  uStack_4c = 0x73;
  uStack_4b = 0x69;
  local_58 = 0x6972742a;
  uStack_54 = 0x61;
  uStack_53 = 0x6e;
  uStack_52 = 0x67;
  uStack_51 = 0x6c;
  uStack_50 = 0x65;
  uStack_4a = 0x74;
  uStack_49 = 0x79;
  uStack_48 = 0x42;
  uStack_47 = 0x75;
  uStack_46 = 0x66;
  uStack_45 = 0x66;
  uStack_44 = 0x65;
  uStack_43 = 0x72;
                    /* try { // try from 009588f8 to 0095891b has its CatchHandler @ 00958a78 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
                        *)in_x8,&local_40,&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT17(uStack_41,
                     CONCAT16(uStack_42,
                              CONCAT15(uStack_43,
                                       CONCAT14(uStack_44,
                                                CONCAT13(uStack_45,
                                                         CONCAT12(uStack_46,
                                                                  CONCAT11(uStack_47,uStack_48))))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,
                     CONCAT16(uStack_4a,
                              CONCAT15(uStack_4b,
                                       CONCAT14(uStack_4c,
                                                CONCAT13(uStack_4d,
                                                         CONCAT12(uStack_4e,
                                                                  CONCAT11(uStack_4f,uStack_50))))))
                    );
    uVar2 = CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,local_58))))
    ;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    uStack_41 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
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
  *(undefined4 *)(puVar7 + 7) = 0xe;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,
                                     CONCAT16(uStack_42,
                                              CONCAT15(uStack_43,
                                                       CONCAT14(uStack_44,
                                                                CONCAT13(uStack_45,
                                                                         CONCAT12(uStack_46,
                                                                                  CONCAT11(uStack_47
                                                  ,uStack_48))))))));
  }
  uStack_47 = 0;
  uStack_4f = 0x72;
  uStack_4e = 0x61;
  uStack_4d = 0x6d;
  uStack_4c = 0x65;
  uStack_4b = 0x74;
  uStack_4a = 0x65;
  uStack_49 = 0x72;
  uStack_48 = 0x73;
  local_58 = 0x6a626f20;
  uStack_54 = 0x65;
  uStack_53 = 99;
  uStack_52 = 0x74;
  uStack_51 = 0x50;
  uStack_50 = 0x61;
                    /* try { // try from 009589b0 to 009589d3 has its CatchHandler @ 00958a74 */
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
                        *)in_x8,&local_40,&local_58);
  puVar7 = (undefined8 *)*pp_Var5;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x40);
    uVar4 = CONCAT17(uStack_41,
                     CONCAT16(uStack_42,
                              CONCAT15(uStack_43,
                                       CONCAT14(uStack_44,
                                                CONCAT13(uStack_45,
                                                         CONCAT12(uStack_46,
                                                                  CONCAT11(uStack_47,uStack_48))))))
                    );
    *(undefined4 *)(puVar7 + 7) = 0;
    uVar3 = CONCAT17(uStack_49,
                     CONCAT16(uStack_4a,
                              CONCAT15(uStack_4b,
                                       CONCAT14(uStack_4c,
                                                CONCAT13(uStack_4d,
                                                         CONCAT12(uStack_4e,
                                                                  CONCAT11(uStack_4f,uStack_50))))))
                    );
    uVar2 = CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,local_58))))
    ;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4e = 0;
    uStack_4d = 0;
    uStack_4c = 0;
    uStack_4b = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    uStack_48 = 0;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_45 = 0;
    uStack_44 = 0;
    uStack_43 = 0;
    uStack_42 = 0;
    uStack_41 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_53 = 0;
    uStack_52 = 0;
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
  *(undefined4 *)(puVar7 + 7) = 0xf;
  if ((local_58 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_41,
                                     CONCAT16(uStack_42,
                                              CONCAT15(uStack_43,
                                                       CONCAT14(uStack_44,
                                                                CONCAT13(uStack_45,
                                                                         CONCAT12(uStack_46,
                                                                                  CONCAT11(uStack_47
                                                  ,uStack_48))))))));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


