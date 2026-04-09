// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Hc3Zip_MatchFinder_Skip
// Entry Point: 00d9e1d8
// Size: 212 bytes
// Signature: undefined Hc3Zip_MatchFinder_Skip(void)


void Hc3Zip_MatchFinder_Skip(byte **param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  long lVar7;
  
  do {
    if (*(uint *)((long)param_1 + 0x14) < 3) {
      iVar1 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
      *param_1 = *param_1 + 1;
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (iVar1 + 1 == *(int *)((long)param_1 + 0xc)) {
LAB_00d9e294:
        FUN_00d9dbd4(param_1);
      }
    }
    else {
      pbVar6 = *param_1;
      bVar4 = pbVar6[2];
      bVar5 = *pbVar6;
      bVar3 = pbVar6[1];
      *param_1 = pbVar6 + 1;
      lVar7 = (ulong)(ushort)(CONCAT11(bVar5,bVar4) ^
                             *(ushort *)((long)param_1 + (ulong)bVar3 * 4 + 0x8c)) * 4;
      pbVar6 = param_1[6];
      uVar2 = *(undefined4 *)(param_1[5] + lVar7);
      *(undefined4 *)(param_1[5] + lVar7) = *(undefined4 *)(param_1 + 1);
      *(undefined4 *)(pbVar6 + (ulong)*(uint *)(param_1 + 3) * 4) = uVar2;
      iVar1 = *(int *)(param_1 + 1);
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + 1;
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (iVar1 + 1 == *(int *)((long)param_1 + 0xc)) goto LAB_00d9e294;
    }
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return;
    }
  } while( true );
}


