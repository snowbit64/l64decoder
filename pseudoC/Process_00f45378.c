// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Process
// Entry Point: 00f45378
// Size: 84 bytes
// Signature: undefined __thiscall Process(btDbvtTreeCollider * this, btDbvtNode * param_1, btDbvtNode * param_2)


/* btDbvtTreeCollider::Process(btDbvtNode const*, btDbvtNode const*) */

undefined8 __thiscall
btDbvtTreeCollider::Process(btDbvtTreeCollider *this,btDbvtNode *param_1,btDbvtNode *param_2)

{
  if (param_1 != param_2) {
    (**(code **)(**(long **)(*(long *)(this + 8) + 0xe0) + 0x10))
              (*(long **)(*(long *)(this + 8) + 0xe0),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_2 + 0x28));
    *(int *)(*(long *)(this + 8) + 0xfc) = *(int *)(*(long *)(this + 8) + 0xfc) + 1;
  }
  return 1;
}


