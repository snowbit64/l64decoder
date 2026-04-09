// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fillAutoConstantList
// Entry Point: 009595ec
// Size: 3596 bytes
// Signature: undefined __thiscall fillAutoConstantList(MaterialShader * this, map * param_1, map * param_2, uint param_3, ShaderStructLayout * param_4)


/* MaterialShader::fillAutoConstantList(std::__ndk1::map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, unsigned int,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, unsigned int> > > const*,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, unsigned int> > > const*,
   unsigned int, ShaderStructLayout const*) */

void __thiscall
MaterialShader::fillAutoConstantList
          (MaterialShader *this,map *param_1,map *param_2,uint param_3,ShaderStructLayout *param_4)

{
  long *plVar1;
  ShaderStructLayout *this_00;
  basic_string *pbVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  short sVar6;
  int iVar7;
  __tree_const_iterator _Var8;
  uint uVar9;
  uint uVar10;
  __tree_iterator _Var11;
  undefined *puVar12;
  void *pvVar13;
  undefined2 *puVar14;
  ulong uVar15;
  map *pmVar16;
  size_t sVar17;
  char *pcVar18;
  void *pvVar19;
  void *pvVar20;
  ulong uVar21;
  long lVar22;
  char cVar23;
  uint uVar24;
  undefined *puVar25;
  ShaderStructLayout *__s1;
  ushort *puVar26;
  ushort uVar27;
  long lVar28;
  ulong uVar29;
  uint local_13c;
  uint local_128;
  undefined8 local_110;
  size_t local_108;
  void *local_100;
  uint local_f4;
  undefined8 local_f0;
  size_t local_e8;
  void *local_e0;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (param_1 != (map *)0x0) {
    uVar21 = *(ulong *)(param_1 + 0x10);
    *(short *)(this + 0x58) = (short)uVar21;
    puVar12 = (undefined *)operator_new__(uVar21 & 0xffff);
    *(undefined **)(this + 0x48) = puVar12;
    pvVar13 = operator_new__(uVar21 & 0xffff);
    *(void **)(this + 0x50) = pvVar13;
    if ((uVar21 & 0xffff) != 0) {
      puVar25 = *(undefined **)(this + 0x50);
      *puVar12 = 0xff;
      *puVar25 = 0xff;
      if (1 < *(ushort *)(this + 0x58)) {
        uVar21 = 1;
        do {
          *(undefined *)(*(long *)(this + 0x48) + uVar21) = 0xff;
          *(undefined *)(*(long *)(this + 0x50) + uVar21) = 0xff;
          uVar21 = uVar21 + 1;
        } while (uVar21 < *(ushort *)(this + 0x58));
      }
    }
  }
  if (param_2 != (map *)0x0) {
    uVar21 = *(ulong *)(param_2 + 0x10);
    *(short *)(this + 0x80) = (short)uVar21;
    puVar14 = (undefined2 *)operator_new__((ulong)(uint)((int)uVar21 << 1) & 0x1fffe);
    *(undefined2 **)(this + 0x70) = puVar14;
    puVar12 = (undefined *)operator_new__(uVar21 & 0xffff);
    *(undefined **)(this + 0x78) = puVar12;
    if ((uVar21 & 0xffff) != 0) {
      uVar27 = *(ushort *)(this + 0x80);
      *puVar12 = 0;
      *puVar14 = 0xffff;
      if (1 < uVar27) {
        uVar21 = 1;
        do {
          lVar22 = *(long *)(this + 0x78);
          *(undefined2 *)(*(long *)(this + 0x70) + uVar21 * 2) = 0xffff;
          *(undefined *)(lVar22 + uVar21) = 0;
          uVar21 = uVar21 + 1;
        } while (uVar21 < *(ushort *)(this + 0x80));
      }
    }
  }
  *(undefined8 *)(this + 0x16) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xe) = 0xffffffffffffffff;
  *(undefined2 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x26) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x1e) = 0xffffffffffffffff;
  if (param_3 == 0) {
    local_13c = 0;
  }
  else {
    uVar21 = 0;
    local_13c = 0;
    sVar6 = 0;
    do {
      this_00 = param_4 + uVar21 * 0x40;
      __s1 = *(ShaderStructLayout **)(this_00 + 0x10);
      if (((byte)*this_00 & 1) == 0) {
        __s1 = this_00 + 1;
      }
      if (this_00[0x19] == (ShaderStructLayout)0x0) {
        iVar7 = strcmp((char *)__s1,"RenderArgParameters");
        if (iVar7 == 0) {
          *(short *)(this + 0x26) = sVar6;
        }
        else {
          iVar7 = strcmp((char *)__s1,"MobileLightingParams");
          if (iVar7 == 0) {
            *(short *)(this + 0x28) = sVar6;
          }
          else {
            iVar7 = strcmp((char *)__s1,"HardwareInstancingParameters");
            if (iVar7 == 0) {
              *(short *)(this + 0x2a) = sVar6;
            }
            else {
              iVar7 = strcmp((char *)__s1,"SoftwareInstancingParameters");
              if (iVar7 == 0) {
                *(short *)(this + 0x2c) = sVar6;
              }
            }
          }
        }
        sVar6 = sVar6 + 1;
      }
      else if ((this_00[0x19] == (ShaderStructLayout)0x1) &&
              (iVar7 = strcmp((char *)__s1,"ObjectParameters"), iVar7 == 0)) {
        uVar15 = ShaderStructLayout::findField(this_00,"blendMatrices",&local_f4);
        if ((uVar15 & 1) != 0) {
          *(undefined2 *)(this + 0xe) =
               *(undefined2 *)
                (*(long *)(param_4 + uVar21 * 0x40 + 0x20) + (ulong)local_f4 * 0x20 + 0x18);
        }
        uVar15 = ShaderStructLayout::findField(this_00,"defaultGeometry",&local_f4);
        if ((uVar15 & 1) != 0) {
          *(undefined2 *)(this + 0x10) =
               *(undefined2 *)
                (*(long *)(param_4 + uVar21 * 0x40 + 0x20) + (ulong)local_f4 * 0x20 + 0x18);
        }
        uVar15 = ShaderStructLayout::findField(this_00,"particle",&local_f4);
        if ((uVar15 & 1) != 0) {
          *(undefined2 *)(this + 0x12) =
               *(undefined2 *)
                (*(long *)(param_4 + uVar21 * 0x40 + 0x20) + (ulong)local_f4 * 0x20 + 0x18);
        }
        uVar15 = ShaderStructLayout::findField(this_00,"modelMatrix",&local_f4);
        if ((uVar15 & 1) != 0) {
          *(undefined2 *)(this + 0x16) =
               *(undefined2 *)
                (*(long *)(param_4 + uVar21 * 0x40 + 0x20) + (ulong)local_f4 * 0x20 + 0x18);
        }
        uVar15 = ShaderStructLayout::findField(this_00,"prevModelMatrix",&local_f4);
        if ((uVar15 & 1) != 0) {
          *(undefined2 *)(this + 0x18) =
               *(undefined2 *)
                (*(long *)(param_4 + uVar21 * 0x40 + 0x20) + (ulong)local_f4 * 0x20 + 0x18);
        }
        uVar15 = ShaderStructLayout::findField(this_00,"distanceBlendInverseAlpha",&local_f4);
        if ((uVar15 & 1) != 0) {
          *(undefined2 *)(this + 0x1a) =
               *(undefined2 *)
                (*(long *)(param_4 + uVar21 * 0x40 + 0x20) + (ulong)local_f4 * 0x20 + 0x18);
        }
        uVar15 = ShaderStructLayout::findField(this_00,"visibility",&local_f4);
        if ((uVar15 & 1) != 0) {
          *(undefined2 *)(this + 0x1c) =
               *(undefined2 *)
                (*(long *)(param_4 + uVar21 * 0x40 + 0x20) + (ulong)local_f4 * 0x20 + 0x18);
        }
        uVar15 = ShaderStructLayout::findField(this_00,"smp",&local_f4);
        if ((uVar15 & 1) != 0) {
          *(undefined2 *)(this + 0x14) =
               *(undefined2 *)
                (*(long *)(param_4 + uVar21 * 0x40 + 0x20) + (ulong)local_f4 * 0x20 + 0x18);
        }
        uVar15 = ShaderStructLayout::findField(this_00,"terrainInstanceData",&local_f4);
        if ((uVar15 & 1) != 0) {
          *(undefined2 *)(this + 0x1e) =
               *(undefined2 *)
                (*(long *)(param_4 + uVar21 * 0x40 + 0x20) + (ulong)local_f4 * 0x20 + 0x18);
        }
        uVar15 = ShaderStructLayout::findField(this_00,"shadingRate",&local_f4);
        if ((uVar15 & 1) != 0) {
          *(undefined2 *)(this + 0x20) =
               *(undefined2 *)
                (*(long *)(param_4 + uVar21 * 0x40 + 0x20) + (ulong)local_f4 * 0x20 + 0x18);
        }
        uVar15 = ShaderStructLayout::findField(this_00,"cUVScaleOffset",&local_f4);
        if ((uVar15 & 1) != 0) {
          *(undefined2 *)(this + 0x22) =
               *(undefined2 *)
                (*(long *)(param_4 + uVar21 * 0x40 + 0x20) + (ulong)local_f4 * 0x20 + 0x18);
        }
        uVar15 = ShaderStructLayout::findField(this_00,"lod",&local_f4);
        if ((uVar15 & 1) != 0) {
          *(undefined2 *)(this + 0x24) =
               *(undefined2 *)
                (*(long *)(param_4 + uVar21 * 0x40 + 0x20) + (ulong)local_f4 * 0x20 + 0x18);
        }
        plVar1 = (long *)(param_4 + uVar21 * 0x40 + 0x28);
        if (param_2 == (map *)0x0) {
          lVar22 = *plVar1;
          if (lVar22 == *(long *)(param_4 + uVar21 * 0x40 + 0x20)) goto LAB_00959d3c;
LAB_00959d04:
          bVar3 = *(byte *)(lVar22 + -6);
          if (param_4[uVar21 * 0x40 + 0x18] == (ShaderStructLayout)0x0) {
            if (bVar3 == 0) goto LAB_00959d58;
            uVar24 = (uint)bVar3 << 2;
          }
          else if (bVar3 == 0) {
LAB_00959d58:
            uVar24 = (uint)*(byte *)(lVar22 + -5);
            if (uVar24 == 0) {
              uVar24 = 1;
            }
          }
          else {
            uVar24 = (uint)*(byte *)(lVar22 + -5) * (uint)bVar3;
          }
          uVar24 = ((uint)*(ushort *)(lVar22 + -8) + uVar24 * *(ushort *)(lVar22 + -4)) * 4 + 0xc &
                   0xfffffff0;
        }
        else {
          lVar28 = *(long *)(param_4 + uVar21 * 0x40 + 0x20);
          lVar22 = *plVar1;
          if ((int)((ulong)(lVar22 - lVar28) >> 5) != 0) {
            uVar15 = 0;
            do {
              pbVar2 = (basic_string *)(lVar28 + uVar15 * 0x20);
              if (*(char *)((long)pbVar2 + 0x1e) == '\0') {
                _Var8 = std::__ndk1::
                        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                        ::
                        find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                  ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                                    *)param_2,pbVar2);
                pmVar16 = (map *)(ulong)_Var8;
                if (param_2 + 8 != pmVar16) {
                  lVar22 = lVar28 + uVar15 * 0x20;
                  uVar24 = *(uint *)(pmVar16 + 0x38);
                  *(undefined2 *)(*(long *)(this + 0x70) + (ulong)uVar24 * 2) =
                       *(undefined2 *)(lVar22 + 0x18);
                  cVar4 = *(char *)(lVar22 + 0x1a);
                  if (param_4[uVar21 * 0x40 + 0x18] == (ShaderStructLayout)0x0) {
                    if (cVar4 == '\0') {
                      cVar23 = *(char *)(lVar28 + uVar15 * 0x20 + 0x1b);
                      if (cVar23 == '\0') {
                        cVar23 = '\x01';
                      }
                    }
                    else {
                      cVar23 = cVar4 << 2;
                    }
                  }
                  else {
                    cVar23 = *(char *)(lVar22 + 0x1b);
                    if (cVar4 == '\0') {
                      if (cVar23 == '\0') {
                        cVar23 = '\x01';
                      }
                    }
                    else {
                      cVar23 = cVar23 * cVar4;
                    }
                  }
                  *(char *)(*(long *)(this + 0x78) + (ulong)uVar24) =
                       cVar23 * *(char *)(lVar28 + uVar15 * 0x20 + 0x1c);
                  if (local_13c < *(int *)(pmVar16 + 0x38) + 1U) {
                    local_13c = *(int *)(pmVar16 + 0x38) + 1;
                  }
                }
              }
              else {
                bVar3 = *(byte *)((long)pbVar2 + 0x1a);
                if (param_4[uVar21 * 0x40 + 0x18] == (ShaderStructLayout)0x0) {
                  if (bVar3 == 0) goto LAB_00959b00;
                  uVar27 = (ushort)bVar3 << 2;
                }
                else if (bVar3 == 0) {
LAB_00959b00:
                  bVar3 = *(byte *)(lVar28 + uVar15 * 0x20 + 0x1b);
                  uVar27 = (ushort)bVar3;
                  if (bVar3 == 0) {
                    uVar27 = 1;
                  }
                }
                else {
                  uVar27 = (ushort)*(byte *)(lVar28 + uVar15 * 0x20 + 0x1b) * (ushort)bVar3;
                }
                lVar28 = lVar28 + uVar15 * 0x20;
                puVar26 = (ushort *)(lVar28 + 0x1c);
                if (*puVar26 != 0) {
                  uVar24 = 0;
                  do {
                    FUN_0095a504(&local_f0);
                    sVar17 = strlen((char *)&local_f0);
                    if (0xffffffffffffffef < sVar17) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_length_error();
                    }
                    if (sVar17 < 0x17) {
                      local_110 = CONCAT71(local_110._1_7_,(char)((int)sVar17 << 1));
                      pvVar13 = (void *)((ulong)&local_110 | 1);
                      if (sVar17 != 0) goto LAB_00959bc0;
                    }
                    else {
                      uVar29 = sVar17 + 0x10 & 0xfffffffffffffff0;
                      pvVar13 = operator_new(uVar29);
                      local_110 = uVar29 | 1;
                      local_108 = sVar17;
                      local_100 = pvVar13;
LAB_00959bc0:
                      memcpy(pvVar13,&local_f0,sVar17);
                    }
                    *(undefined *)((long)pvVar13 + sVar17) = 0;
                    /* try { // try from 00959bd4 to 00959bdf has its CatchHandler @ 0095a434 */
                    _Var8 = std::__ndk1::
                            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                            ::
                            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                                        *)param_2,(basic_string *)&local_110);
                    pmVar16 = (map *)(ulong)_Var8;
                    if ((local_110 & 1) != 0) {
                      operator_delete(local_100);
                    }
                    if (param_2 + 8 != pmVar16) {
                      uVar9 = *(uint *)(pmVar16 + 0x38);
                      *(ushort *)(*(long *)(this + 0x70) + (ulong)uVar9 * 2) =
                           *(short *)(lVar28 + 0x18) + uVar27 * (short)uVar24;
                      *(char *)(*(long *)(this + 0x78) + (ulong)uVar9) = (char)uVar27;
                      if (local_13c < *(int *)(pmVar16 + 0x38) + 1U) {
                        local_13c = *(int *)(pmVar16 + 0x38) + 1;
                      }
                    }
                    uVar24 = uVar24 + 1;
                  } while (uVar24 < *puVar26);
                }
              }
              lVar22 = *plVar1;
              lVar28 = *(long *)(param_4 + uVar21 * 0x40 + 0x20);
              uVar15 = uVar15 + 1;
            } while (uVar15 < ((ulong)(lVar22 - lVar28) >> 5 & 0xffffffff));
          }
          if (lVar22 != lVar28) goto LAB_00959d04;
LAB_00959d3c:
          uVar24 = 0;
        }
        *(short *)(this + 0xc) = (short)(uVar24 >> 4);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != param_3);
  }
  pvVar13 = (void *)((ulong)&local_f0 | 1);
  iVar7 = (**(code **)(**(long **)(this + 0x88) + 0x20))();
  if (iVar7 == 0) {
    local_128 = 0;
  }
  else {
    local_128 = 0;
    uVar24 = 0;
    do {
      pcVar18 = (char *)(**(code **)(**(long **)(this + 0x88) + 0x18))
                                  (*(long **)(this + 0x88),uVar24);
      sVar17 = strlen(pcVar18);
      if (0xffffffffffffffef < sVar17) goto LAB_0095a3ec;
      if (sVar17 < 0x17) {
        local_f0 = CONCAT71(local_f0._1_7_,(char)((int)sVar17 << 1));
        pvVar19 = pvVar13;
        if (sVar17 != 0) goto LAB_00959e50;
      }
      else {
        uVar21 = sVar17 + 0x10 & 0xfffffffffffffff0;
        pvVar19 = operator_new(uVar21);
        local_f0 = uVar21 | 1;
        local_e8 = sVar17;
        local_e0 = pvVar19;
LAB_00959e50:
        memcpy(pvVar19,pcVar18,sVar17);
      }
      *(undefined *)((long)pvVar19 + sVar17) = 0;
                    /* try { // try from 00959e70 to 00959e7b has its CatchHandler @ 0095a420 */
      uVar9 = (**(code **)(**(long **)(this + 0x88) + 0x10))(*(long **)(this + 0x88),uVar24,0);
                    /* try { // try from 00959e8c to 00959e97 has its CatchHandler @ 0095a41c */
      uVar10 = (**(code **)(**(long **)(this + 0x88) + 0x10))(*(long **)(this + 0x88),uVar24,1);
      if (uVar9 != 0xffffffff) {
                    /* try { // try from 00959ea4 to 00959eaf has its CatchHandler @ 0095a40c */
        _Var11 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_TEXTURES>>>
                             *)s_texturesMapVs,(basic_string *)&local_f0);
        if (((ulong)_Var11 != 0x210e560) &&
           (this[(ulong)*(uint *)((ulong)_Var11 + 0x38) + 0x2e] = SUB41(uVar9,0),
           *(ushort *)(this + 0x5a) <= uVar9)) {
          *(short *)(this + 0x5a) = (short)uVar9 + 1;
        }
      }
      if (uVar10 != 0xffffffff) {
                    /* try { // try from 00959ee4 to 00959eef has its CatchHandler @ 0095a404 */
        _Var11 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_TEXTURES>>>
                             *)s_texturesMapPs,(basic_string *)&local_f0);
        if (((ulong)_Var11 != 0x210e578) &&
           (this[(ulong)*(uint *)((ulong)_Var11 + 0x38) + 0x33] = SUB41(uVar10,0),
           *(ushort *)(this + 0x5c) <= uVar10)) {
          *(short *)(this + 0x5c) = (short)uVar10 + 1;
        }
      }
      if (param_1 != (map *)0x0) {
                    /* try { // try from 00959f20 to 00959f2b has its CatchHandler @ 0095a408 */
        _Var8 = std::__ndk1::
                __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                ::
                find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unsigned_int>>>
                            *)param_1,(basic_string *)&local_f0);
        pmVar16 = (map *)(ulong)_Var8;
        if (param_1 + 8 != pmVar16) {
          if (uVar9 != 0xffffffff) {
            *(MaterialShader *)(*(long *)(this + 0x48) + (ulong)*(uint *)(pmVar16 + 0x38)) =
                 SUB41(uVar9,0);
            if (local_128 < *(int *)(pmVar16 + 0x38) + 1U) {
              local_128 = *(int *)(pmVar16 + 0x38) + 1;
            }
            if (*(ushort *)(this + 0x5a) <= uVar9) {
              *(short *)(this + 0x5a) = (short)uVar9 + 1;
            }
          }
          if (uVar10 != 0xffffffff) {
            *(MaterialShader *)(*(long *)(this + 0x50) + (ulong)*(uint *)(pmVar16 + 0x38)) =
                 SUB41(uVar10,0);
            if (local_128 < *(int *)(pmVar16 + 0x38) + 1U) {
              local_128 = *(int *)(pmVar16 + 0x38) + 1;
            }
            if (*(ushort *)(this + 0x5c) <= uVar10) {
              *(short *)(this + 0x5c) = (short)uVar10 + 1;
            }
          }
        }
      }
      if ((local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
      uVar24 = uVar24 + 1;
      uVar9 = (**(code **)(**(long **)(this + 0x88) + 0x20))();
    } while (uVar24 < uVar9);
  }
  iVar7 = (**(code **)(**(long **)(this + 0x88) + 0x50))();
  if (iVar7 != 0) {
    uVar24 = 0;
    do {
      pcVar18 = (char *)(**(code **)(**(long **)(this + 0x88) + 0x48))
                                  (*(long **)(this + 0x88),uVar24);
      sVar17 = strlen(pcVar18);
      if (0xffffffffffffffef < sVar17) goto LAB_0095a3ec;
      if (sVar17 < 0x17) {
        local_f0 = CONCAT71(local_f0._1_7_,(char)((int)sVar17 << 1));
        pvVar19 = pvVar13;
        if (sVar17 != 0) goto LAB_0095a078;
      }
      else {
        uVar21 = sVar17 + 0x10 & 0xfffffffffffffff0;
        pvVar19 = operator_new(uVar21);
        local_f0 = uVar21 | 1;
        local_e8 = sVar17;
        local_e0 = pvVar19;
LAB_0095a078:
        memcpy(pvVar19,pcVar18,sVar17);
      }
      *(undefined *)((long)pvVar19 + sVar17) = 0;
                    /* try { // try from 0095a098 to 0095a09f has its CatchHandler @ 0095a418 */
      uVar9 = (**(code **)(**(long **)(this + 0x88) + 0x40))(*(long **)(this + 0x88),uVar24);
      if (uVar9 != 0xffffffff) {
                    /* try { // try from 0095a0ac to 0095a0b7 has its CatchHandler @ 0095a400 */
        _Var11 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_OUTPUT_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_OUTPUT_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_OUTPUT_TEXTURES>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_OUTPUT_TEXTURES>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_OUTPUT_TEXTURES>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_OUTPUT_TEXTURES>>>
                             *)&s_outputTexturesMapPs,(basic_string *)&local_f0);
        if (((undefined *)(ulong)_Var11 != &DAT_0210e590) &&
           (this[(ulong)*(uint *)((undefined *)(ulong)_Var11 + 0x38) + 0x43] = SUB41(uVar9,0),
           *(ushort *)(this + 0x5e) <= uVar9)) {
          *(short *)(this + 0x5e) = (short)uVar9 + 1;
        }
      }
      if ((local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
      uVar24 = uVar24 + 1;
      uVar9 = (**(code **)(**(long **)(this + 0x88) + 0x50))();
    } while (uVar24 < uVar9);
  }
  iVar7 = (**(code **)(**(long **)(this + 0x88) + 0x38))();
  if (iVar7 != 0) {
    uVar24 = 0;
    do {
      pcVar18 = (char *)(**(code **)(**(long **)(this + 0x88) + 0x30))
                                  (*(long **)(this + 0x88),uVar24);
      sVar17 = strlen(pcVar18);
      if (0xffffffffffffffef < sVar17) {
LAB_0095a3ec:
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar17 < 0x17) {
        local_f0 = CONCAT71(local_f0._1_7_,(char)((int)sVar17 << 1));
        pvVar13 = (void *)((ulong)&local_f0 | 1);
        if (sVar17 != 0) goto LAB_0095a1ac;
      }
      else {
        uVar21 = sVar17 + 0x10 & 0xfffffffffffffff0;
        pvVar13 = operator_new(uVar21);
        local_f0 = uVar21 | 1;
        local_e8 = sVar17;
        local_e0 = pvVar13;
LAB_0095a1ac:
        memcpy(pvVar13,pcVar18,sVar17);
      }
      *(undefined *)((long)pvVar13 + sVar17) = 0;
                    /* try { // try from 0095a1cc to 0095a1d7 has its CatchHandler @ 0095a414 */
      uVar9 = (**(code **)(**(long **)(this + 0x88) + 0x28))(*(long **)(this + 0x88),uVar24,0);
                    /* try { // try from 0095a1e8 to 0095a1f3 has its CatchHandler @ 0095a410 */
      uVar10 = (**(code **)(**(long **)(this + 0x88) + 0x28))(*(long **)(this + 0x88),uVar24,1);
      if (uVar9 != 0xffffffff) {
                    /* try { // try from 0095a200 to 0095a20b has its CatchHandler @ 0095a3f8 */
        _Var11 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_SAMPLERS>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_SAMPLERS>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_SAMPLERS>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_SAMPLERS>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_SAMPLERS>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::VS_SAMPLERS>>>
                             *)s_samplersMapVs,(basic_string *)&local_f0);
        if (((ulong)_Var11 != 0x210e5a8) &&
           (this[(ulong)*(uint *)((ulong)_Var11 + 0x38) + 0x60] = SUB41(uVar9,0),
           *(ushort *)(this + 0x66) <= uVar9)) {
          *(short *)(this + 0x66) = (short)uVar9 + 1;
        }
      }
      if (uVar10 != 0xffffffff) {
                    /* try { // try from 0095a240 to 0095a24b has its CatchHandler @ 0095a3fc */
        _Var11 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,MaterialShader::PS_SAMPLERS>>>
                             *)s_samplersMapPs,(basic_string *)&local_f0);
        if (((ulong)_Var11 != 0x210e5c0) &&
           (this[(ulong)*(uint *)((ulong)_Var11 + 0x38) + 0x62] = SUB41(uVar10,0),
           *(ushort *)(this + 0x68) <= uVar10)) {
          *(short *)(this + 0x68) = (short)uVar10 + 1;
        }
      }
      if ((local_f0 & 1) != 0) {
        operator_delete(local_e0);
      }
      uVar24 = uVar24 + 1;
      uVar9 = (**(code **)(**(long **)(this + 0x88) + 0x38))();
    } while (uVar24 < uVar9);
  }
  if ((param_1 != (map *)0x0) && (local_128 < *(ushort *)(this + 0x58))) {
    if (local_128 == 0) {
      pvVar13 = *(void **)(this + 0x48);
      pvVar19 = (void *)0x0;
      pvVar20 = (void *)0x0;
    }
    else {
      uVar21 = (ulong)local_128;
      pvVar19 = operator_new__(uVar21);
      pvVar20 = operator_new__(uVar21);
      pvVar13 = *(void **)(this + 0x48);
      memcpy(pvVar19,pvVar13,uVar21);
      memcpy(pvVar20,*(void **)(this + 0x50),uVar21);
    }
    if (pvVar13 != (void *)0x0) {
      operator_delete__(pvVar13);
    }
    if (*(void **)(this + 0x50) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x50));
    }
    *(void **)(this + 0x48) = pvVar19;
    *(void **)(this + 0x50) = pvVar20;
    *(short *)(this + 0x58) = (short)local_128;
  }
  if ((param_2 != (map *)0x0) && (local_13c < *(ushort *)(this + 0x80))) {
    if (local_13c == 0) {
      pvVar13 = *(void **)(this + 0x70);
      pvVar19 = (void *)0x0;
      pvVar20 = (void *)0x0;
    }
    else {
      uVar21 = (ulong)local_13c;
      pvVar19 = operator_new__(uVar21 << 1);
      pvVar20 = operator_new__(uVar21);
      pvVar13 = *(void **)(this + 0x70);
      memcpy(pvVar19,pvVar13,uVar21 << 1);
      memcpy(pvVar20,*(void **)(this + 0x78),uVar21);
    }
    if (pvVar13 != (void *)0x0) {
      operator_delete__(pvVar13);
    }
    if (*(void **)(this + 0x78) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x78));
    }
    *(void **)(this + 0x70) = pvVar19;
    *(void **)(this + 0x78) = pvVar20;
    *(short *)(this + 0x80) = (short)local_13c;
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


