// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: optimizeStructurePacking
// Entry Point: 00aa8fac
// Size: 2404 bytes
// Signature: undefined optimizeStructurePacking(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ShaderStructLayout::optimizeStructurePacking() */

void ShaderStructLayout::optimizeStructurePacking(void)

{
  vector *this;
  byte *pbVar1;
  basic_string *pbVar2;
  short sVar3;
  long lVar4;
  byte *pbVar5;
  bool bVar6;
  long in_x0;
  byte *pbVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  basic_string local_c0 [4];
  void *local_b0;
  undefined8 local_a8;
  basic_string local_a0 [4];
  void *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((*(byte *)(in_x0 + 0x18) | *(byte *)(in_x0 + 0x19)) == 0) {
    this = (vector *)(in_x0 + 0x20);
    std::__ndk1::vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
    ::vector((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>> *)
             &local_80,this);
    pbVar1 = *(byte **)(in_x0 + 0x20);
    pbVar7 = *(byte **)(in_x0 + 0x28);
    while (pbVar5 = pbVar7, pbVar5 != pbVar1) {
      pbVar7 = pbVar5 + -0x20;
      if ((*pbVar7 & 1) != 0) {
        operator_delete(*(void **)(pbVar5 + -0x10));
      }
    }
    *(byte **)(in_x0 + 0x28) = pbVar1;
    puVar8 = local_78;
    puVar17 = local_78;
    if (local_78 != local_80) {
      uVar9 = 0;
      iVar12 = 0;
      uVar13 = 0;
      do {
        puVar8 = local_80;
                    /* try { // try from 00aa9074 to 00aa907f has its CatchHandler @ 00aa9968 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(local_a0);
        puVar17 = local_78;
        uVar14 = puVar8[uVar9 * 4 + 3];
        uVar15 = (uint)uVar14 >> 0x10 & 0xff;
        if ((((uVar14 & 0xff000000) == 0x4000000) || (uVar15 != 0)) ||
           (local_88 = uVar14, (uVar14 & 0xff000000000000) != 0)) {
          local_88._2_6_ = (undefined6)(uVar14 >> 0x10);
          local_88 = CONCAT62(local_88._2_6_,(short)iVar12);
          if (uVar15 == 0) {
            uVar15 = 1;
          }
          puVar11 = local_80 + uVar9 * 4;
          puVar8 = puVar11 + 4;
          puVar10 = puVar11;
          if (puVar8 == local_78) {
LAB_00aa9128:
            do {
              puVar17 = puVar8 + -4;
              if ((*(byte *)puVar17 & 1) != 0) {
                operator_delete((void *)puVar8[-2]);
              }
              puVar8 = puVar17;
            } while (puVar17 != puVar11);
          }
          else {
            do {
              if ((*(byte *)puVar10 & 1) != 0) {
                operator_delete((void *)puVar10[2]);
              }
              puVar11 = puVar10 + 4;
              uVar18 = puVar10[4];
              *(undefined2 *)(puVar10 + 4) = 0;
              puVar10[1] = puVar10[5];
              *puVar10 = uVar18;
              puVar10[2] = puVar10[6];
              puVar10[3] = puVar10[7];
              puVar8 = puVar10 + 8;
              puVar10 = puVar11;
            } while (puVar8 != puVar17);
            puVar8 = local_78;
            if (puVar11 != local_78) goto LAB_00aa9128;
          }
          pbVar2 = *(basic_string **)(in_x0 + 0x28);
          local_78 = puVar11;
          if (pbVar2 == *(basic_string **)(in_x0 + 0x30)) {
                    /* try { // try from 00aa916c to 00aa9177 has its CatchHandler @ 00aa9924 */
            std::__ndk1::
            vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>::
            __push_back_slow_path<ShaderStructLayout::Field_const&>
                      ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                        *)this,(Field *)local_a0);
          }
          else {
                    /* try { // try from 00aa914c to 00aa9157 has its CatchHandler @ 00aa9934 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string(pbVar2);
            *(ulong *)(pbVar2 + 6) = local_88;
            *(basic_string **)(in_x0 + 0x28) = pbVar2 + 8;
          }
          uVar13 = uVar13 - 1;
          iVar12 = iVar12 + uVar15 * ((uint)(uVar14 >> 0x20) & 0xffff) * 4;
        }
        if (((byte)local_a0[0]._0_1_ & 1) != 0) {
          operator_delete(local_90);
        }
        uVar13 = uVar13 + 1;
        uVar9 = (ulong)uVar13;
      } while (uVar9 < (ulong)((long)local_78 - (long)local_80 >> 5));
      puVar8 = local_80;
      puVar17 = local_80;
      if (local_78 != local_80) {
        uVar9 = 0;
        uVar13 = 0;
        do {
          puVar8 = local_80;
                    /* try { // try from 00aa91d0 to 00aa91db has its CatchHandler @ 00aa995c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(local_a0);
          puVar17 = local_78;
          local_88 = puVar8[uVar9 * 4 + 3];
          if ((local_88 & 0xff000000) == 0x3000000) {
            local_88._2_6_ = (undefined6)(local_88 >> 0x10);
            local_88 = CONCAT62(local_88._2_6_,(short)iVar12);
            puVar11 = local_80 + uVar9 * 4;
            puVar8 = puVar11 + 4;
            puVar10 = puVar11;
            if (puVar8 == local_78) {
LAB_00aa926c:
              do {
                puVar17 = puVar8 + -4;
                if ((*(byte *)puVar17 & 1) != 0) {
                  operator_delete((void *)puVar8[-2]);
                }
                puVar8 = puVar17;
              } while (puVar17 != puVar11);
            }
            else {
              do {
                if ((*(byte *)puVar10 & 1) != 0) {
                  operator_delete((void *)puVar10[2]);
                }
                puVar11 = puVar10 + 4;
                uVar18 = puVar10[4];
                *(undefined2 *)(puVar10 + 4) = 0;
                puVar10[1] = puVar10[5];
                *puVar10 = uVar18;
                puVar10[2] = puVar10[6];
                puVar10[3] = puVar10[7];
                puVar8 = puVar10 + 8;
                puVar10 = puVar11;
              } while (puVar8 != puVar17);
              puVar8 = local_78;
              if (puVar11 != local_78) goto LAB_00aa926c;
            }
            pbVar2 = *(basic_string **)(in_x0 + 0x28);
            local_78 = puVar11;
            if (pbVar2 == *(basic_string **)(in_x0 + 0x30)) {
                    /* try { // try from 00aa92b0 to 00aa92bb has its CatchHandler @ 00aa9918 */
              std::__ndk1::
              vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>::
              __push_back_slow_path<ShaderStructLayout::Field_const&>
                        ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                          *)this,(Field *)local_a0);
            }
            else {
                    /* try { // try from 00aa9290 to 00aa929b has its CatchHandler @ 00aa9928 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string(pbVar2);
              *(ulong *)(pbVar2 + 6) = local_88;
              *(basic_string **)(in_x0 + 0x28) = pbVar2 + 8;
            }
            if (local_78 != local_80) {
              uVar9 = 0;
              uVar15 = 0;
              do {
                puVar8 = local_80;
                    /* try { // try from 00aa92d8 to 00aa92e3 has its CatchHandler @ 00aa999c */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string(local_c0);
                puVar17 = local_78;
                local_a8 = puVar8[uVar9 * 4 + 3];
                uVar14 = local_a8 & 0xfe000000;
                if (uVar14 == 0) {
                  local_a8._2_6_ = (undefined6)(local_a8 >> 0x10);
                  local_a8 = CONCAT62(local_a8._2_6_,(short)iVar12 + 3);
                  puVar11 = local_80 + uVar9 * 4;
                  puVar8 = puVar11 + 4;
                  puVar10 = puVar11;
                  if (puVar8 == local_78) {
LAB_00aa93a0:
                    do {
                      puVar17 = puVar8 + -4;
                      if ((*(byte *)puVar17 & 1) != 0) {
                        operator_delete((void *)puVar8[-2]);
                      }
                      puVar8 = puVar17;
                    } while (puVar17 != puVar11);
                  }
                  else {
                    do {
                      if ((*(byte *)puVar10 & 1) != 0) {
                        operator_delete((void *)puVar10[2]);
                      }
                      puVar11 = puVar10 + 4;
                      uVar18 = puVar10[4];
                      *(undefined2 *)(puVar10 + 4) = 0;
                      puVar10[1] = puVar10[5];
                      *puVar10 = uVar18;
                      puVar10[2] = puVar10[6];
                      puVar10[3] = puVar10[7];
                      puVar8 = puVar10 + 8;
                      puVar10 = puVar11;
                    } while (puVar8 != puVar17);
                    puVar8 = local_78;
                    if (puVar11 != local_78) goto LAB_00aa93a0;
                  }
                  pbVar2 = *(basic_string **)(in_x0 + 0x28);
                  local_78 = puVar11;
                  if (pbVar2 == *(basic_string **)(in_x0 + 0x30)) {
                    /* try { // try from 00aa93e4 to 00aa93ef has its CatchHandler @ 00aa9950 */
                    std::__ndk1::
                    vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                    ::__push_back_slow_path<ShaderStructLayout::Field_const&>
                              ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                                *)this,(Field *)local_c0);
                  }
                  else {
                    /* try { // try from 00aa93c4 to 00aa93cf has its CatchHandler @ 00aa9964 */
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    basic_string(pbVar2);
                    *(ulong *)(pbVar2 + 6) = local_a8;
                    *(basic_string **)(in_x0 + 0x28) = pbVar2 + 8;
                  }
                  bVar6 = uVar15 < uVar13;
                  uVar15 = uVar15 - 1;
                  uVar13 = uVar13 - bVar6;
                }
                if (((byte)local_c0[0]._0_1_ & 1) != 0) {
                  operator_delete(local_b0);
                }
                if (uVar14 == 0) break;
                uVar15 = uVar15 + 1;
                uVar9 = (ulong)uVar15;
              } while (uVar9 < (ulong)((long)local_78 - (long)local_80 >> 5));
            }
            iVar12 = iVar12 + 4;
            uVar13 = uVar13 - 1;
          }
          if (((byte)local_a0[0]._0_1_ & 1) != 0) {
            operator_delete(local_90);
          }
          uVar13 = uVar13 + 1;
          uVar9 = (ulong)uVar13;
        } while (uVar9 < (ulong)((long)local_78 - (long)local_80 >> 5));
        puVar8 = local_80;
        puVar17 = local_80;
        if (local_78 != local_80) {
          uVar9 = 0;
          uVar13 = 0;
          do {
            puVar8 = local_80;
                    /* try { // try from 00aa945c to 00aa9467 has its CatchHandler @ 00aa9948 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string(local_a0);
            puVar17 = local_78;
            local_88 = puVar8[uVar9 * 4 + 3];
            if ((local_88 & 0xff000000) == 0x2000000) {
              sVar3 = (short)iVar12;
              local_88._2_6_ = (undefined6)(local_88 >> 0x10);
              local_88 = CONCAT62(local_88._2_6_,sVar3);
              puVar11 = local_80 + uVar9 * 4;
              puVar8 = puVar11 + 4;
              puVar10 = puVar11;
              if (puVar8 == local_78) {
LAB_00aa94f8:
                do {
                  puVar17 = puVar8 + -4;
                  if ((*(byte *)puVar17 & 1) != 0) {
                    operator_delete((void *)puVar8[-2]);
                  }
                  puVar8 = puVar17;
                } while (puVar17 != puVar11);
              }
              else {
                do {
                  if ((*(byte *)puVar10 & 1) != 0) {
                    operator_delete((void *)puVar10[2]);
                  }
                  puVar11 = puVar10 + 4;
                  uVar18 = puVar10[4];
                  *(undefined2 *)(puVar10 + 4) = 0;
                  puVar10[1] = puVar10[5];
                  *puVar10 = uVar18;
                  puVar10[2] = puVar10[6];
                  puVar10[3] = puVar10[7];
                  puVar8 = puVar10 + 8;
                  puVar10 = puVar11;
                } while (puVar8 != puVar17);
                puVar8 = local_78;
                if (puVar11 != local_78) goto LAB_00aa94f8;
              }
              pbVar2 = *(basic_string **)(in_x0 + 0x28);
              local_78 = puVar11;
              if (pbVar2 == *(basic_string **)(in_x0 + 0x30)) {
                    /* try { // try from 00aa953c to 00aa9547 has its CatchHandler @ 00aa9910 */
                std::__ndk1::
                vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                ::__push_back_slow_path<ShaderStructLayout::Field_const&>
                          ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                            *)this,(Field *)local_a0);
              }
              else {
                    /* try { // try from 00aa951c to 00aa9527 has its CatchHandler @ 00aa991c */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string(pbVar2);
                *(ulong *)(pbVar2 + 6) = local_88;
                *(basic_string **)(in_x0 + 0x28) = pbVar2 + 8;
              }
              if (local_78 == local_80) {
                uVar15 = 2;
LAB_00aa96a8:
                if (local_78 != local_80) {
                  do {
                    /* try { // try from 00aa96b4 to 00aa96bf has its CatchHandler @ 00aa9998 */
                    puVar8 = local_80;
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    basic_string(local_c0);
                    puVar11 = local_78;
                    local_a8._2_6_ = (undefined6)((ulong)puVar8[3] >> 0x10);
                    local_a8 = CONCAT62(local_a8._2_6_,(short)uVar15 + sVar3);
                    puVar8 = local_80 + 4;
                    puVar10 = local_80;
                    puVar17 = local_80;
                    if (puVar8 == local_78) {
LAB_00aa9744:
                      do {
                        puVar11 = puVar8 + -4;
                        if ((*(byte *)puVar11 & 1) != 0) {
                          operator_delete((void *)puVar8[-2]);
                        }
                        puVar8 = puVar11;
                      } while (puVar11 != puVar17);
                    }
                    else {
                      do {
                        if ((*(byte *)puVar10 & 1) != 0) {
                          operator_delete((void *)puVar10[2]);
                        }
                        puVar17 = puVar10 + 4;
                        uVar18 = puVar10[4];
                        *(undefined2 *)(puVar10 + 4) = 0;
                        puVar10[1] = puVar10[5];
                        *puVar10 = uVar18;
                        puVar10[2] = puVar10[6];
                        puVar10[3] = puVar10[7];
                        puVar8 = puVar10 + 8;
                        puVar10 = puVar17;
                      } while (puVar8 != puVar11);
                      puVar8 = local_78;
                      if (puVar17 != local_78) goto LAB_00aa9744;
                    }
                    pbVar2 = *(basic_string **)(in_x0 + 0x28);
                    local_78 = puVar17;
                    if (pbVar2 == *(basic_string **)(in_x0 + 0x30)) {
                    /* try { // try from 00aa9788 to 00aa9793 has its CatchHandler @ 00aa9970 */
                      std::__ndk1::
                      vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                      ::__push_back_slow_path<ShaderStructLayout::Field_const&>
                                ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                                  *)this,(Field *)local_c0);
                    }
                    else {
                    /* try { // try from 00aa9768 to 00aa9773 has its CatchHandler @ 00aa9978 */
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string(pbVar2);
                      *(ulong *)(pbVar2 + 6) = local_a8;
                      *(basic_string **)(in_x0 + 0x28) = pbVar2 + 8;
                    }
                    uVar16 = uVar13 - 1;
                    bVar6 = uVar13 != 0;
                    uVar13 = 0;
                    if (bVar6) {
                      uVar13 = uVar16;
                    }
                    if (((byte)local_c0[0]._0_1_ & 1) != 0) {
                      operator_delete(local_b0);
                    }
                  } while ((local_78 != local_80) && (uVar15 = uVar15 + 1, uVar15 < 4));
                }
              }
              else {
                uVar9 = 0;
                uVar16 = 0;
                uVar15 = 2;
                do {
                  puVar8 = local_80;
                    /* try { // try from 00aa9564 to 00aa956f has its CatchHandler @ 00aa9994 */
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string(local_c0);
                  puVar17 = local_78;
                  local_a8 = puVar8[uVar9 * 4 + 3];
                  uVar14 = local_a8 & 0xff000000;
                  if (uVar14 == 0x2000000) {
                    puVar11 = local_80 + uVar9 * 4;
                    local_a8._2_6_ = (undefined6)(local_a8 >> 0x10);
                    local_a8 = CONCAT62(local_a8._2_6_,(short)uVar15 + sVar3);
                    puVar8 = puVar11 + 4;
                    puVar10 = puVar11;
                    if (puVar8 == local_78) {
LAB_00aa9604:
                      do {
                        puVar17 = puVar8 + -4;
                        if ((*(byte *)puVar17 & 1) != 0) {
                          operator_delete((void *)puVar8[-2]);
                        }
                        puVar8 = puVar17;
                      } while (puVar17 != puVar11);
                    }
                    else {
                      do {
                        if ((*(byte *)puVar10 & 1) != 0) {
                          operator_delete((void *)puVar10[2]);
                        }
                        puVar11 = puVar10 + 4;
                        uVar18 = puVar10[4];
                        *(undefined2 *)(puVar10 + 4) = 0;
                        puVar10[1] = puVar10[5];
                        *puVar10 = uVar18;
                        puVar10[2] = puVar10[6];
                        puVar10[3] = puVar10[7];
                        puVar8 = puVar10 + 8;
                        puVar10 = puVar11;
                      } while (puVar8 != puVar17);
                      puVar8 = local_78;
                      if (puVar11 != local_78) goto LAB_00aa9604;
                    }
                    pbVar2 = *(basic_string **)(in_x0 + 0x28);
                    local_78 = puVar11;
                    if (pbVar2 == *(basic_string **)(in_x0 + 0x30)) {
                    /* try { // try from 00aa9648 to 00aa9653 has its CatchHandler @ 00aa9940 */
                      std::__ndk1::
                      vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                      ::__push_back_slow_path<ShaderStructLayout::Field_const&>
                                ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                                  *)this,(Field *)local_c0);
                    }
                    else {
                    /* try { // try from 00aa9628 to 00aa9633 has its CatchHandler @ 00aa9958 */
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string(pbVar2);
                      *(ulong *)(pbVar2 + 6) = local_a8;
                      *(basic_string **)(in_x0 + 0x28) = pbVar2 + 8;
                    }
                    bVar6 = uVar16 < uVar13;
                    uVar16 = uVar16 - 1;
                    uVar15 = uVar15 + 2;
                    uVar13 = uVar13 - bVar6;
                  }
                  if (((byte)local_c0[0]._0_1_ & 1) != 0) {
                    operator_delete(local_b0);
                  }
                  if (uVar14 == 0x2000000) break;
                  uVar16 = uVar16 + 1;
                  uVar9 = (ulong)uVar16;
                } while (uVar9 < (ulong)((long)local_78 - (long)local_80 >> 5));
                if (uVar15 < 4) goto LAB_00aa96a8;
              }
              iVar12 = iVar12 + 4;
              uVar13 = uVar13 - 1;
            }
            if (((byte)local_a0[0]._0_1_ & 1) != 0) {
              operator_delete(local_90);
            }
            uVar13 = uVar13 + 1;
            uVar9 = (ulong)uVar13;
          } while (uVar9 < (ulong)((long)local_78 - (long)local_80 >> 5));
          puVar8 = local_80;
          puVar17 = local_80;
          if (local_78 != local_80) {
            uVar9 = 0;
            do {
              puVar8 = local_80;
                    /* try { // try from 00aa981c to 00aa9827 has its CatchHandler @ 00aa992c */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string(local_a0);
              pbVar2 = *(basic_string **)(in_x0 + 0x28);
              local_88._2_6_ = (undefined6)((ulong)puVar8[uVar9 * 4 + 3] >> 0x10);
              local_88 = CONCAT62(local_88._2_6_,(short)iVar12);
              if (pbVar2 == *(basic_string **)(in_x0 + 0x30)) {
                    /* try { // try from 00aa9860 to 00aa986b has its CatchHandler @ 00aa9914 */
                std::__ndk1::
                vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                ::__push_back_slow_path<ShaderStructLayout::Field_const&>
                          ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                            *)this,(Field *)local_a0);
              }
              else {
                    /* try { // try from 00aa9840 to 00aa984b has its CatchHandler @ 00aa9920 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string(pbVar2);
                *(ulong *)(pbVar2 + 6) = local_88;
                *(basic_string **)(in_x0 + 0x28) = pbVar2 + 8;
              }
              if (((byte)local_a0[0]._0_1_ & 1) != 0) {
                operator_delete(local_90);
              }
              uVar9 = (ulong)((int)uVar9 + 1);
              iVar12 = iVar12 + 1;
              puVar8 = local_78;
              puVar17 = local_80;
            } while (uVar9 < (ulong)((long)local_78 - (long)local_80 >> 5));
          }
        }
      }
    }
    puVar11 = puVar17;
    if (puVar17 != (undefined8 *)0x0) {
      while (puVar10 = puVar8, puVar10 != puVar17) {
        puVar8 = puVar10 + -4;
        puVar11 = local_80;
        if ((*(byte *)puVar8 & 1) != 0) {
          operator_delete((void *)puVar10[-2]);
          puVar11 = local_80;
        }
      }
      local_78 = puVar17;
      operator_delete(puVar11);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


