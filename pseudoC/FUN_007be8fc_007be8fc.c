// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007be8fc
// Entry Point: 007be8fc
// Size: 188 bytes
// Signature: undefined FUN_007be8fc(void)


void FUN_007be8fc(char **param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pcVar4 = *param_1;
  if ((((pcVar4 != (char *)0x0) && (pcVar5 = param_1[2], pcVar5 != (char *)0x0)) &&
      (pcVar6 = param_1[4], pcVar6 != (char *)0x0)) && (pcVar7 = param_1[6], pcVar7 != (char *)0x0))
  {
    bVar1 = *(bool *)(param_1 + 0x12);
    bVar2 = *(bool *)(param_1 + 0x10);
    fVar8 = *(float *)(param_1 + 0xe);
    fVar9 = *(float *)(param_1 + 0xc);
    fVar10 = *(float *)(param_1 + 10);
    fVar11 = *(float *)(param_1 + 8);
    lVar3 = EngineManager::getInstance();
    Renderer::setEnvMaps
              (*(Renderer **)(lVar3 + 0xb8),pcVar4,pcVar5,pcVar6,pcVar7,fVar11,fVar10,fVar9,fVar8,
               bVar2,bVar1);
    return;
  }
  return;
}


