// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: testStep
// Entry Point: 00b5c97c
// Size: 248 bytes
// Signature: undefined testStep(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* PCGRand::testStep() */

int PCGRand::testStep(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  
  Watch::getCurrentTicks();
  printf("Step 0x%8.8X\n",0);
  uVar6 = 1;
  iVar2 = -0x80000000;
  uVar7 = 0x8f60c8c12a4d0000;
  lVar3 = Watch::getCurrentTicks();
  do {
    iVar2 = iVar2 + -1;
    uVar5 = (uint)(uVar7 >> 0x20);
    uVar1 = uVar5 >> 0xd ^ (uint)(uVar7 >> 0x1b);
    uVar5 = uVar5 >> 0x1b;
    uVar1 = (uVar1 >> uVar5 | uVar1 << 0x20 - uVar5) ^ (uint)uVar6;
    uVar6 = (ulong)uVar1;
    uVar7 = (CONCAT44(uVar1,uVar1) ^ 0x12345678deadbeef) * 0x5851f42d4c957f2d + 0xdead1337beef6800;
  } while (iVar2 != 0);
  lVar4 = Watch::getCurrentTicks();
  printf("Result %u\n",uVar6);
  dVar8 = (double)Watch::convertTicksToMs(lVar4 - lVar3);
  iVar2 = printf("RNG takes %lf ns per random\n",dVar8 * 1000000.0 * 4.656612873077393e-10);
  return iVar2;
}


