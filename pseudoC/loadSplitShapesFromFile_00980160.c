// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadSplitShapesFromFile
// Entry Point: 00980160
// Size: 1712 bytes
// Signature: undefined __thiscall loadSplitShapesFromFile(MeshSplitManager * this, File * param_1)


/* MeshSplitManager::loadSplitShapesFromFile(File*) */

void __thiscall MeshSplitManager::loadSplitShapesFromFile(MeshSplitManager *this,File *param_1)

{
  undefined8 *puVar1;
  ushort *puVar2;
  long lVar3;
  bool bVar4;
  long **pplVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long **__s;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  void *pvVar13;
  void *pvVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  long **pplVar20;
  long **pplVar21;
  uint uVar22;
  ushort local_d0 [2];
  ushort local_cc [2];
  void *local_c8;
  void *local_c0;
  undefined8 local_b8;
  ushort local_b0 [2];
  ushort local_ac [2];
  undefined4 local_a8;
  uint local_a4;
  uint local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  uint local_90;
  uint local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_98,0xc);
  if (iVar7 == 0xc) {
    uVar8 = 0;
    if ((local_98 != 0x53534d47) || (local_94 != 2)) goto LAB_009807dc;
    iVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_9c,4);
    if (iVar7 == 4) {
      if (local_90 != 0) {
        uVar12 = 0;
        puVar1 = (undefined8 *)(this + 0xe0);
        do {
          iVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_a0,4);
          if ((iVar7 != 4) ||
             (iVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_a4,4), iVar7 != 4))
          goto LAB_009807d8;
          puVar15 = (undefined8 *)*puVar1;
          puVar17 = puVar1;
          puVar11 = puVar1;
          while (puVar15 != (undefined8 *)0x0) {
            while (puVar11 = puVar15, local_a0 < *(uint *)(puVar11 + 4)) {
              puVar15 = (undefined8 *)*puVar11;
              puVar17 = puVar11;
              if ((undefined8 *)*puVar11 == (undefined8 *)0x0) {
                puVar15 = (undefined8 *)*puVar11;
                goto joined_r0x009802f8;
              }
            }
            if (local_a0 <= *(uint *)(puVar11 + 4)) break;
            puVar17 = puVar11 + 1;
            puVar15 = (undefined8 *)*puVar17;
          }
          puVar15 = (undefined8 *)*puVar17;
joined_r0x009802f8:
          if (puVar15 == (undefined8 *)0x0) {
            puVar15 = (undefined8 *)operator_new(0x50);
            puVar15[9] = 0;
            *puVar15 = 0;
            puVar15[1] = 0;
            *(uint *)(puVar15 + 4) = local_a0;
            puVar15[6] = 0;
            puVar15[5] = 0;
            puVar15[8] = 0;
            puVar15[7] = 0;
            puVar15[2] = puVar11;
            *puVar17 = puVar15;
            puVar11 = puVar15;
            if (**(long **)(this + 0xd8) != 0) {
              *(long *)(this + 0xd8) = **(long **)(this + 0xd8);
              puVar11 = (undefined8 *)*puVar17;
            }
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                      (*(__tree_node_base **)(this + 0xe0),(__tree_node_base *)puVar11);
            *(long *)(this + 0xe8) = *(long *)(this + 0xe8) + 1;
          }
          std::__ndk1::
          vector<MeshSplitManager::LoadedSplitShape,std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape>>
          ::reserve((vector<MeshSplitManager::LoadedSplitShape,std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape>>
                     *)(puVar15 + 7),(ulong)local_a4);
          if (local_a4 != 0) {
            uVar22 = 0;
LAB_00980338:
            iVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_a8,4);
            if ((((iVar7 == 4) &&
                 (iVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1,local_ac,2), iVar7 == 2))
                && (iVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_78,0xc),
                   iVar7 == 0xc)) &&
               ((iVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_88,0xc), iVar7 == 0xc
                && (iVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1,local_b0,2), iVar7 == 2))
               )) {
              local_c8 = (void *)0x0;
              local_c0 = (void *)0x0;
              local_b8 = 0;
                    /* try { // try from 009803e8 to 009803ef has its CatchHandler @ 0098082c */
              if (((ulong)local_b0[0] != 0) &&
                 (std::__ndk1::
                  vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
                  ::__append((vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
                              *)&local_c8,(ulong)local_b0[0]), local_b0[0] != 0)) {
                lVar18 = 0;
                uVar19 = 0;
                do {
                    /* try { // try from 00980408 to 00980437 has its CatchHandler @ 0098084c */
                  iVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1,local_cc,2);
                  if ((iVar7 != 2) ||
                     (iVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1,local_d0,2), iVar7 != 2
                     )) goto LAB_0098048c;
                  uVar19 = uVar19 + 1;
                  puVar2 = (ushort *)((long)local_c8 + lVar18);
                  lVar18 = lVar18 + 4;
                  *puVar2 = local_cc[0];
                  puVar2[1] = local_d0[0];
                } while (uVar19 < local_b0[0]);
              }
              local_cc[0] = local_cc[0] & 0xff00;
                    /* try { // try from 00980470 to 0098047b has its CatchHandler @ 00980830 */
              plVar9 = (long *)BrepUtil::loadBrepFromFile(param_1,(bool *)local_cc);
              if ((plVar9 != (long *)0x0) || ((char)local_cc[0] != '\0')) {
                uVar19 = (ulong)local_ac[0];
                if (uVar19 != 0) {
                    /* try { // try from 009804a4 to 009804ab has its CatchHandler @ 00980828 */
                  __s = (long **)operator_new(uVar19 * 8);
                  bVar6 = plVar9 != (long *)0x0;
                  pplVar21 = __s + uVar19;
                  memset(__s,0,uVar19 * 8);
                  uVar19 = 0;
LAB_009804e4:
                    /* try { // try from 009804e4 to 009804ef has its CatchHandler @ 00980834 */
                  plVar10 = (long *)BrepUtil::loadBrepFromFile(param_1,(bool *)local_cc);
                  __s[uVar19] = plVar10;
                  if (plVar10 != (long *)0x0) goto LAB_009804d4;
                  if ((char)local_cc[0] != '\0') {
                    bVar6 = false;
                    goto LAB_009804d4;
                  }
                  if ((int)uVar19 != 0) {
                    uVar16 = 0;
                    do {
                      if (__s[uVar16] != (long *)0x0) {
                        (**(code **)(*__s[uVar16] + 8))();
                      }
                      uVar16 = uVar16 + 1;
                    } while (uVar19 != uVar16);
                  }
                  if (plVar9 != (long *)0x0) {
                    (**(code **)(*plVar9 + 8))(plVar9);
                  }
                  bVar6 = true;
                  goto LAB_009806b0;
                }
                pplVar21 = (long **)0x0;
                __s = (long **)0x0;
                if (plVar9 != (long *)0x0) goto LAB_00980590;
                goto LAB_00980538;
              }
LAB_0098048c:
              bVar4 = true;
              goto LAB_009806bc;
            }
            goto LAB_009807d8;
          }
LAB_009806e0:
          iVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_c8,4);
          if (iVar7 != 4) goto LAB_009807d8;
          BitVector::init((BitVector *)(puVar15 + 5),(uint)local_c8,false,true);
          if (1 < (uint)local_c8) {
            iVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_78,4);
            if (iVar7 != 4) goto LAB_009807d8;
            if (local_78 != 0) {
              uVar22 = 0;
              do {
                iVar7 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_88,4);
                if (iVar7 != 4) goto LAB_009807d8;
                uVar22 = uVar22 + 1;
                uVar19 = (ulong)(local_88 >> 3) & 0xffff;
                lVar18 = *(long *)(puVar15[5] + ((ulong)(local_88 >> 0x10) & 0xfff8));
                *(byte *)(lVar18 + uVar19) =
                     *(byte *)(lVar18 + uVar19) & ((byte)(1 << ((ulong)local_88 & 7)) ^ 0xff);
              } while (uVar22 < local_78);
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < local_90);
      }
      uVar8 = 1;
      *(undefined4 *)(this + 0xf0) = local_9c;
      goto LAB_009807dc;
    }
  }
LAB_009807d8:
  uVar8 = 0;
LAB_009807dc:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
LAB_009804d4:
  uVar19 = uVar19 + 1;
  if (local_ac[0] <= uVar19) goto LAB_00980534;
  goto LAB_009804e4;
LAB_00980534:
  if (bVar6) {
LAB_00980590:
    uVar19 = puVar15[8];
    if (uVar19 < (ulong)puVar15[9]) {
      lVar18 = uVar19 + 0x58;
      *(undefined8 *)(uVar19 + 0x50) = 0;
      *(undefined8 *)(uVar19 + 0x38) = 0;
      *(undefined8 *)(uVar19 + 0x30) = 0;
      *(undefined8 *)(uVar19 + 0x48) = 0;
      *(undefined8 *)(uVar19 + 0x40) = 0;
      *(undefined8 *)(uVar19 + 0x28) = 0;
      *(undefined8 *)(uVar19 + 0x20) = 0;
      puVar15[8] = lVar18;
    }
    else {
                    /* try { // try from 009805bc to 009805c3 has its CatchHandler @ 00980810 */
      std::__ndk1::
      vector<MeshSplitManager::LoadedSplitShape,std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape>>
      ::__emplace_back_slow_path<>();
      lVar18 = puVar15[8];
    }
    pplVar20 = *(long ***)(lVar18 + -0x30);
    *(undefined4 *)(lVar18 + -0x58) = 0xffffffff;
    *(undefined4 *)(lVar18 + -0x54) = local_a8;
    *(undefined4 *)(lVar18 + -0x48) = local_70;
    *(ulong *)(lVar18 + -0x50) = CONCAT44(uStack_74,local_78);
    *(long **)(lVar18 + -0x38) = plVar9;
    *(long ***)(lVar18 + -0x30) = __s;
    *(long ***)(lVar18 + -0x28) = pplVar21;
    *(long ***)(lVar18 + -0x20) = pplVar21;
    *(undefined4 *)(lVar18 + -0x3c) = local_80;
    *(ulong *)(lVar18 + -0x44) = CONCAT44(uStack_84,local_88);
    pvVar13 = *(void **)(lVar18 + -0x18);
    *(void **)(lVar18 + -0x18) = local_c8;
    pvVar14 = *(void **)(lVar18 + -0x10);
    *(void **)(lVar18 + -0x10) = local_c0;
    uVar8 = *(undefined8 *)(lVar18 + -8);
    *(undefined8 *)(lVar18 + -8) = local_b8;
    local_c8 = pvVar13;
    local_c0 = pvVar14;
    local_b8 = uVar8;
    FUN_00f276d0(1,*(long *)(lVar18 + -0x38) + 8);
    plVar10 = *(long **)(lVar18 + -0x28);
    for (plVar9 = *(long **)(lVar18 + -0x30); plVar9 != plVar10; plVar9 = plVar9 + 1) {
      FUN_00f276d0(1,*plVar9 + 8);
    }
  }
  else {
LAB_00980538:
    pplVar5 = __s;
    pplVar20 = pplVar21;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
    for (; pplVar5 != pplVar21; pplVar5 = pplVar5 + 1) {
      if (*pplVar5 != (long *)0x0) {
        (**(code **)(**pplVar5 + 8))();
      }
      pplVar20 = __s;
    }
  }
  __s = pplVar20;
  bVar4 = false;
  bVar6 = false;
  if (__s != (long **)0x0) {
LAB_009806b0:
    bVar4 = bVar6;
    operator_delete(__s);
  }
LAB_009806bc:
  if (local_c8 != (void *)0x0) {
    local_c0 = local_c8;
    operator_delete(local_c8);
  }
  if (bVar4) goto LAB_009807d8;
  uVar22 = uVar22 + 1;
  if (local_a4 <= uVar22) goto LAB_009806e0;
  goto LAB_00980338;
}


