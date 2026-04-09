// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: detectGPUPerformanceClass
// Entry Point: 0075a02c
// Size: 172 bytes
// Signature: undefined __cdecl detectGPUPerformanceClass(char * param_1, bool * param_2, bool * param_3)


/* GPUPeformanceClassUtil::detectGPUPerformanceClass(char const*, bool&, bool&) */

undefined4
GPUPeformanceClassUtil::detectGPUPerformanceClass(char *param_1,bool *param_2,bool *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  undefined4 *puVar5;
  
  *param_3 = false;
  uVar2 = AndroidSysUtil::getIsLowPerformanceClassDevice();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
    puVar5 = &DAT_00fdaf88;
    do {
      lVar3 = StringUtil::stristr(param_1,*(char **)(puVar5 + -2));
      if (lVar3 != 0) {
        uVar1 = *puVar5;
        bVar4 = (bool)((byte)(0x3fe0467efb8078 >> (uVar2 & 0x3f)) & 1);
        goto LAB_0075a0c0;
      }
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 4;
    } while (uVar2 != 0x37);
    uVar1 = 1;
    *param_3 = true;
    *param_2 = false;
  }
  else {
    bVar4 = true;
    uVar1 = 0;
LAB_0075a0c0:
    *param_2 = bVar4;
  }
  return uVar1;
}


