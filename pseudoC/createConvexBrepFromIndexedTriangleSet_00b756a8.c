// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createConvexBrepFromIndexedTriangleSet
// Entry Point: 00b756a8
// Size: 448 bytes
// Signature: undefined __cdecl createConvexBrepFromIndexedTriangleSet(IndexedTriangleSet * param_1, bool param_2, bool param_3)


/* BrepUtil::createConvexBrepFromIndexedTriangleSet(IndexedTriangleSet const*, bool, bool) */

Brep * BrepUtil::createConvexBrepFromIndexedTriangleSet
                 (IndexedTriangleSet *param_1,bool param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  float *__s;
  void *__src;
  BrepTriangle *pBVar6;
  Brep *this;
  int iVar7;
  ulong uVar8;
  undefined4 *puVar9;
  uint local_78;
  ushort local_74;
  uint *local_70;
  float *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar5 = IndexedTriangleSet::is16Bit();
  if ((uVar5 & 1) == 0) {
    this = (Brep *)0x0;
    goto LAB_00b75834;
  }
  uVar4 = TriangleSet::getNumVertices();
  if (uVar4 * 3 == 0) {
    __s = (float *)0x0;
  }
  else {
    uVar5 = (ulong)(uVar4 * 3) << 2;
    __s = (float *)operator_new(uVar5);
    memset(__s,0,uVar5);
  }
                    /* try { // try from 00b75724 to 00b7572f has its CatchHandler @ 00b75884 */
  __src = (void *)TriangleSet::getPositions();
  memcpy(__s,__src,(ulong)uVar4 * 0xc);
  local_70 = (uint *)0x0;
  local_68 = (float *)0x0;
                    /* try { // try from 00b75744 to 00b7575f has its CatchHandler @ 00b75880 */
  ConvexHull3DUtil::createHull(__s,uVar4,&local_68,(uint *)&local_74,&local_70,&local_78);
  uVar4 = local_78;
  uVar5 = (ulong)local_78;
                    /* try { // try from 00b7576c to 00b7576f has its CatchHandler @ 00b7587c */
  pBVar6 = (BrepTriangle *)operator_new__(uVar5 * 0x14);
  if (uVar4 == 0) {
    if (local_70 != (uint *)0x0) goto LAB_00b757dc;
  }
  else {
    uVar8 = 0;
    puVar9 = (undefined4 *)(pBVar6 + 0x10);
    do {
      iVar7 = (int)uVar8;
      uVar4 = local_70[uVar8 & 0xffffffff];
      uVar8 = uVar8 + 3;
      uVar1 = local_70[iVar7 + 1];
      uVar2 = local_70[iVar7 + 2];
      *(undefined2 *)(puVar9 + -1) = 0;
      *puVar9 = 0;
      local_60 = CONCAT22((short)uVar1,(short)uVar4);
      *(short *)(puVar9 + -3) = (short)uVar2;
      *(undefined4 *)((long)puVar9 + -10) = 0xffffffff;
      *(undefined2 *)((long)puVar9 + -6) = 0xffff;
      puVar9[-4] = local_60;
      puVar9 = puVar9 + 5;
    } while (uVar5 * 3 != uVar8);
LAB_00b757dc:
    operator_delete__(local_70);
  }
                    /* try { // try from 00b757e0 to 00b757e7 has its CatchHandler @ 00b75878 */
  this = (Brep *)operator_new(0x2fb8);
                    /* try { // try from 00b757f8 to 00b7581b has its CatchHandler @ 00b75868 */
  Brep::Brep(this,local_74,(Vector3 *)local_68,0,(BrepWedge *)0x0,local_78,pBVar6,param_2,param_3,
             (Matrix4x4 *)0x0,(Matrix4x4 *)0x0,(uchar *)0x0);
  if (local_68 != (float *)0x0) {
    operator_delete__(local_68);
  }
  if (__s != (float *)0x0) {
    operator_delete(__s);
  }
LAB_00b75834:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}


