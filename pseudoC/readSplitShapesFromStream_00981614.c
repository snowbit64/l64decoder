// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readSplitShapesFromStream
// Entry Point: 00981614
// Size: 3152 bytes
// Signature: undefined __thiscall readSplitShapesFromStream(MeshSplitManager * this, GsBitStream * param_1, map * param_2)


/* MeshSplitManager::readSplitShapesFromStream(GsBitStream*, std::__ndk1::map<unsigned int,
   MeshSplitManager::LoadedFileId, std::__ndk1::less<unsigned int>,
   std::__ndk1::allocator<std::__ndk1::pair<unsigned int const, MeshSplitManager::LoadedFileId> >
   >&) */

void __thiscall
MeshSplitManager::readSplitShapesFromStream
          (MeshSplitManager *this,GsBitStream *param_1,map *param_2)

{
  undefined8 *puVar1;
  MeshSplitManager **ppMVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  long lVar6;
  LoadedSplitShape *pLVar7;
  LoadedSplitShape *pLVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long **pplVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  uint uVar18;
  MeshSplitManager **ppMVar19;
  long **pplVar20;
  void *pvVar21;
  void *pvVar22;
  int iVar23;
  MeshSplitManager **ppMVar24;
  undefined8 *puVar25;
  ulong uVar26;
  int iVar27;
  int iVar28;
  size_t sVar29;
  uint uVar30;
  long lVar31;
  long **pplVar32;
  ulong uVar33;
  long *plVar34;
  undefined8 *puVar35;
  ushort local_10c [2];
  ushort local_108 [2];
  ushort local_104 [2];
  undefined4 local_100;
  undefined4 local_fc;
  uint local_f8;
  uint local_f4;
  uchar auStack_f0 [4];
  uint local_ec;
  long **local_e8;
  long **local_e0;
  long **local_d8;
  long **local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 uStack_b0;
  LoadedSplitShape *local_a8;
  LoadedSplitShape *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  uint local_80;
  undefined4 uStack_7c;
  undefined4 local_78 [2];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  uVar11 = GsBitStream::readBits(param_1,(uchar *)&local_ec,0x20,true);
  if (((uVar11 & 1) == 0) ||
     (uVar11 = GsBitStream::readBits(param_1,auStack_f0,0x20,true), (uVar11 & 1) == 0)) {
LAB_00981e5c:
    uVar16 = 0;
    goto LAB_00981e60;
  }
  puVar1 = (undefined8 *)(param_2 + 8);
  if (local_ec != 0) {
    uVar18 = 0;
    ppMVar2 = (MeshSplitManager **)(this + 0x128);
    do {
      uVar11 = GsBitStream::readBits(param_1,(uchar *)&local_f4,0x20,true);
      if (((uVar11 & 1) == 0) ||
         (uVar11 = GsBitStream::readBits(param_1,(uchar *)&local_f8,0x20,true), (uVar11 & 1) == 0))
      goto LAB_00981e5c;
      ppMVar24 = (MeshSplitManager **)*ppMVar2;
      ppMVar19 = ppMVar2;
      if (ppMVar24 == (MeshSplitManager **)0x0) {
LAB_00981744:
        bVar9 = false;
        plVar34 = (long *)0x0;
      }
      else {
        do {
          bVar9 = *(uint *)((long)ppMVar24 + 0x1c) < local_f4;
          if (!bVar9) {
            ppMVar19 = ppMVar24;
          }
          ppMVar24 = (MeshSplitManager **)ppMVar24[bVar9];
        } while (ppMVar24 != (MeshSplitManager **)0x0);
        if ((ppMVar19 == ppMVar2) || (local_f4 < *(uint *)((long)ppMVar19 + 0x1c)))
        goto LAB_00981744;
        uVar30 = *(uint *)(ppMVar19 + 4);
        local_e8 = (long **)0x0;
        local_e0 = (long **)0x0;
        puVar35 = (undefined8 *)*puVar1;
        uStack_b0 = 0;
        local_b8 = (void *)0x0;
        local_a0 = (LoadedSplitShape *)0x0;
        local_98 = 0;
        local_c0 = (void *)CONCAT44(local_c0._4_4_,uVar30);
        local_d0 = (long **)0x0;
        uStack_c8 = 0;
        local_d8 = (long **)0x0;
        puVar25 = puVar1;
        puVar17 = puVar1;
        while (puVar35 != (undefined8 *)0x0) {
          while (puVar17 = puVar35, uVar30 < *(uint *)(puVar17 + 4)) {
            puVar25 = puVar17;
            puVar35 = (undefined8 *)*puVar17;
            if ((undefined8 *)*puVar17 == (undefined8 *)0x0) goto LAB_00981c10;
          }
          if (uVar30 <= *(uint *)(puVar17 + 4)) break;
          puVar25 = puVar17 + 1;
          puVar35 = (undefined8 *)*puVar25;
        }
LAB_00981c10:
        puVar35 = (undefined8 *)*puVar25;
        local_f4 = uVar30;
        if (puVar35 == (undefined8 *)0x0) {
                    /* try { // try from 00981c20 to 00981c27 has its CatchHandler @ 00982268 */
          puVar35 = (undefined8 *)operator_new(0x50);
          *(uint *)(puVar35 + 4) = uVar30;
          puVar35[9] = 0;
          local_a0 = (LoadedSplitShape *)0x0;
          local_98 = 0;
          puVar35[6] = 0;
          puVar35[5] = 0;
          puVar35[8] = 0;
          puVar35[7] = 0;
          local_a8 = (LoadedSplitShape *)0x0;
          *puVar35 = 0;
          puVar35[1] = 0;
          puVar35[2] = puVar17;
          *puVar25 = puVar35;
          puVar17 = puVar35;
          if (**(long **)param_2 != 0) {
            *(long *)param_2 = **(long **)param_2;
            puVar17 = (undefined8 *)*puVar25;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(param_2 + 8),(__tree_node_base *)puVar17);
          pLVar8 = local_a8;
          plVar34 = puVar35 + 5;
          *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
          pLVar7 = local_a0;
          if (local_a8 != (LoadedSplitShape *)0x0) {
            while (pLVar7 != pLVar8) {
              LoadedSplitShape::~LoadedSplitShape(pLVar7 + -0x58);
              pLVar7 = pLVar7 + -0x58;
            }
            local_a0 = pLVar8;
            operator_delete(local_a8);
          }
        }
        else {
          plVar34 = puVar35 + 5;
        }
        BitVector::~BitVector((BitVector *)&local_b8);
        pplVar15 = local_d8;
        pplVar32 = local_d0;
        if (local_d8 != (long **)0x0) {
          while (pplVar32 != pplVar15) {
            LoadedSplitShape::~LoadedSplitShape((LoadedSplitShape *)(pplVar32 + -0xb));
            pplVar32 = pplVar32 + -0xb;
          }
          local_d0 = pplVar15;
          operator_delete(local_d8);
        }
        BitVector::~BitVector((BitVector *)&local_e8);
        std::__ndk1::
        vector<MeshSplitManager::LoadedSplitShape,std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape>>
        ::reserve((vector<MeshSplitManager::LoadedSplitShape,std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape>>
                   *)(puVar35 + 7),(ulong)local_f8);
        bVar9 = true;
      }
      if (local_f8 != 0) {
        uVar30 = 0;
        do {
          uVar11 = GsBitStream::readBits(param_1,(uchar *)&local_fc,0x20,true);
          if (((((((uVar11 & 1) == 0) ||
                 (uVar11 = GsBitStream::readBits(param_1,(uchar *)&local_100,0x20,true),
                 (uVar11 & 1) == 0)) ||
                (uVar11 = GsBitStream::readBits(param_1,(uchar *)local_104,0x10,true),
                (uVar11 & 1) == 0)) ||
               ((uVar11 = GsBitStream::readBits(param_1,(uchar *)&local_80,0x20,true),
                (uVar11 & 1) == 0 ||
                (uVar11 = GsBitStream::readBits(param_1,(uchar *)((ulong)&local_80 | 4),0x20,true),
                (uVar11 & 1) == 0)))) ||
              ((uVar11 = GsBitStream::readBits(param_1,(uchar *)local_78,0x20,true),
               (uVar11 & 1) == 0 ||
               ((uVar11 = GsBitStream::readBits(param_1,(uchar *)&local_90,0x20,true),
                (uVar11 & 1) == 0 ||
                (uVar11 = GsBitStream::readBits(param_1,(uchar *)((ulong)&local_90 | 4),0x20,true),
                (uVar11 & 1) == 0)))))) ||
             ((uVar11 = GsBitStream::readBits(param_1,(uchar *)local_88,0x20,true),
              (uVar11 & 1) == 0 ||
              (uVar11 = GsBitStream::readBits(param_1,(uchar *)local_108,0x10,true),
              (uVar11 & 1) == 0)))) goto LAB_00981e5c;
          local_c0 = (void *)0x0;
          local_b8 = (void *)0x0;
          uStack_b0 = 0;
                    /* try { // try from 0098185c to 00981863 has its CatchHandler @ 009822a4 */
          std::__ndk1::
          vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
          ::resize((vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
                    *)&local_c0,(ulong)local_108[0]);
          if (local_108[0] != 0) {
            lVar31 = 0;
            uVar11 = 0;
            do {
                    /* try { // try from 00981874 to 0098189f has its CatchHandler @ 009822c8 */
              uVar12 = GsBitStream::readBits(param_1,(uchar *)&local_e8,0x10,true);
              if (((uVar12 & 1) == 0) ||
                 (uVar12 = GsBitStream::readBits(param_1,(uchar *)local_10c,0x10,true),
                 (uVar12 & 1) == 0)) goto LAB_009818f0;
              uVar11 = uVar11 + 1;
              puVar4 = (undefined2 *)((long)local_c0 + lVar31);
              lVar31 = lVar31 + 4;
              *puVar4 = local_e8._0_2_;
              puVar4[1] = local_10c[0];
            } while (uVar11 < local_108[0]);
          }
          local_10c[0] = local_10c[0] & 0xff00;
                    /* try { // try from 009818d4 to 009818df has its CatchHandler @ 009822a0 */
          plVar13 = (long *)BrepUtil::readBrepFromStream(param_1,(bool *)local_10c);
          if ((plVar13 == (long *)0x0) && ((char)local_10c[0] == '\0')) {
LAB_009818f0:
            bVar10 = true;
          }
          else {
                    /* try { // try from 00981908 to 0098190f has its CatchHandler @ 00982294 */
            std::__ndk1::vector<Brep*,std::__ndk1::allocator<Brep*>>::vector
                      ((vector<Brep*,std::__ndk1::allocator<Brep*>> *)&local_e8,(ulong)local_104[0])
            ;
            bVar10 = plVar13 != (long *)0x0;
            if (local_104[0] != 0) {
              uVar11 = 0;
LAB_00981938:
                    /* try { // try from 00981938 to 00981943 has its CatchHandler @ 009822b0 */
              plVar14 = (long *)BrepUtil::readBrepFromStream(param_1,(bool *)local_10c);
              local_e8[uVar11] = plVar14;
              if (local_e8[uVar11] != (long *)0x0) goto LAB_00981928;
              if ((char)local_10c[0] != '\0') {
                bVar10 = false;
                goto LAB_00981928;
              }
              if ((int)uVar11 != 0) {
                lVar31 = 0;
                plVar14 = *local_e8;
                while( true ) {
                  if (plVar14 != (long *)0x0) {
                    (**(code **)(*plVar14 + 8))();
                  }
                  if (uVar11 - 1 == lVar31) break;
                  lVar31 = lVar31 + 1;
                  plVar14 = local_e8[lVar31];
                }
              }
              if (plVar13 != (long *)0x0) {
                (**(code **)(*plVar13 + 8))(plVar13);
              }
              bVar10 = true;
              goto joined_r0x00981b84;
            }
LAB_0098196c:
            if ((bool)(bVar9 & bVar10)) {
              uVar11 = plVar34[3];
              if (uVar11 < (ulong)plVar34[4]) {
                lVar31 = uVar11 + 0x58;
                *(undefined8 *)(uVar11 + 0x50) = 0;
                *(undefined8 *)(uVar11 + 0x38) = 0;
                *(undefined8 *)(uVar11 + 0x30) = 0;
                *(undefined8 *)(uVar11 + 0x48) = 0;
                *(undefined8 *)(uVar11 + 0x40) = 0;
                *(undefined8 *)(uVar11 + 0x28) = 0;
                *(undefined8 *)(uVar11 + 0x20) = 0;
                plVar34[3] = lVar31;
              }
              else {
                    /* try { // try from 00981a00 to 00981a07 has its CatchHandler @ 00982280 */
                std::__ndk1::
                vector<MeshSplitManager::LoadedSplitShape,std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape>>
                ::__emplace_back_slow_path<>();
                lVar31 = plVar34[3];
              }
              *(undefined4 *)(lVar31 + -0x58) = local_fc;
              *(undefined4 *)(lVar31 + -0x54) = local_100;
              *(undefined4 *)(lVar31 + -0x48) = local_78[0];
              *(ulong *)(lVar31 + -0x50) = CONCAT44(uStack_7c,local_80);
              *(long **)(lVar31 + -0x38) = plVar13;
              *(undefined4 *)(lVar31 + -0x3c) = local_88[0];
              *(undefined8 *)(lVar31 + -0x44) = local_90;
              pplVar32 = *(long ***)(lVar31 + -0x30);
              *(long ***)(lVar31 + -0x30) = local_e8;
              pplVar15 = *(long ***)(lVar31 + -0x28);
              *(long ***)(lVar31 + -0x28) = local_e0;
              pplVar20 = *(long ***)(lVar31 + -0x20);
              *(long ***)(lVar31 + -0x20) = local_d8;
              pvVar21 = *(void **)(lVar31 + -0x18);
              *(void **)(lVar31 + -0x18) = local_c0;
              pvVar22 = *(void **)(lVar31 + -0x10);
              *(void **)(lVar31 + -0x10) = local_b8;
              uVar16 = *(undefined8 *)(lVar31 + -8);
              *(undefined8 *)(lVar31 + -8) = uStack_b0;
              local_e8 = pplVar32;
              local_e0 = pplVar15;
              local_d8 = pplVar20;
              local_c0 = pvVar21;
              local_b8 = pvVar22;
              uStack_b0 = uVar16;
              FUN_00f276d0(1,*(long *)(lVar31 + -0x38) + 8);
              plVar14 = *(long **)(lVar31 + -0x28);
              for (plVar13 = *(long **)(lVar31 + -0x30); plVar13 != plVar14; plVar13 = plVar13 + 1)
              {
                FUN_00f276d0(1,*plVar13 + 8);
              }
              bVar10 = false;
            }
            else {
              if (plVar13 != (long *)0x0) {
                (**(code **)(*plVar13 + 8))(plVar13);
              }
              pplVar15 = local_e0;
              pplVar32 = local_e8;
              if (local_e8 == local_e0) {
                bVar10 = false;
              }
              else {
                do {
                  if (*pplVar32 != (long *)0x0) {
                    (**(code **)(**pplVar32 + 8))();
                  }
                  pplVar32 = pplVar32 + 1;
                } while (pplVar32 != pplVar15);
                bVar10 = false;
              }
            }
joined_r0x00981b84:
            if (local_e8 != (long **)0x0) {
              local_e0 = local_e8;
              operator_delete(local_e8);
            }
          }
          if (local_c0 != (void *)0x0) {
            local_b8 = local_c0;
            operator_delete(local_c0);
          }
          if (bVar10) goto LAB_00981e5c;
          uVar30 = uVar30 + 1;
        } while (uVar30 < local_f8);
      }
      uVar11 = GsBitStream::readBits(param_1,(uchar *)&local_c0,0x20,true);
      if ((uVar11 & 1) == 0) goto LAB_00981e5c;
      if (bVar9) {
        BitVector::init((BitVector *)plVar34,(uint)local_c0,false,true);
      }
      if (1 < (uint)local_c0) {
        uVar11 = GsBitStream::readBits(param_1,(uchar *)&local_e8,0x20,true);
        if ((uVar11 & 1) == 0) goto LAB_00981e5c;
        if ((uint)local_e8 != 0) {
          uVar30 = 0;
          do {
            uVar11 = GsBitStream::readBits(param_1,(uchar *)&local_80,0x20,true);
            if ((uVar11 & 1) == 0) goto LAB_00981e5c;
            if (bVar9) {
              uVar11 = (ulong)(local_80 >> 3) & 0xffff;
              lVar31 = *(long *)(*plVar34 + ((ulong)(local_80 >> 0x10) & 0xfff8));
              *(byte *)(lVar31 + uVar11) =
                   *(byte *)(lVar31 + uVar11) & ((byte)(1 << ((ulong)local_80 & 7)) ^ 0xff);
            }
            uVar30 = uVar30 + 1;
          } while (uVar30 < (uint)local_e8);
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < local_ec);
  }
  Mutex::enterCriticalSection();
  std::__ndk1::vector<MeshSplitShape*,std::__ndk1::allocator<MeshSplitShape*>>::vector
            ((vector<MeshSplitShape*,std::__ndk1::allocator<MeshSplitShape*>> *)&local_c0,
             (vector *)(this + 0x60));
                    /* try { // try from 00981e1c to 00981e23 has its CatchHandler @ 00982298 */
  Mutex::leaveCriticalSection();
  pvVar21 = local_c0;
  local_e8 = (long **)0x0;
  local_e0 = (long **)0x0;
  local_d8 = (long **)0x0;
  uVar11 = (ulong)((long)local_b8 - (long)local_c0) >> 3 & 0xffffffff;
  uVar18 = (uint)((ulong)((long)local_b8 - (long)local_c0) >> 3);
  if (uVar18 < 3) {
    pplVar32 = (long **)0x0;
    if (uVar18 != 0) goto LAB_00981eb4;
  }
  else {
    uVar12 = uVar11 / 3;
                    /* try { // try from 00981ea4 to 00981ea7 has its CatchHandler @ 0098228c */
    local_e0 = (long **)operator_new(uVar12 << 3);
    local_d8 = local_e0 + uVar12;
LAB_00981eb4:
    uVar12 = 0;
    pplVar15 = local_e0;
    local_e8 = local_e0;
    do {
      pplVar20 = local_e8;
      plVar34 = *(long **)((long)pvVar21 + uVar12 * 8);
      pplVar32 = pplVar15;
      if ((*(byte *)(plVar34 + 0x42) >> 6 & 1) == 0) {
        puVar25 = (undefined8 *)*puVar1;
        if (puVar25 == (undefined8 *)0x0) {
LAB_00981f08:
          if (local_d8 <= pplVar15) {
            sVar29 = (long)pplVar15 - (long)local_e8;
            lVar31 = (long)sVar29 >> 3;
            uVar33 = lVar31 + 1;
            if (uVar33 >> 0x3d != 0) {
                    /* try { // try from 00982224 to 00982237 has its CatchHandler @ 009822ac */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar26 = (long)local_d8 - (long)local_e8 >> 2;
            if (uVar33 <= uVar26) {
              uVar33 = uVar26;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)local_d8 - (long)local_e8)) {
              uVar33 = 0x1fffffffffffffff;
            }
            if (uVar33 == 0) {
LAB_00982084:
              pplVar15 = (long **)0x0;
            }
            else {
              if (uVar33 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 00981f68 to 00981f6b has its CatchHandler @ 009822a8 */
              pplVar15 = (long **)operator_new(uVar33 << 3);
            }
LAB_00982088:
            pplVar32 = pplVar15 + lVar31 + 1;
            pplVar15[lVar31] = plVar34;
            if (0 < (long)sVar29) {
              memcpy(pplVar15,pplVar20,sVar29);
            }
            local_d8 = pplVar15 + uVar33;
            local_e8 = pplVar15;
            local_e0 = pplVar32;
            if (pplVar20 != (long **)0x0) {
              operator_delete(pplVar20);
            }
            goto LAB_009820c0;
          }
        }
        else {
          uVar18 = *(uint *)(plVar34 + 0x41);
          puVar17 = puVar1;
          do {
            if (*(uint *)(puVar25 + 4) >= uVar18) {
              puVar17 = puVar25;
            }
            puVar25 = (undefined8 *)puVar25[*(uint *)(puVar25 + 4) < uVar18];
          } while (puVar25 != (undefined8 *)0x0);
          if ((puVar17 == puVar1) || (uVar18 < *(uint *)(puVar17 + 4))) goto LAB_00981f08;
          uVar18 = *(uint *)((long)plVar34 + 0x20c);
          if ((uVar18 < *(uint *)(puVar17 + 6)) &&
             ((*(byte *)(*(long *)(puVar17[5] + ((ulong)(uVar18 >> 0x10) & 0xfff8)) +
                        ((ulong)(uVar18 >> 3) & 0xffff)) >> (ulong)(uVar18 & 7) & 1) != 0)) {
            iVar27 = (int)((ulong)(puVar17[8] - puVar17[7]) >> 3) * -0x45d1745d;
            iVar23 = iVar27 + -1;
            if (0 < iVar27) {
              iVar27 = 0;
              iVar28 = -1;
              do {
                iVar3 = iVar23 + iVar27;
                if (iVar3 < 0) {
                  iVar3 = iVar3 + 1;
                }
                iVar3 = iVar3 >> 1;
                uVar30 = *(uint *)(puVar17[7] + (long)iVar3 * 0x58 + 4);
                iVar5 = iVar3;
                if (uVar30 != uVar18) {
                  iVar5 = iVar28;
                }
                iVar28 = iVar3 + -1;
                if (uVar30 < uVar18) {
                  iVar27 = iVar3 + 1;
                  iVar28 = iVar23;
                }
                iVar23 = iVar28;
                iVar28 = iVar5;
              } while (iVar27 <= iVar23);
              if (-1 < iVar5) {
                if (pplVar15 < local_d8) {
                  pplVar32 = pplVar15 + 1;
                  *pplVar15 = plVar34;
                  local_e0 = pplVar32;
                }
                else {
                  sVar29 = (long)pplVar15 - (long)local_e8;
                  uVar33 = ((long)sVar29 >> 3) + 1;
                  if (uVar33 >> 0x3d != 0) {
                    /* try { // try from 0098224c to 0098225f has its CatchHandler @ 00982284 */
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                  uVar26 = (long)local_d8 - (long)local_e8 >> 2;
                  if (uVar33 <= uVar26) {
                    uVar33 = uVar26;
                  }
                  if (0x7ffffffffffffff7 < (ulong)((long)local_d8 - (long)local_e8)) {
                    uVar33 = 0x1fffffffffffffff;
                  }
                  if (uVar33 == 0) {
                    pplVar15 = (long **)0x0;
                  }
                  else {
                    if (uVar33 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_006d1f18(
                                  "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                  );
                    }
                    /* try { // try from 00982124 to 00982127 has its CatchHandler @ 00982264 */
                    pplVar15 = (long **)operator_new(uVar33 << 3);
                  }
                  pplVar32 = pplVar15 + ((long)sVar29 >> 3) + 1;
                  pplVar15[(long)sVar29 >> 3] = plVar34;
                  if (0 < (long)sVar29) {
                    memcpy(pplVar15,pplVar20,sVar29);
                  }
                  local_d8 = pplVar15 + uVar33;
                  local_e8 = pplVar15;
                  local_e0 = pplVar32;
                  if (pplVar20 != (long **)0x0) {
                    operator_delete(pplVar20);
                  }
                }
                    /* try { // try from 00982178 to 00982193 has its CatchHandler @ 00982288 */
                createLoadedShapes(this,(MeshSplitShape *)plVar34,(LoadedFileId *)(puVar17 + 5),
                                   iVar5,*(uint *)(plVar34 + 0x41),*(uint *)((long)plVar34 + 0x20c),
                                   false,1);
              }
            }
            goto LAB_009820c0;
          }
          if (local_d8 <= pplVar15) {
            sVar29 = (long)pplVar15 - (long)local_e8;
            lVar31 = (long)sVar29 >> 3;
            uVar33 = lVar31 + 1;
            if (uVar33 >> 0x3d != 0) {
                    /* try { // try from 00982238 to 0098224b has its CatchHandler @ 0098229c */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            uVar26 = (long)local_d8 - (long)local_e8 >> 2;
            if (uVar33 <= uVar26) {
              uVar33 = uVar26;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)local_d8 - (long)local_e8)) {
              uVar33 = 0x1fffffffffffffff;
            }
            if (uVar33 == 0) goto LAB_00982084;
            if (uVar33 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 0098207c to 0098207f has its CatchHandler @ 00982290 */
            pplVar15 = (long **)operator_new(uVar33 << 3);
            goto LAB_00982088;
          }
        }
        *pplVar15 = plVar34;
        pplVar32 = pplVar15 + 1;
        local_e0 = pplVar15 + 1;
      }
LAB_009820c0:
      uVar12 = uVar12 + 1;
      pvVar21 = local_c0;
      pplVar15 = pplVar32;
    } while (uVar12 != uVar11);
  }
  pplVar15 = local_e8;
  if ((int)((ulong)((long)pplVar32 - (long)local_e8) >> 3) == 0) {
    if (local_e8 != (long **)0x0) goto LAB_00982200;
  }
  else {
    uVar11 = (ulong)((long)pplVar32 - (long)local_e8) >> 3 & 0xffffffff;
    pplVar32 = local_e8;
    do {
      plVar34 = (long *)(*pplVar32)[4];
      if ((plVar34 == (long *)0x0) || ((*(byte *)(plVar34 + 2) >> 6 & 1) == 0)) {
        (**(code **)(**pplVar32 + 8))();
      }
      else {
        (**(code **)(*plVar34 + 8))(plVar34);
      }
      pplVar32 = pplVar32 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
LAB_00982200:
    local_e0 = pplVar15;
    operator_delete(pplVar15);
  }
  if (local_c0 != (void *)0x0) {
    local_b8 = local_c0;
    operator_delete(local_c0);
  }
  uVar16 = 1;
LAB_00981e60:
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar16);
  }
  return;
LAB_00981928:
  uVar11 = uVar11 + 1;
  if (local_104[0] <= uVar11) goto LAB_0098196c;
  goto LAB_00981938;
}


