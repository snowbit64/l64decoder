// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cleanup
// Entry Point: 00b7ee88
// Size: 1068 bytes
// Signature: undefined cleanup(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IndexedTriangleSetBuilder::cleanup() */

void IndexedTriangleSetBuilder::cleanup(void)

{
  long lVar1;
  int iVar2;
  void **in_x0;
  uint *puVar3;
  void *pvVar4;
  char *__s;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  ulong __n;
  char *pcVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  void *pvVar21;
  void *pvVar22;
  int iVar23;
  float fVar24;
  float fVar27;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar28;
  float fVar29;
  void *local_a8;
  void *pvStack_a0;
  void *local_98;
  uint *local_90;
  uint *local_88;
  undefined8 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar6 = ((long)in_x0[1] - (long)*in_x0 >> 4) * 0x6db6db6db6db6db7;
  uVar5 = (uint)uVar6;
  if (uVar5 == 0) goto LAB_00b7f230;
  __n = uVar6 & 0xffffffff;
  puVar3 = (uint *)operator_new__(__n << 2);
  local_90 = (uint *)0x0;
  local_88 = (uint *)0x0;
  local_80 = 0;
  if (__n != 0) {
                    /* try { // try from 00b7ef04 to 00b7ef0f has its CatchHandler @ 00b7f2b8 */
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)&local_90,__n);
  }
                    /* try { // try from 00b7ef10 to 00b7ef17 has its CatchHandler @ 00b7f2bc */
  pvVar4 = operator_new__(__n << 2);
                    /* try { // try from 00b7ef1c to 00b7ef23 has its CatchHandler @ 00b7f2c0 */
  __s = (char *)operator_new__(__n);
  memset(__s,0,__n);
  uVar15 = uVar6 & 0xffffffff;
  if ((uVar15 < 8) || ((puVar3 < local_90 + uVar15 && (local_90 < puVar3 + uVar15)))) {
    uVar7 = 0;
LAB_00b7ef68:
    do {
      puVar3[uVar7] = (uint)uVar7;
      local_90[uVar7] = (uint)uVar7;
      uVar7 = uVar7 + 1;
    } while (uVar15 != uVar7);
  }
  else {
    uVar7 = uVar15 - (uVar6 & 7);
    puVar10 = (undefined8 *)(puVar3 + 4);
    uVar18 = 0x300000002;
    uVar25 = 0x100000000;
    puVar12 = (undefined8 *)(local_90 + 4);
    uVar13 = uVar7;
    do {
      iVar2 = (int)((ulong)uVar25 >> 0x20);
      uVar26 = CONCAT44(iVar2 + 4,(int)uVar25 + 4);
      iVar23 = (int)((ulong)uVar18 >> 0x20);
      uVar28 = CONCAT44(iVar23 + 4,(int)uVar18 + 4);
      uVar13 = uVar13 - 8;
      puVar10[-1] = uVar18;
      puVar10[-2] = uVar25;
      puVar10[1] = uVar28;
      *puVar10 = uVar26;
      puVar10 = puVar10 + 4;
      puVar12[-1] = uVar18;
      puVar12[-2] = uVar25;
      puVar12[1] = uVar28;
      *puVar12 = uVar26;
      puVar12 = puVar12 + 4;
      uVar25 = CONCAT44(iVar2 + 8,(int)uVar25 + 8);
      uVar18 = CONCAT44(iVar23 + 8,(int)uVar18 + 8);
    } while (uVar13 != 0);
    if ((uVar6 & 7) != 0) goto LAB_00b7ef68;
  }
                    /* try { // try from 00b7ef88 to 00b7ef8f has its CatchHandler @ 00b7f2c0 */
  std::__ndk1::__sort<IndexedTriangleSetBuilder::VertexSorter&,unsigned_int*>
            (local_90,local_88,(VertexSorter *)&local_a8);
  if (uVar5 != 1) {
    uVar11 = 0;
    pvVar9 = *in_x0;
    puVar8 = local_90;
    do {
      uVar7 = (ulong)puVar8[uVar11];
      uVar16 = uVar11 + 1;
      uVar6 = (ulong)uVar16;
      uVar25 = *(undefined8 *)((long)pvVar9 + uVar7 * 0x70 + 0x48);
      fVar29 = *(float *)((long)pvVar9 + uVar7 * 0x70 + 0x50);
      if (uVar16 < uVar5) {
        iVar2 = Vertex::cmpVertex((Vertex *)((long)pvVar9 + uVar7 * 0x70),
                                  (Vertex *)((long)pvVar9 + (ulong)puVar8[uVar16] * 0x70));
        puVar8 = local_90;
        while (local_90 = puVar8, iVar2 == 0) {
          pvVar9 = *in_x0;
          uVar7 = (ulong)puVar8[uVar6];
          uVar18 = *(undefined8 *)((long)pvVar9 + uVar7 * 0x70 + 0x48);
          fVar20 = *(float *)((long)pvVar9 + uVar7 * 0x70 + 0x50);
          __s[uVar7] = '\x01';
          uVar25 = CONCAT44((float)((ulong)uVar25 >> 0x20) + (float)((ulong)uVar18 >> 0x20),
                            (float)uVar25 + (float)uVar18);
          fVar29 = fVar29 + fVar20;
          puVar3[uVar7] = puVar8[uVar11];
          uVar16 = uVar5;
          if (uVar15 - 1 == uVar6) goto LAB_00b7efd8;
          iVar2 = Vertex::cmpVertex((Vertex *)((long)pvVar9 + (ulong)puVar8[uVar11] * 0x70),
                                    (Vertex *)((long)pvVar9 + (ulong)puVar8[uVar6 + 1] * 0x70));
          uVar6 = uVar6 + 1;
          puVar8 = local_90;
        }
        pvVar9 = *in_x0;
        uVar16 = (uint)uVar6;
LAB_00b7efd8:
        uVar7 = (ulong)puVar8[uVar11];
      }
      uVar11 = uVar16;
      fVar27 = (float)((ulong)uVar25 >> 0x20);
      fVar24 = (float)uVar25;
      fVar20 = (float)NEON_fmadd(fVar29,fVar29,fVar27 * fVar27 + fVar24 * fVar24);
      fVar19 = 1.0 / SQRT(fVar20);
      if (SQRT(fVar20) <= 1e-05) {
        fVar19 = 1.0;
      }
      *(ulong *)((long)pvVar9 + uVar7 * 0x70 + 0x48) = CONCAT44(fVar27 * fVar19,fVar24 * fVar19);
      *(float *)((long)pvVar9 + uVar7 * 0x70 + 0x50) = fVar29 * fVar19;
    } while (uVar11 < uVar5 - 1);
  }
  uVar6 = 0;
  iVar2 = 0;
  uVar11 = uVar5;
  if (uVar5 < 2) {
    uVar11 = 1;
  }
  do {
    iVar2 = iVar2 + (uint)(byte)__s[uVar6];
    *(int *)((long)pvVar4 + uVar6 * 4) = iVar2;
    uVar6 = uVar6 + 1;
  } while (uVar11 != uVar6);
  uVar6 = (long)in_x0[4] - (long)in_x0[3];
  if ((int)(uVar6 >> 4) != 0) {
    uVar6 = uVar6 >> 4 & 0xffffffff;
    puVar8 = (uint *)((long)in_x0[3] + 8);
    do {
      uVar6 = uVar6 - 1;
      puVar8[-2] = puVar3[puVar8[-2]] - *(int *)((long)pvVar4 + (ulong)puVar3[puVar8[-2]] * 4);
      puVar8[-1] = puVar3[puVar8[-1]] - *(int *)((long)pvVar4 + (ulong)puVar3[puVar8[-1]] * 4);
      *puVar8 = puVar3[*puVar8] - *(int *)((long)pvVar4 + (ulong)puVar3[*puVar8] * 4);
      puVar8 = puVar8 + 4;
    } while (uVar6 != 0);
  }
  local_a8 = (void *)0x0;
  pvStack_a0 = (void *)0x0;
  local_98 = (void *)0x0;
  if (__n != 0) {
                    /* try { // try from 00b7f170 to 00b7f173 has its CatchHandler @ 00b7f2b4 */
    pvStack_a0 = operator_new(__n * 0x70);
    local_98 = (void *)((long)pvStack_a0 + __n * 0x70);
  }
  if (uVar5 < 2) {
    uVar5 = 1;
  }
  lVar14 = 0;
  pcVar17 = __s;
  local_a8 = pvStack_a0;
  do {
    if (*pcVar17 == '\0') {
                    /* try { // try from 00b7f1c8 to 00b7f1cf has its CatchHandler @ 00b7f2d0 */
      FUN_00b7e764(&local_a8,(long)*in_x0 + lVar14);
    }
    pcVar17 = pcVar17 + 1;
    lVar14 = lVar14 + 0x70;
  } while ((ulong)uVar5 * 0x70 - lVar14 != 0);
  pvVar22 = in_x0[1];
  pvVar21 = *in_x0;
  pvVar9 = in_x0[2];
  in_x0[1] = pvStack_a0;
  *in_x0 = local_a8;
  in_x0[2] = local_98;
  local_a8 = pvVar21;
  pvStack_a0 = pvVar22;
  local_98 = pvVar9;
  operator_delete__(puVar3);
  operator_delete__(pvVar4);
  operator_delete__(__s);
  if (local_a8 != (void *)0x0) {
    pvStack_a0 = local_a8;
    operator_delete(local_a8);
  }
  if (local_90 != (uint *)0x0) {
    local_88 = local_90;
    operator_delete(local_90);
  }
LAB_00b7f230:
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


