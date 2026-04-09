// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Process
// Entry Point: 00f4e548
// Size: 36 bytes
// Signature: undefined __thiscall Process(btCompoundLeafCallback * this, btDbvtNode * param_1)


/* btCompoundLeafCallback::Process(btDbvtNode const*) */

void __thiscall btCompoundLeafCallback::Process(btCompoundLeafCallback *this,btDbvtNode *param_1)

{
  ProcessChildShape(this,*(btCollisionShape **)
                          (*(long *)(*(long *)(*(long *)(this + 8) + 8) + 0x30) +
                           (long)*(int *)(param_1 + 0x28) * 0x58 + 0x40),*(int *)(param_1 + 0x28));
  return;
}


