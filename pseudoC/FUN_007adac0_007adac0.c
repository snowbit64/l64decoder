// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007adac0
// Entry Point: 007adac0
// Size: 60 bytes
// Signature: undefined FUN_007adac0(void)


void FUN_007adac0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = NoteNode::getText();
  *(undefined8 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 6;
  *(ushort *)(param_2 + 0x10c) = *(ushort *)(param_2 + 0x10c) & 0xfffe;
  return;
}


