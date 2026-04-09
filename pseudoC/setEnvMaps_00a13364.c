// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setEnvMaps
// Entry Point: 00a13364
// Size: 12 bytes
// Signature: undefined __thiscall setEnvMaps(Renderer * this, char * param_1, char * param_2, char * param_3, char * param_4, float param_5, float param_6, float param_7, float param_8, bool param_9, bool param_10)


/* Renderer::setEnvMaps(char const*, char const*, char const*, char const*, float, float, float,
   float, bool, bool) */

void __thiscall
Renderer::setEnvMaps
          (Renderer *this,char *param_1,char *param_2,char *param_3,char *param_4,float param_5,
          float param_6,float param_7,float param_8,bool param_9,bool param_10)

{
  IndirectLightRenderController::setEnvMaps
            ((IndirectLightRenderController *)(this + 0x1df8),param_1,param_2,param_3,param_4,
             param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}


