// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enumNodes
// Entry Point: 00f430f4
// Size: 92 bytes
// Signature: undefined __cdecl enumNodes(btDbvtNode * param_1, ICollide * param_2)


/* btDbvt::enumNodes(btDbvtNode const*, btDbvt::ICollide&) */

void btDbvt::enumNodes(btDbvtNode *param_1,ICollide *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)param_2 + 0x18);
  for (; (*pcVar1)(param_2,param_1), *(long *)(param_1 + 0x30) != 0;
      param_1 = *(btDbvtNode **)(param_1 + 0x30)) {
    enumNodes(*(btDbvtNode **)(param_1 + 0x28),param_2);
    pcVar1 = *(code **)(*(long *)param_2 + 0x18);
  }
  return;
}


