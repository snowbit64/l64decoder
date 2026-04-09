// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onSettingsChanged
// Entry Point: 0075015c
// Size: 64 bytes
// Signature: undefined __thiscall onSettingsChanged(EngineManager * this, float param_1, float param_2)


/* EngineManager::onSettingsChanged(float, float) */

void __thiscall EngineManager::onSettingsChanged(EngineManager *this,float param_1,float param_2)

{
  HardwareScalability::onSettingsChanged();
  Renderer::onSettingsChanged(*(Renderer **)(this + 0xb8),param_1,param_2);
  return;
}


