// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createIndexedTriangleSetFromBrep
// Entry Point: 00b76aac
// Size: 1040 bytes
// Signature: undefined __cdecl createIndexedTriangleSetFromBrep(Brep * param_1, uint param_2, Vector2 * param_3, Vector2 * param_4, ushort * * param_5)


/* BrepUtil::createIndexedTriangleSetFromBrep(Brep*, unsigned int, Vector2 const&, Vector2 const&,
   unsigned short**) */

IndexedTriangleSet *
BrepUtil::createIndexedTriangleSetFromBrep
          (Brep *param_1,uint param_2,Vector2 *param_3,Vector2 *param_4,ushort **param_5)

{
  float *pfVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  IndexedTriangleSet *this;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  ushort *puVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ushort *local_c8;
  void *local_c0;
  void *local_b8;
  void *local_b0;
  __tree_node **local_a8;
  __tree_node *local_a0;
  undefined8 local_98;
  void *local_90;
  void *local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  this = (IndexedTriangleSet *)operator_new(0x90);
                    /* try { // try from 00b76af8 to 00b76afb has its CatchHandler @ 00b76ec4 */
  IndexedTriangleSet::IndexedTriangleSet(this);
  local_98 = 0;
  local_90 = (void *)0x0;
  local_a8 = &local_a0;
  local_88 = (void *)0x0;
  uStack_80 = 0;
  local_c0 = (void *)0x0;
  local_b8 = (void *)0x0;
  local_b0 = (void *)0x0;
  local_a0 = (__tree_node *)0x0;
  if (((param_2 >> 1 & 1) != 0) &&
     (uVar4 = ((uint)(*(int *)(param_1 + 0x2fa0) - *(int *)(param_1 + 0x2f98)) >> 3) * 0xaaab,
     uVar12 = (ulong)uVar4 & 0xffff, (uVar4 & 0xffff) != 0)) {
                    /* try { // try from 00b76b44 to 00b76b47 has its CatchHandler @ 00b76ebc */
    local_b8 = operator_new(uVar12 << 3);
    local_b0 = (void *)((long)local_b8 + uVar12 * 8);
  }
  lVar8 = *(long *)(param_1 + 0x2f70);
  lVar10 = *(long *)(param_1 + 0x2f68);
  iVar15 = (int)((ulong)(lVar8 - lVar10) >> 5);
  uVar4 = iVar15 * 3;
  local_c0 = local_b8;
                    /* try { // try from 00b76b70 to 00b76b7b has its CatchHandler @ 00b76ec0 */
  IndexedTriangleSet::setNumIndices(this,uVar4);
  if (iVar15 != 0) {
    iVar15 = 0;
    uVar12 = 0;
    do {
      lVar9 = *(long *)(param_1 + 0x2f68);
      lVar18 = 0;
      lVar14 = (uVar12 & 0x3fffffff) << 5;
      do {
        if (param_1[0x2fb6] == (Brep)0x0) {
          uVar19 = 0xffff;
        }
        else {
          uVar19 = (ulong)*(ushort *)(*(long *)(param_1 + 0x2f68) + lVar14 + 10);
        }
                    /* try { // try from 00b76c08 to 00b76c5f has its CatchHandler @ 00b76ee8 */
        uVar6 = IndexPairMap::addIndexPair
                          ((IndexPairMap *)&local_a8,
                           *(ushort *)(*(long *)(param_1 + 0x2f68) + lVar14 + 8),(ushort)uVar19);
        uVar2 = (uint)uVar6 & 0xffff;
        IndexedTriangleSet::setIndex(this,uVar2,iVar15 + (int)lVar18);
        if ((param_2 >> 1 & 1) != 0) {
          uVar6 = uVar6 & 0xffff;
          uVar11 = (long)local_b8 - (long)local_c0 >> 3;
          if (uVar11 <= uVar6) {
            uVar13 = (ulong)(uVar2 + 1);
            if (uVar11 < uVar13) {
              std::__ndk1::vector<Vector2,std::__ndk1::allocator<Vector2>>::__append
                        ((vector<Vector2,std::__ndk1::allocator<Vector2>> *)&local_c0,
                         uVar13 - uVar11);
            }
            else if (uVar13 < uVar11) {
              local_b8 = (void *)((long)local_c0 + uVar13 * 8);
            }
            *(undefined8 *)((long)local_c0 + uVar6 * 8) =
                 *(undefined8 *)(*(long *)(param_1 + 0x2f98) + uVar19 * 0x18 + 0xc);
            if (*(short *)(lVar9 + uVar12 * 0x20 + 2) == 1) {
              pfVar1 = (float *)((long)local_c0 + uVar6 * 8);
              fVar20 = *(float *)param_3;
              fVar22 = *pfVar1;
              fVar24 = pfVar1[1];
              *pfVar1 = fVar20 * fVar22;
              fVar23 = *(float *)(param_3 + 4);
              pfVar1[1] = fVar23 * fVar24;
              *pfVar1 = *(float *)param_4 + fVar20 * fVar22;
              pfVar1[1] = fVar23 * fVar24 + *(float *)(param_4 + 4);
            }
          }
        }
        lVar18 = lVar18 + 1;
        lVar14 = lVar14 + 8;
      } while (lVar18 != 3);
      iVar15 = iVar15 + 3;
      uVar12 = uVar12 + 1;
    } while (uVar12 != ((ulong)(lVar8 - lVar10) >> 5 & 0xffffffff));
  }
  uVar12 = (long)local_88 - (long)local_90;
  if (param_5 == (ushort **)0x0) {
    local_c8 = (ushort *)0x0;
  }
  else {
                    /* try { // try from 00b76cf8 to 00b76d23 has its CatchHandler @ 00b76ed8 */
    local_c8 = (ushort *)operator_new__(uVar12 >> 1 & 0x1fffffffe);
    *param_5 = local_c8;
  }
  uVar2 = (uint)(uVar12 >> 2);
  TriangleSet::setNumVertices((TriangleSet *)this,uVar2,param_2);
  if (uVar2 != 0) {
    lVar10 = 0;
    uVar17 = 0;
    lVar8 = 2;
    puVar16 = local_c8;
    do {
      uVar19 = (ulong)((ushort *)((long)local_90 + lVar8))[-1];
      uVar3 = *(ushort *)((long)local_90 + lVar8);
                    /* try { // try from 00b76d88 to 00b76d93 has its CatchHandler @ 00b76ee4 */
      TriangleSet::setPosition
                ((TriangleSet *)this,
                 (float *)(*(long *)(param_1 + 0x2ef0) +
                          (ulong)*(ushort *)(*(long *)(param_1 + 0x2f50) + uVar19 * 0xc) * 0x10),
                 uVar17);
      if (local_c8 != (ushort *)0x0) {
        *puVar16 = *(ushort *)(*(long *)(param_1 + 0x2f50) + uVar19 * 0xc + 8);
      }
      if (uVar3 != 0xffff) {
        if ((param_2 & 1) != 0) {
                    /* try { // try from 00b76dcc to 00b76df3 has its CatchHandler @ 00b76ee0 */
          TriangleSet::setNormal
                    ((TriangleSet *)this,
                     (float *)(*(long *)(param_1 + 0x2f98) + (ulong)uVar3 * 0x18),uVar17);
        }
        if ((param_2 >> 1 & 1) != 0) {
          TriangleSet::setTexCoord((TriangleSet *)this,(float *)((long)local_c0 + lVar10),0,uVar17);
        }
      }
      uVar17 = uVar17 + 1;
      lVar8 = lVar8 + 4;
      puVar16 = puVar16 + 1;
      lVar10 = lVar10 + 8;
    } while ((uVar12 >> 2 & 0xffffffff) * 8 - lVar10 != 0);
  }
                    /* try { // try from 00b76df8 to 00b76e4f has its CatchHandler @ 00b76edc */
  uVar21 = IndexedTriangleSet::computeUvDensity(this,0,0,uVar4);
  IndexedTriangleSet::setNumSubsets(this,1);
  puVar7 = (undefined4 *)operator_new(0x20);
  puVar7[4] = uVar21;
  *(undefined8 *)(puVar7 + 5) = 0;
  puVar7[7] = 0;
  *puVar7 = 0;
  puVar7[1] = uVar2;
  puVar7[2] = 0;
  puVar7[3] = uVar4;
  IndexedTriangleSet::setSubset(this,(IndexedTriangleSubset *)puVar7,0);
  if (local_c0 != (void *)0x0) {
    local_b8 = local_c0;
    operator_delete(local_c0);
  }
  if (local_90 != (void *)0x0) {
    local_88 = local_90;
    operator_delete(local_90);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::__map_value_compare<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::less<std::__ndk1::pair<unsigned_short,unsigned_short>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::__map_value_compare<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::less<std::__ndk1::pair<unsigned_short,unsigned_short>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>>>
             *)&local_a8,local_a0);
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


