// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: formatTimeSec
// Entry Point: 00c69070
// Size: 164 bytes
// Signature: undefined __cdecl formatTimeSec(double param_1, char * param_2)


/* Watch::formatTimeSec(double, char*) */

void Watch::formatTimeSec(double param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  
  uVar3 = (uint)param_1;
  iVar1 = uVar3 / 0x3c + (uVar3 / 0xe10) * -0x3c;
  iVar2 = uVar3 / 0xe10 + (uVar3 / 0x15180) * -0x18;
  if (uVar3 >> 7 < 0x2a3) {
    dVar4 = (double)NEON_fmadd(param_1 - (double)(long)param_1,0x412e848000000000,0x3fe0000000000000
                              );
    FUN_00c69114(param_2,0xffffffffffffffff,"%2.2u:%2.2u:%2.2u.%6.6u",iVar2,iVar1,uVar3 % 0x3c,
                 (int)dVar4);
    return;
  }
  FUN_00c69114(param_2,0xffffffffffffffff,"%u days, %2.2u:%2.2u:%2.2u",(ulong)uVar3 / 0x15180,iVar2,
               iVar1,uVar3 % 0x3c);
  return;
}


