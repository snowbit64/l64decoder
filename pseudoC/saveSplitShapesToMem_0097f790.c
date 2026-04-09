// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveSplitShapesToMem
// Entry Point: 0097f790
// Size: 1652 bytes
// Signature: undefined __thiscall saveSplitShapesToMem(MeshSplitManager * this, char * * param_1, uint * param_2)


/* WARNING: Type propagation algorithm not settling */
/* MeshSplitManager::saveSplitShapesToMem(char*&, unsigned int&) */

void __thiscall
MeshSplitManager::saveSplitShapesToMem(MeshSplitManager *this,char **param_1,uint *param_2)

{
  undefined8 *puVar1;
  long ****pppplVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  long ********pppppppplVar6;
  bool bVar7;
  value_type *pvVar8;
  long *******ppppppplVar9;
  uint uVar10;
  long lVar11;
  long ****pppplVar12;
  long ********pppppppplVar13;
  long ******pppppplVar14;
  long *****ppppplVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *******ppppppplVar18;
  long ***ppplVar19;
  long ******__src;
  ulong uVar20;
  long *****ppppplVar21;
  long ********pppppppplVar22;
  undefined2 local_e0 [2];
  undefined2 local_dc [2];
  ushort local_d8 [2];
  undefined2 local_d4 [2];
  uint local_d0;
  uint local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  long ********local_c0;
  long ********local_b8;
  long local_b0;
  StringStream aSStack_a8 [16];
  undefined8 local_98;
  undefined4 local_90;
  int local_88 [4];
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  StringStream::StringStream(aSStack_a8);
  puVar17 = *(undefined8 **)(this + 0x60);
  puVar1 = *(undefined8 **)(this + 0x68);
  local_b8 = (long ********)0x0;
  local_b0 = 0;
  local_c0 = (long ********)&local_b8;
  if (puVar17 == puVar1) {
    local_b0._0_4_ = 0;
  }
  else {
    do {
      ppppplVar21 = (long *****)*puVar17;
      if ((*(byte *)((long)ppppplVar21 + 0x211) & 1) == 0) {
        pppppppplVar22 = (long ********)&local_b8;
        pppppppplVar13 = (long ********)&local_b8;
        if (local_b8 != (long ********)0x0) {
          pppppppplVar6 = local_b8;
          do {
            while (pppppppplVar22 = pppppppplVar6,
                  *(uint *)(ppppplVar21 + 0x41) < *(uint *)(pppppppplVar22 + 4)) {
              pppppppplVar6 = (long ********)*pppppppplVar22;
              pppppppplVar13 = pppppppplVar22;
              if ((long ********)*pppppppplVar22 == (long ********)0x0) {
                ppppppplVar18 = *pppppppplVar22;
                goto joined_r0x0097f8c4;
              }
            }
            if (*(uint *)(ppppplVar21 + 0x41) <= *(uint *)(pppppppplVar22 + 4)) break;
            pppppppplVar13 = pppppppplVar22 + 1;
            pppppppplVar6 = (long ********)*pppppppplVar13;
          } while ((long ********)*pppppppplVar13 != (long ********)0x0);
        }
        ppppppplVar18 = *pppppppplVar13;
joined_r0x0097f8c4:
        if (ppppppplVar18 == (long *******)0x0) {
                    /* try { // try from 0097f870 to 0097f877 has its CatchHandler @ 0097fe10 */
          ppppppplVar18 = (long *******)operator_new(0x60);
          uVar3 = *(undefined4 *)(ppppplVar21 + 0x41);
          *(undefined4 *)(ppppppplVar18 + 0xb) = 0;
          *ppppppplVar18 = (long ******)0x0;
          ppppppplVar18[1] = (long ******)0x0;
          *(undefined4 *)(ppppppplVar18 + 4) = uVar3;
          ppppppplVar18[6] = (long ******)0x0;
          ppppppplVar18[5] = (long ******)0x0;
          ppppppplVar18[8] = (long ******)0x0;
          ppppppplVar18[7] = (long ******)0x0;
          ppppppplVar18[10] = (long ******)0x0;
          ppppppplVar18[9] = (long ******)0x0;
          ppppppplVar18[2] = (long ******)pppppppplVar22;
          *pppppppplVar13 = ppppppplVar18;
          ppppppplVar9 = ppppppplVar18;
          if ((long ********)*local_c0 != (long ********)0x0) {
            ppppppplVar9 = *pppppppplVar13;
            local_c0 = (long ********)*local_c0;
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    ((__tree_node_base *)local_b8,(__tree_node_base *)ppppppplVar9);
          local_b0 = local_b0 + 1;
        }
        uVar10 = *(uint *)(ppppppplVar18 + 9);
        if (uVar10 < *(int *)((long)ppppplVar21 + 0x20c) + 1U) {
          uVar10 = *(int *)((long)ppppplVar21 + 0x20c) + 1;
        }
                    /* try { // try from 0097f8fc to 0097f907 has its CatchHandler @ 0097fe14 */
        std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::resize
                  ((vector<bool,std::__ndk1::allocator<bool>> *)(ppppppplVar18 + 8),(ulong)uVar10,
                   false);
        pppppplVar14 = ppppppplVar18[8];
        uVar10 = *(uint *)((long)ppppplVar21 + 0x20c) >> 6;
        uVar16 = 1L << ((ulong)*(uint *)((long)ppppplVar21 + 0x20c) & 0x3f);
        ppppplVar15 = pppppplVar14[uVar10];
        if ((uVar16 & (ulong)ppppplVar15) == 0) {
          *(int *)(ppppppplVar18 + 0xb) = *(int *)(ppppppplVar18 + 0xb) + 1;
          pppppplVar14[uVar10] = (long *****)(uVar16 | (ulong)ppppplVar15);
          bVar4 = *(byte *)(ppppplVar21 + 0x42);
        }
        else {
          bVar4 = *(byte *)(ppppplVar21 + 0x42);
        }
        if ((bVar4 >> 6 & 1) != 0) {
          pppppplVar14 = ppppppplVar18[6];
          if (pppppplVar14 == ppppppplVar18[7]) {
            __src = ppppppplVar18[5];
            uVar20 = (long)pppppplVar14 - (long)__src;
            uVar16 = ((long)uVar20 >> 3) + 1;
            if (uVar16 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0097fdf0 to 0097fdff has its CatchHandler @ 0097fe0c */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar16 <= (ulong)((long)uVar20 >> 2)) {
              uVar16 = (long)uVar20 >> 2;
            }
            if (0x7ffffffffffffff7 < uVar20) {
              uVar16 = 0x1fffffffffffffff;
            }
            if (uVar16 == 0) {
              pppppplVar14 = (long ******)0x0;
            }
            else {
              if (uVar16 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
                    /* try { // try from 0097f9a4 to 0097f9a7 has its CatchHandler @ 0097fe10 */
              pppppplVar14 = (long ******)operator_new(uVar16 << 3);
            }
            pppppplVar14[(long)uVar20 >> 3] = ppppplVar21;
            if (0 < (long)uVar20) {
              memcpy(pppppplVar14,__src,uVar20);
            }
            ppppppplVar18[5] = pppppplVar14;
            ppppppplVar18[6] = pppppplVar14 + ((long)uVar20 >> 3) + 1;
            ppppppplVar18[7] = pppppplVar14 + uVar16;
            if (__src != (long ******)0x0) {
              operator_delete(__src);
            }
          }
          else {
            *pppppplVar14 = ppppplVar21;
            ppppppplVar18[6] = pppppplVar14 + 1;
          }
        }
      }
      puVar17 = puVar17 + 1;
    } while (puVar17 != puVar1);
  }
  local_98 = 0x253534d47;
                    /* try { // try from 0097fa10 to 0097fa1f has its CatchHandler @ 0097fe04 */
  local_90 = (undefined4)local_b0;
  StringStream::writeBinary(aSStack_a8,&local_98,0xc);
  local_c4 = *(undefined4 *)(this + 0x18);
                    /* try { // try from 0097fa28 to 0097fa37 has its CatchHandler @ 0097fe08 */
  StringStream::writeBinary(aSStack_a8,&local_c4,4);
  pppppppplVar22 = local_c0;
  do {
    if ((long *********)pppppppplVar22 == &local_b8) {
                    /* try { // try from 0097fd98 to 0097fda7 has its CatchHandler @ 0097fe08 */
      StringStream::resolve(aSStack_a8,param_1,param_2,false);
      std::__ndk1::
      __tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>>>
      ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>>>
                 *)&local_c0,(__tree_node *)local_b8);
      StringStream::~StringStream(aSStack_a8);
      if (*(long *)(lVar5 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    ppppppplVar18 = pppppppplVar22[5];
    ppppppplVar9 = pppppppplVar22[6];
    local_78 = SaveTempFileId::shapesFileIndexComparator;
    lVar11 = (long)ppppppplVar9 - (long)ppppppplVar18;
    uVar16 = lVar11 >> 3;
    if (0x400 < lVar11) {
      uVar20 = uVar16;
      if (0xffffffffffffffe < uVar16) {
        uVar20 = 0xfffffffffffffff;
      }
      do {
        pvVar8 = (value_type *)operator_new(uVar20 << 3,(nothrow_t *)&std::nothrow);
        if (pvVar8 != (value_type *)0x0) goto LAB_0097fab8;
        bVar7 = 1 < uVar20;
        uVar20 = uVar20 >> 1;
      } while (bVar7);
    }
    pvVar8 = (value_type *)0x0;
    uVar20 = 0;
LAB_0097fab8:
                    /* try { // try from 0097fab8 to 0097fad3 has its CatchHandler @ 0097fe18 */
    std::__ndk1::
    __stable_sort<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),std::__ndk1::__wrap_iter<MeshSplitShape**>>
              ((__wrap_iter)ppppppplVar18,(__wrap_iter)ppppppplVar9,
               (_func_bool_MeshSplitShape_ptr_MeshSplitShape_ptr *)&local_78,(difference_type)uVar16
               ,pvVar8,uVar20);
    if (pvVar8 != (value_type *)0x0) {
      operator_delete(pvVar8);
    }
    uStack_c8 = *(undefined4 *)(pppppppplVar22 + 4);
    local_cc = (uint)((ulong)((long)pppppppplVar22[6] - (long)pppppppplVar22[5]) >> 3);
                    /* try { // try from 0097faf4 to 0097fb13 has its CatchHandler @ 0097fe30 */
    StringStream::writeBinary(aSStack_a8,&uStack_c8,4);
    StringStream::writeBinary(aSStack_a8,&local_cc,4);
    if (local_cc != 0) {
      uVar16 = 0;
      do {
        pppppplVar14 = pppppppplVar22[5][uVar16];
        local_d0 = *(uint *)((long)pppppplVar14 + 0x20c);
        ppppplVar21 = pppppplVar14[0x2e];
                    /* try { // try from 0097fb34 to 0097fb43 has its CatchHandler @ 0097fe4c */
        StringStream::writeBinary(aSStack_a8,&local_d0,4);
        local_d4[0] = (undefined2)
                      ((uint)(*(int *)(ppppplVar21 + 0x30) - *(int *)(ppppplVar21 + 0x2f)) >> 3);
                    /* try { // try from 0097fb58 to 0097fb67 has its CatchHandler @ 0097fe48 */
        StringStream::writeBinary(aSStack_a8,local_d4,2);
                    /* try { // try from 0097fb68 to 0097fb6f has its CatchHandler @ 0097fe44 */
        RawTransformGroup::updateWorldTransformation();
        local_78 = (code *)pppppplVar14[0x1d];
        local_70 = *(undefined4 *)(pppppplVar14 + 0x1e);
                    /* try { // try from 0097fb84 to 0097fbab has its CatchHandler @ 0097fe50 */
        Matrix4x4::getEulerAnglesXYZ((Matrix4x4 *)(pppppplVar14 + 0x17),(Vector3 *)local_88);
        StringStream::writeBinary(aSStack_a8,&local_78,0xc);
        StringStream::writeBinary(aSStack_a8,local_88,0xc);
        if ((((int)((ulong)((long)pppppplVar14[6] - (long)pppppplVar14[5]) >> 3) == 0) ||
            (pppplVar12 = *pppppplVar14[5], (*(byte *)((long)pppplVar12 + 0x11) >> 3 & 1) == 0)) ||
           (ppplVar19 = pppplVar12[0x2e], (*(byte *)((long)ppplVar19 + 0x31) >> 1 & 1) == 0)) {
          local_d8[0] = 0;
                    /* try { // try from 0097fbd8 to 0097fbe7 has its CatchHandler @ 0097fe3c */
          StringStream::writeBinary(aSStack_a8,local_d8,2);
        }
        else {
          local_d8[0] = (ushort)((uint)(*(int *)(ppplVar19 + 0x13) - *(int *)(ppplVar19 + 0x12)) >>
                                2);
                    /* try { // try from 0097fc3c to 0097fc4b has its CatchHandler @ 0097fe38 */
          StringStream::writeBinary(aSStack_a8,local_d8,2);
          if (local_d8[0] != 0) {
            lVar11 = 0;
            uVar20 = 0;
            do {
              local_dc[0] = *(undefined2 *)((long)ppplVar19[0x12] + lVar11);
              local_e0[0] = ((undefined2 *)((long)ppplVar19[0x12] + lVar11))[1];
                    /* try { // try from 0097fc74 to 0097fc93 has its CatchHandler @ 0097fe54 */
              StringStream::writeBinary(aSStack_a8,local_dc,2);
              StringStream::writeBinary(aSStack_a8,local_e0,2);
              uVar20 = uVar20 + 1;
              lVar11 = lVar11 + 4;
            } while (uVar20 < local_d8[0]);
          }
        }
                    /* try { // try from 0097fbec to 0097fbf3 has its CatchHandler @ 0097fe40 */
        BrepUtil::saveBrepToFile((Brep *)ppppplVar21[0x2e],aSStack_a8);
        pppplVar2 = ppppplVar21[0x30];
        for (pppplVar12 = ppppplVar21[0x2f]; pppplVar12 != pppplVar2; pppplVar12 = pppplVar12 + 1) {
                    /* try { // try from 0097fc00 to 0097fc07 has its CatchHandler @ 0097fe58 */
          BrepUtil::saveBrepToFile((Brep *)*pppplVar12,aSStack_a8);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < local_cc);
    }
    local_78 = (code *)CONCAT44(local_78._4_4_,*(int *)(pppppppplVar22 + 9));
    local_88[0] = *(int *)(pppppppplVar22 + 9) - *(int *)(pppppppplVar22 + 0xb);
                    /* try { // try from 0097fcc0 to 0097fceb has its CatchHandler @ 0097fe2c */
    StringStream::writeBinary(aSStack_a8,&local_78,4);
    if ((1 < (uint)local_78) && (StringStream::writeBinary(aSStack_a8,local_88,4), local_88[0] != 0)
       ) {
      local_d0 = 0;
      uVar10 = (uint)local_78;
      if ((uint)local_78 != 0) {
        do {
          if ((*(ulong *)((long)pppppppplVar22[8] + ((ulong)(local_d0 >> 3) & 0x1ffffff8)) >>
               ((ulong)local_d0 & 0x3f) & 1) == 0) {
                    /* try { // try from 0097fd34 to 0097fd43 has its CatchHandler @ 0097fe34 */
            StringStream::writeBinary(aSStack_a8,&local_d0,4);
            uVar10 = (uint)local_78;
          }
          local_d0 = local_d0 + 1;
        } while (local_d0 < uVar10);
      }
    }
    pppppppplVar13 = (long ********)pppppppplVar22[1];
    if ((long ********)pppppppplVar22[1] == (long ********)0x0) {
      pppppppplVar13 = pppppppplVar22 + 2;
      bVar7 = (long ********)**pppppppplVar13 != pppppppplVar22;
      pppppppplVar22 = (long ********)*pppppppplVar13;
      if (bVar7) {
        do {
          ppppppplVar18 = *pppppppplVar13;
          pppppppplVar13 = (long ********)(ppppppplVar18 + 2);
          pppppppplVar22 = (long ********)*pppppppplVar13;
        } while (*pppppppplVar22 != ppppppplVar18);
      }
    }
    else {
      do {
        pppppppplVar22 = pppppppplVar13;
        pppppppplVar13 = (long ********)*pppppppplVar22;
      } while ((long ********)*pppppppplVar22 != (long ********)0x0);
    }
  } while( true );
}


