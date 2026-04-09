// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: splitColorAndAlpha
// Entry Point: 00a977d8
// Size: 612 bytes
// Signature: undefined __cdecl splitColorAndAlpha(ImageDesc * param_1, ImageDesc * param_2, ImageDesc * param_3)


/* ImageUtil::splitColorAndAlpha(ImageDesc const&, ImageDesc&, ImageDesc&) */

bool ImageUtil::splitColorAndAlpha(ImageDesc *param_1,ImageDesc *param_2,ImageDesc *param_3)

{
  void *__src;
  void *__dest;
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong __n;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  bVar6 = *(int *)(param_1 + 0x40) == 5 && *(int *)(param_1 + 0x1c) == 0;
  if (bVar6) {
    uVar8 = 0;
    uVar12 = 0;
    uVar9 = *(uint *)param_1;
    uVar10 = *(uint *)(param_1 + 4);
    uVar11 = *(uint *)(param_1 + 8);
    if (uVar9 == 0) {
      uVar9 = 1;
    }
    if (uVar10 == 0) {
      uVar10 = 1;
    }
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    do {
      uVar2 = uVar9 >> 1;
      uVar3 = uVar10 >> 1;
      uVar5 = (int)uVar12 + uVar11 * uVar9 * uVar10;
      uVar12 = (ulong)uVar5;
      uVar4 = uVar11 >> 1;
      if (uVar3 + uVar2 + uVar4 == 0) break;
      uVar8 = uVar8 + 1;
      if (uVar9 < 2) {
        uVar2 = 1;
      }
      if (uVar10 < 2) {
        uVar3 = 1;
      }
      if (uVar11 < 2) {
        uVar4 = 1;
      }
      uVar9 = uVar2;
      uVar10 = uVar3;
      uVar11 = uVar4;
    } while (uVar8 <= *(uint *)(param_1 + 0x10));
    if (*(int *)(param_1 + 0x18) - 1U < 8) {
      uVar8 = *(uint *)(&DAT_005175a0 + (long)(int)(*(int *)(param_1 + 0x18) - 1U) * 4);
    }
    else {
      DebugUtil::message("Error","ImageUtil::getTypeMemorySize: invalid type",(char *)0x0,
                         "T:/src/base/2d/ImageUtil.cpp",800);
      uVar8 = 0;
    }
    uVar16 = *(undefined8 *)(param_1 + 0x38);
    uVar15 = *(undefined8 *)(param_1 + 0x30);
    uVar13 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = *(undefined2 *)(param_1 + 0x50);
    uVar18 = *(undefined8 *)(param_1 + 0x28);
    uVar17 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_2 + 0x40) = uVar13;
    uVar20 = *(undefined8 *)(param_1 + 8);
    uVar19 = *(undefined8 *)param_1;
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    *(undefined2 *)(param_2 + 0x50) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = 3;
    *(undefined8 *)(param_2 + 0x38) = uVar16;
    *(undefined8 *)(param_2 + 0x30) = uVar15;
    *(undefined8 *)(param_2 + 8) = uVar20;
    *(undefined8 *)param_2 = uVar19;
    *(undefined8 *)(param_2 + 0x18) = uVar14;
    *(undefined8 *)(param_2 + 0x10) = uVar13;
    *(undefined8 *)(param_2 + 0x28) = uVar18;
    *(undefined8 *)(param_2 + 0x20) = uVar17;
    *(undefined4 *)(param_2 + 0x14) = 3;
    *(uint *)(param_2 + 0x20) = uVar5 * 3;
    pvVar7 = operator_new__((ulong)(uVar5 * 3));
    *(void **)(param_2 + 0x28) = pvVar7;
    uVar16 = *(undefined8 *)(param_1 + 0x38);
    uVar15 = *(undefined8 *)(param_1 + 0x30);
    uVar13 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = *(undefined2 *)(param_1 + 0x50);
    uVar18 = *(undefined8 *)(param_1 + 0x28);
    uVar17 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_3 + 0x40) = uVar13;
    uVar14 = *(undefined8 *)(param_1 + 8);
    uVar13 = *(undefined8 *)param_1;
    uVar20 = *(undefined8 *)(param_1 + 0x18);
    uVar19 = *(undefined8 *)(param_1 + 0x10);
    *(undefined2 *)(param_3 + 0x50) = uVar1;
    *(undefined8 *)(param_3 + 0x28) = uVar18;
    *(undefined8 *)(param_3 + 0x20) = uVar17;
    *(undefined8 *)(param_3 + 0x38) = uVar16;
    *(undefined8 *)(param_3 + 0x30) = uVar15;
    *(undefined4 *)(param_3 + 0x40) = 1;
    *(uint *)(param_3 + 0x20) = uVar5;
    *(undefined8 *)(param_3 + 8) = uVar14;
    *(undefined8 *)param_3 = uVar13;
    *(undefined8 *)(param_3 + 0x18) = uVar20;
    *(undefined8 *)(param_3 + 0x10) = uVar19;
    *(undefined4 *)(param_3 + 0x14) = 1;
    pvVar7 = operator_new__(uVar12);
    *(void **)(param_3 + 0x28) = pvVar7;
    if (uVar5 != 0) {
      __n = (ulong)uVar8;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      while( true ) {
        uVar12 = uVar12 - 1;
        __src = (void *)(*(long *)(param_1 + 0x28) + (ulong)uVar11);
        __dest = (void *)(*(long *)(param_2 + 0x28) + (ulong)uVar9);
        memcpy(__dest,__src,__n);
        memcpy((void *)((long)__dest + __n),(void *)((long)__src + __n),__n);
        memcpy((void *)((long)__dest + (ulong)(uVar8 * 2)),
               (void *)((long)__src + (ulong)(uVar8 * 2)),__n);
        memcpy((void *)((long)pvVar7 + (ulong)uVar10),(void *)((long)__src + (ulong)(uVar8 * 3)),__n
              );
        if (uVar12 == 0) break;
        uVar9 = uVar9 + uVar8 * 3;
        uVar10 = uVar10 + uVar8;
        pvVar7 = *(void **)(param_3 + 0x28);
        uVar11 = uVar11 + uVar8 * 4;
      }
    }
  }
  return bVar6;
}


