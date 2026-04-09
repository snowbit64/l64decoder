// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e39a38
// Entry Point: 00e39a38
// Size: 212 bytes
// Signature: undefined FUN_00e39a38(void)


void FUN_00e39a38(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  code **ppcVar4;
  short *psVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  iVar2 = *(int *)(lVar6 + 0x80);
  while (iVar2 == 0) {
    SoLoud::Soloud::lockPauseMutex();
    lVar7 = *param_1;
    if (*(int *)(lVar7 + 0x78) == 0) {
      iVar2 = *(int *)(lVar7 + 0x7c);
      uVar1 = iVar2 + 2;
      uVar3 = *(undefined8 *)(lVar7 + 0x68 + (long)iVar2 * 8);
      if (-1 < iVar2 + 1) {
        uVar1 = iVar2 + 1;
      }
      iVar2 = (iVar2 + 1) - (uVar1 & 0xfffffffe);
      ppcVar4 = (code **)**(undefined8 **)(lVar7 + 0x58);
      psVar5 = *(short **)(lVar7 + 0x68 + (long)iVar2 * 8);
      *(int *)(lVar7 + 0x7c) = iVar2;
      (**ppcVar4)(*(undefined8 **)(lVar7 + 0x58),uVar3,
                  *(int *)(lVar7 + 0x60) * *(int *)(lVar7 + 100) * 2);
      *(int *)(lVar7 + 0x78) = *(int *)(lVar7 + 0x78) + 1;
      SoLoud::Soloud::mixSigned16((Soloud *)param_1,psVar5,*(uint *)(lVar7 + 0x60));
    }
    SoLoud::Soloud::unlockPauseMutex();
    SoLoud::Thread::sleep(1);
    iVar2 = *(int *)(lVar6 + 0x80);
  }
  *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
  return;
}


