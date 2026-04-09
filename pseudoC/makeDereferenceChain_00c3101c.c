// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: makeDereferenceChain
// Entry Point: 00c3101c
// Size: 2580 bytes
// Signature: undefined __thiscall makeDereferenceChain(IR_HllConvertUtil * this, ConversionContext * param_1, vector * param_2, uint * param_3, uint param_4, IR_Type * * param_5)


/* WARNING: Type propagation algorithm not settling */
/* IR_HllConvertUtil::makeDereferenceChain(IR_HllConvertUtil::ConversionContext&,
   std::__ndk1::vector<IR_HllConvertUtil::RegContents,
   std::__ndk1::allocator<IR_HllConvertUtil::RegContents> > const&, unsigned int const*, unsigned
   int, IR_Type*&) */

void __thiscall
IR_HllConvertUtil::makeDereferenceChain
          (IR_HllConvertUtil *this,ConversionContext *param_1,vector *param_2,uint *param_3,
          uint param_4,IR_Type **param_5)

{
  IR_TypeSet *this_00;
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  long lVar6;
  undefined2 uVar7;
  bool bVar8;
  int iVar9;
  size_t __n;
  long lVar10;
  long lVar11;
  IR_Type *pIVar12;
  int *piVar13;
  basic_string bVar14;
  vector *pvVar15;
  size_t sVar16;
  uint uVar17;
  ulong *in_x8;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  ShaderStructLayout *__s1;
  ShaderLanguage *pSVar21;
  IR_Struct *this_01;
  ShaderStructLayout *pSVar22;
  uint uVar23;
  char *pcVar24;
  void *pvVar25;
  ulong uVar26;
  char **ppcVar27;
  basic_string local_1b0 [4];
  void *local_1a0;
  uint local_198;
  uint local_194;
  basic_string local_190 [4];
  void *local_180;
  int *local_178;
  byte local_170;
  undefined uStack_16f;
  undefined6 uStack_16e;
  ulong uStack_168;
  void *local_160;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  uVar26 = (ulong)param_3 & 0xffffffff;
  uVar3 = *(uint *)(param_2 + 4);
  iVar9 = (int)param_3;
  uVar23 = *(uint *)(param_2 + (ulong)(iVar9 + (uVar3 >> 0x10) + 2) * 4);
  pbVar1 = (byte *)(*(long *)param_1 + (ulong)uVar23 * 0x20);
  pbVar2 = *(byte **)(pbVar1 + 0x10);
  bVar8 = (*pbVar1 & 1) != 0;
  uVar20 = (ulong)(*pbVar1 >> 1);
  if (bVar8) {
    uVar20 = *(ulong *)(pbVar1 + 8);
  }
  if (!bVar8) {
    pbVar2 = pbVar1 + 1;
  }
  pbVar1 = (byte *)"<<ERROR>>";
  if (uVar20 != 0) {
    pbVar1 = pbVar2;
  }
  pvVar15 = param_2;
  __n = strlen((char *)pbVar1);
  bVar14 = (basic_string)pvVar15;
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    pvVar25 = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00c31118;
  }
  else {
    uVar20 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar25 = operator_new(uVar20);
    in_x8[1] = __n;
    in_x8[2] = (ulong)pvVar25;
    *in_x8 = uVar20 | 1;
  }
  sVar16 = __n;
  memcpy(pvVar25,pbVar1,__n);
  bVar14 = (basic_string)sVar16;
LAB_00c31118:
  *(undefined *)((long)pvVar25 + __n) = 0;
  lVar18 = *(long *)this;
                    /* try { // try from 00c31128 to 00c3112f has its CatchHandler @ 00c31ab4 */
  local_178 = (int *)IR_RegisterSet::getRegisterType
                               ((IR_RegisterSet *)(*(long *)(this + 8) + 0x98),uVar23);
  iVar4 = *local_178;
  if (iVar4 == 5) {
    local_178 = *(int **)(local_178 + 2);
  }
  uVar3 = uVar3 & 0xffff;
  pSVar21 = (ShaderLanguage *)(this + 0x10);
  if (*pSVar21 == 5) {
    if (((*local_178 == 3) && (iVar9 + 1U < uVar3)) &&
       ((int)*(uint *)(param_2 + (ulong)(iVar9 + (uint)*(ushort *)(param_2 + 6) + 3) * 4) < 0)) {
      uVar20 = (ulong)*(uint *)(param_2 + (ulong)(iVar9 + (uint)*(ushort *)(param_2 + 6) + 3) * 4) &
               0x7fffffff;
      if (*(int *)(*(long *)(*(long *)(this + 8) + 0x80) + uVar20 * 0x18) == 0xc) {
                    /* try { // try from 00c311d0 to 00c311d7 has its CatchHandler @ 00c31a44 */
        bVar14 = 0;
        lVar10 = IR_Struct::getField(*(IR_Struct **)(local_178 + 2),
                                     *(char **)(*(long *)(*(long *)(this + 8) + 0x80) +
                                                uVar20 * 0x18 + 8),(uint *)0x0);
        if (((*(char **)(lVar10 + 8) != (char *)0x0) &&
            (lVar11 = getSystemVariableInfo(pSVar21,*(char **)(lVar10 + 8)), lVar11 != 0)) &&
           (*(char *)(lVar11 + 0x18) != '\0')) {
                    /* try { // try from 00c311f8 to 00c31213 has its CatchHandler @ 00c31a3c */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((char *)in_x8);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)in_x8);
          local_178 = *(int **)(lVar10 + 0x10);
          uVar26 = (ulong)(iVar9 + 1U);
        }
      }
    }
                    /* try { // try from 00c31220 to 00c3122b has its CatchHandler @ 00c31a90 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(local_190);
                    /* try { // try from 00c3122c to 00c3123b has its CatchHandler @ 00c31a78 */
    renameMetalInputSysVars(this,(ConversionContext *)local_190,bVar14);
    if ((*(byte *)in_x8 & 1) != 0) {
      operator_delete((void *)in_x8[2]);
    }
    in_x8[1] = uStack_168;
    *in_x8 = CONCAT62(uStack_16e,CONCAT11(uStack_16f,local_170));
    in_x8[2] = (ulong)local_160;
    if (((byte)local_190[0]._0_1_ & 1) != 0) {
      operator_delete(local_180);
    }
    if ((*local_178 == 7) && (local_178[4] == 6)) {
      pcVar24 = "METAL_BUFFER_";
      if (*(char *)(local_178 + 5) != '\0') {
        pcVar24 = "METAL_RWBUFFER_";
      }
                    /* try { // try from 00c312a4 to 00c312af has its CatchHandler @ 00c31a50 */
      std::__ndk1::operator+(pcVar24,(basic_string *)in_x8);
      if ((*(byte *)in_x8 & 1) != 0) {
        operator_delete((void *)in_x8[2]);
      }
      in_x8[1] = uStack_168;
      *in_x8 = CONCAT62(uStack_16e,CONCAT11(uStack_16f,local_170));
      in_x8[2] = (ulong)local_160;
    }
  }
  this_00 = (IR_TypeSet *)(lVar18 + 0x10);
  uVar23 = (int)uVar26 + 1;
  local_194 = uVar23;
  if (uVar23 < uVar3) {
    do {
      local_194 = uVar23;
      if ((int)*(uint *)(param_2 + (ulong)((int)uVar26 + (uint)*(ushort *)(param_2 + 6) + 3) * 4) <
          0) {
        uVar20 = (ulong)(*(uint *)(param_2 +
                                  (ulong)((int)uVar26 + (uint)*(ushort *)(param_2 + 6) + 3) * 4) &
                        0x7fffffff);
        lVar18 = *(long *)(*(long *)(this + 8) + 0x80);
        piVar13 = (int *)(lVar18 + uVar20 * 0x18);
        iVar9 = *piVar13;
        if (iVar9 - 5U < 2) {
          iVar9 = *local_178;
          if (iVar9 == 1) {
                    /* try { // try from 00c315a4 to 00c315cf has its CatchHandler @ 00c31abc */
            FUN_00c2f578(&local_170,0x20,&DAT_004cdb95,
                         (&DAT_004eba8b)[*(uint *)(lVar18 + uVar20 * 0x18 + 8)]);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((char *)in_x8);
            local_178 = (int *)IR_Type::getElementType((IR_Type *)local_178,this_00);
          }
          else if ((iVar9 == 4) || (iVar9 == 2)) {
                    /* try { // try from 00c3145c to 00c314b7 has its CatchHandler @ 00c31ac4 */
            FUN_00c2f578(&local_170,0x20,&DAT_004cf2ba,*(undefined4 *)(lVar18 + uVar20 * 0x18 + 8));
            if (*local_178 == 4) {
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)in_x8);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)in_x8);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)in_x8);
              local_178 = (int *)IR_Type::getElementType((IR_Type *)local_178,this_00);
            }
            else {
                    /* try { // try from 00c315d4 to 00c3160b has its CatchHandler @ 00c31ac4 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)in_x8);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)in_x8);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                        ((char *)in_x8);
              local_178 = (int *)IR_Type::getMatrixRowType((IR_Type *)local_178,this_00);
            }
          }
        }
        else if (iVar9 == 0xc) {
          if (*local_178 == 6) {
            piVar13 = *(int **)(local_178 + 2);
            if (**(int **)(local_178 + 2) != 3) goto LAB_00c3162c;
          }
          else {
            piVar13 = local_178;
            if (*local_178 == 3) {
              this_01 = *(IR_Struct **)(local_178 + 2);
              ppcVar27 = (char **)(lVar18 + uVar20 * 0x18 + 8);
                    /* try { // try from 00c314e8 to 00c314f7 has its CatchHandler @ 00c31ab0 */
              lVar18 = IR_Struct::getField(this_01,*ppcVar27,(uint *)0x0);
              uVar20 = (ulong)(*(byte *)in_x8 >> 1);
              if ((*(byte *)in_x8 & 1) != 0) {
                uVar20 = in_x8[1];
              }
                    /* try { // try from 00c31514 to 00c3152f has its CatchHandler @ 00c31a4c */
              if ((uVar20 == 3) &&
                 (iVar9 = std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::compare((ulong)in_x8,0,(char *)0xffffffffffffffff,0x4e9199), iVar9 == 0)
                 ) {
                plVar19 = *(long **)(this + 0x18);
                lVar10 = *plVar19;
                if (plVar19[1] != lVar10) {
                  uVar20 = 0;
                  do {
                    pSVar22 = (ShaderStructLayout *)(lVar10 + uVar20 * 0x40);
                    if (pSVar22[0x19] == (ShaderStructLayout)0x0) {
                    /* try { // try from 00c317d0 to 00c317d7 has its CatchHandler @ 00c31a70 */
                      uVar26 = ShaderStructLayout::findField(pSVar22,*ppcVar27,&local_198);
                      plVar19 = *(long **)(this + 0x18);
                      if ((uVar26 & 1) != 0) {
                        if (*plVar19 != 0) {
                          if (*pSVar21 == 4) {
                            std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::assign((char *)in_x8);
                            std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::append((char *)in_x8);
                            std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::append((char *)in_x8);
                            std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::append((char *)in_x8);
                          }
                          else if (*pSVar21 == 5) {
                            uVar26 = (ulong)local_198;
                            lVar10 = *(long *)(*plVar19 + uVar20 * 0x40 + 0x20);
                    /* try { // try from 00c31824 to 00c31833 has its CatchHandler @ 00c31a38 */
                            std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::assign((char *)in_x8);
                            cVar5 = *(char *)(lVar10 + uVar26 * 0x20 + 0x1b);
                            if (cVar5 == '\x03') {
                    /* try { // try from 00c31884 to 00c3188b has its CatchHandler @ 00c31a34 */
                              IR_Type::getTypeString((IR_LANGUAGE)*(undefined8 *)(lVar18 + 0x10));
                              pvVar25 = (void *)((ulong)&local_170 | 1);
                              if ((local_170 & 1) != 0) {
                                pvVar25 = local_160;
                              }
                    /* try { // try from 00c318a8 to 00c318af has its CatchHandler @ 00c31a30 */
                              std::__ndk1::
                              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              ::append((char *)in_x8,(ulong)pvVar25);
                              if ((local_170 & 1) != 0) {
                                operator_delete(local_160);
                              }
                    /* try { // try from 00c318c0 to 00c31947 has its CatchHandler @ 00c31a40 */
                              std::__ndk1::
                              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              ::append((char *)in_x8);
                            }
                            std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::append((char *)in_x8);
                            std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::append((char *)in_x8);
                            std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::append((char *)in_x8);
                            std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::append((char *)in_x8);
                            std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::append((char *)in_x8);
                            if (cVar5 == '\x03') {
                              std::__ndk1::
                              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              ::append((char *)in_x8);
                            }
                          }
                          else {
                            std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::assign((char *)in_x8);
                          }
                          goto LAB_00c31958;
                        }
                        break;
                      }
                    }
                    lVar10 = *plVar19;
                    uVar20 = (ulong)((int)uVar20 + 1);
                  } while (uVar20 < (ulong)(plVar19[1] - lVar10 >> 6));
                }
                    /* try { // try from 00c31950 to 00c319c3 has its CatchHandler @ 00c31a48 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign((char *)in_x8);
              }
              else {
                    /* try { // try from 00c31534 to 00c3153f has its CatchHandler @ 00c31ab0 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                push_back((char)in_x8);
                    /* try { // try from 00c31544 to 00c31553 has its CatchHandler @ 00c31a6c */
                IR_Struct::getRemappedField((char *)this_01,SUB81(*ppcVar27,0));
                pvVar25 = (void *)((ulong)&local_170 | 1);
                if ((local_170 & 1) != 0) {
                  pvVar25 = local_160;
                }
                    /* try { // try from 00c31570 to 00c31577 has its CatchHandler @ 00c31a54 */
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                append((char *)in_x8,(ulong)pvVar25);
                if ((local_170 & 1) != 0) {
                  operator_delete(local_160);
                }
              }
LAB_00c31958:
              local_178 = *(int **)(lVar18 + 0x10);
            }
            else {
LAB_00c3162c:
              local_178 = piVar13;
              ppcVar27 = (char **)(lVar18 + uVar20 * 0x18 + 8);
                    /* try { // try from 00c3163c to 00c31653 has its CatchHandler @ 00c31ab8 */
              pIVar12 = (IR_Type *)IR_TypeSet::findStruct(this_00,*ppcVar27);
              local_178 = (int *)IR_TypeSet::getPointerType(this_00,pIVar12);
              lVar18 = **(long **)(this + 0x18);
              lVar10 = (*(long **)(this + 0x18))[1] - lVar18;
              if (lVar10 == 0) {
                pSVar22 = (ShaderStructLayout *)0x0;
              }
              else {
                uVar20 = 0;
                pcVar24 = *ppcVar27;
                do {
                  pSVar22 = (ShaderStructLayout *)(lVar18 + uVar20 * 0x40);
                  __s1 = *(ShaderStructLayout **)(pSVar22 + 0x10);
                  if (((byte)*pSVar22 & 1) == 0) {
                    __s1 = pSVar22 + 1;
                  }
                  iVar9 = strcmp((char *)__s1,pcVar24);
                  if (iVar9 == 0) goto LAB_00c316c0;
                  uVar20 = (ulong)((int)uVar20 + 1);
                } while (uVar20 < (ulong)(lVar10 >> 6));
                pSVar22 = (ShaderStructLayout *)0x0;
              }
LAB_00c316c0:
              local_194 = (int)uVar26 + 2;
                    /* try { // try from 00c316c8 to 00c316d3 has its CatchHandler @ 00c31aac */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string(local_1b0);
                    /* try { // try from 00c316d8 to 00c316ff has its CatchHandler @ 00c31a94 */
              decodeStructBufferLoad
                        ((ConversionContext *)this,(basic_string)local_1b0,pSVar22,(vector *)param_1
                         ,(uint *)param_2,&local_194,(IR_Type **)&local_178);
              if ((*(byte *)in_x8 & 1) != 0) {
                operator_delete((void *)in_x8[2]);
              }
              uVar7 = CONCAT11(uStack_16f,local_170);
              local_170 = 0;
              uStack_16f = 0;
              in_x8[1] = uStack_168;
              *in_x8 = CONCAT62(uStack_16e,uVar7);
              in_x8[2] = (ulong)local_160;
              if (((byte)local_1b0[0] & 1) != 0) {
                operator_delete(local_1a0);
              }
              uVar23 = local_194 - 1;
            }
          }
        }
        else if (iVar9 == 0xd) {
          lVar18 = lVar18 + uVar20 * 0x18;
          if (*(char *)(lVar18 + 8) == -1) {
            uVar17 = 0;
          }
          else if (*(char *)(lVar18 + 9) == -1) {
            uVar17 = 1;
          }
          else if (*(char *)(lVar18 + 10) == -1) {
            uVar17 = 2;
          }
          else {
            uVar17 = 3;
            if (*(char *)(lVar18 + 0xb) != -1) {
              uVar17 = 4;
            }
          }
                    /* try { // try from 00c31750 to 00c3178f has its CatchHandler @ 00c31ac0 */
          IR_Const::formatHLL((IR_Const *)piVar13,(char *)&local_170,0,false);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)in_x8);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)in_x8);
          local_178 = (int *)IR_TypeSet::getVectorType(this_00,local_178[2],uVar17);
        }
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)in_x8);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)in_x8);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)in_x8);
        iVar9 = *local_178;
        if (iVar9 == 4) {
LAB_00c31304:
                    /* try { // try from 00c31304 to 00c3142b has its CatchHandler @ 00c31ac8 */
          local_178 = (int *)IR_Type::getElementType((IR_Type *)local_178,this_00);
        }
        else if (iVar9 == 2) {
          local_178 = (int *)IR_Type::getMatrixRowType((IR_Type *)local_178,this_00);
        }
        else if (iVar9 == 1) goto LAB_00c31304;
      }
      uVar26 = (ulong)uVar23;
      uVar23 = uVar23 + 1;
      local_194 = uVar23;
    } while (uVar23 < uVar3);
  }
  piVar13 = local_178;
  if (iVar4 == 5) {
                    /* try { // try from 00c319d8 to 00c319e3 has its CatchHandler @ 00c31a74 */
    piVar13 = (int *)IR_TypeSet::getReferenceType(this_00,(IR_Type *)local_178);
  }
  *(int **)(ulong)param_4 = piVar13;
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


