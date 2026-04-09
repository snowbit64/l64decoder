// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setEnvMaps
// Entry Point: 00a0c098
// Size: 28 bytes
// Signature: undefined __thiscall setEnvMaps(IndirectLightRenderController * this, char * param_1, char * param_2, char * param_3, char * param_4, float param_5, float param_6, float param_7, float param_8, bool param_9, bool param_10)


/* IndirectLightRenderController::setEnvMaps(char const*, char const*, char const*, char const*,
   float, float, float, float, bool, bool) */

void __thiscall
IndirectLightRenderController::setEnvMaps
          (IndirectLightRenderController *this,char *param_1,char *param_2,char *param_3,
          char *param_4,float param_5,float param_6,float param_7,float param_8,bool param_9,
          bool param_10)

{
  this[0xe] = (IndirectLightRenderController)param_10;
  if (*(EnvMapBlender **)(this + 0x198) != (EnvMapBlender *)0x0) {
    EnvMapBlender::setEnvMaps
              (*(EnvMapBlender **)(this + 0x198),param_1,param_2,param_3,param_4,param_5,param_6,
               param_7,param_8,param_9);
    return;
  }
  return;
}


