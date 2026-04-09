// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: debugDrawLine
// Entry Point: 0098d3c4
// Size: 76 bytes
// Signature: undefined __thiscall debugDrawLine(PlayerCenteredCollisionHeightmap * this, Vector3 * param_1, Vector3 * param_2, Vector4 * param_3)


/* PlayerCenteredCollisionHeightmap::debugDrawLine(Vector3 const&, Vector3 const&, Vector4 const&)
    */

void __thiscall
PlayerCenteredCollisionHeightmap::debugDrawLine
          (PlayerCenteredCollisionHeightmap *this,Vector3 *param_1,Vector3 *param_2,Vector4 *param_3
          )

{
  DeferredDebugRenderer *this_00;
  
  EngineManager::getInstance();
  this_00 = (DeferredDebugRenderer *)Renderer::getDeferredDebugRenderer();
  DeferredDebugRenderer::addLine
            (this_00,(float *)param_1,(float *)param_3,(float *)param_2,(float *)param_3,0x400);
  return;
}


