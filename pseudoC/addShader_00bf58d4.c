// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addShader
// Entry Point: 00bf58d4
// Size: 1580 bytes
// Signature: undefined __thiscall addShader(CompiledShaderArchive * this, uint param_1, uchar * param_2, ShaderObjectDesc * param_3, IShaderObject * * param_4)


/* CompiledShaderArchive::addShader(unsigned int, unsigned char const*, ShaderObjectDesc const&,
   IShaderObject*&) */

byte __thiscall
CompiledShaderArchive::addShader
          (CompiledShaderArchive *this,uint param_1,uchar *param_2,ShaderObjectDesc *param_3,
          IShaderObject **param_4)

{
  CompiledShaderArchive **this_00;
  __tree_node_base **this_01;
  undefined4 uVar1;
  long lVar2;
  uchar *__src;
  long **pplVar3;
  byte bVar4;
  pair pVar5;
  long *plVar6;
  __tree_node_base *p_Var7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  void *__dest;
  long **pplVar11;
  __tree_node_base **pp_Var12;
  __tree_node_base **pp_Var13;
  CompiledShaderArchive **ppCVar14;
  __tree_node_base **pp_Var15;
  CompiledShaderArchive **ppCVar16;
  __tree_node_base *p_Var17;
  __tree_node_base *p_Var18;
  CompiledShaderArchive *pCVar19;
  long **pplVar20;
  void *__src_00;
  uint uVar21;
  uchar *local_c0;
  uint local_b8;
  long *local_b0;
  long *plStack_a8;
  uint local_a0;
  char local_9c;
  undefined local_9b;
  undefined local_9a;
  undefined uStack_99;
  undefined2 uStack_98;
  undefined5 uStack_96;
  undefined uStack_91;
  long *local_88;
  long *plStack_80;
  long *local_78;
  long *plStack_70;
  long local_68;
  CompiledShaderArchive *this_02;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (0xfe < param_1) {
    bVar4 = 0;
    goto LAB_00bf5eb4;
  }
  uVar1 = *(undefined4 *)(param_3 + 0x10c);
  plVar6 = (long *)operator_new__((ulong)param_1);
  memcpy(plVar6,param_2,(ulong)param_1);
  this_00 = (CompiledShaderArchive **)(this + 0x60);
  pplVar11 = &local_b0;
  local_b0 = (long *)CONCAT44(param_1,uVar1);
  uVar21 = (uint)((ulong)(*(long *)(this + 8) - *(long *)this) >> 5);
  plStack_a8 = plVar6;
  local_a0 = uVar21;
  pVar5 = std::__ndk1::
          __tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderId,std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>>>
          ::
          __emplace_unique_key_args<CompiledShaderArchive::ShaderId,std::__ndk1::pair<CompiledShaderArchive::ShaderId,unsigned_int>>
                    ((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderId,std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>>>
                      *)this_00,(ShaderId *)pplVar11,(pair *)&local_b0);
  this_02 = (CompiledShaderArchive *)(ulong)pVar5;
  if (((ulong)pplVar11 & 0xff) == 0) {
    operator_delete__(plVar6);
    uVar21 = *(uint *)(this_02 + 0x30);
  }
  else {
    getShaderSourceHash(this_02,param_3,(ShaderHash *)&local_78);
    this_01 = (__tree_node_base **)(this + 0xa0);
    pplVar11 = &local_b0;
    plStack_a8 = plStack_70;
    local_b0 = local_78;
    local_a0 = uVar21;
    pVar5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
            ::
            __emplace_unique_key_args<CompiledShaderArchive::ShaderHash,std::__ndk1::pair<CompiledShaderArchive::ShaderHash,unsigned_int>>
                      ((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
                        *)this_01,(ShaderHash *)pplVar11,(pair *)&local_b0);
    p_Var7 = (__tree_node_base *)(ulong)pVar5;
    if (((ulong)pplVar11 & 0xff) == 0) {
      uVar21 = *(uint *)(p_Var7 + 0x2c);
      *(uint *)(this_02 + 0x30) = uVar21;
    }
    else {
      local_c0 = (uchar *)0x0;
      local_b8 = 0;
      uVar8 = (**(code **)(**(long **)(this + 0x110) + 0x20))
                        (*(long **)(this + 0x110),param_3,&local_c0);
      if ((uVar8 & 1) == 0) {
        pp_Var15 = *(__tree_node_base ***)(p_Var7 + 8);
        if (*(__tree_node_base ***)(p_Var7 + 8) == (__tree_node_base **)0x0) {
          pp_Var15 = (__tree_node_base **)(p_Var7 + 0x10);
          pp_Var13 = (__tree_node_base **)*pp_Var15;
          if (*pp_Var13 != p_Var7) {
            do {
              p_Var18 = *pp_Var15;
              pp_Var15 = (__tree_node_base **)(p_Var18 + 0x10);
              pp_Var13 = (__tree_node_base **)*pp_Var15;
            } while (*pp_Var13 != p_Var18);
          }
        }
        else {
          do {
            pp_Var13 = pp_Var15;
            pp_Var15 = (__tree_node_base **)*pp_Var13;
          } while ((__tree_node_base **)*pp_Var13 != (__tree_node_base **)0x0);
        }
        if (*this_01 == p_Var7) {
          *this_01 = (__tree_node_base *)pp_Var13;
        }
        *(long *)(this + 0xb0) = *(long *)(this + 0xb0) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0xa8),p_Var7);
        operator_delete(p_Var7);
        ppCVar16 = *(CompiledShaderArchive ***)(this_02 + 8);
        if (*(CompiledShaderArchive ***)(this_02 + 8) == (CompiledShaderArchive **)0x0) {
          ppCVar16 = (CompiledShaderArchive **)(this_02 + 0x10);
          ppCVar14 = (CompiledShaderArchive **)*ppCVar16;
          if (*ppCVar14 != this_02) {
            do {
              pCVar19 = *ppCVar16;
              ppCVar16 = (CompiledShaderArchive **)(pCVar19 + 0x10);
              ppCVar14 = (CompiledShaderArchive **)*ppCVar16;
            } while (*ppCVar14 != pCVar19);
          }
        }
        else {
          do {
            ppCVar14 = ppCVar16;
            ppCVar16 = (CompiledShaderArchive **)*ppCVar14;
          } while ((CompiledShaderArchive **)*ppCVar14 != (CompiledShaderArchive **)0x0);
        }
        if (*this_00 == this_02) {
          *this_00 = (CompiledShaderArchive *)ppCVar14;
        }
        *(long *)(this + 0x70) = *(long *)(this + 0x70) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(this + 0x68),(__tree_node_base *)this_02);
        operator_delete(this_02);
        operator_delete__(plVar6);
        bVar4 = 0;
        goto LAB_00bf5eb4;
      }
      MD5Hash::getMD5Hash(local_c0,local_b8,(uchar *)&local_88);
      pp_Var15 = (__tree_node_base **)(this + 0xb8);
      pplVar11 = &local_b0;
      plStack_a8 = plStack_80;
      local_b0 = local_88;
      local_a0 = uVar21;
      pVar5 = std::__ndk1::
              __tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
              ::
              __emplace_unique_key_args<CompiledShaderArchive::ShaderHash,std::__ndk1::pair<CompiledShaderArchive::ShaderHash,unsigned_int>>
                        ((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
                          *)pp_Var15,(ShaderHash *)pplVar11,(pair *)&local_b0);
      p_Var18 = (__tree_node_base *)(ulong)pVar5;
      if (((ulong)pplVar11 & 0xff) != 0) {
        plVar9 = (long *)(**(code **)(**(long **)(this + 0x108) + 0x10))
                                   (*(long **)(this + 0x108),&local_c0);
        if (plVar9 == (long *)0x0) {
          pp_Var13 = *(__tree_node_base ***)(p_Var18 + 8);
          if (*(__tree_node_base ***)(p_Var18 + 8) == (__tree_node_base **)0x0) {
            pp_Var13 = (__tree_node_base **)(p_Var18 + 0x10);
            pp_Var12 = (__tree_node_base **)*pp_Var13;
            if (*pp_Var12 != p_Var18) {
              do {
                p_Var17 = *pp_Var13;
                pp_Var13 = (__tree_node_base **)(p_Var17 + 0x10);
                pp_Var12 = (__tree_node_base **)*pp_Var13;
              } while (*pp_Var12 != p_Var17);
            }
          }
          else {
            do {
              pp_Var12 = pp_Var13;
              pp_Var13 = (__tree_node_base **)*pp_Var12;
            } while ((__tree_node_base **)*pp_Var12 != (__tree_node_base **)0x0);
          }
          if (*pp_Var15 == p_Var18) {
            *pp_Var15 = (__tree_node_base *)pp_Var12;
          }
          *(long *)(this + 200) = *(long *)(this + 200) + -1;
          std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(this + 0xc0),p_Var18);
          operator_delete(p_Var18);
          pp_Var15 = *(__tree_node_base ***)(p_Var7 + 8);
          if (*(__tree_node_base ***)(p_Var7 + 8) == (__tree_node_base **)0x0) {
            pp_Var15 = (__tree_node_base **)(p_Var7 + 0x10);
            pp_Var13 = (__tree_node_base **)*pp_Var15;
            if (*pp_Var13 != p_Var7) {
              do {
                p_Var18 = *pp_Var15;
                pp_Var15 = (__tree_node_base **)(p_Var18 + 0x10);
                pp_Var13 = (__tree_node_base **)*pp_Var15;
              } while (*pp_Var13 != p_Var18);
            }
          }
          else {
            do {
              pp_Var13 = pp_Var15;
              pp_Var15 = (__tree_node_base **)*pp_Var13;
            } while ((__tree_node_base **)*pp_Var13 != (__tree_node_base **)0x0);
          }
          if (*this_01 == p_Var7) {
            *this_01 = (__tree_node_base *)pp_Var13;
          }
          *(long *)(this + 0xb0) = *(long *)(this + 0xb0) + -1;
          std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(this + 0xa8),p_Var7);
          operator_delete(p_Var7);
          ppCVar16 = *(CompiledShaderArchive ***)(this_02 + 8);
          if (*(CompiledShaderArchive ***)(this_02 + 8) == (CompiledShaderArchive **)0x0) {
            ppCVar16 = (CompiledShaderArchive **)(this_02 + 0x10);
            ppCVar14 = (CompiledShaderArchive **)*ppCVar16;
            if (*ppCVar14 != this_02) {
              do {
                pCVar19 = *ppCVar16;
                ppCVar16 = (CompiledShaderArchive **)(pCVar19 + 0x10);
                ppCVar14 = (CompiledShaderArchive **)*ppCVar16;
              } while (*ppCVar14 != pCVar19);
            }
          }
          else {
            do {
              ppCVar14 = ppCVar16;
              ppCVar16 = (CompiledShaderArchive **)*ppCVar14;
            } while ((CompiledShaderArchive **)*ppCVar14 != (CompiledShaderArchive **)0x0);
          }
          if (*this_00 == this_02) {
            *this_00 = (CompiledShaderArchive *)ppCVar14;
          }
          *(long *)(this + 0x70) = *(long *)(this + 0x70) + -1;
          std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(this + 0x68),(__tree_node_base *)this_02);
          operator_delete(this_02);
          operator_delete__(plVar6);
        }
        else {
          pplVar20 = (long **)(this + 0xf0);
          pplVar11 = pplVar20;
          if ((long **)*pplVar20 != (long **)0x0) {
            pplVar11 = (long **)(this + 0xf0);
            pplVar3 = (long **)*pplVar20;
            do {
              while (pplVar20 = pplVar3, plVar9 < pplVar20[4]) {
                pplVar11 = pplVar20;
                pplVar3 = (long **)*pplVar20;
                if ((long **)*pplVar20 == (long **)0x0) goto LAB_00bf5d28;
              }
              if (plVar9 <= pplVar20[4]) break;
              pplVar11 = pplVar20 + 1;
              pplVar3 = (long **)*pplVar11;
            } while ((long **)*pplVar11 != (long **)0x0);
          }
LAB_00bf5d28:
          if (*pplVar11 == (long *)0x0) {
            plVar6 = (long *)operator_new(0x30);
            plVar6[4] = (long)plVar9;
            *(uint *)(plVar6 + 5) = uVar21;
            *plVar6 = 0;
            plVar6[1] = 0;
            plVar6[2] = (long)pplVar20;
            *pplVar11 = plVar6;
            if (**(long **)(this + 0xe8) != 0) {
              *(long *)(this + 0xe8) = **(long **)(this + 0xe8);
              plVar6 = *pplVar11;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(this + 0xf0),(__tree_node_base *)plVar6);
            *(long *)(this + 0xf8) = *(long *)(this + 0xf8) + 1;
          }
          uVar21 = local_b8;
          __src = local_c0;
          plStack_a8 = (long *)0x0;
          local_a0 = 0;
          local_9c = '\0';
          local_9b = 0;
          local_9a = 0;
          uStack_99 = 0;
          uStack_98 = 0;
          uStack_96 = 0;
          local_b0 = plVar9;
          if (this[0x104] != (CompiledShaderArchive)0x0) {
            uVar8 = (ulong)local_b8;
            local_a0 = 0;
            if (local_b8 != 0) {
              uVar10 = LZMACompressionUtil::compressIfSmaller
                                 (local_c0,local_b8,(uchar **)&plStack_a8,&local_a0);
              if ((uVar10 & 1) == 0) {
                plStack_a8 = (long *)operator_new__(uVar8);
                memcpy(plStack_a8,__src,uVar8);
                local_a0 = uVar21;
              }
              else {
                local_9b = 0;
                local_9a = (undefined)uVar21;
                uStack_99 = (undefined)(uVar21 >> 8);
                uStack_98 = (undefined2)(uVar21 >> 0x10);
                local_9c = local_9c + '\x01';
              }
            }
          }
          pplVar11 = *(long ***)(this + 8);
          if (pplVar11 == *(long ***)(this + 0x10)) {
            __src_00 = *(void **)this;
            uVar10 = (long)pplVar11 - (long)__src_00;
            uVar8 = ((long)uVar10 >> 5) + 1;
            if (uVar8 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar8 <= (ulong)((long)uVar10 >> 4)) {
              uVar8 = (long)uVar10 >> 4;
            }
            if (0x7fffffffffffffdf < uVar10) {
              uVar8 = 0x7ffffffffffffff;
            }
            if (uVar8 == 0) {
              __dest = (void *)0x0;
            }
            else {
              if (uVar8 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              __dest = operator_new(uVar8 << 5);
            }
            pplVar11 = (long **)((long)__dest + ((long)uVar10 >> 5) * 0x20);
            pplVar11[1] = plStack_a8;
            *pplVar11 = local_b0;
            pplVar11[3] = (long *)CONCAT17(uStack_91,CONCAT52(uStack_96,uStack_98));
            pplVar11[2] = (long *)CONCAT17(uStack_99,
                                           CONCAT16(local_9a,CONCAT15(local_9b,CONCAT14(local_9c,
                                                  local_a0))));
            if (0 < (long)uVar10) {
              memcpy(__dest,__src_00,uVar10);
            }
            *(void **)this = __dest;
            *(long ***)(this + 8) = pplVar11 + 4;
            *(void **)(this + 0x10) = (void *)((long)__dest + uVar8 * 0x20);
            if (__src_00 != (void *)0x0) {
              operator_delete(__src_00);
            }
          }
          else {
            pplVar11[1] = plStack_a8;
            *pplVar11 = local_b0;
            pplVar11[3] = (long *)CONCAT17(uStack_91,CONCAT52(uStack_96,uStack_98));
            pplVar11[2] = (long *)CONCAT17(uStack_99,
                                           CONCAT16(local_9a,CONCAT15(local_9b,CONCAT14(local_9c,
                                                  local_a0))));
            *(long ***)(this + 8) = pplVar11 + 4;
          }
          *param_4 = (IShaderObject *)local_b0;
        }
        bVar4 = plVar9 != (long *)0x0;
        goto LAB_00bf5eb4;
      }
      uVar21 = *(uint *)(p_Var18 + 0x2c);
      *(uint *)(this_02 + 0x30) = uVar21;
      *(uint *)(p_Var7 + 0x2c) = uVar21;
    }
  }
  bVar4 = getShader(this,uVar21,param_4,(ulonglong *)&local_b0);
LAB_00bf5eb4:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4 & 1;
}


