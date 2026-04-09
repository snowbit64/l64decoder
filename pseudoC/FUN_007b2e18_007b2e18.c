// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b2e18
// Entry Point: 007b2e18
// Size: 232 bytes
// Signature: undefined FUN_007b2e18(void)


void FUN_007b2e18(uint param_1,float *param_2)

{
  uint *puVar1;
  float fVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  float fVar6;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  fVar2 = param_2[0x2c];
  puVar1 = (uint *)0x0;
  if ((long)DAT_01065bc8 - (long)DAT_01065bc0 != 0) {
    puVar1 = DAT_01065bc0;
  }
  fVar6 = (float)DensityMapHeightUpdater::addHeightAtWorldLine
                           (*param_2,param_2[4],param_2[8],param_2[0xc],param_2[0x10],param_2[0x14],
                            param_2[0x18],param_1,param_2[0x20],param_2[0x24],SUB41(param_2[0x1c],0)
                            ,(uint)*(byte *)(param_2 + 0x28),
                            (OcclusionArea *)
                            (ulong)(uint)((int)((ulong)((long)DAT_01065bc8 - (long)DAT_01065bc0) >>
                                               3) * -0x33333333),puVar1,true);
  puVar4 = DAT_01065bc8;
  puVar1 = DAT_01065bc0;
  param_2[0x40] = fVar6;
  param_2[0x42] = 5.605194e-45;
  param_2[0x44] = (float)((uint)fVar2 & ((int)fVar2 >> 0x1f ^ 0xffffffffU));
  param_2[0x46] = 1.401298e-45;
  if (puVar4 != puVar1) {
    DAT_01065bc8 = puVar1;
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


