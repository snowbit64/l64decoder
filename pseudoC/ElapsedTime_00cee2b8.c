// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ElapsedTime
// Entry Point: 00cee2b8
// Size: 212 bytes
// Signature: undefined ElapsedTime(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::TimerBase::ElapsedTime() */

long CryptoPP::TimerBase::ElapsedTime(void)

{
  char cVar1;
  long *in_x0;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  
  if (*(char *)((long)in_x0 + 0xc) != '\0') {
    return 0;
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
    return (long)(((double)(unkuint9)(uVar3 - lVar4) * dVar5) / (double)(unkuint9)uVar2);
  }
  in_x0[2] = uVar2;
  in_x0[3] = uVar2;
  *(undefined *)((long)in_x0 + 0xd) = 1;
  return 0;
}


