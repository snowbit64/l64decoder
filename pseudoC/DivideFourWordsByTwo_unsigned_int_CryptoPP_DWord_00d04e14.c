// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DivideFourWordsByTwo<unsigned_int,CryptoPP::DWord>
// Entry Point: 00d04e14
// Size: 464 bytes
// Signature: DWord __cdecl DivideFourWordsByTwo<unsigned_int,CryptoPP::DWord>(uint * param_1, DWord.conflict * param_2, DWord.conflict * param_3, DWord.conflict * param_4)


/* CryptoPP::DWord CryptoPP::DivideFourWordsByTwo<unsigned int, CryptoPP::DWord>(unsigned int*,
   CryptoPP::DWord const&, CryptoPP::DWord const&, CryptoPP::DWord const&) */

DWord CryptoPP::DivideFourWordsByTwo<unsigned_int,CryptoPP::DWord>
                (uint *param_1,DWord_conflict *param_2,DWord_conflict *param_3,
                DWord_conflict *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (*(long *)param_4 == 0) {
    return *(DWord *)param_3;
  }
  uVar3 = *(uint *)param_2;
  *param_1 = uVar3;
  uVar4 = *(uint *)(param_2 + 4);
  param_1[1] = uVar4;
  uVar5 = *(uint *)param_3;
  param_1[2] = uVar5;
  uVar8 = *(uint *)(param_3 + 4);
  param_1[3] = uVar8;
  uVar1 = *(uint *)param_4;
  uVar2 = *(uint *)(param_4 + 4);
  uVar6 = uVar2 + 1;
  if (uVar6 < 2) {
    if (uVar6 != 0) {
      uVar11 = CONCAT44(uVar5,uVar4);
      uVar6 = uVar1;
      goto LAB_00d04e70;
    }
    uVar9 = (ulong)uVar8;
  }
  else {
    uVar11 = CONCAT44(uVar8,uVar5);
LAB_00d04e70:
    uVar9 = 0;
    if ((ulong)uVar6 != 0) {
      uVar9 = uVar11 / uVar6;
    }
  }
  uVar11 = (uVar9 & 0xffffffff) * (ulong)uVar1;
  uVar7 = (ulong)uVar4 - (uVar11 & 0xffffffff);
  uVar9 = (ulong)uVar5 -
          ((uVar9 & 0xffffffff) * (ulong)uVar2 + (uVar11 >> 0x20) +
          (ulong)(uint)-(int)(uVar7 >> 0x20));
  uVar8 = uVar8 + (int)(uVar9 >> 0x20);
  uVar11 = uVar9 & 0xffffffff;
  param_1[1] = (uint)uVar7;
  param_1[2] = (uint)uVar9;
  while( true ) {
    param_1[3] = uVar8;
    if (((uVar8 == 0) && (uVar6 = (uint)uVar11, uVar6 <= uVar2)) &&
       ((uVar6 != uVar2 || ((uint)uVar7 < uVar1)))) break;
    lVar10 = (uVar7 & 0xffffffff) - (ulong)uVar1;
    uVar7 = (ulong)((uint)uVar7 - uVar1);
    uVar11 = (uVar11 & 0xffffffff) - ((ulong)(uint)-(int)((ulong)lVar10 >> 0x20) + (ulong)uVar2);
    uVar8 = uVar8 + (int)(uVar11 >> 0x20);
    param_1[1] = (uint)lVar10;
    param_1[2] = (uint)uVar11;
  }
  uVar1 = *(uint *)param_4;
  uVar2 = *(uint *)(param_4 + 4);
  uVar8 = uVar2 + 1;
  if (uVar8 < 2) {
    if (uVar8 == 0) {
      uVar11 = uVar11 & 0xffffffff;
      goto LAB_00d04f50;
    }
    uVar9 = (ulong)uVar3 | uVar7 << 0x20;
    uVar8 = uVar1;
  }
  else {
    uVar9 = uVar7 & 0xffffffff | uVar11 << 0x20;
  }
  uVar11 = 0;
  if ((ulong)uVar8 != 0) {
    uVar11 = uVar9 / uVar8;
  }
LAB_00d04f50:
  uVar12 = (uVar11 & 0xffffffff) * (ulong)uVar1;
  uVar9 = (ulong)uVar3 - (uVar12 & 0xffffffff);
  uVar12 = (uVar7 & 0xffffffff) -
           ((uVar11 & 0xffffffff) * (ulong)uVar2 + (uVar12 >> 0x20) +
           (ulong)(uint)-(int)(uVar9 >> 0x20));
  uVar6 = uVar6 + (int)(uVar12 >> 0x20);
  uVar7 = uVar12 & 0xffffffff;
  *param_1 = (uint)uVar9;
  param_1[1] = (uint)uVar12;
  while( true ) {
    param_1[2] = uVar6;
    if (((uVar6 == 0) && ((uint)uVar7 <= uVar2)) &&
       (((uint)uVar7 != uVar2 || ((uint)uVar9 < uVar1)))) break;
    lVar10 = (uVar9 & 0xffffffff) - (ulong)uVar1;
    uVar11 = (ulong)((DWord)uVar11 + 1);
    uVar9 = (ulong)((uint)uVar9 - uVar1);
    uVar7 = (uVar7 & 0xffffffff) - ((ulong)(uint)-(int)((ulong)lVar10 >> 0x20) + (ulong)uVar2);
    uVar6 = uVar6 + (int)(uVar7 >> 0x20);
    *param_1 = (uint)lVar10;
    param_1[1] = (uint)uVar7;
  }
  return (DWord)uVar11;
}


