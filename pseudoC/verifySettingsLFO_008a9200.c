// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: verifySettingsLFO
// Entry Point: 008a9200
// Size: 40 bytes
// Signature: undefined __thiscall verifySettingsLFO(LoadSimulationRuntimeSettings * this, float param_1, float param_2)


/* LoadSimulationRuntimeSettings::verifySettingsLFO(float, float) const */

bool __thiscall
LoadSimulationRuntimeSettings::verifySettingsLFO
          (LoadSimulationRuntimeSettings *this,float param_1,float param_2)

{
  return (*(float *)(this + 0x3c) == 0.0 || *(float *)(this + 0x3c) <= param_2) &&
         0.0 <= *(float *)(this + 0x40);
}


