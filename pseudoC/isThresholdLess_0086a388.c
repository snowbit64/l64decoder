// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isThresholdLess
// Entry Point: 0086a388
// Size: 20 bytes
// Signature: undefined __cdecl isThresholdLess(Node * param_1, Node * param_2)


/* ConditionalAnimationBlending::Node::isThresholdLess(ConditionalAnimationBlending::Node const&,
   ConditionalAnimationBlending::Node const&) */

bool ConditionalAnimationBlending::Node::isThresholdLess(Node *param_1,Node *param_2)

{
  return *(float *)(param_1 + 0x2c) < *(float *)(param_2 + 0x2c);
}


