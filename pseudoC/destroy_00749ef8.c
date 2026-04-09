// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00749ef8
// Size: 4 bytes
// Signature: undefined __cdecl destroy(CompressedTransformationKeyFrame * param_1)


/* CompressedTransformationKeyFrame::destroy(CompressedTransformationKeyFrame*) */

void CompressedTransformationKeyFrame::destroy(CompressedTransformationKeyFrame *param_1)

{
  operator_delete(param_1);
  return;
}


