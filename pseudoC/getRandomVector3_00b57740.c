// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRandomVector3
// Entry Point: 00b57740
// Size: 280 bytes
// Signature: undefined __cdecl getRandomVector3(Vector3 * param_1)


/* MathUtil::getRandomVector3(Vector3&) */

void MathUtil::getRandomVector3(Vector3 *param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined4 uVar3;
  float __x;
  float fVar4;
  float local_28;
  float fStack_24;
  
  pbVar1 = (byte *)__emutls_get_address(&DAT_01045218);
  if ((*pbVar1 & 1) == 0) {
    __emutls_get_address(&DAT_010451f8);
    PCGRand::seedFromWatch();
    puVar2 = (undefined *)__emutls_get_address(&DAT_01045218);
    *puVar2 = 1;
  }
  __emutls_get_address(&DAT_010451f8);
  uVar3 = PCGRand::getRandomFloatExclusive();
  uVar3 = NEON_fmadd(uVar3,0x40000000,0xbf800000);
  fVar4 = (float)NEON_fmsub(uVar3,uVar3,0x3f800000);
  *(undefined4 *)(param_1 + 8) = uVar3;
  pbVar1 = (byte *)__emutls_get_address(&DAT_01045218);
  if ((*pbVar1 & 1) == 0) {
    __emutls_get_address(&DAT_010451f8);
    PCGRand::seedFromWatch();
    puVar2 = (undefined *)__emutls_get_address(&DAT_01045218);
    *puVar2 = 1;
  }
  __emutls_get_address(&DAT_010451f8);
  uVar3 = PCGRand::getRandomFloatExclusive();
  __x = (float)NEON_fmadd(uVar3,0x40c90fdb,0xc0490fdb);
  sincosf(__x,&fStack_24,&local_28);
  *(float *)param_1 = SQRT(fVar4) * local_28;
  *(float *)(param_1 + 4) = SQRT(fVar4) * fStack_24;
  return;
}


