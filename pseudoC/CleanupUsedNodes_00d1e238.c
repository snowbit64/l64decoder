// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CleanupUsedNodes
// Entry Point: 00d1e238
// Size: 168 bytes
// Signature: undefined CleanupUsedNodes(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::ByteQueue::CleanupUsedNodes() */

void CryptoPP::ByteQueue::CleanupUsedNodes(void)

{
  ulong uVar1;
  long in_x0;
  void *pvVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(in_x0 + 0x20);
  while ((puVar3 != (undefined8 *)0x0 && (puVar3 != *(undefined8 **)(in_x0 + 0x28)))) {
    if (puVar3[5] != puVar3[3]) goto LAB_00d1e2c4;
    pvVar2 = (void *)puVar3[4];
    *(undefined8 *)(in_x0 + 0x20) = *puVar3;
    uVar1 = puVar3[2];
    if ((ulong)puVar3[3] <= (ulong)puVar3[2]) {
      uVar1 = puVar3[3];
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined *)((long)pvVar2 + (uVar1 - 1)) = 0;
    }
                    /* try { // try from 00d1e2a4 to 00d1e2a7 has its CatchHandler @ 00d1e2e0 */
    UnalignedDeallocate(pvVar2);
    operator_delete(puVar3);
    puVar3 = *(undefined8 **)(in_x0 + 0x20);
  }
  if (puVar3 != (undefined8 *)0x0) {
LAB_00d1e2c4:
    if (puVar3[6] == puVar3[5]) {
      puVar3[5] = 0;
      puVar3[6] = 0;
    }
  }
  return;
}


