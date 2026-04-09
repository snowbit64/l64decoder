// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printState
// Entry Point: 008a2c98
// Size: 240 bytes
// Signature: undefined printState(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainDeformation::printState() */

int TerrainDeformation::printState(void)

{
  uint uVar1;
  int iVar2;
  long in_x0;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  
  uVar6 = *(uint *)(in_x0 + 0xfc);
  if (uVar6 != 0) {
    uVar5 = 0;
    do {
      uVar4 = *(uint *)(in_x0 + 0xf8);
      if (uVar4 != 0) {
        uVar7 = 1;
        while( true ) {
          uVar1 = uVar5;
          if (uVar6 <= uVar5) {
            uVar1 = uVar6 - 1;
          }
          uVar6 = 0;
          if (-1 < (int)uVar5) {
            uVar6 = uVar1;
          }
          puVar3 = (undefined4 *)
                   (*(long *)(in_x0 + 0x100) +
                   (ulong)((uVar7 - 1 & ((int)(uVar7 - 1) >> 0x1f ^ 0xffffffffU)) + uVar6 * uVar4) *
                   0x38);
          fVar8 = (float)NEON_fmadd(*puVar3,0x41200000,0x3f000000);
          uVar6 = 0x20;
          if (*(char *)(puVar3 + 4) != '\0') {
            uVar6 = 0x2a;
          }
          printf("%c%3d ",(ulong)uVar6,(int)fVar8);
          uVar4 = *(uint *)(in_x0 + 0xf8);
          if (uVar4 <= uVar7) break;
          uVar6 = *(uint *)(in_x0 + 0xfc);
          uVar7 = uVar7 + 1;
        }
      }
      putchar(10);
      uVar6 = *(uint *)(in_x0 + 0xfc);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  iVar2 = putchar(10);
  return iVar2;
}


