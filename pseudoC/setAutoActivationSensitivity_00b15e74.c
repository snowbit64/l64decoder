// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAutoActivationSensitivity
// Entry Point: 00b15e74
// Size: 80 bytes
// Signature: undefined __thiscall setAutoActivationSensitivity(VoiceChatManager * this, float param_1)


/* VoiceChatManager::setAutoActivationSensitivity(float) */

void __thiscall VoiceChatManager::setAutoActivationSensitivity(VoiceChatManager *this,float param_1)

{
  float fVar1;
  
  *(float *)(this + 0x24) = param_1;
  if (0.0 <= param_1) {
    fVar1 = powf(10.0,param_1 * -50.0 * 0.05);
    *(float *)(this + 0x28) = fVar1;
  }
  return;
}


