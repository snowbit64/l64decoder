// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Process
// Entry Point: 00f8b620
// Size: 28 bytes
// Signature: undefined __thiscall Process(CollideSDF_RS * this, btDbvtNode * param_1)


/* btSoftColliders::CollideSDF_RS::Process(btDbvtNode const*) */

undefined8 __thiscall
btSoftColliders::CollideSDF_RS::Process(CollideSDF_RS *this,btDbvtNode *param_1)

{
  DoNode(this,*(Node **)(param_1 + 0x28));
  return 1;
}


