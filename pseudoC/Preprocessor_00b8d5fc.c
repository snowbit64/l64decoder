// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Preprocessor
// Entry Point: 00b8d5fc
// Size: 3372 bytes
// Signature: undefined __thiscall Preprocessor(Preprocessor * this, PreprocessorDesc * param_1)


/* Preprocessor::Preprocessor(PreprocessorDesc const&) */

void __thiscall Preprocessor::Preprocessor(Preprocessor *this,PreprocessorDesc *param_1)

{
  undefined4 uVar1;
  Preprocessor PVar2;
  undefined2 uVar3;
  long lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  __tree_node_base **pp_Var7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  void **ppvVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  byte local_78;
  undefined2 uStack_77;
  undefined uStack_75;
  undefined uStack_74;
  undefined uStack_73;
  undefined uStack_72;
  undefined uStack_71;
  undefined uStack_70;
  undefined uStack_6f;
  undefined6 uStack_6e;
  void *local_68;
  __tree_end_node *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  *(undefined8 *)(this + 0x20) = 0;
  *(Preprocessor **)(this + 0x18) = this + 0x20;
  *(undefined8 *)(this + 8) = 0;
  *(Preprocessor **)this = this + 8;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  this[0x131] = (Preprocessor)0x0;
                    /* try { // try from 00b8d660 to 00b8d7bf has its CatchHandler @ 00b8e378 */
  puVar5 = (undefined8 *)operator_new(0x108);
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  uVar14 = *(undefined8 *)(param_1 + 0x78);
  uVar13 = *(undefined8 *)(param_1 + 0x70);
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  uVar18 = *(undefined8 *)(param_1 + 0x48);
  uVar17 = *(undefined8 *)(param_1 + 0x40);
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  uVar15 = *(undefined8 *)(param_1 + 0x50);
  puVar5[5] = uVar10;
  puVar5[4] = uVar9;
  puVar5[7] = uVar14;
  puVar5[6] = uVar13;
  uVar10 = *(undefined8 *)(param_1 + 0xb0);
  uVar9 = *(undefined8 *)(param_1 + 0xa8);
  puVar5[1] = uVar18;
  *puVar5 = uVar17;
  puVar5[3] = uVar16;
  puVar5[2] = uVar15;
  uVar16 = *(undefined8 *)(param_1 + 0xa0);
  uVar15 = *(undefined8 *)(param_1 + 0x98);
  uVar14 = *(undefined8 *)(param_1 + 0xc0);
  uVar13 = *(undefined8 *)(param_1 + 0xb8);
  puVar5[0xe] = uVar10;
  puVar5[0xd] = uVar9;
  uVar9 = *(undefined8 *)(param_1 + 0x80);
  puVar5[0xc] = uVar16;
  puVar5[0xb] = uVar15;
  uVar10 = *(undefined8 *)(param_1 + 200);
  uVar18 = *(undefined8 *)(param_1 + 0xd8);
  uVar17 = *(undefined8 *)(param_1 + 0xd0);
  uVar16 = *(undefined8 *)(param_1 + 0xe8);
  uVar15 = *(undefined8 *)(param_1 + 0xe0);
  puVar5[0x10] = uVar14;
  puVar5[0xf] = uVar13;
  puVar5[8] = uVar9;
  puVar5[0x11] = uVar10;
  puVar5[0x16] = uVar18;
  puVar5[0x15] = uVar17;
  uVar10 = *(undefined8 *)(param_1 + 0x90);
  uVar9 = *(undefined8 *)(param_1 + 0x88);
  puVar5[0x18] = uVar16;
  puVar5[0x17] = uVar15;
  puVar5[10] = uVar10;
  puVar5[9] = uVar9;
  uVar13 = *(undefined8 *)(param_1 + 0xf0);
  uVar10 = *(undefined8 *)(param_1 + 0x108);
  uVar9 = *(undefined8 *)(param_1 + 0x100);
  puVar5[0x1a] = *(undefined8 *)(param_1 + 0xf8);
  puVar5[0x19] = uVar13;
  puVar5[0x1c] = uVar10;
  puVar5[0x1b] = uVar9;
  uVar13 = *(undefined8 *)(param_1 + 0x110);
  uVar10 = *(undefined8 *)(param_1 + 0x128);
  uVar9 = *(undefined8 *)(param_1 + 0x120);
  puVar5[0x1e] = *(undefined8 *)(param_1 + 0x118);
  puVar5[0x1d] = uVar13;
  puVar5[0x20] = uVar10;
  puVar5[0x1f] = uVar9;
  puVar8 = puVar5 + 0x12;
  *puVar8 = 0;
  if (puVar8 != (undefined8 *)(param_1 + 0x130)) {
    std::__ndk1::vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>>::
    assign<Preprocessor::Comment*>
              ((vector<Preprocessor::Comment,std::__ndk1::allocator<Preprocessor::Comment>> *)puVar8
               ,*(Comment **)(param_1 + 0x130),*(Comment **)(param_1 + 0x138));
  }
  *(undefined8 **)(this + 0x30) = puVar5;
  pvVar6 = operator_new(0x80);
  *(void **)(this + 0x38) = pvVar6;
  *(undefined8 *)((long)pvVar6 + 0x30) = 0;
  *(undefined8 *)((long)pvVar6 + 0x38) = 0;
  uVar9 = *(undefined8 *)param_1;
  *(undefined8 *)((long)pvVar6 + 0x28) = 0;
  *(undefined8 *)((long)pvVar6 + 0x20) = uVar9;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (undefined8 *)((long)pvVar6 + 0x28),(basic_string *)(param_1 + 8));
  lVar11 = *(long *)(this + 0x38);
  *(undefined8 *)(lVar11 + 0x40) = 0x100000001;
  puVar5 = (undefined8 *)operator_new(0x30);
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[2] = 0;
  *(undefined8 **)(lVar11 + 0x78) = puVar5;
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  *puVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar5[1] = uVar9;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (puVar5 + 2),(basic_string *)(lVar11 + 0x28));
  ppvVar12 = *(void ***)(this + 0x38);
  pvVar6 = ppvVar12[0xf];
  *(undefined4 *)((long)pvVar6 + 0x28) = *(undefined4 *)(ppvVar12 + 8);
  uVar3 = *(undefined2 *)(param_1 + 0x148);
  *(undefined *)((long)pvVar6 + 0x2e) = 1;
  *(undefined2 *)((long)pvVar6 + 0x2c) = uVar3;
  *(undefined4 *)(ppvVar12 + 0xb) = 0;
  ppvVar12[0xc] = (void *)0x0;
  if (*(long *)param_1 == 0) {
    pvVar6 = *(void **)(param_1 + 0x20);
    if (pvVar6 == (void *)0x0) {
      printError(this,"no input data set");
      pvVar6 = *(void **)(param_1 + 0x20);
      ppvVar12 = *(void ***)(this + 0x38);
    }
    *ppvVar12 = pvVar6;
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(ppvVar12 + 2) = 0;
    ppvVar12[1] = (void *)0x0;
    *(undefined4 *)((long)ppvVar12 + 0x14) = uVar1;
    *(undefined4 *)(ppvVar12 + 3) = 0;
  }
  else {
    *(undefined4 *)(ppvVar12 + 3) = 100;
    ppvVar12[2] = (void *)0x64;
    pvVar6 = operator_new__(100);
    *ppvVar12 = pvVar6;
    ppvVar12[1] = pvVar6;
  }
  *(undefined2 *)((long)ppvVar12 + 0x4c) = 0;
  *(undefined4 *)(ppvVar12 + 0xd) = 0;
  ppvVar12[0xe] = (void *)0x0;
  *(undefined *)((long)ppvVar12 + 0x1c) = 1;
  *(undefined *)((long)ppvVar12 + 0x54) = 0;
  *(undefined4 *)(ppvVar12 + 9) = 0;
  *(undefined4 *)(ppvVar12 + 10) = 2;
  PVar2 = *(Preprocessor *)(param_1 + 0x14b);
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 300) = 0;
  this[0x130] = PVar2;
  this[0x60] = *(Preprocessor *)(param_1 + 0x14a);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x150);
  if (*(int *)(param_1 + 0x14c) != 1) {
    if (*(int *)(param_1 + 0x14c) != 0) goto LAB_00b8e2f8;
    uStack_71 = 0;
    local_78 = 0xc;
    uStack_77 = 0x6564;
    uStack_75 = 0x66;
    uStack_74 = 0x69;
    uStack_73 = 0x6e;
    uStack_72 = 0x65;
                    /* try { // try from 00b8d850 to 00b8d873 has its CatchHandler @ 00b8e350 */
    pp_Var7 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
                          *)this,&local_60,(basic_string *)&local_78);
    puVar5 = (undefined8 *)*pp_Var7;
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)operator_new(0x40);
      pvVar6 = local_68;
      *puVar5 = 0;
      puVar5[1] = 0;
      uVar10 = CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70));
      uVar9 = CONCAT17(uStack_71,
                       CONCAT16(uStack_72,
                                CONCAT15(uStack_73,
                                         CONCAT14(uStack_74,
                                                  CONCAT13(uStack_75,CONCAT21(uStack_77,local_78))))
                               ));
      local_78 = 0;
      uStack_77 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_72 = 0;
      uStack_71 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6e = 0;
      local_68 = (void *)0x0;
      puVar5[6] = pvVar6;
      puVar5[7] = 0;
      puVar5[5] = uVar10;
      puVar5[4] = uVar9;
      puVar5[2] = local_60;
      *pp_Var7 = (__tree_node_base *)puVar5;
      puVar8 = puVar5;
      if (**(long **)this != 0) {
        *(long *)this = **(long **)this;
        puVar8 = (undefined8 *)*pp_Var7;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar8);
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    }
    puVar5[7] = &PreprocessorMetaMacroDefine::m_instance;
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    local_78 = 10;
    uStack_77 = 0x6e75;
    uStack_75 = 100;
    uStack_74 = 0x65;
    uStack_73 = 0x66;
    uStack_72 = 0;
                    /* try { // try from 00b8d908 to 00b8d92b has its CatchHandler @ 00b8e34c */
    pp_Var7 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
                          *)this,&local_60,(basic_string *)&local_78);
    puVar5 = (undefined8 *)*pp_Var7;
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)operator_new(0x40);
      pvVar6 = local_68;
      *puVar5 = 0;
      puVar5[1] = 0;
      uVar10 = CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70));
      uVar9 = CONCAT17(uStack_71,
                       CONCAT16(uStack_72,
                                CONCAT15(uStack_73,
                                         CONCAT14(uStack_74,
                                                  CONCAT13(uStack_75,CONCAT21(uStack_77,local_78))))
                               ));
      local_78 = 0;
      uStack_77 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_72 = 0;
      uStack_71 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6e = 0;
      local_68 = (void *)0x0;
      puVar5[6] = pvVar6;
      puVar5[7] = 0;
      puVar5[5] = uVar10;
      puVar5[4] = uVar9;
      puVar5[2] = local_60;
      *pp_Var7 = (__tree_node_base *)puVar5;
      puVar8 = puVar5;
      if (**(long **)this != 0) {
        *(long *)this = **(long **)this;
        puVar8 = (undefined8 *)*pp_Var7;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar8);
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    }
    puVar5[7] = &PreprocessorMetaMacroUndef::m_instance;
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    local_78 = 10;
    uStack_77 = 0x6669;
    uStack_75 = 100;
    uStack_74 = 0x65;
    uStack_73 = 0x66;
    uStack_72 = 0;
                    /* try { // try from 00b8d9c0 to 00b8d9e3 has its CatchHandler @ 00b8e348 */
    pp_Var7 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
                          *)this,&local_60,(basic_string *)&local_78);
    puVar5 = (undefined8 *)*pp_Var7;
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)operator_new(0x40);
      pvVar6 = local_68;
      *puVar5 = 0;
      puVar5[1] = 0;
      uVar10 = CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70));
      uVar9 = CONCAT17(uStack_71,
                       CONCAT16(uStack_72,
                                CONCAT15(uStack_73,
                                         CONCAT14(uStack_74,
                                                  CONCAT13(uStack_75,CONCAT21(uStack_77,local_78))))
                               ));
      local_78 = 0;
      uStack_77 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_72 = 0;
      uStack_71 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6e = 0;
      local_68 = (void *)0x0;
      puVar5[6] = pvVar6;
      puVar5[7] = 0;
      puVar5[5] = uVar10;
      puVar5[4] = uVar9;
      puVar5[2] = local_60;
      *pp_Var7 = (__tree_node_base *)puVar5;
      puVar8 = puVar5;
      if (**(long **)this != 0) {
        *(long *)this = **(long **)this;
        puVar8 = (undefined8 *)*pp_Var7;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar8);
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    }
    puVar5[7] = &PreprocessorMetaMacroIfdef::m_instance;
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    uStack_71 = 0;
    local_78 = 0xc;
    uStack_77 = 0x6669;
    uStack_75 = 0x6e;
    uStack_74 = 100;
    uStack_73 = 0x65;
    uStack_72 = 0x66;
                    /* try { // try from 00b8da7c to 00b8da9f has its CatchHandler @ 00b8e344 */
    pp_Var7 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
                          *)this,&local_60,(basic_string *)&local_78);
    puVar5 = (undefined8 *)*pp_Var7;
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)operator_new(0x40);
      pvVar6 = local_68;
      *puVar5 = 0;
      puVar5[1] = 0;
      uVar10 = CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70));
      uVar9 = CONCAT17(uStack_71,
                       CONCAT16(uStack_72,
                                CONCAT15(uStack_73,
                                         CONCAT14(uStack_74,
                                                  CONCAT13(uStack_75,CONCAT21(uStack_77,local_78))))
                               ));
      local_78 = 0;
      uStack_77 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_72 = 0;
      uStack_71 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6e = 0;
      local_68 = (void *)0x0;
      puVar5[6] = pvVar6;
      puVar5[7] = 0;
      puVar5[5] = uVar10;
      puVar5[4] = uVar9;
      puVar5[2] = local_60;
      *pp_Var7 = (__tree_node_base *)puVar5;
      puVar8 = puVar5;
      if (**(long **)this != 0) {
        *(long *)this = **(long **)this;
        puVar8 = (undefined8 *)*pp_Var7;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar8);
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    }
    puVar5[7] = &PreprocessorMetaMacroIfndef::m_instance;
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    local_78 = 10;
    uStack_77 = 0x6e65;
    uStack_75 = 100;
    uStack_74 = 0x69;
    uStack_73 = 0x66;
    uStack_72 = 0;
                    /* try { // try from 00b8db34 to 00b8db57 has its CatchHandler @ 00b8e340 */
    pp_Var7 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
                          *)this,&local_60,(basic_string *)&local_78);
    puVar5 = (undefined8 *)*pp_Var7;
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)operator_new(0x40);
      pvVar6 = local_68;
      *puVar5 = 0;
      puVar5[1] = 0;
      uVar10 = CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70));
      uVar9 = CONCAT17(uStack_71,
                       CONCAT16(uStack_72,
                                CONCAT15(uStack_73,
                                         CONCAT14(uStack_74,
                                                  CONCAT13(uStack_75,CONCAT21(uStack_77,local_78))))
                               ));
      local_78 = 0;
      uStack_77 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_72 = 0;
      uStack_71 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6e = 0;
      local_68 = (void *)0x0;
      puVar5[6] = pvVar6;
      puVar5[7] = 0;
      puVar5[5] = uVar10;
      puVar5[4] = uVar9;
      puVar5[2] = local_60;
      *pp_Var7 = (__tree_node_base *)puVar5;
      puVar8 = puVar5;
      if (**(long **)this != 0) {
        *(long *)this = **(long **)this;
        puVar8 = (undefined8 *)*pp_Var7;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar8);
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    }
    puVar5[7] = &PreprocessorMetaMacroEndif::m_instance;
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    uStack_73 = 0;
    local_78 = 8;
    uStack_77 = 0x6c65;
    uStack_75 = 0x73;
    uStack_74 = 0x65;
                    /* try { // try from 00b8dbe8 to 00b8dc0b has its CatchHandler @ 00b8e33c */
    pp_Var7 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
                          *)this,&local_60,(basic_string *)&local_78);
    puVar5 = (undefined8 *)*pp_Var7;
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)operator_new(0x40);
      pvVar6 = local_68;
      *puVar5 = 0;
      puVar5[1] = 0;
      uVar10 = CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70));
      uVar9 = CONCAT17(uStack_71,
                       CONCAT16(uStack_72,
                                CONCAT15(uStack_73,
                                         CONCAT14(uStack_74,
                                                  CONCAT13(uStack_75,CONCAT21(uStack_77,local_78))))
                               ));
      local_78 = 0;
      uStack_77 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_72 = 0;
      uStack_71 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6e = 0;
      local_68 = (void *)0x0;
      puVar5[6] = pvVar6;
      puVar5[7] = 0;
      puVar5[5] = uVar10;
      puVar5[4] = uVar9;
      puVar5[2] = local_60;
      *pp_Var7 = (__tree_node_base *)puVar5;
      puVar8 = puVar5;
      if (**(long **)this != 0) {
        *(long *)this = **(long **)this;
        puVar8 = (undefined8 *)*pp_Var7;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar8);
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    }
    puVar5[7] = &PreprocessorMetaMacroElse::m_instance;
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    uStack_70 = 0;
    local_78 = 0xe;
    uStack_77 = 0x6564;
    uStack_75 = 0x66;
    uStack_74 = 0x65;
    uStack_73 = 0x76;
    uStack_72 = 0x61;
    uStack_71 = 0x6c;
                    /* try { // try from 00b8dca8 to 00b8dccb has its CatchHandler @ 00b8e338 */
    pp_Var7 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
                          *)this,&local_60,(basic_string *)&local_78);
    puVar5 = (undefined8 *)*pp_Var7;
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)operator_new(0x40);
      pvVar6 = local_68;
      *puVar5 = 0;
      puVar5[1] = 0;
      uVar10 = CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70));
      uVar9 = CONCAT17(uStack_71,
                       CONCAT16(uStack_72,
                                CONCAT15(uStack_73,
                                         CONCAT14(uStack_74,
                                                  CONCAT13(uStack_75,CONCAT21(uStack_77,local_78))))
                               ));
      local_78 = 0;
      uStack_77 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_72 = 0;
      uStack_71 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6e = 0;
      local_68 = (void *)0x0;
      puVar5[6] = pvVar6;
      puVar5[7] = 0;
      puVar5[5] = uVar10;
      puVar5[4] = uVar9;
      puVar5[2] = local_60;
      *pp_Var7 = (__tree_node_base *)puVar5;
      puVar8 = puVar5;
      if (**(long **)this != 0) {
        *(long *)this = **(long **)this;
        puVar8 = (undefined8 *)*pp_Var7;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar8);
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    }
    puVar5[7] = &PreprocessorMetaMacroDefeval::m_instance;
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    uStack_73 = 0;
    local_78 = 8;
    uStack_77 = 0x7665;
    uStack_75 = 0x61;
    uStack_74 = 0x6c;
                    /* try { // try from 00b8dd5c to 00b8dd7f has its CatchHandler @ 00b8e334 */
    pp_Var7 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
                          *)this,&local_60,(basic_string *)&local_78);
    puVar5 = (undefined8 *)*pp_Var7;
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)operator_new(0x40);
      pvVar6 = local_68;
      *puVar5 = 0;
      puVar5[1] = 0;
      uVar10 = CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70));
      uVar9 = CONCAT17(uStack_71,
                       CONCAT16(uStack_72,
                                CONCAT15(uStack_73,
                                         CONCAT14(uStack_74,
                                                  CONCAT13(uStack_75,CONCAT21(uStack_77,local_78))))
                               ));
      local_78 = 0;
      uStack_77 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_72 = 0;
      uStack_71 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6e = 0;
      local_68 = (void *)0x0;
      puVar5[6] = pvVar6;
      puVar5[7] = 0;
      puVar5[5] = uVar10;
      puVar5[4] = uVar9;
      puVar5[2] = local_60;
      *pp_Var7 = (__tree_node_base *)puVar5;
      puVar8 = puVar5;
      if (**(long **)this != 0) {
        *(long *)this = **(long **)this;
        puVar8 = (undefined8 *)*pp_Var7;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar8);
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    }
    puVar5[7] = &PreprocessorMetaMacroEval::m_instance;
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    uStack_75 = 0;
    local_78 = 4;
    uStack_77 = 0x6669;
                    /* try { // try from 00b8de0c to 00b8de2f has its CatchHandler @ 00b8e330 */
    pp_Var7 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
                          *)this,&local_60,(basic_string *)&local_78);
    puVar5 = (undefined8 *)*pp_Var7;
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)operator_new(0x40);
      pvVar6 = local_68;
      *puVar5 = 0;
      puVar5[1] = 0;
      uVar10 = CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70));
      uVar9 = CONCAT17(uStack_71,
                       CONCAT16(uStack_72,
                                CONCAT15(uStack_73,
                                         CONCAT14(uStack_74,
                                                  CONCAT13(uStack_75,CONCAT21(uStack_77,local_78))))
                               ));
      local_78 = 0;
      uStack_77 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_72 = 0;
      uStack_71 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6e = 0;
      local_68 = (void *)0x0;
      puVar5[6] = pvVar6;
      puVar5[7] = 0;
      puVar5[5] = uVar10;
      puVar5[4] = uVar9;
      puVar5[2] = local_60;
      *pp_Var7 = (__tree_node_base *)puVar5;
      puVar8 = puVar5;
      if (**(long **)this != 0) {
        *(long *)this = **(long **)this;
        puVar8 = (undefined8 *)*pp_Var7;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar8);
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    }
    puVar5[7] = &PreprocessorMetaMacroIf::m_instance;
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    uStack_73 = 0;
    local_78 = 8;
    uStack_77 = 0x6c65;
    uStack_75 = 0x69;
    uStack_74 = 0x66;
                    /* try { // try from 00b8debc to 00b8dedf has its CatchHandler @ 00b8e32c */
    pp_Var7 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
                          *)this,&local_60,(basic_string *)&local_78);
    puVar5 = (undefined8 *)*pp_Var7;
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)operator_new(0x40);
      pvVar6 = local_68;
      *puVar5 = 0;
      puVar5[1] = 0;
      uVar10 = CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70));
      uVar9 = CONCAT17(uStack_71,
                       CONCAT16(uStack_72,
                                CONCAT15(uStack_73,
                                         CONCAT14(uStack_74,
                                                  CONCAT13(uStack_75,CONCAT21(uStack_77,local_78))))
                               ));
      local_78 = 0;
      uStack_77 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_72 = 0;
      uStack_71 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6e = 0;
      local_68 = (void *)0x0;
      puVar5[6] = pvVar6;
      puVar5[7] = 0;
      puVar5[5] = uVar10;
      puVar5[4] = uVar9;
      puVar5[2] = local_60;
      *pp_Var7 = (__tree_node_base *)puVar5;
      puVar8 = puVar5;
      if (**(long **)this != 0) {
        *(long *)this = **(long **)this;
        puVar8 = (undefined8 *)*pp_Var7;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar8);
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    }
    puVar5[7] = &PreprocessorMetaMacroElif::m_instance;
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    local_78 = 6;
    uStack_77 = 0x6f66;
    uStack_75 = 0x72;
    uStack_74 = 0;
                    /* try { // try from 00b8df6c to 00b8df8f has its CatchHandler @ 00b8e328 */
    pp_Var7 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
                          *)this,&local_60,(basic_string *)&local_78);
    puVar5 = (undefined8 *)*pp_Var7;
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)operator_new(0x40);
      pvVar6 = local_68;
      *puVar5 = 0;
      puVar5[1] = 0;
      uVar10 = CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70));
      uVar9 = CONCAT17(uStack_71,
                       CONCAT16(uStack_72,
                                CONCAT15(uStack_73,
                                         CONCAT14(uStack_74,
                                                  CONCAT13(uStack_75,CONCAT21(uStack_77,local_78))))
                               ));
      local_78 = 0;
      uStack_77 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_73 = 0;
      uStack_72 = 0;
      uStack_71 = 0;
      uStack_70 = 0;
      uStack_6f = 0;
      uStack_6e = 0;
      local_68 = (void *)0x0;
      puVar5[6] = pvVar6;
      puVar5[7] = 0;
      puVar5[5] = uVar10;
      puVar5[4] = uVar9;
      puVar5[2] = local_60;
      *pp_Var7 = (__tree_node_base *)puVar5;
      puVar8 = puVar5;
      if (**(long **)this != 0) {
        *(long *)this = **(long **)this;
        puVar8 = (undefined8 *)*pp_Var7;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar8);
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    }
    puVar5[7] = &PreprocessorMetaMacroFor::m_instance;
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  uStack_73 = 0;
  local_78 = 8;
  uStack_77 = 0x696c;
  uStack_75 = 0x6e;
  uStack_74 = 0x65;
                    /* try { // try from 00b8e020 to 00b8e043 has its CatchHandler @ 00b8e360 */
  pp_Var7 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
                        *)this,&local_60,(basic_string *)&local_78);
  puVar5 = (undefined8 *)*pp_Var7;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x40);
    pvVar6 = local_68;
    *puVar5 = 0;
    puVar5[1] = 0;
    uVar10 = CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70));
    uVar9 = CONCAT17(uStack_71,
                     CONCAT16(uStack_72,
                              CONCAT15(uStack_73,
                                       CONCAT14(uStack_74,
                                                CONCAT13(uStack_75,CONCAT21(uStack_77,local_78))))))
    ;
    local_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6e = 0;
    local_68 = (void *)0x0;
    puVar5[6] = pvVar6;
    puVar5[7] = 0;
    puVar5[5] = uVar10;
    puVar5[4] = uVar9;
    puVar5[2] = local_60;
    *pp_Var7 = (__tree_node_base *)puVar5;
    puVar8 = puVar5;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar8 = (undefined8 *)*pp_Var7;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  puVar5[7] = &PreprocessorMetaMacroLine::m_instance;
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  uStack_6f = 0;
  local_78 = 0x10;
  uStack_77 = 0x7570;
  uStack_75 = 0x73;
  uStack_74 = 0x68;
  uStack_73 = 0x6c;
  uStack_72 = 0x69;
  uStack_71 = 0x6e;
  uStack_70 = 0x65;
                    /* try { // try from 00b8e0dc to 00b8e0ff has its CatchHandler @ 00b8e35c */
  pp_Var7 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
                        *)this,&local_60,(basic_string *)&local_78);
  puVar5 = (undefined8 *)*pp_Var7;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x40);
    pvVar6 = local_68;
    *puVar5 = 0;
    puVar5[1] = 0;
    uVar10 = CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70));
    uVar9 = CONCAT17(uStack_71,
                     CONCAT16(uStack_72,
                              CONCAT15(uStack_73,
                                       CONCAT14(uStack_74,
                                                CONCAT13(uStack_75,CONCAT21(uStack_77,local_78))))))
    ;
    local_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6e = 0;
    local_68 = (void *)0x0;
    puVar5[6] = pvVar6;
    puVar5[7] = 0;
    puVar5[5] = uVar10;
    puVar5[4] = uVar9;
    puVar5[2] = local_60;
    *pp_Var7 = (__tree_node_base *)puVar5;
    puVar8 = puVar5;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar8 = (undefined8 *)*pp_Var7;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  puVar5[7] = &PreprocessorMetaMacroPushLine::m_instance;
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  uStack_70 = 0;
  local_78 = 0xe;
  uStack_77 = 0x6f70;
  uStack_75 = 0x70;
  uStack_74 = 0x6c;
  uStack_73 = 0x69;
  uStack_72 = 0x6e;
  uStack_71 = 0x65;
                    /* try { // try from 00b8e19c to 00b8e1bf has its CatchHandler @ 00b8e358 */
  pp_Var7 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
                        *)this,&local_60,(basic_string *)&local_78);
  puVar5 = (undefined8 *)*pp_Var7;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x40);
    pvVar6 = local_68;
    *puVar5 = 0;
    puVar5[1] = 0;
    uVar10 = CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70));
    uVar9 = CONCAT17(uStack_71,
                     CONCAT16(uStack_72,
                              CONCAT15(uStack_73,
                                       CONCAT14(uStack_74,
                                                CONCAT13(uStack_75,CONCAT21(uStack_77,local_78))))))
    ;
    local_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6e = 0;
    local_68 = (void *)0x0;
    puVar5[6] = pvVar6;
    puVar5[7] = 0;
    puVar5[5] = uVar10;
    puVar5[4] = uVar9;
    puVar5[2] = local_60;
    *pp_Var7 = (__tree_node_base *)puVar5;
    puVar8 = puVar5;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar8 = (undefined8 *)*pp_Var7;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  puVar5[7] = &PreprocessorMetaMacroPopLine::m_instance;
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  uStack_70 = 0;
  local_78 = 0xe;
  uStack_77 = 0x6e69;
  uStack_75 = 99;
  uStack_74 = 0x6c;
  uStack_73 = 0x75;
  uStack_72 = 100;
  uStack_71 = 0x65;
                    /* try { // try from 00b8e25c to 00b8e27f has its CatchHandler @ 00b8e354 */
  pp_Var7 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,PreprocessorMetaMacro*>>>
                        *)this,&local_60,(basic_string *)&local_78);
  puVar5 = (undefined8 *)*pp_Var7;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x40);
    pvVar6 = local_68;
    *puVar5 = 0;
    puVar5[1] = 0;
    uVar10 = CONCAT62(uStack_6e,CONCAT11(uStack_6f,uStack_70));
    uVar9 = CONCAT17(uStack_71,
                     CONCAT16(uStack_72,
                              CONCAT15(uStack_73,
                                       CONCAT14(uStack_74,
                                                CONCAT13(uStack_75,CONCAT21(uStack_77,local_78))))))
    ;
    local_78 = 0;
    uStack_77 = 0;
    uStack_75 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6e = 0;
    local_68 = (void *)0x0;
    puVar5[6] = pvVar6;
    puVar5[7] = 0;
    puVar5[5] = uVar10;
    puVar5[4] = uVar9;
    puVar5[2] = local_60;
    *pp_Var7 = (__tree_node_base *)puVar5;
    puVar8 = puVar5;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar8 = (undefined8 *)*pp_Var7;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  puVar5[7] = &PreprocessorMetaMacroInclude::m_instance;
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
LAB_00b8e2f8:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


