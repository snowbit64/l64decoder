// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Brep
// Entry Point: 00b628f0
// Size: 1972 bytes
// Signature: undefined __thiscall Brep(Brep * this, ushort param_1, Vector3 * param_2, ushort param_3, BrepWedge * param_4, uint param_5, BrepTriangle * param_6, bool param_7, bool param_8, Matrix4x4 * param_9, Matrix4x4 * param_10, uchar * param_11)


/* Brep::Brep(unsigned short, Vector3 const*, unsigned short, BrepWedge const*, unsigned int,
   BrepTriangle const*, bool, bool, Matrix4x4 const*, Matrix4x4 const*, unsigned char const*) */

void __thiscall
Brep::Brep(Brep *this,ushort param_1,Vector3 *param_2,ushort param_3,BrepWedge *param_4,uint param_5
          ,BrepTriangle *param_6,bool param_7,bool param_8,Matrix4x4 *param_9,Matrix4x4 *param_10,
          uchar *param_11)

{
  uint uVar1;
  BrepSpatialHash *this_00;
  long *this_01;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  short sVar8;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uchar *puVar15;
  long lVar16;
  ushort *puVar17;
  long lVar18;
  ulong uVar19;
  ushort *puVar20;
  ulong uVar21;
  ulong uVar22;
  void *pvVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  void *local_78;
  ushort local_6c [2];
  long local_68;
  
  uVar10 = (ulong)param_3;
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  this_00 = (BrepSpatialHash *)(this + 0x10);
  *(undefined ***)this = &PTR__Brep_00fea478;
  *(undefined4 *)(this + 8) = 0;
  this_01 = (long *)(this + 0x2f98);
  memset(this_00,0,0x2fa0);
  this[0x2fb4] = (Brep)param_7;
  this[0x2fb5] = (Brep)param_8;
  this[0x2fb6] = (Brep)(param_3 != 0);
  if (param_1 == 0) {
    local_78 = (void *)0x0;
    lVar16 = 0;
    lVar18 = 0;
    local_6c[0] = 0;
LAB_00b62de4:
    lVar18 = lVar18 - lVar16 >> 3;
    uVar13 = lVar18 * -0x5555555555555555;
    if (uVar10 <= uVar13) {
      if (uVar10 <= uVar13 && uVar13 - uVar10 != 0) {
        *(ulong *)(this + 0x2fa0) = lVar16 + uVar10 * 0x18;
      }
    }
    else {
                    /* try { // try from 00b62e0c to 00b6302f has its CatchHandler @ 00b630b4 */
      std::__ndk1::vector<Brep::SharedWedge,std::__ndk1::allocator<Brep::SharedWedge>>::__append
                ((vector<Brep::SharedWedge,std::__ndk1::allocator<Brep::SharedWedge>> *)this_01,
                 uVar10 + lVar18 * 0x5555555555555555);
    }
    if (param_3 != 0) {
      lVar16 = 0;
      do {
        uVar25 = *(undefined8 *)((long)param_4 + 8);
        uVar24 = *(undefined8 *)param_4;
        puVar2 = (undefined8 *)(*this_01 + lVar16);
        lVar16 = lVar16 + 0x18;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((long)param_4 + 0x10);
        puVar2[1] = uVar25;
        *puVar2 = uVar24;
        *(undefined2 *)((long)puVar2 + 0x14) = 0;
        param_4 = (BrepWedge *)((long)param_4 + 0x14);
      } while (uVar10 * 0x18 != lVar16);
    }
    uVar10 = setTriangles((uint)this,(BrepTriangle *)(ulong)param_5,(ushort *)param_6,
                          (ushort)local_78);
    if ((uVar10 & 1) == 0) {
      BrepSpatialHash::clear();
      *(undefined8 *)(this + 0x2ef8) = *(undefined8 *)(this + 0x2ef0);
      *(undefined8 *)(this + 0x2f10) = *(undefined8 *)(this + 0x2f08);
      *(undefined8 *)(this + 0x2f28) = *(undefined8 *)(this + 0x2f20);
      *(undefined8 *)(this + 0x2f40) = *(undefined8 *)(this + 0x2f38);
      *(undefined8 *)(this + 0x2f58) = *(undefined8 *)(this + 0x2f50);
      *(undefined8 *)(this + 0x2fa0) = *(undefined8 *)(this + 0x2f98);
    }
    if (this[0x2fb6] != (Brep)0x0) {
      lVar16 = *(long *)(this + 0x2f50);
      uVar10 = (*(long *)(this + 0x2f58) - lVar16 >> 2) * 0xaaab;
      if ((uVar10 & 0xffff) != 0) {
        uVar13 = 0;
        while( true ) {
          iVar3 = *(int *)(lVar16 + uVar13 * 0xc + 4);
          if (iVar3 != -1) {
            lVar16 = *(long *)(this + 0x2f68);
            uVar1 = iVar3 + 2;
            if ((iVar3 - 1U & 3) != 0) {
              uVar1 = iVar3 - 1U;
            }
            lVar18 = lVar16 + (ulong)uVar1 * 8;
            uVar21 = (ulong)uVar1;
            while (iVar4 = *(int *)(lVar18 + 4), iVar4 != iVar3 && iVar4 != -1) {
              uVar1 = iVar4 + 2;
              if ((iVar4 - 1U & 3) != 0) {
                uVar1 = iVar4 - 1U;
              }
              uVar19 = (ulong)uVar1;
              uVar5 = *(ushort *)(lVar16 + uVar21 * 8 + 2);
              uVar21 = (ulong)uVar5;
              puVar20 = (ushort *)(lVar16 + uVar19 * 8 + 2);
              uVar6 = *puVar20;
              uVar22 = (ulong)uVar6;
              if ((((uVar6 != uVar5) &&
                   (lVar18 = *this_01,
                   *(float *)(lVar18 + uVar21 * 0x18) == *(float *)(lVar18 + uVar22 * 0x18))) &&
                  (*(float *)(lVar18 + uVar21 * 0x18 + 4) == *(float *)(lVar18 + uVar22 * 0x18 + 4))
                  ) && (*(float *)(lVar18 + uVar21 * 0x18 + 8) ==
                        *(float *)(lVar18 + uVar22 * 0x18 + 8))) {
                lVar11 = lVar18 + uVar21 * 0x18;
                lVar12 = lVar18 + uVar22 * 0x18;
                if ((*(float *)(lVar11 + 0xc) == *(float *)(lVar12 + 0xc)) &&
                   (*(float *)(lVar11 + 0x10) == *(float *)(lVar12 + 0x10))) {
                  lVar16 = lVar18 + uVar21 * 0x18;
                  lVar18 = lVar18 + uVar22 * 0x18;
                  *(short *)(lVar16 + 0x14) = *(short *)(lVar16 + 0x14) + 1;
                  *(short *)(lVar18 + 0x14) = *(short *)(lVar18 + 0x14) + -1;
                  *puVar20 = uVar5;
                  lVar16 = *(long *)(this + 0x2f68);
                }
              }
              uVar21 = uVar19;
              lVar18 = lVar16 + uVar19 * 8;
            }
          }
          uVar13 = uVar13 + 1;
          if (uVar13 == (uVar10 & 0xffff)) break;
          lVar16 = *(long *)(this + 0x2f50);
        }
      }
    }
    purge();
    floodShells();
    if (local_78 != (void *)0x0) {
      operator_delete(local_78);
    }
    if (*(long *)(lVar7 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00b629e0 to 00b629e7 has its CatchHandler @ 00b630a4 */
  local_78 = operator_new((ulong)param_1 << 1);
  memset(local_78,0,(ulong)param_1 << 1);
  uVar13 = 0;
  local_6c[0] = 0;
  if (param_8) goto LAB_00b62a34;
  do {
    puVar20 = (ushort *)((long)local_78 + (uVar13 & 0xffff) * 2);
    *puVar20 = (short)((uint)(*(int *)(this + 0x2f58) - *(int *)(this + 0x2f50)) >> 2) * -0x5555;
    std::__ndk1::vector<Brep::Vertex,std::__ndk1::allocator<Brep::Vertex>>::
    emplace_back<Vector3_const&,unsigned_short&>
              ((vector<Brep::Vertex,std::__ndk1::allocator<Brep::Vertex>> *)(this + 0x2ef0),
               param_2 + (uVar13 & 0xffff) * 0xc,puVar20);
    if (param_9 != (Matrix4x4 *)0x0) {
      puVar14 = *(undefined8 **)(this + 0x2f10);
      puVar2 = (undefined8 *)(param_9 + (ulong)local_6c[0] * 0x40);
      if (puVar14 == *(undefined8 **)(this + 0x2f18)) {
        pvVar23 = *(void **)(this + 0x2f08);
        uVar21 = (long)puVar14 - (long)pvVar23;
        uVar13 = ((long)uVar21 >> 6) + 1;
        if (uVar13 >> 0x3a != 0) {
                    /* try { // try from 00b63070 to 00b6309f has its CatchHandler @ 00b6318c */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar13 <= (ulong)((long)uVar21 >> 5)) {
          uVar13 = (long)uVar21 >> 5;
        }
        if (0x7fffffffffffffbf < uVar21) {
          uVar13 = 0x3ffffffffffffff;
        }
        if (uVar13 == 0) {
          pvVar9 = (void *)0x0;
        }
        else {
          if (uVar13 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar9 = operator_new(uVar13 << 6);
        }
        uVar24 = *puVar2;
        uVar26 = puVar2[3];
        uVar25 = puVar2[2];
        puVar14 = (undefined8 *)((long)pvVar9 + ((long)uVar21 >> 6) * 0x40);
        uVar28 = puVar2[5];
        uVar27 = puVar2[4];
        uVar30 = puVar2[7];
        uVar29 = puVar2[6];
        puVar14[1] = puVar2[1];
        *puVar14 = uVar24;
        puVar14[3] = uVar26;
        puVar14[2] = uVar25;
        puVar14[5] = uVar28;
        puVar14[4] = uVar27;
        puVar14[7] = uVar30;
        puVar14[6] = uVar29;
        if (0 < (long)uVar21) {
          memcpy(pvVar9,pvVar23,uVar21);
        }
        *(void **)(this + 0x2f08) = pvVar9;
        *(undefined8 **)(this + 0x2f10) = puVar14 + 8;
        *(void **)(this + 0x2f18) = (void *)((long)pvVar9 + uVar13 * 0x40);
        if (pvVar23 != (void *)0x0) {
          operator_delete(pvVar23);
        }
      }
      else {
        uVar26 = puVar2[4];
        uVar25 = puVar2[7];
        uVar24 = puVar2[6];
        uVar30 = puVar2[1];
        uVar29 = *puVar2;
        uVar28 = puVar2[3];
        uVar27 = puVar2[2];
        puVar14[5] = puVar2[5];
        puVar14[4] = uVar26;
        puVar14[7] = uVar25;
        puVar14[6] = uVar24;
        puVar14[1] = uVar30;
        *puVar14 = uVar29;
        puVar14[3] = uVar28;
        puVar14[2] = uVar27;
        *(undefined8 **)(this + 0x2f10) = puVar14 + 8;
      }
    }
    if (param_10 != (Matrix4x4 *)0x0) {
      puVar14 = *(undefined8 **)(this + 0x2f28);
      puVar2 = (undefined8 *)(param_10 + (ulong)local_6c[0] * 0x40);
      if (puVar14 == *(undefined8 **)(this + 0x2f30)) {
        pvVar23 = *(void **)(this + 0x2f20);
        uVar21 = (long)puVar14 - (long)pvVar23;
        uVar13 = ((long)uVar21 >> 6) + 1;
        if (uVar13 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar13 <= (ulong)((long)uVar21 >> 5)) {
          uVar13 = (long)uVar21 >> 5;
        }
        if (0x7fffffffffffffbf < uVar21) {
          uVar13 = 0x3ffffffffffffff;
        }
        if (uVar13 == 0) {
          pvVar9 = (void *)0x0;
        }
        else {
          if (uVar13 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
                    /* try { // try from 00b62c14 to 00b62c17 has its CatchHandler @ 00b63190 */
          pvVar9 = operator_new(uVar13 << 6);
        }
        uVar24 = *puVar2;
        uVar26 = puVar2[3];
        uVar25 = puVar2[2];
        puVar14 = (undefined8 *)((long)pvVar9 + ((long)uVar21 >> 6) * 0x40);
        uVar28 = puVar2[5];
        uVar27 = puVar2[4];
        uVar30 = puVar2[7];
        uVar29 = puVar2[6];
        puVar14[1] = puVar2[1];
        *puVar14 = uVar24;
        puVar14[3] = uVar26;
        puVar14[2] = uVar25;
        puVar14[5] = uVar28;
        puVar14[4] = uVar27;
        puVar14[7] = uVar30;
        puVar14[6] = uVar29;
        if (0 < (long)uVar21) {
          memcpy(pvVar9,pvVar23,uVar21);
        }
        *(void **)(this + 0x2f20) = pvVar9;
        *(undefined8 **)(this + 0x2f28) = puVar14 + 8;
        *(void **)(this + 0x2f30) = (void *)((long)pvVar9 + uVar13 * 0x40);
        if (pvVar23 != (void *)0x0) {
          operator_delete(pvVar23);
        }
      }
      else {
        uVar26 = puVar2[4];
        uVar25 = puVar2[7];
        uVar24 = puVar2[6];
        uVar30 = puVar2[1];
        uVar29 = *puVar2;
        uVar28 = puVar2[3];
        uVar27 = puVar2[2];
        puVar14[5] = puVar2[5];
        puVar14[4] = uVar26;
        puVar14[7] = uVar25;
        puVar14[6] = uVar24;
        puVar14[1] = uVar30;
        *puVar14 = uVar29;
        puVar14[3] = uVar28;
        puVar14[2] = uVar27;
        *(undefined8 **)(this + 0x2f28) = puVar14 + 8;
      }
    }
    if (param_11 != (uchar *)0x0) {
      puVar15 = *(uchar **)(this + 0x2f40);
      uVar13 = (ulong)local_6c[0];
      if (puVar15 == *(uchar **)(this + 0x2f48)) {
        pvVar23 = *(void **)(this + 0x2f38);
        uVar19 = (long)puVar15 - (long)pvVar23;
        uVar21 = uVar19 + 1;
        if ((long)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar21 <= uVar19 * 2) {
          uVar21 = uVar19 * 2;
        }
        if (0x3ffffffffffffffe < uVar19) {
          uVar21 = 0x7fffffffffffffff;
        }
        if (uVar21 == 0) {
          pvVar9 = (void *)0x0;
        }
        else {
                    /* try { // try from 00b62cd4 to 00b62cdb has its CatchHandler @ 00b63190 */
          pvVar9 = operator_new(uVar21);
        }
        *(uchar *)((long)pvVar9 + uVar19) = param_11[uVar13];
        if (0 < (long)uVar19) {
          memcpy(pvVar9,pvVar23,uVar19);
        }
        *(void **)(this + 0x2f38) = pvVar9;
        *(uchar **)(this + 0x2f40) = (uchar *)((long)pvVar9 + uVar19) + 1;
        *(ulong *)(this + 0x2f48) = (long)pvVar9 + uVar21;
        if (pvVar23 != (void *)0x0) {
          operator_delete(pvVar23);
        }
      }
      else {
        *puVar15 = param_11[uVar13];
        *(uchar **)(this + 0x2f40) = puVar15 + 1;
      }
    }
    if (this[0x2fb5] != (Brep)0x0) {
                    /* try { // try from 00b62d40 to 00b62dab has its CatchHandler @ 00b63190 */
      BrepSpatialHash::insert(this_00,this,*(ushort *)((long)local_78 + (ulong)local_6c[0] * 2));
    }
    puVar17 = *(ushort **)(this + 0x2f58);
    puVar20 = (ushort *)((long)local_78 + (ulong)local_6c[0] * 2);
    if (puVar17 < *(ushort **)(this + 0x2f60)) {
      uVar5 = *puVar20;
      puVar17[4] = local_6c[0];
      puVar17[1] = 0xffff;
      *puVar17 = uVar5;
      *(undefined4 *)(puVar17 + 2) = 0xffffffff;
      *(ushort **)(this + 0x2f58) = puVar17 + 6;
    }
    else {
      std::__ndk1::vector<Brep::VertexCone,std::__ndk1::allocator<Brep::VertexCone>>::
      __emplace_back_slow_path<unsigned_short&,unsigned_short_const&,unsigned_int_const&,unsigned_short&>
                ((vector<Brep::VertexCone,std::__ndk1::allocator<Brep::VertexCone>> *)
                 (this + 0x2f50),puVar20,&NOREF_CONE,&NOREF,local_6c);
    }
    while( true ) {
      uVar1 = local_6c[0] + 1;
      uVar13 = (ulong)uVar1;
      local_6c[0] = (ushort)uVar1;
      if ((uVar1 & 0xffff) == (uint)param_1) {
        lVar18 = *(long *)(this + 0x2fa0);
        lVar16 = *(long *)(this + 0x2f98);
        goto LAB_00b62de4;
      }
      if (this[0x2fb5] == (Brep)0x0) break;
LAB_00b62a34:
                    /* try { // try from 00b62a44 to 00b62b33 has its CatchHandler @ 00b63190 */
      sVar8 = BrepSpatialHash::retrieveExact(this_00,this,param_2 + (uVar13 & 0xffff) * 0xc);
      uVar13 = (ulong)local_6c[0];
      if (sVar8 == -1) break;
      *(short *)((long)local_78 + uVar13 * 2) = sVar8;
    }
  } while( true );
}


