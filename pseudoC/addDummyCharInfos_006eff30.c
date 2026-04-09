// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addDummyCharInfos
// Entry Point: 006eff30
// Size: 468 bytes
// Signature: undefined __thiscall addDummyCharInfos(FontOverlayRenderer * this, uint param_1)


/* FontOverlayRenderer::addDummyCharInfos(unsigned int) */

uint * __thiscall FontOverlayRenderer::addDummyCharInfos(FontOverlayRenderer *this,uint param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 *puVar9;
  ulong uVar10;
  uint *__src;
  uint *puVar11;
  uint uVar12;
  
  uVar2 = *(uint *)(this + 0x70);
  __src = *(uint **)(this + 0x68);
  if (uVar2 == 0) {
    uVar12 = 0;
    bVar1 = false;
  }
  else {
    uVar4 = *__src;
    if (uVar4 < param_1) {
      uVar3 = 1;
      do {
        uVar12 = uVar3;
        if (uVar2 == uVar12) {
          bVar1 = uVar12 <= uVar2 && uVar2 != uVar12;
          uVar12 = uVar2;
          goto LAB_006effcc;
        }
        uVar4 = __src[(ulong)uVar12 * 7];
        uVar3 = uVar12 + 1;
      } while (uVar4 < param_1);
      bVar1 = uVar12 < uVar2;
      puVar11 = __src + (ulong)uVar12 * 7;
    }
    else {
      uVar12 = 0;
      bVar1 = true;
      puVar11 = __src;
    }
    if (uVar4 == param_1) {
      return puVar11;
    }
  }
LAB_006effcc:
  uVar4 = uVar2 + 1;
  __dest = operator_new__((ulong)uVar4 * 0x1c);
  if (uVar2 != 0xffffffff) {
    lVar5 = (ulong)uVar4 * 0x1c;
    uVar7 = lVar5 - 0x1c;
    pvVar6 = __dest;
    if (0x1b < uVar7) {
      puVar9 = (undefined2 *)((long)__dest + 0x20);
      uVar7 = uVar7 / 0x1c + 1;
      uVar8 = uVar7 & 0x1ffffffffffffffe;
      pvVar6 = (void *)((long)__dest + uVar8 * 0x1c);
      uVar10 = uVar8;
      do {
        puVar9[-0xe] = 0x7fff;
        uVar10 = uVar10 - 2;
        *puVar9 = 0x7fff;
        puVar9[-8] = 0x7fff;
        puVar9[6] = 0x7fff;
        puVar9 = puVar9 + 0x1c;
      } while (uVar10 != 0);
      if (uVar7 == uVar8) goto LAB_006f0078;
    }
    do {
      *(undefined2 *)((long)pvVar6 + 4) = 0x7fff;
      *(undefined2 *)((long)pvVar6 + 0x10) = 0x7fff;
      pvVar6 = (void *)((long)pvVar6 + 0x1c);
    } while (pvVar6 != (void *)((long)__dest + lVar5));
  }
LAB_006f0078:
  if (uVar12 != 0) {
    memcpy(__dest,__src,(ulong)uVar12 * 0x1c);
  }
  uVar7 = (ulong)uVar12;
  if (bVar1) {
    memcpy((void *)((long)__dest + uVar7 * 0x1c + 0x1c),__src + uVar7 * 7,
           (ulong)(uVar2 - uVar12) * 0x1c);
  }
  puVar11 = (uint *)((long)__dest + uVar7 * 0x1c);
  *puVar11 = param_1;
  if (__src != (uint *)0x0) {
    operator_delete__(__src);
    uVar4 = *(int *)(this + 0x70) + 1;
  }
  *(uint *)(this + 0x70) = uVar4;
  *(void **)(this + 0x68) = __dest;
  return puVar11;
}


