// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00ab8a74
// Size: 208 bytes
// Signature: undefined __thiscall operator()(BlendStateDescComparer * this, BlendStateDesc * param_1, BlendStateDesc * param_2)


/* ComparerUtil::BlendStateDescComparer::TEMPNAMEPLACEHOLDERVALUE(BlendStateDesc const&,
   BlendStateDesc const&) const */

bool __thiscall
ComparerUtil::BlendStateDescComparer::operator()
          (BlendStateDescComparer *this,BlendStateDesc *param_1,BlendStateDesc *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = 0x40;
  lVar6 = 0x20;
  while( true ) {
    iVar1 = *(int *)(param_1 + lVar6 + -0x20);
    iVar2 = *(int *)(param_2 + lVar6 + -0x20);
    bVar3 = SBORROW4(iVar1,iVar2);
    bVar4 = iVar1 - iVar2 < 0;
    if (iVar1 != iVar2) break;
    iVar1 = *(int *)(param_1 + lVar6 + -0x10);
    iVar2 = *(int *)(param_2 + lVar6 + -0x10);
    bVar3 = SBORROW4(iVar1,iVar2);
    bVar4 = iVar1 - iVar2 < 0;
    if (iVar1 != iVar2) break;
    iVar1 = *(int *)(param_1 + lVar6);
    iVar2 = *(int *)(param_2 + lVar6);
    bVar3 = SBORROW4(iVar1,iVar2);
    bVar4 = iVar1 - iVar2 < 0;
    if (iVar1 != iVar2) break;
    iVar1 = *(int *)(param_1 + lVar6 + 0x10);
    iVar2 = *(int *)(param_2 + lVar6 + 0x10);
    bVar3 = SBORROW4(iVar1,iVar2);
    bVar4 = iVar1 - iVar2 < 0;
    if (iVar1 != iVar2) break;
    bVar4 = (byte)param_2[lVar5] <= (byte)param_1[lVar5];
    if (param_1[lVar5] != param_2[lVar5]) {
LAB_00ab8b3c:
      return !bVar4;
    }
    bVar4 = (byte)param_2[lVar5 + 4] <= (byte)param_1[lVar5 + 4];
    if (((param_1[lVar5 + 4] != param_2[lVar5 + 4]) ||
        (bVar4 = (byte)param_2[lVar5 + 8] <= (byte)param_1[lVar5 + 8],
        param_1[lVar5 + 8] != param_2[lVar5 + 8])) ||
       (bVar4 = (byte)param_2[lVar5 + 0xc] <= (byte)param_1[lVar5 + 0xc],
       param_1[lVar5 + 0xc] != param_2[lVar5 + 0xc])) goto LAB_00ab8b3c;
    lVar5 = lVar5 + 1;
    lVar6 = lVar6 + 4;
    if (lVar5 == 0x44) {
      return false;
    }
  }
  return bVar4 != bVar3;
}


