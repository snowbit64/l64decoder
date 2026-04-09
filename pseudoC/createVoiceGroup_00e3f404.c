// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createVoiceGroup
// Entry Point: 00e3f404
// Size: 480 bytes
// Signature: undefined createVoiceGroup(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Soloud::createVoiceGroup() */

uint SoLoud::Soloud::createVoiceGroup(void)

{
  void **ppvVar1;
  uint uVar2;
  undefined8 *puVar3;
  long in_x0;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  ppvVar1 = (void **)(in_x0 + 0x214e0);
  lockAudioMutex();
  uVar2 = *(uint *)(in_x0 + 0x214e8);
  uVar11 = (ulong)uVar2;
  pvVar9 = *ppvVar1;
  if (uVar2 == 0) {
LAB_00e3f478:
    uVar12 = 8;
    *(undefined4 *)(in_x0 + 0x214e8) = 8;
    pvVar4 = operator_new__(0x40);
  }
  else {
    uVar10 = 0;
    do {
      if (*(long *)((long)pvVar9 + uVar10 * 8) == 0) {
        pvVar4 = operator_new__(0x40);
        *(void **)((long)pvVar9 + uVar10 * 8) = pvVar4;
        puVar5 = *(undefined8 **)((long)*ppvVar1 + uVar10 * 8);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0x10;
          unlockAudioMutex();
          return (uint)uVar10 | 0xfffff000;
        }
        goto LAB_00e3f590;
      }
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar10);
    if (uVar2 == 0) goto LAB_00e3f478;
    if (uVar2 == 0x1000) {
LAB_00e3f590:
      unlockAudioMutex();
      return 0;
    }
    uVar12 = uVar2 << 1;
    *(uint *)(in_x0 + 0x214e8) = uVar12;
    pvVar4 = operator_new__((ulong)uVar12 << 3);
  }
  if (uVar2 != 0) {
    if ((uVar2 < 4) ||
       ((pvVar4 < (void *)((long)pvVar9 + uVar11 * 8) &&
        (pvVar9 < (void *)((long)pvVar4 + uVar11 * 8))))) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar11 & 0xfffffffc;
      puVar5 = (undefined8 *)((long)pvVar9 + 0x10);
      puVar7 = (undefined8 *)((long)pvVar4 + 0x10);
      uVar8 = uVar10;
      do {
        puVar3 = puVar5 + -1;
        uVar13 = puVar5[-2];
        uVar15 = puVar5[1];
        uVar14 = *puVar5;
        puVar5 = puVar5 + 4;
        uVar8 = uVar8 - 4;
        puVar7[-1] = *puVar3;
        puVar7[-2] = uVar13;
        puVar7[1] = uVar15;
        *puVar7 = uVar14;
        puVar7 = puVar7 + 4;
      } while (uVar8 != 0);
      if (uVar10 == uVar11) goto LAB_00e3f4dc;
    }
    lVar6 = uVar11 - uVar10;
    puVar5 = (undefined8 *)((long)pvVar9 + uVar10 * 8);
    puVar7 = (undefined8 *)((long)pvVar4 + uVar10 * 8);
    do {
      lVar6 = lVar6 + -1;
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar6 != 0);
  }
LAB_00e3f4dc:
  if (uVar2 < uVar12) {
    memset((void *)((long)pvVar4 + uVar11 * 8),0,(ulong)(uVar12 + ~uVar2) * 8 + 8);
  }
  if (pvVar9 != (void *)0x0) {
    operator_delete__(pvVar9);
  }
  *ppvVar1 = pvVar4;
  puVar5 = (undefined8 *)operator_new__(0x44);
  *(undefined8 **)((long)pvVar4 + uVar11 * 8) = puVar5;
  *puVar5 = 0x10;
  unlockAudioMutex();
  return uVar2 | 0xfffff000;
}


