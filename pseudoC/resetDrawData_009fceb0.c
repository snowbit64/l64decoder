// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetDrawData
// Entry Point: 009fceb0
// Size: 44 bytes
// Signature: undefined __thiscall resetDrawData(DeferredDebugRenderer * this, DrawData * param_1)


/* DeferredDebugRenderer::resetDrawData(DeferredDebugRenderer::DrawData&) */

void __thiscall DeferredDebugRenderer::resetDrawData(DeferredDebugRenderer *this,DrawData *param_1)

{
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
  return;
}


