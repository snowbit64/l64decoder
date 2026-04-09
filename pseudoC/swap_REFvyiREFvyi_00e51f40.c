// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: swap___REFvyiREFvyi
// Entry Point: 00e51f40
// Size: 152 bytes
// Signature: undefined swap___REFvyiREFvyi(void)


void swap___REFvyiREFvyi(undefined param_1 [16],undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar4 = param_3[1];
  uVar3 = *param_3;
  uVar5 = (uint)(param_1[0] & 1) + (uint)(param_1[4] & 2) +
          (uint)(param_1[8] & 4) + (uint)(param_1[12] & 8);
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if ((uVar5 & 1) != 0) {
    *(int *)param_2 = (int)uVar3;
  }
  if ((uVar5 >> 1 & 1) != 0) {
    *(int *)((long)param_2 + 4) = (int)((ulong)uVar3 >> 0x20);
  }
  if ((uVar5 >> 2 & 1) != 0) {
    *(int *)(param_2 + 1) = (int)uVar4;
  }
  if ((uVar5 >> 3 & 1) != 0) {
    *(int *)((long)param_2 + 0xc) = (int)((ulong)uVar4 >> 0x20);
  }
  if ((uVar5 & 1) != 0) {
    *(int *)param_3 = (int)uVar1;
  }
  if ((uVar5 >> 1 & 1) != 0) {
    *(int *)((long)param_3 + 4) = (int)((ulong)uVar1 >> 0x20);
  }
  if ((uVar5 >> 2 & 1) != 0) {
    *(int *)(param_3 + 1) = (int)uVar2;
  }
  if ((uVar5 >> 3 & 1) == 0) {
    return;
  }
  *(int *)((long)param_3 + 0xc) = (int)((ulong)uVar2 >> 0x20);
  return;
}


