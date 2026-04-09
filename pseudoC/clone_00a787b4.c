// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00a787b4
// Size: 128 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BitmapImage::clone() const */

void BitmapImage::clone(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  long in_x0;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *(undefined8 *)(in_x0 + 0xc);
  uVar6 = *(undefined8 *)(in_x0 + 4);
  uVar8 = *(undefined8 *)(in_x0 + 0x14);
  uVar1 = *(undefined4 *)(in_x0 + 0x38);
  uVar5 = *(undefined8 *)(in_x0 + 0x20);
  uVar9 = *(undefined8 *)(in_x0 + 0x30);
  uVar3 = *(undefined2 *)(in_x0 + 0x2c);
  uVar2 = *(undefined4 *)(in_x0 + 0x28);
  puVar4 = (undefined *)operator_new(0x40);
  *(undefined4 *)(puVar4 + 0x38) = uVar1;
  *(undefined8 *)(puVar4 + 0x14) = uVar8;
  *(undefined8 *)(puVar4 + 0x30) = uVar9;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined4 *)(puVar4 + 0x28) = uVar2;
  *(undefined2 *)(puVar4 + 0x2c) = uVar3;
  *puVar4 = 1;
  *(undefined8 *)(puVar4 + 0xc) = uVar7;
  *(undefined8 *)(puVar4 + 4) = uVar6;
  return;
}


