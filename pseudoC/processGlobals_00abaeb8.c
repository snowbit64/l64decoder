// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processGlobals
// Entry Point: 00abaeb8
// Size: 1928 bytes
// Signature: undefined __cdecl processGlobals(vector * param_1, map * param_2)


/* VulkanProgramObject::processGlobals(std::__ndk1::vector<VulkanProgramObject::GlobalVarInfo,
   std::__ndk1::allocator<VulkanProgramObject::GlobalVarInfo> >&,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, unsigned int> > >&) */

void VulkanProgramObject::processGlobals(vector *param_1,map *param_2)

{
  ulong uVar1;
  int *piVar2;
  __tree_node_base **pp_Var3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  bool bVar12;
  vector *this;
  void *pvVar13;
  undefined8 *puVar14;
  uint *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  uint *puVar19;
  void *pvVar20;
  long *plVar21;
  undefined4 uVar22;
  ulong uVar23;
  undefined4 uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  void **this_00;
  int iVar28;
  ulong __n;
  int iVar29;
  long lVar30;
  ulong uVar31;
  __tree_node_base **pp_Var32;
  uint **ppuVar33;
  __tree_node_base **pp_Var34;
  __tree_node_base **pp_Var35;
  uint **ppuVar36;
  undefined8 local_128 [4];
  uint local_108 [2];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  void *local_e0 [4];
  void *local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *pvStack_98;
  void *local_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar11 = tpidr_el0;
  local_78 = *(long *)(lVar11 + 0x28);
  lVar16 = *(long *)param_2;
  lVar18 = *(long *)(param_2 + 8);
  lVar30 = lVar18;
  if (lVar18 != lVar16) {
    uVar26 = 0;
    do {
      puVar15 = (uint *)(lVar16 + uVar26 * 0x30);
      uVar6 = *puVar15;
      if (uVar6 < 8) {
        uVar10 = 1 << (ulong)(uVar6 & 0x1f);
        if ((uVar10 & 0x26) == 0) {
          if ((uVar10 & 200) == 0) {
            if (uVar6 == 0) {
              puVar5 = *(undefined4 **)(param_1 + 0x20);
              this = param_1 + 0x18;
              if (puVar5 == *(undefined4 **)(param_1 + 0x28)) goto LAB_00abaf38;
              *puVar5 = 0;
                    /* try { // try from 00abb034 to 00abb037 has its CatchHandler @ 00abb644 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string(puVar5 + 2);
              lVar16 = lVar16 + uVar26 * 0x30;
              uVar17 = *(undefined8 *)(lVar16 + 0x20);
              puVar5[10] = *(undefined4 *)(lVar16 + 0x28);
              *(undefined8 *)(puVar5 + 8) = uVar17;
              *(undefined4 **)(param_1 + 0x20) = puVar5 + 0xc;
            }
          }
          else {
            puVar19 = *(uint **)(param_1 + 0x50);
            this = param_1 + 0x48;
            if (puVar19 == *(uint **)(param_1 + 0x58)) goto LAB_00abaf38;
            *puVar19 = uVar6;
                    /* try { // try from 00abafa0 to 00abafa3 has its CatchHandler @ 00abb660 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string(puVar19 + 2);
            lVar16 = lVar16 + uVar26 * 0x30;
            uVar17 = *(undefined8 *)(lVar16 + 0x20);
            puVar19[10] = *(uint *)(lVar16 + 0x28);
            *(undefined8 *)(puVar19 + 8) = uVar17;
            *(uint **)(param_1 + 0x50) = puVar19 + 0xc;
          }
        }
        else {
          puVar19 = *(uint **)(param_1 + 0x38);
          this = param_1 + 0x30;
          if (puVar19 == *(uint **)(param_1 + 0x40)) {
LAB_00abaf38:
            std::__ndk1::
            vector<VulkanProgramObject::GlobalVarInfo,std::__ndk1::allocator<VulkanProgramObject::GlobalVarInfo>>
            ::__push_back_slow_path<VulkanProgramObject::GlobalVarInfo_const&>
                      ((vector<VulkanProgramObject::GlobalVarInfo,std::__ndk1::allocator<VulkanProgramObject::GlobalVarInfo>>
                        *)this,(GlobalVarInfo *)puVar15);
          }
          else {
            *puVar19 = uVar6;
                    /* try { // try from 00abafe8 to 00abafeb has its CatchHandler @ 00abb654 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string(puVar19 + 2);
            lVar16 = lVar16 + uVar26 * 0x30;
            uVar17 = *(undefined8 *)(lVar16 + 0x20);
            puVar19[10] = *(uint *)(lVar16 + 0x28);
            *(undefined8 *)(puVar19 + 8) = uVar17;
            *(uint **)(param_1 + 0x38) = puVar19 + 0xc;
          }
        }
      }
      uVar26 = (ulong)((int)uVar26 + 1);
      lVar16 = *(long *)param_2;
      lVar18 = *(long *)(param_2 + 8);
      uVar23 = (lVar18 - lVar16 >> 4) * -0x5555555555555555;
      lVar30 = lVar16;
    } while (uVar26 <= uVar23 && uVar23 - uVar26 != 0);
  }
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  pvStack_98 = (void *)0x0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = (void *)0x0;
  uStack_b8 = 0;
  local_c0 = (void *)0x0;
  local_a8 = (void *)0x0;
  local_b0 = (void *)0x0;
  local_e0[1] = (void *)0x0;
  local_e0[0] = (void *)0x0;
  local_e0[3] = (void *)0x0;
  local_e0[2] = (void *)0x0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (lVar18 != lVar30) {
    uVar26 = 0;
    do {
      puVar15 = (uint *)(lVar30 + uVar26 * 0x30);
      uVar9 = *puVar15;
      uVar6 = puVar15[8];
      uVar10 = puVar15[9];
      uVar7 = puVar15[10];
      if (uVar9 == 4) {
        local_128[0]._0_4_ = 0;
        local_108[0] = uVar6;
        if (uVar7 != 0xffffffff) {
          local_108[0] = uVar7;
        }
        if (uVar10 != 0xffffffff) {
          local_108[0] = uVar10;
        }
        uVar25 = 1;
      }
      else {
        bVar12 = uVar6 != 0xffffffff;
        if (bVar12) {
          local_108[0] = uVar6;
          local_128[0]._0_4_ = 2;
        }
        uVar23 = (ulong)bVar12;
        uVar27 = uVar23;
        if (uVar10 != 0xffffffff) {
          uVar27 = (ulong)(bVar12 + 1);
          *(undefined4 *)((long)local_128 + uVar23 * 4) = 1;
          local_108[uVar23] = uVar10;
        }
        uVar25 = (uint)uVar27;
        if (uVar7 != 0xffffffff) {
          uVar25 = uVar25 + 1;
          *(undefined4 *)((long)local_128 + uVar27 * 4) = 3;
          local_108[uVar27] = uVar7;
        }
      }
      uVar4 = (uint)(uVar6 != 0xffffffff);
      if (uVar10 != 0xffffffff) {
        uVar4 = uVar6 != 0xffffffff | 0x10;
      }
      if (uVar25 != 0) {
        uVar23 = (ulong)uVar25;
        puVar14 = local_128;
        puVar15 = local_108;
        uVar24 = 8;
        if (uVar9 != 4) {
          uVar24 = 9;
        }
        if (uVar7 != 0xffffffff) {
          uVar4 = uVar4 | 0x20;
        }
        do {
          uVar27 = (ulong)*(uint *)puVar14;
          if (((uVar9 != 1) && (uVar9 < 8)) && ((1 << (ulong)(uVar9 & 0x1f) & 0xb0U) != 0)) {
            *(int *)((long)&local_100 + uVar27 * 4) = *(int *)((long)&local_100 + uVar27 * 4) + 1;
          }
          uVar6 = *puVar15;
          uVar31 = (ulong)uVar6;
          ppuVar33 = (uint **)(param_1 + uVar27 * 0x40 + 0xf0);
          puVar19 = *ppuVar33;
          if (puVar19 == *(uint **)(param_1 + uVar27 * 0x40 + 0xf8)) {
            pvVar20 = *(void **)(param_1 + uVar27 * 0x40 + 0xe8);
            __n = (long)puVar19 - (long)pvVar20;
            uVar1 = ((long)__n >> 2) + 1;
            if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00abb62c to 00abb63b has its CatchHandler @ 00abb674 */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar1 <= (ulong)((long)__n >> 1)) {
              uVar1 = (long)__n >> 1;
            }
            if (0x7ffffffffffffffb < __n) {
              uVar1 = 0x3fffffffffffffff;
            }
            if (uVar1 == 0) {
              pvVar13 = (void *)0x0;
            }
            else {
              if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00abb290 to 00abb293 has its CatchHandler @ 00abb678 */
              pvVar13 = operator_new(uVar1 << 2);
            }
            puVar19 = (uint *)((long)pvVar13 + ((long)__n >> 2) * 4);
            *puVar19 = uVar6;
            if (0 < (long)__n) {
              memcpy(pvVar13,pvVar20,__n);
            }
            *ppuVar33 = puVar19 + 1;
            *(void **)(param_1 + uVar27 * 0x40 + 0xe8) = pvVar13;
            *(uint **)(param_1 + uVar27 * 0x40 + 0xf8) = (uint *)((long)pvVar13 + uVar1 * 4);
            if (pvVar20 != (void *)0x0) {
              operator_delete(pvVar20);
            }
          }
          else {
            *puVar19 = uVar6;
            *ppuVar33 = puVar19 + 1;
          }
          this_00 = local_e0 + uVar27 * 3;
          uVar10 = *(uint *)((long)&local_f0 + uVar27 * 4);
          pvVar20 = *this_00;
          pvVar13 = local_e0[uVar27 * 3 + 1];
          if (uVar10 <= uVar6 + 1) {
            uVar10 = uVar6 + 1;
          }
          *(uint *)((long)&local_f0 + uVar27 * 4) = uVar10;
          lVar16 = (long)pvVar13 - (long)pvVar20 >> 2;
          if ((ulong)(lVar16 * -0x5555555555555555) < (ulong)uVar10) {
                    /* try { // try from 00abb334 to 00abb33b has its CatchHandler @ 00abb678 */
            std::__ndk1::
            vector<VulkanProgramObject::DescriptorSetLayoutElement,std::__ndk1::allocator<VulkanProgramObject::DescriptorSetLayoutElement>>
            ::__append((vector<VulkanProgramObject::DescriptorSetLayoutElement,std::__ndk1::allocator<VulkanProgramObject::DescriptorSetLayoutElement>>
                        *)this_00,(ulong)uVar10 + lVar16 * 0x5555555555555555);
            pvVar20 = *this_00;
          }
          *(undefined *)((long)pvVar20 + uVar31 * 0xc) = 1;
          if (uVar9 == 1) {
            uVar22 = 2;
LAB_00abb3ac:
            *(undefined4 *)((long)pvVar20 + uVar31 * 0xc + 4) = uVar22;
          }
          else {
            if ((uVar9 < 7) && ((0x4dU >> (ulong)(uVar9 & 0x1f) & 1) != 0)) {
              uVar22 = *(undefined4 *)(&DAT_0052341c + (long)(int)uVar9 * 4);
              goto LAB_00abb3ac;
            }
            if ((uVar9 < 8) && (uVar22 = uVar24, (1 << (ulong)(uVar9 & 0x1f) & 0xb0U) != 0))
            goto LAB_00abb3ac;
          }
          puVar14 = (undefined8 *)((long)puVar14 + 4);
          puVar15 = puVar15 + 1;
          uVar23 = uVar23 - 1;
          *(uint *)((long)pvVar20 + uVar31 * 0xc + 8) = uVar4;
        } while (uVar23 != 0);
        lVar30 = *(long *)param_2;
        lVar18 = *(long *)(param_2 + 8);
      }
      uVar26 = (ulong)((int)uVar26 + 1);
      uVar23 = (lVar18 - lVar30 >> 4) * -0x5555555555555555;
    } while (uVar26 <= uVar23 && uVar23 - uVar26 != 0);
  }
  lVar16 = 0;
  iVar29 = 0;
  do {
                    /* try { // try from 00abb428 to 00abb473 has its CatchHandler @ 00abb66c */
    uVar17 = VulkanRenderDevice::createSharedDescriptorSetLayout
                       (*(VulkanRenderDevice **)(param_1 + 0x10),
                        (DescriptorSetLayoutDesc *)(local_e0 + lVar16 * 3));
    ppuVar36 = (uint **)(param_1 + lVar16 * 0x40 + 0xf0);
    puVar15 = *ppuVar36;
    *(undefined8 *)(param_1 + lVar16 * 0x40 + 0xe0) = uVar17;
    *(int *)(param_1 + lVar16 * 4 + 0x1e8) = iVar29;
    iVar8 = *(int *)((long)&local_100 + lVar16 * 4);
    local_128[lVar16] = uVar17;
    ppuVar33 = (uint **)(param_1 + lVar16 * 0x40 + 0xe8);
    std::__ndk1::__sort<std::__ndk1::__less<unsigned_int,unsigned_int>&,unsigned_int*>
              (*ppuVar33,puVar15,(__less *)local_108);
    puVar15 = *ppuVar36;
    puVar19 = *ppuVar33;
    if (puVar15 != puVar19) {
      uVar26 = 0;
      piVar2 = (int *)(param_1 + lVar16 * 0x40 + 0x118);
      pp_Var3 = (__tree_node_base **)(param_1 + lVar16 * 0x40 + 0x108);
      do {
        uVar6 = puVar19[uVar26];
        if ((*(uint *)((long)local_e0[lVar16 * 3] + (ulong)uVar6 * 0xc + 4) & 0xfffffffe) == 8) {
          pp_Var34 = (__tree_node_base **)*pp_Var3;
          pp_Var32 = pp_Var3;
          while (pp_Var35 = pp_Var32, pp_Var34 != (__tree_node_base **)0x0) {
            while (pp_Var35 = pp_Var34, *(uint *)((long)pp_Var35 + 0x1c) <= uVar6) {
              if (uVar6 <= *(uint *)((long)pp_Var35 + 0x1c)) goto LAB_00abb560;
              pp_Var32 = pp_Var35 + 1;
              pp_Var34 = (__tree_node_base **)*pp_Var32;
              if ((__tree_node_base **)*pp_Var32 == (__tree_node_base **)0x0) goto LAB_00abb560;
            }
            pp_Var32 = pp_Var35;
            pp_Var34 = (__tree_node_base **)*pp_Var35;
          }
LAB_00abb560:
          iVar28 = *piVar2;
          if (*pp_Var32 == (__tree_node_base *)0x0) {
                    /* try { // try from 00abb56c to 00abb577 has its CatchHandler @ 00abb670 */
            puVar14 = (undefined8 *)operator_new(0x28);
            *(uint *)((long)puVar14 + 0x1c) = uVar6;
            *(int *)(puVar14 + 4) = iVar28;
            *puVar14 = 0;
            puVar14[1] = 0;
            puVar14[2] = pp_Var35;
            *pp_Var32 = (__tree_node_base *)puVar14;
            plVar21 = (long *)**(long **)(param_1 + lVar16 * 0x40 + 0x100);
            if (plVar21 != (long *)0x0) {
              *(long **)(param_1 + lVar16 * 0x40 + 0x100) = plVar21;
              puVar14 = (undefined8 *)*pp_Var32;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*pp_Var3,(__tree_node_base *)puVar14);
            iVar28 = *piVar2;
            puVar19 = *ppuVar33;
            puVar15 = *ppuVar36;
            *(long *)(param_1 + lVar16 * 0x40 + 0x110) =
                 *(long *)(param_1 + lVar16 * 0x40 + 0x110) + 1;
          }
          *piVar2 = iVar28 + 1;
        }
        uVar26 = (ulong)((int)uVar26 + 1);
      } while (uVar26 < (ulong)((long)puVar15 - (long)puVar19 >> 2));
    }
    iVar29 = iVar8 + iVar29;
    lVar16 = lVar16 + 1;
    if (lVar16 == 4) {
                    /* try { // try from 00abb5a8 to 00abb5af has its CatchHandler @ 00abb640 */
      uVar17 = VulkanRenderDevice::createSharedPipelineLayout
                         (*(VulkanRenderDevice **)(param_1 + 0x10),(PipelineLayoutDesc *)local_128);
      *(undefined8 *)(param_1 + 0x1e0) = uVar17;
      if (pvStack_98 != (void *)0x0) {
        local_90 = pvStack_98;
        operator_delete(pvStack_98);
      }
      if (local_b0 != (void *)0x0) {
        local_a8 = local_b0;
        operator_delete(local_b0);
      }
      if (local_e0[3] != (void *)0x0) {
        local_c0 = local_e0[3];
        operator_delete(local_e0[3]);
      }
      if (local_e0[0] != (void *)0x0) {
        local_e0[1] = local_e0[0];
        operator_delete(local_e0[0]);
      }
      if (*(long *)(lVar11 + 0x28) == local_78) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


