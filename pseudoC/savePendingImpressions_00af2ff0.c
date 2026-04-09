// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: savePendingImpressions
// Entry Point: 00af2ff0
// Size: 344 bytes
// Signature: undefined savePendingImpressions(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GiantsAdsProvider::savePendingImpressions() */

void GiantsAdsProvider::savePendingImpressions(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  GiantsAdsProvider *in_x0;
  undefined8 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint local_70 [4];
  void *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  Mutex::enterCriticalSection();
  lVar3 = *(long *)(in_x0 + 0x1a0);
  uVar13 = (*(long *)(in_x0 + 0x1a8) - lVar3 >> 3) * -0x3333333333333333;
  iVar10 = (int)uVar13;
  uVar4 = iVar10 * 0x24 + 0xc;
  puVar8 = (undefined8 *)operator_new__((ulong)uVar4);
  *puVar8 = 0x167616473;
  *(int *)(puVar8 + 1) = iVar10;
  if (iVar10 != 0) {
    uVar13 = uVar13 & 0xffffffff;
    puVar9 = (undefined4 *)(lVar3 + 0x14);
    uVar11 = 0xc;
    do {
      local_70[0] = puVar9[-5];
      iVar10 = (int)uVar11;
      uVar13 = uVar13 - 1;
      uVar1 = *puVar9;
      uVar2 = puVar9[1];
      uVar12 = *(undefined8 *)(puVar9 + 3);
      *(uint *)((long)puVar8 + (uVar11 & 0xffffffff)) = local_70[0];
      puVar7 = (undefined8 *)(puVar9 + -2);
      uVar14 = *(undefined8 *)(puVar9 + -4);
      puVar9 = puVar9 + 10;
      puVar5 = (undefined8 *)((long)puVar8 + (ulong)(iVar10 + 4));
      puVar5[1] = *puVar7;
      *puVar5 = uVar14;
      *(undefined4 *)((long)puVar8 + (ulong)(iVar10 + 0x14)) = uVar1;
      uVar11 = (ulong)(iVar10 + 0x1c) + 8;
      *(undefined4 *)((long)puVar8 + (ulong)(iVar10 + 0x18)) = uVar2;
      *(undefined8 *)((long)puVar8 + (ulong)(iVar10 + 0x1c)) = uVar12;
    } while (uVar13 != 0);
  }
  Mutex::leaveCriticalSection();
  FUN_006cadd8(local_70);
                    /* try { // try from 00af30ec to 00af30ff has its CatchHandler @ 00af3148 */
  writeEncryptedFile(in_x0,local_70,(uchar *)puVar8,uVar4);
  operator_delete__(puVar8);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


