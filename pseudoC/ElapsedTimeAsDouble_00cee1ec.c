// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ElapsedTimeAsDouble
// Entry Point: 00cee1ec
// Size: 204 bytes
// Signature: undefined ElapsedTimeAsDouble(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::TimerBase::ElapsedTimeAsDouble() */

undefined  [16] CryptoPP::TimerBase::ElapsedTimeAsDouble(void)

{
  char cVar1;
  long *in_x0;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  undefined auVar6 [16];
  
  if (*(char *)((long)in_x0 + 0xc) != '\0') {
    return ZEXT816(0);
  }
  cVar1 = *(char *)((long)in_x0 + 0xd);
  uVar2 = (**(code **)*in_x0)();
  if (cVar1 != '\0') {
    uVar3 = in_x0[3];
    if ((ulong)in_x0[3] < uVar2) {
      in_x0[3] = uVar2;
      uVar3 = uVar2;
    }
    lVar4 = in_x0[2];
    dVar5 = (double)NEON_ucvtf(*(undefined8 *)(&DAT_005175e0 + (ulong)*(uint *)(in_x0 + 1) * 8));
    uVar2 = (**(code **)(*in_x0 + 8))();
    auVar6._8_8_ = 0;
    auVar6._0_8_ = ((double)(unkuint9)(uVar3 - lVar4) * dVar5) / (double)(unkuint9)uVar2;
    return auVar6;
  }
  in_x0[2] = uVar2;
  in_x0[3] = uVar2;
  *(undefined *)((long)in_x0 + 0xd) = 1;
  return ZEXT816(0);
}


