// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createPolyline
// Entry Point: 008ced84
// Size: 1020 bytes
// Signature: undefined __thiscall createPolyline(FillPlaneGeometry * this, Brep * param_1, ushort param_2, ushort param_3, vector * param_4)


/* FillPlaneGeometry::createPolyline(Brep&, unsigned short, unsigned short,
   std::__ndk1::vector<std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned short> >,
   std::__ndk1::allocator<std::__ndk1::vector<unsigned short, std::__ndk1::allocator<unsigned short>
   > > >&) */

ulong __thiscall
FillPlaneGeometry::createPolyline
          (FillPlaneGeometry *this,Brep *param_1,ushort param_2,ushort param_3,vector *param_4)

{
  undefined8 *puVar1;
  ushort **ppuVar2;
  undefined8 *puVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  ushort uVar8;
  undefined8 *puVar9;
  ushort *puVar10;
  void *__dest;
  uint uVar11;
  ulong uVar12;
  short sVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  void *__src;
  ulong uVar17;
  ushort *__src_00;
  ushort *puVar18;
  ushort *puVar19;
  float fVar20;
  float fVar21;
  ushort *local_80;
  ushort *local_78;
  ushort *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  uVar12 = (ulong)(*(long *)(this + 0xb8) - (long)*(void **)(this + 0xb0)) >> 3;
  puVar9 = (undefined8 *)operator_new(0x38);
  puVar9[6] = 0;
  lVar14 = *(long *)param_4;
  local_80 = (ushort *)0x0;
  local_78 = (ushort *)0x0;
  puVar9[1] = 0;
  *puVar9 = 0;
  puVar9[5] = 0;
  puVar9[4] = 0;
  puVar18 = (ushort *)0x0;
  puVar9[3] = 0;
  puVar9[2] = 0;
  local_70 = (ushort *)0x0;
  uVar16 = (ulong)*(uint *)(*(long *)(param_1 + 0x2f50) +
                            (ulong)**(ushort **)(lVar14 + (ulong)param_3 * 0x18) * 0xc + 4);
  __src_00 = (ushort *)0x0;
  puVar10 = (ushort *)0x0;
  do {
                    /* try { // try from 008cee78 to 008cef03 has its CatchHandler @ 008cf188 */
    uVar11 = (uint)uVar16;
    uVar8 = Brep::splitHalfEdge(param_1,uVar11,uVar11,(ushort)uVar12,0.5);
    FUN_007204e4(puVar9 + 2,
                 *(long *)(param_1 + 0x2ef0) +
                 (ulong)*(ushort *)(*(long *)(param_1 + 0x2f50) + (ulong)uVar8 * 0xc) * 0x10);
    if (puVar10 == puVar18) {
      uVar16 = (long)puVar18 - (long)__src_00;
      if (uVar16 == 0xfffffffffffffffd || (long)(uVar16 + 3) < 0 != SCARRY8(uVar16,3)) {
                    /* try { // try from 008cf158 to 008cf16b has its CatchHandler @ 008cf184 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar17 = ((long)uVar16 >> 1) + 1;
      if (uVar17 <= uVar16) {
        uVar17 = uVar16;
      }
      if (0x7ffffffffffffffd < uVar16) {
        uVar17 = 0x7fffffffffffffff;
      }
      if (uVar17 == 0) {
        puVar10 = (ushort *)0x0;
      }
      else {
        if ((long)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        puVar10 = (ushort *)operator_new(uVar17 << 1);
      }
      puVar19 = puVar10 + ((long)uVar16 >> 1) + 1;
      puVar10[(long)uVar16 >> 1] = uVar8;
      if (0 < (long)uVar16) {
        memcpy(puVar10,__src_00,uVar16);
      }
      puVar18 = puVar10 + uVar17;
      local_80 = puVar10;
      local_78 = puVar19;
      local_70 = puVar18;
      if (__src_00 != (ushort *)0x0) {
        operator_delete(__src_00);
      }
    }
    else {
      puVar19 = puVar10 + 1;
      *puVar10 = uVar8;
      puVar10 = __src_00;
      local_78 = puVar19;
    }
    uVar6 = uVar11 - 2;
    if ((uVar11 + 1 & 3) != 0) {
      uVar6 = uVar11 + 1;
    }
    uVar16 = (ulong)uVar6;
    lVar14 = *(long *)(param_1 + 0x2f68);
    if (*(ushort *)(*(long *)(param_1 + 0x2f50) + (ulong)*(ushort *)(lVar14 + uVar16 * 8) * 0xc + 8)
        != param_3) {
      uVar11 = uVar6 - 2;
      if ((uVar6 + 1 & 3) != 0) {
        uVar11 = uVar6 + 1;
      }
      iVar4 = *(int *)(lVar14 + (ulong)uVar11 * 8 + 4);
      uVar11 = iVar4 - 2;
      if ((iVar4 + 1U & 3) != 0) {
        uVar11 = iVar4 + 1;
      }
      uVar16 = (ulong)uVar11;
    }
    uVar16 = (ulong)*(uint *)(lVar14 + uVar16 * 8 + 4);
    __src_00 = puVar10;
    puVar10 = puVar19;
  } while (*(ushort *)
            (*(long *)(param_1 + 0x2f50) + (ulong)*(ushort *)(lVar14 + uVar16 * 8) * 0xc + 8) ==
           param_2);
  __src = *(void **)(this + 0xb0);
  lVar15 = *(long *)((long)__src + (ulong)param_2 * 8);
  lVar14 = *(long *)((long)__src + (ulong)param_3 * 8);
  sVar5 = *(short *)(lVar15 + 0x30);
  fVar21 = *(float *)(lVar15 + 0x34);
  sVar13 = *(short *)(lVar14 + 0x30);
  if (sVar13 == sVar5) {
    fVar20 = fVar21 + *(float *)(lVar14 + 0x34);
    if (1.0 <= fVar21) {
      sVar13 = *(short *)(lVar14 + 0x32);
    }
    else {
      sVar13 = *(short *)(lVar15 + 0x32);
    }
  }
  else {
    fVar20 = (fVar21 + 1.0) - *(float *)(lVar14 + 0x34);
  }
  puVar9[5] = 0;
  puVar1 = *(undefined8 **)(this + 0xb8);
  puVar3 = *(undefined8 **)(this + 0xc0);
  *(short *)(puVar9 + 6) = sVar5;
  *(short *)((long)puVar9 + 0x32) = sVar13;
  *(float *)((long)puVar9 + 0x34) = fVar20 * 0.5;
  if (puVar1 == puVar3) {
    uVar17 = (long)puVar1 - (long)__src;
    uVar16 = ((long)uVar17 >> 3) + 1;
    if (uVar16 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 008cf16c to 008cf17b has its CatchHandler @ 008cf180 */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar16 <= (ulong)((long)uVar17 >> 2)) {
      uVar16 = (long)uVar17 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar17) {
      uVar16 = 0x1fffffffffffffff;
    }
    if (uVar16 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar16 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 008cf08c to 008cf08f has its CatchHandler @ 008cf180 */
      __dest = operator_new(uVar16 << 3);
    }
    puVar1 = (undefined8 *)((long)__dest + ((long)uVar17 >> 3) * 8);
    *puVar1 = puVar9;
    if (0 < (long)uVar17) {
      memcpy(__dest,__src,uVar17);
    }
    *(void **)(this + 0xb0) = __dest;
    *(undefined8 **)(this + 0xb8) = puVar1 + 1;
    *(void **)(this + 0xc0) = (void *)((long)__dest + uVar16 * 8);
    operator_delete(__src);
  }
  else {
    *puVar1 = puVar9;
    *(undefined8 **)(this + 0xb8) = puVar1 + 1;
  }
  ppuVar2 = *(ushort ***)(param_4 + 8);
  if (ppuVar2 < *(ushort ***)(param_4 + 0x10)) {
    *ppuVar2 = local_80;
    ppuVar2[1] = local_78;
    ppuVar2[2] = (ushort *)0x0;
    ppuVar2[2] = local_70;
    *(ushort ***)(param_4 + 8) = ppuVar2 + 3;
  }
  else {
                    /* try { // try from 008cf108 to 008cf10f has its CatchHandler @ 008cf180 */
    std::__ndk1::
    vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
    ::
    __push_back_slow_path<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>
              ((vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
                *)param_4,(vector *)&local_80);
    if (local_80 != (ushort *)0x0) {
      local_78 = local_80;
      operator_delete(local_80);
    }
  }
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}


