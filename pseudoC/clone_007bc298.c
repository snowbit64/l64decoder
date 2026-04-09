// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 007bc298
// Size: 132 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DensityMapDesc::clone() const */

undefined8 * DensityMapDesc::clone(void)

{
  undefined4 uVar1;
  uint uVar2;
  long in_x0;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)operator_new(0x30);
  uVar4 = *(undefined8 *)(in_x0 + 8);
  puVar3[1] = uVar4;
  uVar1 = *(undefined4 *)(in_x0 + 0x10);
  *(undefined8 *)((long)puVar3 + 0x24) = 0;
  *(undefined8 *)((long)puVar3 + 0x1c) = 0;
  *(undefined4 *)(puVar3 + 2) = uVar1;
  *puVar3 = &PTR__ResourceDesc_00fdba40;
  *(undefined8 *)((long)puVar3 + 0x14) = 0;
  if ((int)uVar4 == 0) {
    uVar2 = *(int *)(in_x0 + 0x14) - 1;
    *(int *)(undefined8 *)((long)puVar3 + 0x14) = *(int *)(in_x0 + 0x14);
    if (uVar2 != 0) {
      memcpy(puVar3 + 3,(void *)(in_x0 + 0x18),(ulong)uVar2 << 2);
    }
  }
  return puVar3;
}


