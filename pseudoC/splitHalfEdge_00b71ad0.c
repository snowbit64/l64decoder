// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: splitHalfEdge
// Entry Point: 00b71ad0
// Size: 2192 bytes
// Signature: undefined __thiscall splitHalfEdge(Brep * this, uint param_1, uint param_2, ushort param_3, float param_4)


/* Brep::splitHalfEdge(unsigned int, unsigned int, unsigned short, float) */

ulong __thiscall
Brep::splitHalfEdge(Brep *this,uint param_1,uint param_2,ushort param_3,float param_4)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  long *this_00;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  undefined2 uVar15;
  uint uVar16;
  long lVar17;
  void *__dest;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ushort *puVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  uint *puVar30;
  ulong uVar31;
  ulong uVar32;
  void *__src;
  uint uVar33;
  int iVar34;
  ulong uVar35;
  int local_b0;
  ushort local_ac [2];
  ushort local_a8 [2];
  ushort local_a4 [2];
  BrepWedge aBStack_a0 [24];
  undefined8 local_88;
  float local_80;
  long local_78;
  
  lVar17 = tpidr_el0;
  local_78 = *(long *)(lVar17 + 0x28);
  uVar32 = (ulong)param_1;
  lVar18 = *(long *)(this + 0x2f68);
  uVar5 = *(uint *)(lVar18 + (ulong)param_2 * 8 + 4);
  uVar31 = (ulong)uVar5;
  uVar35 = *(long *)(this + 0x2f70) - lVar18;
  uVar19 = 1;
  if (uVar5 != 0xffffffff) {
    uVar19 = 2;
  }
  uVar29 = (long)uVar35 >> 5;
  uVar23 = uVar29 + uVar19;
  local_a4[0] = param_3;
  if (uVar29 < uVar23) {
    std::__ndk1::vector<Brep::Face,std::__ndk1::allocator<Brep::Face>>::__append
              ((vector<Brep::Face,std::__ndk1::allocator<Brep::Face>> *)(this + 0x2f68),uVar19);
    lVar18 = *(long *)(this + 0x2f68);
  }
  else if (uVar23 < uVar29) {
    *(ulong *)(this + 0x2f70) = lVar18 + uVar23 * 0x20;
  }
  memset((void *)(lVar18 + (uVar35 >> 5 & 0xffffffff) * 0x20),0,uVar19 << 5);
  uVar22 = param_1 + 2;
  if ((param_1 - 1 & 3) != 0) {
    uVar22 = param_1 - 1;
  }
  uVar19 = (ulong)uVar22;
  lVar25 = *(long *)(this + 0x2f50);
  lVar18 = uVar19 * 8;
  __src = *(void **)(this + 0x2ef0);
  uVar23 = (ulong)*(ushort *)(lVar25 + (ulong)*(ushort *)(*(long *)(this + 0x2f68) + lVar18) * 0xc);
  uVar29 = (*(long *)(this + 0x2f58) - lVar25 >> 2) * -0x5555555555555555;
  puVar20 = (undefined8 *)((long)__src + uVar23 * 0x10);
  if (param_4 <= 0.0) {
    local_80 = *(float *)(puVar20 + 1);
    local_88 = *puVar20;
  }
  else {
    uVar26 = (ulong)*(ushort *)
                     (lVar25 + (ulong)*(ushort *)(*(long *)(this + 0x2f68) + uVar32 * 8) * 0xc);
    puVar2 = (undefined8 *)((long)__src + uVar26 * 0x10);
    if (1.0 <= param_4) {
      local_80 = *(float *)(puVar2 + 1);
      local_88 = *puVar2;
    }
    else {
      local_88 = CONCAT44((*(float *)((long)__src + uVar26 * 0x10 + 4) -
                          *(float *)((long)__src + uVar23 * 0x10 + 4)) * param_4 +
                          *(float *)((long)__src + uVar23 * 0x10 + 4),
                          (*(float *)puVar2 - *(float *)puVar20) * param_4 + *(float *)puVar20);
      local_80 = (*(float *)((long)__src + uVar26 * 0x10 + 8) -
                 *(float *)((long)__src + uVar23 * 0x10 + 8)) * param_4 +
                 *(float *)((long)__src + uVar23 * 0x10 + 8);
    }
  }
  uVar15 = (undefined2)uVar29;
  if (this[0x2fb5] != (Brep)0x0) {
    local_a8[0] = BrepSpatialHash::retrieveExact
                            ((BrepSpatialHash *)(this + 0x10),this,(Vector3 *)&local_88);
    if (local_a8[0] != 0xffff) {
      lVar25 = *(long *)(this + 0x2ef0) + (ulong)local_a8[0] * 0x10;
      local_ac[0] = *(ushort *)(lVar25 + 0xc);
      *(undefined2 *)(lVar25 + 0xc) = uVar15;
      goto LAB_00b71df8;
    }
    __src = *(void **)(this + 0x2ef0);
  }
  local_ac[0] = 0xffff;
  puVar20 = *(undefined8 **)(this + 0x2ef8);
  uVar23 = (long)puVar20 - (long)__src;
  local_a8[0] = (ushort)(uVar23 >> 4);
  if (puVar20 < *(undefined8 **)(this + 0x2f00)) {
    *(undefined2 *)((long)puVar20 + 0xc) = uVar15;
    *(float *)(puVar20 + 1) = local_80;
    *puVar20 = local_88;
    *(undefined8 **)(this + 0x2ef8) = puVar20 + 2;
  }
  else {
    uVar26 = ((long)uVar23 >> 4) + 1;
    if (uVar26 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar24 = (long)*(undefined8 **)(this + 0x2f00) - (long)__src;
    uVar27 = (long)uVar24 >> 3;
    if (uVar26 <= uVar27) {
      uVar26 = uVar27;
    }
    if (0x7fffffffffffffef < uVar24) {
      uVar26 = 0xfffffffffffffff;
    }
    if (uVar26 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar26 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar26 << 4);
    }
    puVar20 = (undefined8 *)((long)__dest + ((long)uVar23 >> 4) * 0x10);
    *puVar20 = local_88;
    *(float *)(puVar20 + 1) = local_80;
    *(undefined2 *)((long)puVar20 + 0xc) = uVar15;
    if (0 < (long)uVar23) {
      memcpy(__dest,__src,uVar23);
    }
    *(undefined8 **)(this + 0x2ef8) = puVar20 + 2;
    *(void **)(this + 0x2f00) = (void *)((long)__dest + uVar26 * 0x10);
    *(void **)(this + 0x2ef0) = __dest;
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  if (this[0x2fb5] != (Brep)0x0) {
    BrepSpatialHash::insert((BrepSpatialHash *)(this + 0x10),this,local_a8[0]);
  }
LAB_00b71df8:
  puVar21 = *(ushort **)(this + 0x2f58);
  this_00 = (long *)(this + 0x2f50);
  if (puVar21 < *(ushort **)(this + 0x2f60)) {
    *puVar21 = local_a8[0];
    puVar21[1] = local_ac[0];
    *(undefined4 *)(puVar21 + 2) = 0xffffffff;
    puVar21[4] = local_a4[0];
    *(ushort **)(this + 0x2f58) = puVar21 + 6;
  }
  else {
    std::__ndk1::vector<Brep::VertexCone,std::__ndk1::allocator<Brep::VertexCone>>::
    __emplace_back_slow_path<unsigned_short&,unsigned_short&,unsigned_int_const&,unsigned_short&>
              ((vector<Brep::VertexCone,std::__ndk1::allocator<Brep::VertexCone>> *)this_00,local_a8
               ,local_ac,&NOREF,local_a4);
  }
  if (this[0x2fb6] == (Brep)0x0) {
    uVar33 = 0xffff;
  }
  else if (0.001 <= ABS(param_4)) {
    uVar33 = ((uint)(*(int *)(this + 0x2fa0) - *(int *)(this + 0x2f98)) >> 3) * 0xaaab & 0xffff;
    computeWedge((uint)this,param_4);
    local_b0 = 0;
    std::__ndk1::vector<Brep::SharedWedge,std::__ndk1::allocator<Brep::SharedWedge>>::
    emplace_back<BrepWedge,int>
              ((vector<Brep::SharedWedge,std::__ndk1::allocator<Brep::SharedWedge>> *)
               (this + 0x2f98),aBStack_a0,&local_b0);
  }
  else {
    uVar33 = (uint)*(ushort *)(*(long *)(this + 0x2f68) + uVar19 * 8 + 2);
  }
  lVar25 = *(long *)(this + 0x2f68);
  uVar16 = param_1 - 2;
  if ((param_1 + 1 & 3) != 0) {
    uVar16 = param_1 + 1;
  }
  puVar21 = (ushort *)(lVar25 + uVar19 * 8);
  lVar28 = (ulong)uVar16 * 8;
  iVar34 = (int)(uVar35 >> 5);
  uVar16 = iVar34 << 2 | 1;
  uVar3 = iVar34 << 2 | 2;
  sVar10 = *(short *)(lVar25 + uVar32 * 8 + 2);
  uVar14 = *(ushort *)(lVar25 + lVar28);
  puVar1 = (undefined2 *)(lVar25 + (ulong)uVar16 * 8);
  uVar11 = puVar21[1];
  uVar6 = *(uint *)(puVar21 + 2);
  uVar12 = *puVar21;
  *puVar1 = uVar15;
  puVar1[1] = (short)uVar33;
  if (uVar33 != 0xffff) {
    lVar25 = *(long *)(this + 0x2f98) + (ulong)uVar33 * 0x18;
    *(short *)(lVar25 + 0x14) = *(short *)(lVar25 + 0x14) + 1;
  }
  uVar4 = iVar34 << 2 | 3;
  puVar21 = (ushort *)(*(long *)(this + 0x2f68) + (ulong)uVar3 * 8);
  uVar13 = *(ushort *)(*(long *)(this + 0x2f68) + lVar28 + 2);
  *puVar21 = uVar14;
  puVar21[1] = uVar13;
  lVar25 = *(long *)(this + 0x2f68);
  uVar35 = (ulong)*(ushort *)(lVar25 + lVar28 + 2);
  if (uVar35 != 0xffff) {
    lVar28 = *(long *)(this + 0x2f98) + uVar35 * 0x18;
    *(short *)(lVar28 + 0x14) = *(short *)(lVar28 + 0x14) + 1;
  }
  *(uint *)(lVar25 + (ulong)uVar3 * 8 + 4) = uVar22;
  *(undefined8 *)(lVar25 + (ulong)uVar4 * 8) = *(undefined8 *)(lVar25 + lVar18);
  lVar25 = *(long *)(this + 0x2f68);
  *(undefined2 *)(lVar25 + lVar18) = uVar15;
  ((undefined2 *)(lVar25 + lVar18))[1] = (short)uVar33;
  if (uVar33 != 0xffff) {
    lVar18 = *(long *)(this + 0x2f98) + (ulong)uVar33 * 0x18;
    *(short *)(lVar18 + 0x14) = *(short *)(lVar18 + 0x14) + 1;
  }
  lVar18 = *(long *)(this + 0x2f68);
  *(uint *)(lVar18 + uVar19 * 8 + 4) = uVar3;
  if (uVar6 == 0xffffffff) {
    lVar25 = *this_00;
    *(uint *)(lVar25 + (ulong)uVar14 * 0xc + 4) = uVar4;
  }
  else {
    *(uint *)(lVar18 + (ulong)uVar6 * 8 + 4) = uVar4;
    lVar25 = *this_00;
  }
  *(uint *)(lVar25 + (uVar29 & 0xffff) * 0xc + 4) = param_2;
  puVar30 = (uint *)(lVar25 + (ulong)uVar12 * 0xc + 4);
  uVar22 = *puVar30;
  if (uVar22 != param_1) goto LAB_00b720a8;
  do {
    *puVar30 = uVar16;
    uVar22 = uVar16;
LAB_00b720a8:
    do {
      if ((uint)uVar32 == param_2) {
        *(uint *)(lVar18 + (ulong)uVar16 * 8 + 4) = uVar5;
        if (uVar5 != 0xffffffff) {
          iVar34 = iVar34 * 4;
          if (this[0x2fb6] == (Brep)0x0) {
            uVar33 = 0xffff;
          }
          else if (0.001 <= ABS(param_4)) {
            uVar22 = uVar5 + 2;
            if ((uVar5 - 1 & 3) != 0) {
              uVar22 = uVar5 - 1;
            }
            if ((*(short *)(lVar18 + (ulong)uVar22 * 8 + 2) != sVar10) ||
               ((uint)*(ushort *)(lVar18 + uVar31 * 8 + 2) != (uint)uVar11)) {
              iVar7 = *(int *)(this + 0x2fa0);
              iVar8 = *(int *)(this + 0x2f98);
              computeWedge((uint)this,param_4);
              local_b0 = 0;
              std::__ndk1::vector<Brep::SharedWedge,std::__ndk1::allocator<Brep::SharedWedge>>::
              emplace_back<BrepWedge,int>
                        ((vector<Brep::SharedWedge,std::__ndk1::allocator<Brep::SharedWedge>> *)
                         (this + 0x2f98),aBStack_a0,&local_b0);
              lVar18 = *(long *)(this + 0x2f68);
              uVar33 = ((uint)(iVar7 - iVar8) >> 3) * 0xaaab & 0xffff;
            }
          }
          else {
            uVar22 = (uint)*(ushort *)(lVar18 + uVar31 * 8 + 2);
            if (uVar22 != uVar11) {
              uVar33 = uVar22;
            }
          }
          uVar22 = iVar34 + 6;
          uVar3 = uVar5 + 2;
          if ((uVar5 - 1 & 3) != 0) {
            uVar3 = uVar5 - 1;
          }
          uVar19 = (ulong)uVar3;
          uVar6 = uVar5 - 2;
          if ((uVar5 + 1 & 3) != 0) {
            uVar6 = uVar5 + 1;
          }
          puVar21 = (ushort *)(lVar18 + uVar19 * 8);
          lVar25 = (ulong)uVar6 * 8;
          uVar6 = iVar34 + 5;
          uVar9 = *(uint *)(puVar21 + 2);
          puVar1 = (undefined2 *)(lVar18 + (ulong)uVar6 * 8);
          uVar11 = *puVar21;
          uVar12 = *(ushort *)(lVar18 + lVar25);
          uVar4 = iVar34 + 7;
          *puVar1 = uVar15;
          puVar1[1] = (short)uVar33;
          if (uVar33 != 0xffff) {
            lVar18 = *(long *)(this + 0x2f98) + (ulong)uVar33 * 0x18;
            *(short *)(lVar18 + 0x14) = *(short *)(lVar18 + 0x14) + 1;
          }
          lVar18 = *(long *)(this + 0x2f68);
          puVar21 = (ushort *)(lVar18 + (ulong)uVar22 * 8);
          uVar14 = *(ushort *)(lVar18 + lVar25 + 2);
          *(uint *)(lVar18 + (ulong)uVar6 * 8 + 4) = param_2;
          *puVar21 = uVar12;
          puVar21[1] = uVar14;
          lVar18 = *(long *)(this + 0x2f68);
          uVar32 = (ulong)*(ushort *)(lVar18 + lVar25 + 2);
          if (uVar32 != 0xffff) {
            lVar25 = *(long *)(this + 0x2f98) + uVar32 * 0x18;
            *(short *)(lVar25 + 0x14) = *(short *)(lVar25 + 0x14) + 1;
          }
          *(uint *)(lVar18 + (ulong)uVar22 * 8 + 4) = uVar3;
          *(undefined8 *)(lVar18 + (ulong)uVar4 * 8) = *(undefined8 *)(lVar18 + uVar19 * 8);
          puVar1 = (undefined2 *)(*(long *)(this + 0x2f68) + uVar19 * 8);
          *puVar1 = uVar15;
          puVar1[1] = (short)uVar33;
          if (uVar33 != 0xffff) {
            lVar18 = *(long *)(this + 0x2f98) + (ulong)uVar33 * 0x18;
            *(short *)(lVar18 + 0x14) = *(short *)(lVar18 + 0x14) + 1;
          }
          lVar18 = *(long *)(this + 0x2f68);
          *(uint *)(lVar18 + uVar31 * 8 + 4) = uVar16;
          *(uint *)(lVar18 + uVar19 * 8 + 4) = uVar22;
          if (uVar9 == 0xffffffff) {
            lVar25 = *this_00;
            *(uint *)(lVar25 + (ulong)uVar12 * 0xc + 4) = uVar4;
          }
          else {
            *(uint *)(lVar18 + (ulong)uVar9 * 8 + 4) = uVar4;
            lVar25 = *this_00;
          }
          puVar30 = (uint *)(lVar25 + (ulong)uVar11 * 0xc + 4);
          if (*puVar30 == uVar5) {
            *puVar30 = uVar6;
          }
          *(uint *)(lVar18 + (ulong)param_2 * 8 + 4) = uVar6;
        }
        if (*(long *)(lVar17 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return uVar29 & 0xffffffff;
      }
      uVar6 = *(uint *)(lVar18 + uVar32 * 8 + 4);
      uVar3 = uVar6 - 2;
      if ((uVar6 + 1 & 3) != 0) {
        uVar3 = uVar6 + 1;
      }
      uVar32 = (ulong)uVar3;
      *(undefined2 *)(lVar18 + (ulong)uVar6 * 8) = uVar15;
    } while (uVar22 != uVar3);
  } while( true );
}


