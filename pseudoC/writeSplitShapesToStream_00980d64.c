// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeSplitShapesToStream
// Entry Point: 00980d64
// Size: 1844 bytes
// Signature: undefined __thiscall writeSplitShapesToStream(MeshSplitManager * this, GsBitStream * param_1)


/* WARNING: Type propagation algorithm not settling */
/* MeshSplitManager::writeSplitShapesToStream(GsBitStream*) */

undefined8 __thiscall
MeshSplitManager::writeSplitShapesToStream(MeshSplitManager *this,GsBitStream *param_1)

{
  long **pplVar1;
  long ****pppplVar2;
  long **pplVar3;
  uint uVar4;
  byte bVar5;
  undefined2 uVar6;
  long lVar7;
  bool bVar8;
  long *******ppppppplVar9;
  long ********pppppppplVar10;
  long lVar11;
  long ****pppplVar12;
  long ********pppppppplVar13;
  ulong uVar14;
  long ******pppppplVar15;
  long *****ppppplVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  long *****ppppplVar20;
  long ***ppplVar21;
  long *******ppppppplVar22;
  long ******__src;
  long ********pppppppplVar23;
  ulong __n;
  ulong uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  long ********local_120;
  long ********local_118;
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  void *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  long local_90;
  
  lVar7 = tpidr_el0;
  local_90 = *(long *)(lVar7 + 0x28);
  Mutex::enterCriticalSection();
  lVar11 = *(long *)(this + 0x60);
  local_118 = (long ********)0x0;
  local_110 = 0;
  uVar14 = *(long *)(this + 0x68) - lVar11;
  local_120 = (long ********)&local_118;
  if ((int)(uVar14 >> 3) != 0) {
    uVar24 = 0;
    do {
      ppppplVar20 = *(long ******)(lVar11 + uVar24 * 8);
      local_d8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_108 = (void *)0x0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      uVar19 = *(uint *)(ppppplVar20 + 0x41);
      uStack_c4 = 0;
      local_c8 = 0;
      uVar4 = *(uint *)((long)ppppplVar20 + 0x20c);
      local_b0 = (void *)0x0;
      local_d0 = (code *)CONCAT44(local_d0._4_4_,uVar19);
      local_e8 = 0;
      uStack_e0 = 0;
      local_f0 = (void *)0x0;
      local_98 = 0;
      pppppppplVar23 = (long ********)&local_118;
      pppppppplVar13 = (long ********)&local_118;
      pppppppplVar10 = local_118;
      while (pppppppplVar10 != (long ********)0x0) {
        while (pppppppplVar13 = pppppppplVar10, uVar19 < *(uint *)(pppppppplVar13 + 4)) {
          pppppppplVar10 = (long ********)*pppppppplVar13;
          pppppppplVar23 = pppppppplVar13;
          if ((long ********)*pppppppplVar13 == (long ********)0x0) {
            ppppppplVar22 = *pppppppplVar13;
            goto joined_r0x00980ef0;
          }
        }
        if (uVar19 <= *(uint *)(pppppppplVar13 + 4)) break;
        pppppppplVar23 = pppppppplVar13 + 1;
        pppppppplVar10 = (long ********)*pppppppplVar23;
      }
      ppppppplVar22 = *pppppppplVar23;
joined_r0x00980ef0:
      if (ppppppplVar22 == (long *******)0x0) {
                    /* try { // try from 00980e90 to 00980e97 has its CatchHandler @ 009814a8 */
        ppppppplVar22 = (long *******)operator_new(0x60);
        *(uint *)(ppppppplVar22 + 4) = uVar19;
        ppppppplVar22[5] = (long ******)0x0;
        ppppppplVar22[6] = (long ******)0x0;
        ppppppplVar22[7] = (long ******)0x0;
        ppppppplVar22[8] = (long ******)0x0;
        local_c0 = 0;
        uStack_b8 = 0;
        uStack_c4 = 0;
        local_c8 = 0;
        ppppppplVar22[9] = (long ******)0x0;
        ppppppplVar22[10] = (long ******)0x0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b0 = (void *)0x0;
        *(undefined4 *)(ppppppplVar22 + 0xb) = 0;
        *ppppppplVar22 = (long ******)0x0;
        ppppppplVar22[1] = (long ******)0x0;
        ppppppplVar22[2] = (long ******)pppppppplVar13;
        *pppppppplVar23 = ppppppplVar22;
        ppppppplVar9 = ppppppplVar22;
        if ((long ********)*local_120 != (long ********)0x0) {
          ppppppplVar9 = *pppppppplVar23;
          local_120 = (long ********)*local_120;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)local_118,(__tree_node_base *)ppppppplVar9);
        local_110 = local_110 + 1;
        if (local_b0 != (void *)0x0) {
          operator_delete(local_b0);
        }
      }
      if ((void *)CONCAT44(uStack_c4,local_c8) != (void *)0x0) {
        operator_delete((void *)CONCAT44(uStack_c4,local_c8));
      }
      if (local_f0 != (void *)0x0) {
        operator_delete(local_f0);
      }
      if (local_108 != (void *)0x0) {
        operator_delete(local_108);
      }
      uVar19 = *(uint *)(ppppppplVar22 + 9);
      if (uVar19 < uVar4 + 1) {
        uVar19 = uVar4 + 1;
      }
                    /* try { // try from 00980f54 to 00980f5f has its CatchHandler @ 009814c4 */
      std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::resize
                ((vector<bool,std::__ndk1::allocator<bool>> *)(ppppppplVar22 + 8),(ulong)uVar19,
                 false);
      pppppplVar15 = ppppppplVar22[8];
      uVar17 = 1L << ((ulong)uVar4 & 0x3f);
      ppppplVar16 = pppppplVar15[uVar4 >> 6];
      if (((ulong)ppppplVar16 & uVar17) == 0) {
        *(int *)(ppppppplVar22 + 0xb) = *(int *)(ppppppplVar22 + 0xb) + 1;
        pppppplVar15[uVar4 >> 6] = (long *****)((ulong)ppppplVar16 | uVar17);
        bVar5 = *(byte *)(ppppplVar20 + 0x42);
      }
      else {
        bVar5 = *(byte *)(ppppplVar20 + 0x42);
      }
      if ((bVar5 >> 6 & 1) != 0) {
        pppppplVar15 = ppppppplVar22[6];
        if (pppppplVar15 == ppppppplVar22[7]) {
          __src = ppppppplVar22[5];
          __n = (long)pppppplVar15 - (long)__src;
          uVar17 = ((long)__n >> 3) + 1;
          if (uVar17 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00981484 to 00981493 has its CatchHandler @ 009814a4 */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar17 <= (ulong)((long)__n >> 2)) {
            uVar17 = (long)__n >> 2;
          }
          if (0x7ffffffffffffff7 < __n) {
            uVar17 = 0x1fffffffffffffff;
          }
          if (uVar17 == 0) {
            pppppplVar15 = (long ******)0x0;
          }
          else {
            if (uVar17 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 00981004 to 00981007 has its CatchHandler @ 009814a0 */
            pppppplVar15 = (long ******)operator_new(uVar17 << 3);
          }
          pppppplVar15[(long)__n >> 3] = ppppplVar20;
          if (0 < (long)__n) {
            memcpy(pppppplVar15,__src,__n);
          }
          ppppppplVar22[5] = pppppplVar15;
          ppppppplVar22[6] = pppppplVar15 + ((long)__n >> 3) + 1;
          ppppppplVar22[7] = pppppplVar15 + uVar17;
          if (__src != (long ******)0x0) {
            operator_delete(__src);
          }
        }
        else {
          *pppppplVar15 = ppppplVar20;
          ppppppplVar22[6] = pppppplVar15 + 1;
        }
      }
      uVar24 = uVar24 + 1;
      if (uVar24 == (uVar14 >> 3 & 0xffffffff)) goto LAB_0098106c;
      lVar11 = *(long *)(this + 0x60);
    } while( true );
  }
  local_110._0_4_ = 0;
LAB_00981078:
                    /* try { // try from 0098107c to 0098108f has its CatchHandler @ 00981498 */
  local_d0._0_4_ = (undefined4)local_110;
  GsBitStream::writeBits(param_1,(uchar *)&local_d0,0x20,true);
  local_d0._0_4_ = *(uint *)(this + 0x18);
                    /* try { // try from 00981098 to 009810ab has its CatchHandler @ 0098149c */
  GsBitStream::writeBits(param_1,(uchar *)&local_d0,0x20,true);
  pppppppplVar23 = local_120;
  while ((long *********)pppppppplVar23 != &local_118) {
    local_d0 = SaveTempFileId::shapesFileIndexComparator;
                    /* try { // try from 009810dc to 009810e3 has its CatchHandler @ 009814c0 */
    std::__ndk1::__sort<bool(*&)(MeshSplitShape_const*,MeshSplitShape_const*),MeshSplitShape**>
              ((MeshSplitShape **)pppppppplVar23[5],(MeshSplitShape **)pppppppplVar23[6],
               (_func_bool_MeshSplitShape_ptr_MeshSplitShape_ptr *)&local_d0);
    ppppppplVar22 = pppppppplVar23[5];
    ppppppplVar9 = pppppppplVar23[6];
                    /* try { // try from 009810f0 to 00981123 has its CatchHandler @ 009814cc */
    local_d0._0_4_ = *(undefined4 *)(pppppppplVar23 + 4);
    GsBitStream::writeBits(param_1,(uchar *)&local_d0,0x20,true);
    iVar18 = (int)((ulong)((long)ppppppplVar9 - (long)ppppppplVar22) >> 3);
    local_d0 = (code *)CONCAT44(local_d0._4_4_,iVar18);
    GsBitStream::writeBits(param_1,(uchar *)&local_d0,0x20,true);
    if (iVar18 != 0) {
      uVar14 = 0;
      do {
        pppppplVar15 = pppppppplVar23[5][uVar14];
        ppppplVar20 = pppppplVar15[0x2e];
                    /* try { // try from 00981144 to 00981157 has its CatchHandler @ 009814e4 */
        local_d0._0_4_ = *(undefined4 *)((long)pppppplVar15 + 0x214);
        GsBitStream::writeBits(param_1,(uchar *)&local_d0,0x20,true);
        local_d0 = (code *)CONCAT44(local_d0._4_4_,*(undefined4 *)((long)pppppplVar15 + 0x20c));
                    /* try { // try from 00981160 to 00981173 has its CatchHandler @ 009814e8 */
        GsBitStream::writeBits(param_1,(uchar *)&local_d0,0x20,true);
        local_d0 = (code *)CONCAT62(local_d0._2_6_,
                                    (short)((uint)(*(int *)(ppppplVar20 + 0x30) -
                                                  *(int *)(ppppplVar20 + 0x2f)) >> 3));
                    /* try { // try from 00981188 to 0098119b has its CatchHandler @ 009814e0 */
        GsBitStream::writeBits(param_1,(uchar *)&local_d0,0x10,true);
                    /* try { // try from 0098119c to 009811a3 has its CatchHandler @ 009814ec */
        RawTransformGroup::updateWorldTransformation();
        uVar27 = *(undefined4 *)(pppppplVar15 + 0x1d);
        uVar26 = *(undefined4 *)((long)pppppplVar15 + 0xec);
        uVar25 = *(undefined4 *)(pppppplVar15 + 0x1e);
                    /* try { // try from 009811b0 to 00981253 has its CatchHandler @ 009814f4 */
        Matrix4x4::getEulerAnglesXYZ((Matrix4x4 *)(pppppplVar15 + 0x17),(Vector3 *)&local_d0);
        local_108._0_4_ = uVar27;
        GsBitStream::writeBits(param_1,(uchar *)&local_108,0x20,true);
        local_108._0_4_ = uVar26;
        GsBitStream::writeBits(param_1,(uchar *)&local_108,0x20,true);
        local_108._0_4_ = uVar25;
        GsBitStream::writeBits(param_1,(uchar *)&local_108,0x20,true);
        local_108._0_4_ = (uint)local_d0;
        GsBitStream::writeBits(param_1,(uchar *)&local_108,0x20,true);
        local_108._0_4_ = local_d0._4_4_;
        GsBitStream::writeBits(param_1,(uchar *)&local_108,0x20,true);
        local_108 = (void *)CONCAT44(local_108._4_4_,local_c8);
        GsBitStream::writeBits(param_1,(uchar *)&local_108,0x20,true);
        if ((((int)((ulong)((long)pppppplVar15[6] - (long)pppppplVar15[5]) >> 3) == 0) ||
            (pppplVar12 = *pppppplVar15[5], (*(byte *)((long)pppplVar12 + 0x11) >> 3 & 1) == 0)) ||
           (ppplVar21 = pppplVar12[0x2e], (*(byte *)((long)ppplVar21 + 0x31) >> 1 & 1) == 0)) {
          local_108 = (void *)((ulong)local_108._2_6_ << 0x10);
                    /* try { // try from 00981280 to 00981293 has its CatchHandler @ 009814d8 */
          GsBitStream::writeBits(param_1,(uchar *)&local_108,0x10,true);
        }
        else {
          pplVar1 = ppplVar21[0x12];
          pplVar3 = ppplVar21[0x13];
          local_108 = (void *)CONCAT62(local_108._2_6_,
                                       (short)((ulong)((long)pplVar3 - (long)pplVar1) >> 2));
                    /* try { // try from 009812e0 to 009812f3 has its CatchHandler @ 009814d0 */
          GsBitStream::writeBits(param_1,(uchar *)&local_108,0x10,true);
          uVar19 = (uint)((long)pplVar3 - (long)pplVar1) >> 2 & 0xffff;
          if (uVar19 != 0) {
            lVar11 = 0;
            do {
              uVar6 = ((undefined2 *)((long)ppplVar21[0x12] + lVar11))[1];
                    /* try { // try from 00981318 to 00981343 has its CatchHandler @ 009814f0 */
              local_108._0_2_ = *(undefined2 *)((long)ppplVar21[0x12] + lVar11);
              GsBitStream::writeBits(param_1,(uchar *)&local_108,0x10,true);
              local_108 = (void *)CONCAT62(local_108._2_6_,uVar6);
              GsBitStream::writeBits(param_1,(uchar *)&local_108,0x10,true);
              lVar11 = lVar11 + 4;
            } while ((ulong)uVar19 * 4 - lVar11 != 0);
          }
        }
                    /* try { // try from 00981298 to 0098129f has its CatchHandler @ 009814dc */
        BrepUtil::writeBrepToStream((Brep *)ppppplVar20[0x2e],param_1);
        pppplVar2 = ppppplVar20[0x30];
        for (pppplVar12 = ppppplVar20[0x2f]; pppplVar12 != pppplVar2; pppplVar12 = pppplVar12 + 1) {
                    /* try { // try from 009812ac to 009812b3 has its CatchHandler @ 009814f8 */
          BrepUtil::writeBrepToStream((Brep *)*pppplVar12,param_1);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != ((ulong)((long)ppppppplVar9 - (long)ppppppplVar22) >> 3 & 0xffffffff));
    }
    ppppppplVar22 = pppppppplVar23[9];
    iVar18 = *(int *)(pppppppplVar23 + 0xb);
    uVar19 = (uint)ppppppplVar22;
                    /* try { // try from 00981360 to 00981397 has its CatchHandler @ 009814c8 */
    local_d0._0_4_ = uVar19;
    GsBitStream::writeBits(param_1,(uchar *)&local_d0,0x20,true);
    if (1 < uVar19) {
      local_d0._0_4_ = uVar19 - iVar18;
      GsBitStream::writeBits(param_1,(uchar *)&local_d0,0x20,true);
      if (uVar19 - iVar18 != 0) {
        uVar14 = 0;
        do {
          if ((*(ulong *)((long)pppppppplVar23[8] + (uVar14 >> 3 & 0x1ffffffffffffff8)) >>
               (uVar14 & 0x3f) & 1) == 0) {
            local_d0._0_4_ = (uint)uVar14;
                    /* try { // try from 009813d0 to 009813e3 has its CatchHandler @ 009814d4 */
            GsBitStream::writeBits(param_1,(uchar *)&local_d0,0x20,true);
          }
          uVar14 = uVar14 + 1;
        } while (((ulong)ppppppplVar22 & 0xffffffff) != uVar14);
      }
    }
    pppppppplVar13 = (long ********)pppppppplVar23[1];
    if ((long ********)pppppppplVar23[1] == (long ********)0x0) {
      pppppppplVar13 = pppppppplVar23 + 2;
      bVar8 = (long ********)**pppppppplVar13 != pppppppplVar23;
      pppppppplVar23 = (long ********)*pppppppplVar13;
      if (bVar8) {
        do {
          ppppppplVar22 = *pppppppplVar13;
          pppppppplVar13 = (long ********)(ppppppplVar22 + 2);
          pppppppplVar23 = (long ********)*pppppppplVar13;
        } while (*pppppppplVar23 != ppppppplVar22);
      }
    }
    else {
      do {
        pppppppplVar23 = pppppppplVar13;
        pppppppplVar13 = (long ********)*pppppppplVar23;
      } while ((long ********)*pppppppplVar23 != (long ********)0x0);
    }
  }
                    /* try { // try from 00981430 to 00981437 has its CatchHandler @ 0098149c */
  Mutex::leaveCriticalSection();
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,MeshSplitManager::SaveTempFileId>>>
             *)&local_120,(__tree_node *)local_118);
  if (*(long *)(lVar7 + 0x28) == local_90) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0098106c:
  goto LAB_00981078;
}


