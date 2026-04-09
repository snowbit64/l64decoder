// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNetworkAvailability
// Entry Point: 00750348
// Size: 8 bytes
// Signature: undefined __thiscall setNetworkAvailability(EngineManager * this, NetworkAvailability * param_1)


/* EngineManager::setNetworkAvailability(NetworkAvailability*) */

void __thiscall
EngineManager::setNetworkAvailability(EngineManager *this,NetworkAvailability *param_1)

{
  *(NetworkAvailability **)(this + 0x2d8) = param_1;
  return;
}


