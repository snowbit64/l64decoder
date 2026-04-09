// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LightList
// Entry Point: 009fda1c
// Size: 1180 bytes
// Signature: undefined __thiscall LightList(LightList * this, SharedRenderArgs * param_1)


/* LightList::LightList(SharedRenderArgs&) */

void __thiscall LightList::LightList(LightList *this,SharedRenderArgs *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  size_t sVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(SharedRenderArgs **)(this + 0xb0) = param_1;
                    /* try { // try from 009fda68 to 009fda93 has its CatchHandler @ 009fdeb8 */
  lVar3 = EngineManager::getInstance();
  pvVar10 = *(void **)(this + 0x18);
  uVar12 = (ulong)*(uint *)(lVar3 + 500);
  *(uint *)(this + 8) = *(uint *)(lVar3 + 500);
  if ((ulong)(*(long *)(this + 0x28) - (long)pvVar10 >> 3) < uVar12) {
    lVar3 = *(long *)(this + 0x20);
    pvVar4 = operator_new(uVar12 << 3);
    sVar5 = lVar3 - (long)pvVar10;
    if (0 < (long)sVar5) {
      memcpy(pvVar4,pvVar10,sVar5);
    }
    *(void **)(this + 0x18) = pvVar4;
    *(size_t *)(this + 0x20) = (long)pvVar4 + sVar5;
    *(void **)(this + 0x28) = (void *)((long)pvVar4 + uVar12 * 8);
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
      uVar12 = (ulong)*(uint *)(this + 8);
    }
  }
                    /* try { // try from 009fdad8 to 009fdb13 has its CatchHandler @ 009fdeb8 */
  pvVar10 = operator_new__(uVar12 * 0x78);
  pvVar4 = *(void **)(this + 0x50);
  *(void **)(this + 0x10) = pvVar10;
  this[0x30] = (LightList)0x0;
  if ((ulong)((*(long *)(this + 0x60) - (long)pvVar4 >> 3) * -0x3333333333333333) < 0x200) {
    lVar3 = *(long *)(this + 0x58);
    pvVar10 = operator_new(0x5000);
    sVar5 = lVar3 - (long)pvVar4;
    if (0 < (long)sVar5) {
      memcpy(pvVar10,pvVar4,sVar5);
    }
    *(void **)(this + 0x50) = pvVar10;
    *(size_t *)(this + 0x58) = (long)pvVar10 + sVar5;
    *(long *)(this + 0x60) = (long)pvVar10 + 0x5000;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
  }
  pvVar10 = *(void **)(this + 0x68);
  if ((ulong)((*(long *)(this + 0x78) - (long)pvVar10 >> 3) * -0x3333333333333333) < 0x40) {
    lVar3 = *(long *)(this + 0x70);
                    /* try { // try from 009fdb6c to 009fdb73 has its CatchHandler @ 009fdeb8 */
    pvVar4 = operator_new(0xa00);
    sVar5 = lVar3 - (long)pvVar10;
    if (0 < (long)sVar5) {
      memcpy(pvVar4,pvVar10,sVar5);
    }
    *(void **)(this + 0x68) = pvVar4;
    *(size_t *)(this + 0x70) = (long)pvVar4 + sVar5;
    *(long *)(this + 0x78) = (long)pvVar4 + 0xa00;
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
  }
  puVar11 = *(undefined8 **)(this + 0x98);
  if ((ulong)((*(long *)(this + 0xa8) - (long)puVar11 >> 6) * -0x3333333333333333) < 4) {
    puVar13 = *(undefined8 **)(this + 0xa0);
                    /* try { // try from 009fdbd4 to 009fdd13 has its CatchHandler @ 009fdeb8 */
    pvVar10 = operator_new(0x500);
    lVar3 = (long)puVar13 - (long)puVar11;
    lVar2 = lVar3 / 0x140;
    puVar6 = (undefined8 *)((long)pvVar10 + lVar2 * 0x140);
    puVar8 = puVar6;
    if (lVar3 != 0) {
      puVar7 = (undefined8 *)((long)pvVar10 + lVar2 * 0x140);
      do {
        puVar8 = puVar7 + -0x28;
        puVar9 = puVar13 + -0x28;
        uVar14 = *puVar9;
        puVar7[-0x27] = puVar13[-0x27];
        *puVar8 = uVar14;
        uVar19 = puVar13[-0x23];
        uVar18 = puVar13[-0x24];
        uVar15 = puVar13[-0x21];
        uVar14 = puVar13[-0x22];
        uVar1 = *(undefined4 *)(puVar13 + -0x20);
        uVar17 = puVar13[-0x25];
        uVar16 = puVar13[-0x26];
        puVar7[-0x1e] = &PTR__CullingBody_00fea1a8;
        puVar7[-0x23] = uVar19;
        puVar7[-0x24] = uVar18;
        puVar7[-0x21] = uVar15;
        puVar7[-0x22] = uVar14;
        *(undefined4 *)(puVar7 + -0x20) = uVar1;
        puVar7[-0x25] = uVar17;
        puVar7[-0x26] = uVar16;
        uVar14 = puVar13[-0x19];
        uVar16 = puVar13[-0x1a];
        uVar15 = puVar13[-0x1b];
        uVar18 = puVar13[-0x1c];
        uVar17 = puVar13[-0x1d];
        puVar7[-0x18] = puVar13[-0x18];
        puVar7[-0x19] = uVar14;
        puVar7[-0x1a] = uVar16;
        puVar7[-0x1b] = uVar15;
        puVar7[-0x1c] = uVar18;
        puVar7[-0x1d] = uVar17;
        uVar14 = puVar13[-0x11];
        uVar16 = puVar13[-0x12];
        uVar15 = puVar13[-0x13];
        uVar18 = puVar13[-0x14];
        uVar17 = puVar13[-0x15];
        uVar20 = puVar13[-0x16];
        uVar19 = puVar13[-0x17];
        puVar7[-0x10] = puVar13[-0x10];
        puVar7[-0x11] = uVar14;
        puVar7[-0x12] = uVar16;
        puVar7[-0x13] = uVar15;
        puVar7[-0x14] = uVar18;
        puVar7[-0x15] = uVar17;
        puVar7[-0x16] = uVar20;
        puVar7[-0x17] = uVar19;
        uVar14 = puVar13[-9];
        uVar16 = puVar13[-10];
        uVar15 = puVar13[-0xb];
        uVar18 = puVar13[-0xc];
        uVar17 = puVar13[-0xd];
        uVar20 = puVar13[-0xe];
        uVar19 = puVar13[-0xf];
        puVar7[-8] = puVar13[-8];
        puVar7[-9] = uVar14;
        puVar7[-10] = uVar16;
        puVar7[-0xb] = uVar15;
        puVar7[-0xc] = uVar18;
        puVar7[-0xd] = uVar17;
        puVar7[-0xe] = uVar20;
        puVar7[-0xf] = uVar19;
        uVar15 = puVar13[-6];
        uVar14 = puVar13[-7];
        uVar17 = puVar13[-2];
        uVar16 = puVar13[-3];
        uVar19 = puVar13[-4];
        uVar18 = puVar13[-5];
        puVar7[-1] = puVar13[-1];
        puVar7[-6] = uVar15;
        puVar7[-7] = uVar14;
        puVar7[-4] = uVar19;
        puVar7[-5] = uVar18;
        puVar7[-2] = uVar17;
        puVar7[-3] = uVar16;
        puVar13 = puVar9;
        puVar7 = puVar8;
      } while (puVar9 != puVar11);
    }
    *(undefined8 **)(this + 0x98) = puVar8;
    *(undefined8 **)(this + 0xa0) = puVar6;
    *(long *)(this + 0xa8) = (long)pvVar10 + 0x500;
    if (puVar11 != (undefined8 *)0x0) {
      operator_delete(puVar11);
    }
  }
  pvVar10 = *(void **)(this + 0x80);
  if ((ulong)((*(long *)(this + 0x90) - (long)pvVar10 >> 3) * -0x3333333333333333) < 0x10) {
    lVar3 = *(long *)(this + 0x88);
    pvVar4 = operator_new(0x280);
    sVar5 = lVar3 - (long)pvVar10;
    if (0 < (long)sVar5) {
      memcpy(pvVar4,pvVar10,sVar5);
    }
    *(void **)(this + 0x80) = pvVar4;
    *(size_t *)(this + 0x88) = (long)pvVar4 + sVar5;
    *(long *)(this + 0x90) = (long)pvVar4 + 0x280;
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
  }
  puVar11 = *(undefined8 **)(this + 0x98);
  if ((ulong)((*(long *)(this + 0xa8) - (long)puVar11 >> 6) * -0x3333333333333333) < 0x10) {
    puVar13 = *(undefined8 **)(this + 0xa0);
                    /* try { // try from 009fdd74 to 009fdd7b has its CatchHandler @ 009fdeb8 */
    pvVar10 = operator_new(0x1400);
    lVar3 = (long)puVar13 - (long)puVar11;
    lVar2 = lVar3 / 0x140;
    puVar6 = (undefined8 *)((long)pvVar10 + lVar2 * 0x140);
    puVar8 = puVar6;
    if (lVar3 != 0) {
      puVar7 = (undefined8 *)((long)pvVar10 + lVar2 * 0x140);
      do {
        puVar8 = puVar7 + -0x28;
        puVar9 = puVar13 + -0x28;
        uVar14 = *puVar9;
        puVar7[-0x27] = puVar13[-0x27];
        *puVar8 = uVar14;
        uVar19 = puVar13[-0x23];
        uVar18 = puVar13[-0x24];
        uVar15 = puVar13[-0x21];
        uVar14 = puVar13[-0x22];
        uVar1 = *(undefined4 *)(puVar13 + -0x20);
        uVar17 = puVar13[-0x25];
        uVar16 = puVar13[-0x26];
        puVar7[-0x1e] = &PTR__CullingBody_00fea1a8;
        puVar7[-0x23] = uVar19;
        puVar7[-0x24] = uVar18;
        puVar7[-0x21] = uVar15;
        puVar7[-0x22] = uVar14;
        *(undefined4 *)(puVar7 + -0x20) = uVar1;
        puVar7[-0x25] = uVar17;
        puVar7[-0x26] = uVar16;
        uVar14 = puVar13[-0x19];
        uVar16 = puVar13[-0x1a];
        uVar15 = puVar13[-0x1b];
        uVar18 = puVar13[-0x1c];
        uVar17 = puVar13[-0x1d];
        puVar7[-0x18] = puVar13[-0x18];
        puVar7[-0x19] = uVar14;
        puVar7[-0x1a] = uVar16;
        puVar7[-0x1b] = uVar15;
        puVar7[-0x1c] = uVar18;
        puVar7[-0x1d] = uVar17;
        uVar14 = puVar13[-0x11];
        uVar16 = puVar13[-0x12];
        uVar15 = puVar13[-0x13];
        uVar18 = puVar13[-0x14];
        uVar17 = puVar13[-0x15];
        uVar20 = puVar13[-0x16];
        uVar19 = puVar13[-0x17];
        puVar7[-0x10] = puVar13[-0x10];
        puVar7[-0x11] = uVar14;
        puVar7[-0x12] = uVar16;
        puVar7[-0x13] = uVar15;
        puVar7[-0x14] = uVar18;
        puVar7[-0x15] = uVar17;
        puVar7[-0x16] = uVar20;
        puVar7[-0x17] = uVar19;
        uVar14 = puVar13[-9];
        uVar16 = puVar13[-10];
        uVar15 = puVar13[-0xb];
        uVar18 = puVar13[-0xc];
        uVar17 = puVar13[-0xd];
        uVar20 = puVar13[-0xe];
        uVar19 = puVar13[-0xf];
        puVar7[-8] = puVar13[-8];
        puVar7[-9] = uVar14;
        puVar7[-10] = uVar16;
        puVar7[-0xb] = uVar15;
        puVar7[-0xc] = uVar18;
        puVar7[-0xd] = uVar17;
        puVar7[-0xe] = uVar20;
        puVar7[-0xf] = uVar19;
        uVar15 = puVar13[-6];
        uVar14 = puVar13[-7];
        uVar17 = puVar13[-2];
        uVar16 = puVar13[-3];
        uVar19 = puVar13[-4];
        uVar18 = puVar13[-5];
        puVar7[-1] = puVar13[-1];
        puVar7[-6] = uVar15;
        puVar7[-7] = uVar14;
        puVar7[-4] = uVar19;
        puVar7[-5] = uVar18;
        puVar7[-2] = uVar17;
        puVar7[-3] = uVar16;
        puVar13 = puVar9;
        puVar7 = puVar8;
      } while (puVar9 != puVar11);
    }
    *(undefined8 **)(this + 0x98) = puVar8;
    *(undefined8 **)(this + 0xa0) = puVar6;
    *(long *)(this + 0xa8) = (long)pvVar10 + 0x1400;
    if (puVar11 != (undefined8 *)0x0) {
      operator_delete(puVar11);
    }
  }
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 200) = 0;
  return;
}


