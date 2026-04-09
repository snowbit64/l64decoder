// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: soloud_opensles_deinit
// Entry Point: 00e39590
// Size: 56 bytes
// Signature: undefined __cdecl soloud_opensles_deinit(Soloud * param_1)


/* SoLoud::soloud_opensles_deinit(SoLoud::Soloud*) */

void SoLoud::soloud_opensles_deinit(Soloud *param_1)

{
  BackendData *this;
  
  this = *(BackendData **)param_1;
  if (this != (BackendData *)0x0) {
    BackendData::~BackendData(this);
    operator_delete(this);
  }
  *(undefined8 *)param_1 = 0;
  return;
}


