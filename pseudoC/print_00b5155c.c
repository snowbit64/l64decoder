// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: print
// Entry Point: 00b5155c
// Size: 224 bytes
// Signature: undefined __cdecl print(char * param_1)


/* ClippingMesh::print(char const*) const */

int ClippingMesh::print(char *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  
  iVar2 = printf("%s:\n");
  uVar3 = *(uint *)(param_1 + 0x18);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 8) + (ulong)(uint)((int)uVar4 << 1) * 4);
      uVar5 = (ulong)uVar1;
      if (uVar1 != 0) {
        lVar7 = *(long *)param_1;
        uVar3 = *(uint *)(*(long *)(param_1 + 8) + (ulong)((int)uVar4 << 1 | 1) * 4);
        printf("Poly #%u {\n",uVar4 & 0xffffffff);
        pfVar6 = (float *)(lVar7 + (ulong)uVar3 * 0x10 + 8);
        do {
          printf("    %f,%f,%f,%f\n",(double)pfVar6[-2],(double)pfVar6[-1],(double)*pfVar6,
                 (double)pfVar6[1]);
          uVar5 = uVar5 - 1;
          pfVar6 = pfVar6 + 4;
        } while (uVar5 != 0);
        iVar2 = puts("}");
        uVar3 = *(uint *)(param_1 + 0x18);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  return iVar2;
}


