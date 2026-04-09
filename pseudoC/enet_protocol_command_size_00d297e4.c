// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enet_protocol_command_size
// Entry Point: 00d297e4
// Size: 20 bytes
// Signature: undefined enet_protocol_command_size(void)


undefined8 enet_protocol_command_size(ulong param_1)

{
  return *(undefined8 *)(&DAT_00546398 + (param_1 & 0xf) * 8);
}


