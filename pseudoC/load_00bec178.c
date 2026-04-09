// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: load
// Entry Point: 00bec178
// Size: 2448 bytes
// Signature: undefined __thiscall load(AdhocShader * this, IRenderDevice * param_1, char * param_2, char * param_3, uint param_4, ShaderStructLayout * param_5, uint param_6)


/* AdhocShader::load(IRenderDevice*, char const*, char const*, unsigned int, ShaderStructLayout*,
   unsigned int) */

uint __thiscall
AdhocShader::load(AdhocShader *this,IRenderDevice *param_1,char *param_2,char *param_3,uint param_4,
                 ShaderStructLayout *param_5,uint param_6)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  ShaderStructLayout *pSVar2;
  int *piVar3;
  undefined4 *puVar4;
  long lVar5;
  pair pVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  size_t sVar11;
  undefined8 uVar12;
  void *pvVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s;
  ulong uVar17;
  ShaderStructLayout *pSVar18;
  long *plVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  void **ppvVar23;
  void *pvVar24;
  undefined8 local_d8;
  size_t local_d0;
  void *local_c8;
  uint uStack_c0;
  uint local_bc;
  ShaderStructLayout *local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined local_98;
  undefined8 local_90;
  undefined8 *local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (DAT_0211f0b8 == 0) {
    local_b0._0_4_ = 1;
    local_9c = 0;
    local_98 = 0;
    local_90 = 0;
    local_b0._4_4_ = 2;
    uStack_a8 = 2;
    uStack_a4 = 2;
    uStack_a0 = 2;
    DAT_0211f0b8 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,&local_b0);
    local_b0._4_4_ = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    s_pStandardSamplers = "samplerBilinearClamp";
    DAT_0211f0c8 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,&local_b0);
    DAT_0211f0c0 = "samplerBilinearWrap";
    uStack_a8 = 2;
    uStack_a4 = 2;
    local_b0._0_4_ = 0;
    local_b0._4_4_ = 2;
    DAT_0211f0d8 = (**(code **)(*(long *)param_1 + 0xf8))(param_1,&local_b0);
    DAT_0211f0d0 = "samplerPointClamp";
  }
  local_bc = 0;
  local_b0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  local_9c = 0;
  local_b8 = (ShaderStructLayout *)0x0;
  if (param_6 != 0) {
    lVar22 = 0;
    do {
      pbVar1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (param_5 + lVar22);
      __s = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (pbVar1 + 0x10);
      if (((byte)*pbVar1 & 1) == 0) {
        __s = pbVar1 + 1;
      }
      sVar11 = strlen((char *)__s);
      if (0xffffffffffffffef < sVar11) {
                    /* try { // try from 00beca2c to 00beca33 has its CatchHandler @ 00becb68 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar11 < 0x17) {
        local_d8 = CONCAT71(local_d8._1_7_,(char)((int)sVar11 << 1));
        pvVar24 = (void *)((ulong)&local_d8 | 1);
        if (sVar11 != 0) goto LAB_00bec318;
      }
      else {
        uVar21 = sVar11 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00bec2fc to 00bec303 has its CatchHandler @ 00becb64 */
        pvVar24 = operator_new(uVar21);
        local_d8 = uVar21 | 1;
        local_d0 = sVar11;
        local_c8 = pvVar24;
LAB_00bec318:
        memcpy(pvVar24,__s,sVar11);
      }
      local_78 = &local_d8;
      *(undefined *)((long)pvVar24 + sVar11) = 0;
                    /* try { // try from 00bec334 to 00bec383 has its CatchHandler @ 00becb6c */
      pVar6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        ((basic_string *)&local_b0,(piecewise_construct_t *)&local_d8,
                         (tuple *)&DAT_005288f7,(tuple *)&local_78);
      uVar21 = (ulong)pVar6;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (uVar21 + 0x38),(basic_string *)(param_5 + lVar22));
      *(undefined2 *)(uVar21 + 0x50) = *(undefined2 *)((long)(param_5 + lVar22) + 0x18);
      if (pbVar1 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(uVar21 + 0x38)) {
        std::__ndk1::
        vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>::
        assign<ShaderStructLayout::Field*>
                  ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                    *)(uVar21 + 0x58),*(Field **)(param_5 + lVar22 + 0x20),
                   *(Field **)(param_5 + lVar22 + 0x28));
      }
      *(undefined4 *)(uVar21 + 0x70) = *(undefined4 *)(param_5 + lVar22 + 0x38);
      if ((local_d8 & 1) != 0) {
        operator_delete(local_c8);
      }
      lVar22 = lVar22 + 0x40;
    } while ((ulong)param_6 * 0x40 - lVar22 != 0);
  }
  if ((ShaderManager::getInstance()::instance & 1) == 0) {
    iVar8 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance);
    if (iVar8 != 0) {
                    /* try { // try from 00beca80 to 00beca8b has its CatchHandler @ 00becb18 */
      ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
      __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&ShaderManager::getInstance()::instance);
    }
  }
                    /* try { // try from 00bec3b8 to 00bec3e7 has its CatchHandler @ 00becb38 */
  uVar7 = ShaderManager::createProgramFromFile
                    ((ShaderManager *)&ShaderManager::getInstance()::instance,param_2,param_3,
                     param_4,(map *)&local_b0,(IProgramObject **)(this + 8),&local_bc,&local_b8,
                     &uStack_c0);
  if ((uVar7 & 1) != 0) {
    plVar19 = *(long **)(this + 8);
                    /* try { // try from 00bec400 to 00bec407 has its CatchHandler @ 00becb30 */
    iVar8 = (**(code **)(*plVar19 + 0x20))(plVar19);
    if (iVar8 != 0) {
      iVar20 = 0;
      do {
                    /* try { // try from 00bec43c to 00bec44b has its CatchHandler @ 00becb50 */
        uVar12 = (**(code **)(*plVar19 + 0x18))(plVar19,iVar20);
        uVar21 = 0;
        ppvVar23 = (void **)(this + 0x10);
        do {
                    /* try { // try from 00bec484 to 00bec493 has its CatchHandler @ 00becb98 */
          iVar9 = (**(code **)(*plVar19 + 0x10))(plVar19,iVar20,uVar21 & 0xffffffff);
          if (iVar9 != -1) {
            piVar3 = (int *)ppvVar23[1];
            if (piVar3 < ppvVar23[2]) {
              *piVar3 = iVar9;
              *(undefined8 *)(piVar3 + 2) = uVar12;
              ppvVar23[1] = piVar3 + 4;
            }
            else {
              pvVar24 = *ppvVar23;
              sVar11 = (long)piVar3 - (long)pvVar24;
              uVar16 = ((long)sVar11 >> 4) + 1;
              if (uVar16 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar15 = (long)ppvVar23[2] - (long)pvVar24;
              uVar17 = (long)uVar15 >> 3;
              if (uVar16 <= uVar17) {
                uVar16 = uVar17;
              }
              if (0x7fffffffffffffef < uVar15) {
                uVar16 = 0xfffffffffffffff;
              }
              if (uVar16 >> 0x3c != 0) {
                    /* try { // try from 00beca04 to 00beca17 has its CatchHandler @ 00becb90 */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00bec4f0 to 00bec4f3 has its CatchHandler @ 00becb88 */
              pvVar13 = operator_new(uVar16 << 4);
              piVar3 = (int *)((long)pvVar13 + ((long)sVar11 >> 4) * 0x10);
              *piVar3 = iVar9;
              *(undefined8 *)(piVar3 + 2) = uVar12;
              if (0 < (long)sVar11) {
                memcpy(pvVar13,pvVar24,sVar11);
              }
              *ppvVar23 = pvVar13;
              ppvVar23[1] = piVar3 + 4;
              ppvVar23[2] = (void *)((long)pvVar13 + uVar16 * 0x10);
              if (pvVar24 != (void *)0x0) {
                operator_delete(pvVar24);
              }
            }
          }
          uVar21 = uVar21 + 1;
          ppvVar23 = ppvVar23 + 3;
        } while (uVar21 != 3);
        iVar20 = iVar20 + 1;
      } while (iVar20 != iVar8);
    }
                    /* try { // try from 00bec548 to 00bec54f has its CatchHandler @ 00becb2c */
    iVar8 = (**(code **)(*plVar19 + 0x50))(plVar19);
    if (iVar8 != 0) {
      iVar20 = 0;
      do {
                    /* try { // try from 00bec598 to 00bec5a3 has its CatchHandler @ 00becb54 */
        uVar12 = (**(code **)(*plVar19 + 0x48))(plVar19,iVar20);
                    /* try { // try from 00bec5b0 to 00bec5bb has its CatchHandler @ 00becb58 */
        uVar10 = (**(code **)(*plVar19 + 0x40))(plVar19,iVar20);
        puVar4 = *(undefined4 **)(this + 0x90);
        if (puVar4 < *(undefined4 **)(this + 0x98)) {
          *puVar4 = uVar10;
          *(undefined8 *)(puVar4 + 2) = uVar12;
          *(undefined4 **)(this + 0x90) = puVar4 + 4;
        }
        else {
          pvVar24 = *(void **)(this + 0x88);
          sVar11 = (long)puVar4 - (long)pvVar24;
          uVar21 = ((long)sVar11 >> 4) + 1;
          if (uVar21 >> 0x3c != 0) {
                    /* try { // try from 00beca54 to 00beca5b has its CatchHandler @ 00becb5c */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar16 = (long)*(undefined4 **)(this + 0x98) - (long)pvVar24;
          uVar15 = (long)uVar16 >> 3;
          if (uVar21 <= uVar15) {
            uVar21 = uVar15;
          }
          if (0x7fffffffffffffef < uVar16) {
            uVar21 = 0xfffffffffffffff;
          }
          if (uVar21 >> 0x3c != 0) {
                    /* try { // try from 00beca3c to 00beca47 has its CatchHandler @ 00becb5c */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00bec628 to 00bec62b has its CatchHandler @ 00becb44 */
          pvVar13 = operator_new(uVar21 << 4);
          puVar4 = (undefined4 *)((long)pvVar13 + ((long)sVar11 >> 4) * 0x10);
          *puVar4 = uVar10;
          *(undefined8 *)(puVar4 + 2) = uVar12;
          if (0 < (long)sVar11) {
            memcpy(pvVar13,pvVar24,sVar11);
          }
          *(void **)(this + 0x88) = pvVar13;
          *(undefined4 **)(this + 0x90) = puVar4 + 4;
          *(void **)(this + 0x98) = (void *)((long)pvVar13 + uVar21 * 0x10);
          if (pvVar24 != (void *)0x0) {
            operator_delete(pvVar24);
          }
        }
        puVar4 = *(undefined4 **)(this + 0x78);
        if (puVar4 < *(undefined4 **)(this + 0x80)) {
          *puVar4 = uVar10;
          *(undefined8 *)(puVar4 + 2) = uVar12;
          *(undefined4 **)(this + 0x78) = puVar4 + 4;
        }
        else {
          pvVar24 = *(void **)(this + 0x70);
          sVar11 = (long)puVar4 - (long)pvVar24;
          uVar21 = ((long)sVar11 >> 4) + 1;
          if (uVar21 >> 0x3c != 0) {
                    /* try { // try from 00beca34 to 00beca3b has its CatchHandler @ 00becb60 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar16 = (long)*(undefined4 **)(this + 0x80) - (long)pvVar24;
          uVar15 = (long)uVar16 >> 3;
          if (uVar21 <= uVar15) {
            uVar21 = uVar15;
          }
          if (0x7fffffffffffffef < uVar16) {
            uVar21 = 0xfffffffffffffff;
          }
          if (uVar21 >> 0x3c != 0) {
                    /* try { // try from 00beca48 to 00beca53 has its CatchHandler @ 00becb60 */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00bec6c8 to 00bec6cb has its CatchHandler @ 00becb48 */
          pvVar13 = operator_new(uVar21 << 4);
          puVar4 = (undefined4 *)((long)pvVar13 + ((long)sVar11 >> 4) * 0x10);
          *puVar4 = uVar10;
          *(undefined8 *)(puVar4 + 2) = uVar12;
          if (0 < (long)sVar11) {
            memcpy(pvVar13,pvVar24,sVar11);
          }
          *(void **)(this + 0x70) = pvVar13;
          *(undefined4 **)(this + 0x78) = puVar4 + 4;
          *(void **)(this + 0x80) = (void *)((long)pvVar13 + uVar21 * 0x10);
          if (pvVar24 != (void *)0x0) {
            operator_delete(pvVar24);
          }
        }
        iVar20 = iVar20 + 1;
      } while (iVar8 != iVar20);
    }
    if (local_bc != 0) {
      lVar22 = 0;
      uVar21 = 0;
      iVar8 = 0;
      uVar14 = local_bc;
      do {
        pSVar2 = local_b8 + lVar22;
        if (pSVar2[0x19] == (ShaderStructLayout)0x0) {
          pSVar18 = *(ShaderStructLayout **)(pSVar2 + 0x10);
          piVar3 = *(int **)(this + 0xa8);
          if (((byte)*pSVar2 & 1) == 0) {
            pSVar18 = pSVar2 + 1;
          }
          if (piVar3 < *(int **)(this + 0xb0)) {
            *piVar3 = iVar8;
            *(ShaderStructLayout **)(piVar3 + 2) = pSVar18;
            *(int **)(this + 0xa8) = piVar3 + 4;
          }
          else {
            pvVar24 = *(void **)(this + 0xa0);
            sVar11 = (long)piVar3 - (long)pvVar24;
            uVar16 = ((long)sVar11 >> 4) + 1;
            if (uVar16 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar15 = (long)*(int **)(this + 0xb0) - (long)pvVar24;
            uVar17 = (long)uVar15 >> 3;
            if (uVar16 <= uVar17) {
              uVar16 = uVar17;
            }
            if (0x7fffffffffffffef < uVar15) {
              uVar16 = 0xfffffffffffffff;
            }
            if (uVar16 >> 0x3c != 0) {
                    /* try { // try from 00beca5c to 00beca6f has its CatchHandler @ 00becb40 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00bec7dc to 00bec7df has its CatchHandler @ 00becb3c */
            pvVar13 = operator_new(uVar16 << 4);
            piVar3 = (int *)((long)pvVar13 + ((long)sVar11 >> 4) * 0x10);
            *piVar3 = iVar8;
            *(ShaderStructLayout **)(piVar3 + 2) = pSVar18;
            if (0 < (long)sVar11) {
              memcpy(pvVar13,pvVar24,sVar11);
            }
            *(void **)(this + 0xa0) = pvVar13;
            *(int **)(this + 0xa8) = piVar3 + 4;
            *(void **)(this + 0xb0) = (void *)((long)pvVar13 + uVar16 * 0x10);
            if (pvVar24 != (void *)0x0) {
              operator_delete(pvVar24);
            }
          }
          iVar8 = iVar8 + 1;
          uVar14 = local_bc;
        }
        uVar21 = uVar21 + 1;
        lVar22 = lVar22 + 0x40;
      } while (uVar21 < uVar14);
    }
                    /* try { // try from 00bec834 to 00bec83b has its CatchHandler @ 00becb34 */
    iVar8 = (**(code **)(*plVar19 + 0x38))(plVar19);
    if (iVar8 != 0) {
      iVar20 = 0;
      do {
                    /* try { // try from 00bec870 to 00bec87f has its CatchHandler @ 00becb4c */
        uVar12 = (**(code **)(*plVar19 + 0x30))(plVar19,iVar20);
        uVar21 = 0;
        ppvVar23 = (void **)(this + 0xb8);
        do {
                    /* try { // try from 00bec8b8 to 00bec8c7 has its CatchHandler @ 00becb94 */
          iVar9 = (**(code **)(*plVar19 + 0x28))(plVar19,iVar20,uVar21 & 0xffffffff);
          if (iVar9 != -1) {
            piVar3 = (int *)ppvVar23[1];
            if (piVar3 < ppvVar23[2]) {
              *piVar3 = iVar9;
              *(undefined8 *)(piVar3 + 2) = uVar12;
              ppvVar23[1] = piVar3 + 4;
            }
            else {
              pvVar24 = *ppvVar23;
              sVar11 = (long)piVar3 - (long)pvVar24;
              uVar16 = ((long)sVar11 >> 4) + 1;
              if (uVar16 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar15 = (long)ppvVar23[2] - (long)pvVar24;
              uVar17 = (long)uVar15 >> 3;
              if (uVar16 <= uVar17) {
                uVar16 = uVar17;
              }
              if (0x7fffffffffffffef < uVar15) {
                uVar16 = 0xfffffffffffffff;
              }
              if (uVar16 >> 0x3c != 0) {
                    /* try { // try from 00beca18 to 00beca2b has its CatchHandler @ 00becb8c */
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00bec924 to 00bec927 has its CatchHandler @ 00becb84 */
              pvVar13 = operator_new(uVar16 << 4);
              piVar3 = (int *)((long)pvVar13 + ((long)sVar11 >> 4) * 0x10);
              *piVar3 = iVar9;
              *(undefined8 *)(piVar3 + 2) = uVar12;
              if (0 < (long)sVar11) {
                memcpy(pvVar13,pvVar24,sVar11);
              }
              *ppvVar23 = pvVar13;
              ppvVar23[1] = piVar3 + 4;
              ppvVar23[2] = (void *)((long)pvVar13 + uVar16 * 0x10);
              if (pvVar24 != (void *)0x0) {
                operator_delete(pvVar24);
              }
            }
          }
          uVar21 = uVar21 + 1;
          ppvVar23 = ppvVar23 + 3;
        } while (uVar21 != 3);
        iVar20 = iVar20 + 1;
      } while (iVar20 != iVar8);
    }
    if (m_shaderAggregatorMode != '\0') {
      if ((LogManager::getInstance()::singletonLogManager & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager);
        if (iVar8 != 0) {
                    /* try { // try from 00becacc to 00becad7 has its CatchHandler @ 00becb08 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
      }
                    /* try { // try from 00bec994 to 00bec9af has its CatchHandler @ 00becb34 */
      LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                        "Compiled adhoc shader %s[%u] ...\n",param_2,(ulong)param_4);
    }
    *this = (AdhocShader)0x1;
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,ShaderStructLayout>>>
             *)&local_b0,(__tree_node *)CONCAT44(uStack_a4,uStack_a8));
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7 & 1;
}


