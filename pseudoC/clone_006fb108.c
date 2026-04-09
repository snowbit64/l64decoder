// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 006fb108
// Size: 76 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureDesc::clone() const */

void TextureDesc::clone(void)

{
  undefined4 uVar1;
  undefined2 uVar2;
  long in_x0;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x18);
  uVar1 = *(undefined4 *)(in_x0 + 0xc);
  uVar2 = *(undefined2 *)(in_x0 + 0x10);
  *(undefined *)(puVar3 + 1) = *(undefined *)(in_x0 + 8);
  *(undefined4 *)((long)puVar3 + 0xc) = uVar1;
  *puVar3 = &PTR__ResourceDesc_00fd99b0;
  *(undefined2 *)(puVar3 + 2) = uVar2;
  return;
}


