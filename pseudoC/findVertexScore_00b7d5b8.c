// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findVertexScore
// Entry Point: 00b7d5b8
// Size: 132 bytes
// Signature: undefined __cdecl findVertexScore(uint param_1, uint param_2)


/* GeometryUtil::findVertexScore(unsigned int, unsigned int) */

undefined  [16] GeometryUtil::findVertexScore(uint param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined auVar3 [16];
  
  if (param_2 != 0) {
    if (param_1 == 0xffffffff) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = 0.75;
      if (2 < param_1) {
        fVar1 = (float)NEON_fmadd((float)(ulong)(param_1 - 3),0xbc864b8a,0x3f800000);
        fVar1 = powf(fVar1,1.5);
      }
    }
    uVar4 = 0;
    uVar5 = 0;
    fVar2 = powf((float)(ulong)param_2,-0.5);
    auVar3._0_4_ = NEON_fmadd(fVar2,0x40000000,fVar1);
    auVar3._4_4_ = uVar4;
    auVar3._8_8_ = uVar5;
    return auVar3;
  }
  return ZEXT816(0xbf800000);
}


