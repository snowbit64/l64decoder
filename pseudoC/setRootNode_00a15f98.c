// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRootNode
// Entry Point: 00a15f98
// Size: 20 bytes
// Signature: undefined __thiscall setRootNode(Renderer * this, TransformGroup * param_1)


/* Renderer::setRootNode(TransformGroup*) */

void __thiscall Renderer::setRootNode(Renderer *this,TransformGroup *param_1)

{
  *(TransformGroup **)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  CullingManager::setRootNode
            ((CullingManager *)CullingManager::s_cullingManagerInstance,(RawTransformGroup *)param_1
            );
  return;
}


